/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomizationConfig.h>
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

CustomizationConfig::CustomizationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomizationConfig& CustomizationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("distillationConfig"))
  {
    m_distillationConfig = jsonValue.GetObject("distillationConfig");
    m_distillationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomizationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_distillationConfigHasBeenSet)
  {
   payload.WithObject("distillationConfig", m_distillationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
