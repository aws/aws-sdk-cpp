/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TransformParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TransformParameters::TransformParameters() : 
    m_transformType(TransformType::NOT_SET),
    m_transformTypeHasBeenSet(false),
    m_findMatchesParametersHasBeenSet(false)
{
}

TransformParameters::TransformParameters(JsonView jsonValue) : 
    m_transformType(TransformType::NOT_SET),
    m_transformTypeHasBeenSet(false),
    m_findMatchesParametersHasBeenSet(false)
{
  *this = jsonValue;
}

TransformParameters& TransformParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransformType"))
  {
    m_transformType = TransformTypeMapper::GetTransformTypeForName(jsonValue.GetString("TransformType"));

    m_transformTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindMatchesParameters"))
  {
    m_findMatchesParameters = jsonValue.GetObject("FindMatchesParameters");

    m_findMatchesParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformParameters::Jsonize() const
{
  JsonValue payload;

  if(m_transformTypeHasBeenSet)
  {
   payload.WithString("TransformType", TransformTypeMapper::GetNameForTransformType(m_transformType));
  }

  if(m_findMatchesParametersHasBeenSet)
  {
   payload.WithObject("FindMatchesParameters", m_findMatchesParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
