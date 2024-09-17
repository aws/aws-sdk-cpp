/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContextualGroundingFilterConfig.h>
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

GuardrailContextualGroundingFilterConfig::GuardrailContextualGroundingFilterConfig() : 
    m_type(GuardrailContextualGroundingFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false)
{
}

GuardrailContextualGroundingFilterConfig::GuardrailContextualGroundingFilterConfig(JsonView jsonValue)
  : GuardrailContextualGroundingFilterConfig()
{
  *this = jsonValue;
}

GuardrailContextualGroundingFilterConfig& GuardrailContextualGroundingFilterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailContextualGroundingFilterTypeMapper::GetGuardrailContextualGroundingFilterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");

    m_thresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailContextualGroundingFilterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailContextualGroundingFilterTypeMapper::GetNameForGuardrailContextualGroundingFilterType(m_type));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
