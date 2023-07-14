/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/DatasetParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

DatasetParameter::DatasetParameter() : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_datetimeOptionsHasBeenSet(false),
    m_createColumn(false),
    m_createColumnHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

DatasetParameter::DatasetParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_datetimeOptionsHasBeenSet(false),
    m_createColumn(false),
    m_createColumnHasBeenSet(false),
    m_filterHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetParameter& DatasetParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatetimeOptions"))
  {
    m_datetimeOptions = jsonValue.GetObject("DatetimeOptions");

    m_datetimeOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateColumn"))
  {
    m_createColumn = jsonValue.GetBool("CreateColumn");

    m_createColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetObject("Filter");

    m_filterHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_datetimeOptionsHasBeenSet)
  {
   payload.WithObject("DatetimeOptions", m_datetimeOptions.Jsonize());

  }

  if(m_createColumnHasBeenSet)
  {
   payload.WithBool("CreateColumn", m_createColumn);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
