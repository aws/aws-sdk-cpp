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
#include <aws/kms/model/GrantConstraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

GrantConstraints::GrantConstraints() : 
    m_encryptionContextSubsetHasBeenSet(false),
    m_encryptionContextEqualsHasBeenSet(false)
{
}

GrantConstraints::GrantConstraints(const JsonValue& jsonValue) : 
    m_encryptionContextSubsetHasBeenSet(false),
    m_encryptionContextEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

GrantConstraints& GrantConstraints::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EncryptionContextSubset"))
  {
    Aws::Map<Aws::String, JsonValue> encryptionContextSubsetJsonMap = jsonValue.GetObject("EncryptionContextSubset").GetAllObjects();
    for(auto& encryptionContextSubsetItem : encryptionContextSubsetJsonMap)
    {
      m_encryptionContextSubset[encryptionContextSubsetItem.first] = encryptionContextSubsetItem.second.AsString();
    }
    m_encryptionContextSubsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionContextEquals"))
  {
    Aws::Map<Aws::String, JsonValue> encryptionContextEqualsJsonMap = jsonValue.GetObject("EncryptionContextEquals").GetAllObjects();
    for(auto& encryptionContextEqualsItem : encryptionContextEqualsJsonMap)
    {
      m_encryptionContextEquals[encryptionContextEqualsItem.first] = encryptionContextEqualsItem.second.AsString();
    }
    m_encryptionContextEqualsHasBeenSet = true;
  }

  return *this;
}

JsonValue GrantConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionContextSubsetHasBeenSet)
  {
   JsonValue encryptionContextSubsetJsonMap;
   for(auto& encryptionContextSubsetItem : m_encryptionContextSubset)
   {
     encryptionContextSubsetJsonMap.WithString(encryptionContextSubsetItem.first, encryptionContextSubsetItem.second);
   }
   payload.WithObject("EncryptionContextSubset", std::move(encryptionContextSubsetJsonMap));

  }

  if(m_encryptionContextEqualsHasBeenSet)
  {
   JsonValue encryptionContextEqualsJsonMap;
   for(auto& encryptionContextEqualsItem : m_encryptionContextEquals)
   {
     encryptionContextEqualsJsonMap.WithString(encryptionContextEqualsItem.first, encryptionContextEqualsItem.second);
   }
   payload.WithObject("EncryptionContextEquals", std::move(encryptionContextEqualsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws