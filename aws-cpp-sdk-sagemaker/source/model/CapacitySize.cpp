/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CapacitySize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CapacitySize::CapacitySize() : 
    m_type(CapacitySizeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

CapacitySize::CapacitySize(JsonView jsonValue) : 
    m_type(CapacitySizeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CapacitySize& CapacitySize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = CapacitySizeTypeMapper::GetCapacitySizeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacitySize::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CapacitySizeTypeMapper::GetNameForCapacitySizeType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
