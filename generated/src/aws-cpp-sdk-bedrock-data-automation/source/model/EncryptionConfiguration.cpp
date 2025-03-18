/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/EncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

EncryptionConfiguration::EncryptionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsEncryptionContext"))
  {
    Aws::Map<Aws::String, JsonView> kmsEncryptionContextJsonMap = jsonValue.GetObject("kmsEncryptionContext").GetAllObjects();
    for(auto& kmsEncryptionContextItem : kmsEncryptionContextJsonMap)
    {
      m_kmsEncryptionContext[kmsEncryptionContextItem.first] = kmsEncryptionContextItem.second.AsString();
    }
    m_kmsEncryptionContextHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_kmsEncryptionContextHasBeenSet)
  {
   JsonValue kmsEncryptionContextJsonMap;
   for(auto& kmsEncryptionContextItem : m_kmsEncryptionContext)
   {
     kmsEncryptionContextJsonMap.WithString(kmsEncryptionContextItem.first, kmsEncryptionContextItem.second);
   }
   payload.WithObject("kmsEncryptionContext", std::move(kmsEncryptionContextJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
