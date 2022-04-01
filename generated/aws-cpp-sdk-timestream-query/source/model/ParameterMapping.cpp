/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ParameterMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ParameterMapping::ParameterMapping() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ParameterMapping::ParameterMapping(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterMapping& ParameterMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetObject("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterMapping::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithObject("Type", m_type.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
