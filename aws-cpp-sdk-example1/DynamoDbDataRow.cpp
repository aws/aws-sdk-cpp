/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <DynamoDbDataRow.h>

#include <AttributeBinding.h>

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/DeleteItemRequest.h>
#include <aws/dynamodb/model/DeleteItemResult.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/GetItemResult.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/PutItemResult.h>

#include <iostream>
#include <sstream>

using namespace Aws::Utils;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;
using namespace Aws::Http;

namespace Aws
{
namespace Example1
{

static const char* DynamoDbDataRowTag = "DynamoDbDataRow";

DynamoDBDataRowBase::DynamoDBDataRowBase(const Aws::String& tableName, const Aws::String& keyAttributeName, const Aws::String& keyValue) :
    m_tableName(tableName),
    m_keyAttributeName(keyAttributeName),
    m_keyValue(keyValue)
{
}

AttributeBindingInterface* DynamoDBDataRowBase::GetBindingForAttribute(const Aws::String& attributeName)
{
    const BindingMapType& bindings = GetBindings();
    const auto& iter = bindings.find(StringUtils::ToLower(attributeName.c_str()));
    if(iter == bindings.cend())
    {
        return nullptr;
    } 

    return iter->second;
}

bool DynamoDBDataRowBase::SetAttributeValue(const Aws::String& attributeName, const Aws::String& value)
{
    AttributeBindingInterface* binding = GetBindingForAttribute(attributeName);
    if(binding == nullptr)
    {
        return false;
    }

    return binding->SetValueByString(this, value);
}

bool DynamoDBDataRowBase::SetAttributeValue(const Aws::String& key, const Aws::DynamoDB::Model::AttributeValue& attributeValue)
{
    AttributeBindingInterface* binding = GetBindingForAttribute(key);
    if(binding == nullptr)
    {
        return false;
    }

    return binding->SetValueByAttribute(this, attributeValue);
}

bool DynamoDBDataRowBase::WriteToDb(const std::unique_ptr<Aws::DynamoDB::DynamoDBClient>& dynamoClient)
{
    std::stringstream attributeStringValue;

    PutItemRequest putItemRequest;
    putItemRequest.SetTableName(m_tableName);

    AttributeValue keyAttribute;
    keyAttribute.SetS(m_keyValue);
    putItemRequest.AddItem(m_keyAttributeName, keyAttribute);

    auto bindings = GetBindings();
    for(const auto& iter : bindings)
    {
        AttributeBindingInterface* binding = iter.second;
        if(binding->IsValidData(this))
        {
            AttributeValue attribute;
            binding->SetAttribute(this, attribute);
            putItemRequest.AddItem(binding->GetName(), attribute);
        }
    }

    PutItemOutcome outcome = dynamoClient->PutItem(putItemRequest);
    if (!outcome.IsSuccess())
    {
        const AWSError<DynamoDBErrors> error = outcome.GetError();
        AWS_LOGSTREAM_INFO(DynamoDbDataRowTag, "Table " << m_tableName << ", PutItem error for key " << m_keyValue << ": " << error.GetMessage().c_str() << "(" << error.GetExceptionName() << ")");
        return false;
    }

    return true;
}

void DynamoDBDataRowBase::InvalidateOptionalData()
{
    auto bindings = GetBindings();
    for(const auto& iter : bindings)
    {
        iter.second->InvalidateData(this);
    }
}

bool DynamoDBDataRowBase::ReadFromDb(const std::unique_ptr<Aws::DynamoDB::DynamoDBClient>& dynamoClient)
{
    GetItemRequest getItemRequest;
    getItemRequest.SetTableName(m_tableName);

    AttributeValue keyAttribute;
    keyAttribute.SetS(m_keyValue);

    getItemRequest.AddKey(m_keyAttributeName, keyAttribute);

    GetItemOutcome outcome = dynamoClient->GetItem(getItemRequest);
    if (!outcome.IsSuccess())
    {
        AWSError<DynamoDBErrors> error = outcome.GetError();
        AWS_LOGSTREAM_INFO(DynamoDbDataRowTag, "Table " << m_tableName << ", GetItem error for key " << m_keyValue << ": " << error.GetMessage().c_str() << "(" << error.GetExceptionName() << ")");
        return false;
    }

    InvalidateOptionalData();

    auto attributeMap = outcome.GetResult().GetItem();
    for(const auto& iter : attributeMap)
    {
        SetAttributeValue(iter.first, iter.second);
    }

    return true;
}

std::ostream& operator<<(std::ostream& os, const Aws::Example1::DynamoDBDataRowBase& dataRow)
{
    os << "Key: " << dataRow.m_keyValue << std::endl;

    auto bindings = dataRow.GetBindings();
    for(const auto& iter : bindings)
    {
        AttributeBindingInterface* binding = iter.second;
        os << "  " << binding->GetName() << ": " << binding->GetValueAsString(&dataRow) << std::endl;
    }

    return os;
}


} // namespace Example1
} // namespace Aws
