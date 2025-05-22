/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IntegrationPartition.h>
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

IntegrationPartition::IntegrationPartition(JsonView jsonValue)
{
  *this = jsonValue;
}

IntegrationPartition& IntegrationPartition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FunctionSpec"))
  {
    m_functionSpec = jsonValue.GetString("FunctionSpec");
    m_functionSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConversionSpec"))
  {
    m_conversionSpec = jsonValue.GetString("ConversionSpec");
    m_conversionSpecHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationPartition::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  if(m_functionSpecHasBeenSet)
  {
   payload.WithString("FunctionSpec", m_functionSpec);

  }

  if(m_conversionSpecHasBeenSet)
  {
   payload.WithString("ConversionSpec", m_conversionSpec);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
