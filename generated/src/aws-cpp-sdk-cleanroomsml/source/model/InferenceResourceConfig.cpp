/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/InferenceResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

InferenceResourceConfig::InferenceResourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceResourceConfig& InferenceResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InferenceInstanceTypeMapper::GetInferenceInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("instanceCount");
    m_instanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InferenceInstanceTypeMapper::GetNameForInferenceInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("instanceCount", m_instanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
