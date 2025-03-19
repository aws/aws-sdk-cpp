/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/DataSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

DataSet::DataSet(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSet& DataSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DataSetTypeMapper::GetDataSetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ccsid"))
  {
    m_ccsid = jsonValue.GetString("ccsid");
    m_ccsidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("length"))
  {
    m_length = jsonValue.GetInteger("length");
    m_lengthHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSet::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataSetTypeMapper::GetNameForDataSetType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ccsidHasBeenSet)
  {
   payload.WithString("ccsid", m_ccsid);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_lengthHasBeenSet)
  {
   payload.WithInteger("length", m_length);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
