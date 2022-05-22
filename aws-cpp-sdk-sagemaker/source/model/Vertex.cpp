/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Vertex.h>
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

Vertex::Vertex() : 
    m_arnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lineageType(LineageType::NOT_SET),
    m_lineageTypeHasBeenSet(false)
{
}

Vertex::Vertex(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lineageType(LineageType::NOT_SET),
    m_lineageTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Vertex& Vertex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineageType"))
  {
    m_lineageType = LineageTypeMapper::GetLineageTypeForName(jsonValue.GetString("LineageType"));

    m_lineageTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Vertex::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_lineageTypeHasBeenSet)
  {
   payload.WithString("LineageType", LineageTypeMapper::GetNameForLineageType(m_lineageType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
