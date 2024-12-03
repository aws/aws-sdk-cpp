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

IntegrationPartition::IntegrationPartition() : 
    m_fieldNameHasBeenSet(false),
    m_functionSpecHasBeenSet(false)
{
}

IntegrationPartition::IntegrationPartition(JsonView jsonValue)
  : IntegrationPartition()
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
