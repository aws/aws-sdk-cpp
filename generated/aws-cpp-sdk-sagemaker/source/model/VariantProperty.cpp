/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/VariantProperty.h>
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

VariantProperty::VariantProperty() : 
    m_variantPropertyType(VariantPropertyType::NOT_SET),
    m_variantPropertyTypeHasBeenSet(false)
{
}

VariantProperty::VariantProperty(JsonView jsonValue) : 
    m_variantPropertyType(VariantPropertyType::NOT_SET),
    m_variantPropertyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

VariantProperty& VariantProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VariantPropertyType"))
  {
    m_variantPropertyType = VariantPropertyTypeMapper::GetVariantPropertyTypeForName(jsonValue.GetString("VariantPropertyType"));

    m_variantPropertyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue VariantProperty::Jsonize() const
{
  JsonValue payload;

  if(m_variantPropertyTypeHasBeenSet)
  {
   payload.WithString("VariantPropertyType", VariantPropertyTypeMapper::GetNameForVariantPropertyType(m_variantPropertyType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
