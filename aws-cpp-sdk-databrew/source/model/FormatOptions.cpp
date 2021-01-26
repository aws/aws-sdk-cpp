/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/FormatOptions.h>
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

FormatOptions::FormatOptions() : 
    m_jsonHasBeenSet(false),
    m_excelHasBeenSet(false)
{
}

FormatOptions::FormatOptions(JsonView jsonValue) : 
    m_jsonHasBeenSet(false),
    m_excelHasBeenSet(false)
{
  *this = jsonValue;
}

FormatOptions& FormatOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Json"))
  {
    m_json = jsonValue.GetObject("Json");

    m_jsonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Excel"))
  {
    m_excel = jsonValue.GetObject("Excel");

    m_excelHasBeenSet = true;
  }

  return *this;
}

JsonValue FormatOptions::Jsonize() const
{
  JsonValue payload;

  if(m_jsonHasBeenSet)
  {
   payload.WithObject("Json", m_json.Jsonize());

  }

  if(m_excelHasBeenSet)
  {
   payload.WithObject("Excel", m_excel.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
