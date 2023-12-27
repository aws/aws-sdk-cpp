/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ValidationDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ValidationDataConfig::ValidationDataConfig() : 
    m_validatorsHasBeenSet(false)
{
}

ValidationDataConfig::ValidationDataConfig(JsonView jsonValue) : 
    m_validatorsHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationDataConfig& ValidationDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("validators"))
  {
    Aws::Utils::Array<JsonView> validatorsJsonList = jsonValue.GetArray("validators");
    for(unsigned validatorsIndex = 0; validatorsIndex < validatorsJsonList.GetLength(); ++validatorsIndex)
    {
      m_validators.push_back(validatorsJsonList[validatorsIndex].AsObject());
    }
    m_validatorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_validatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validatorsJsonList(m_validators.size());
   for(unsigned validatorsIndex = 0; validatorsIndex < validatorsJsonList.GetLength(); ++validatorsIndex)
   {
     validatorsJsonList[validatorsIndex].AsObject(m_validators[validatorsIndex].Jsonize());
   }
   payload.WithArray("validators", std::move(validatorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
