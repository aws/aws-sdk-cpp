/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceIntrospectionModelField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

DataSourceIntrospectionModelField::DataSourceIntrospectionModelField() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_length(0),
    m_lengthHasBeenSet(false)
{
}

DataSourceIntrospectionModelField::DataSourceIntrospectionModelField(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_length(0),
    m_lengthHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceIntrospectionModelField& DataSourceIntrospectionModelField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetObject("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("length"))
  {
    m_length = jsonValue.GetInt64("length");

    m_lengthHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceIntrospectionModelField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithObject("type", m_type.Jsonize());

  }

  if(m_lengthHasBeenSet)
  {
   payload.WithInt64("length", m_length);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
