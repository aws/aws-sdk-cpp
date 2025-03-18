/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DistillationConfig.h>
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

DistillationConfig::DistillationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DistillationConfig& DistillationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("teacherModelConfig"))
  {
    m_teacherModelConfig = jsonValue.GetObject("teacherModelConfig");
    m_teacherModelConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue DistillationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_teacherModelConfigHasBeenSet)
  {
   payload.WithObject("teacherModelConfig", m_teacherModelConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
