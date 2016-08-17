/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/Scope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

Scope::Scope() : 
    m_complianceResourceTypesHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_complianceResourceIdHasBeenSet(false)
{
}

Scope::Scope(const JsonValue& jsonValue) : 
    m_complianceResourceTypesHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_complianceResourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

Scope& Scope::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ComplianceResourceTypes"))
  {
    Array<JsonValue> complianceResourceTypesJsonList = jsonValue.GetArray("ComplianceResourceTypes");
    for(unsigned complianceResourceTypesIndex = 0; complianceResourceTypesIndex < complianceResourceTypesJsonList.GetLength(); ++complianceResourceTypesIndex)
    {
      m_complianceResourceTypes.push_back(complianceResourceTypesJsonList[complianceResourceTypesIndex].AsString());
    }
    m_complianceResourceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagKey"))
  {
    m_tagKey = jsonValue.GetString("TagKey");

    m_tagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagValue"))
  {
    m_tagValue = jsonValue.GetString("TagValue");

    m_tagValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceResourceId"))
  {
    m_complianceResourceId = jsonValue.GetString("ComplianceResourceId");

    m_complianceResourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Scope::Jsonize() const
{
  JsonValue payload;

  if(m_complianceResourceTypesHasBeenSet)
  {
   Array<JsonValue> complianceResourceTypesJsonList(m_complianceResourceTypes.size());
   for(unsigned complianceResourceTypesIndex = 0; complianceResourceTypesIndex < complianceResourceTypesJsonList.GetLength(); ++complianceResourceTypesIndex)
   {
     complianceResourceTypesJsonList[complianceResourceTypesIndex].AsString(m_complianceResourceTypes[complianceResourceTypesIndex]);
   }
   payload.WithArray("ComplianceResourceTypes", std::move(complianceResourceTypesJsonList));

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("TagValue", m_tagValue);

  }

  if(m_complianceResourceIdHasBeenSet)
  {
   payload.WithString("ComplianceResourceId", m_complianceResourceId);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws