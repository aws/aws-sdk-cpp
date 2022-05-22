/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/KmsGrantConstraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

KmsGrantConstraints::KmsGrantConstraints() : 
    m_encryptionContextEqualsHasBeenSet(false),
    m_encryptionContextSubsetHasBeenSet(false)
{
}

KmsGrantConstraints::KmsGrantConstraints(JsonView jsonValue) : 
    m_encryptionContextEqualsHasBeenSet(false),
    m_encryptionContextSubsetHasBeenSet(false)
{
  *this = jsonValue;
}

KmsGrantConstraints& KmsGrantConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionContextEquals"))
  {
    Aws::Map<Aws::String, JsonView> encryptionContextEqualsJsonMap = jsonValue.GetObject("encryptionContextEquals").GetAllObjects();
    for(auto& encryptionContextEqualsItem : encryptionContextEqualsJsonMap)
    {
      m_encryptionContextEquals[encryptionContextEqualsItem.first] = encryptionContextEqualsItem.second.AsString();
    }
    m_encryptionContextEqualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionContextSubset"))
  {
    Aws::Map<Aws::String, JsonView> encryptionContextSubsetJsonMap = jsonValue.GetObject("encryptionContextSubset").GetAllObjects();
    for(auto& encryptionContextSubsetItem : encryptionContextSubsetJsonMap)
    {
      m_encryptionContextSubset[encryptionContextSubsetItem.first] = encryptionContextSubsetItem.second.AsString();
    }
    m_encryptionContextSubsetHasBeenSet = true;
  }

  return *this;
}

JsonValue KmsGrantConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionContextEqualsHasBeenSet)
  {
   JsonValue encryptionContextEqualsJsonMap;
   for(auto& encryptionContextEqualsItem : m_encryptionContextEquals)
   {
     encryptionContextEqualsJsonMap.WithString(encryptionContextEqualsItem.first, encryptionContextEqualsItem.second);
   }
   payload.WithObject("encryptionContextEquals", std::move(encryptionContextEqualsJsonMap));

  }

  if(m_encryptionContextSubsetHasBeenSet)
  {
   JsonValue encryptionContextSubsetJsonMap;
   for(auto& encryptionContextSubsetItem : m_encryptionContextSubset)
   {
     encryptionContextSubsetJsonMap.WithString(encryptionContextSubsetItem.first, encryptionContextSubsetItem.second);
   }
   payload.WithObject("encryptionContextSubset", std::move(encryptionContextSubsetJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
