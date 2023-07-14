/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

GrantConstraints::GrantConstraints(JsonView jsonValue) : 
    m_encryptionContextSubsetHasBeenSet(false),
    m_encryptionContextEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

GrantConstraints& GrantConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionContextSubset"))
  {
    Aws::Map<Aws::String, JsonView> encryptionContextSubsetJsonMap = jsonValue.GetObject("EncryptionContextSubset").GetAllObjects();
    for(auto& encryptionContextSubsetItem : encryptionContextSubsetJsonMap)
    {
      m_encryptionContextSubset[encryptionContextSubsetItem.first] = encryptionContextSubsetItem.second.AsString();
    }
    m_encryptionContextSubsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionContextEquals"))
  {
    Aws::Map<Aws::String, JsonView> encryptionContextEqualsJsonMap = jsonValue.GetObject("EncryptionContextEquals").GetAllObjects();
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
