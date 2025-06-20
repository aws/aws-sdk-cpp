/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailTopicsTierConfig.h>
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

GuardrailTopicsTierConfig::GuardrailTopicsTierConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTopicsTierConfig& GuardrailTopicsTierConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tierName"))
  {
    m_tierName = GuardrailTopicsTierNameMapper::GetGuardrailTopicsTierNameForName(jsonValue.GetString("tierName"));
    m_tierNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTopicsTierConfig::Jsonize() const
{
  JsonValue payload;

  if(m_tierNameHasBeenSet)
  {
   payload.WithString("tierName", GuardrailTopicsTierNameMapper::GetNameForGuardrailTopicsTierName(m_tierName));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
