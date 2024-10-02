/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/OutputConversion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

OutputConversion::OutputConversion() : 
    m_toFormat(ToFormat::NOT_SET),
    m_toFormatHasBeenSet(false),
    m_formatOptionsHasBeenSet(false)
{
}

OutputConversion::OutputConversion(JsonView jsonValue)
  : OutputConversion()
{
  *this = jsonValue;
}

OutputConversion& OutputConversion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("toFormat"))
  {
    m_toFormat = ToFormatMapper::GetToFormatForName(jsonValue.GetString("toFormat"));

    m_toFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formatOptions"))
  {
    m_formatOptions = jsonValue.GetObject("formatOptions");

    m_formatOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputConversion::Jsonize() const
{
  JsonValue payload;

  if(m_toFormatHasBeenSet)
  {
   payload.WithString("toFormat", ToFormatMapper::GetNameForToFormat(m_toFormat));
  }

  if(m_formatOptionsHasBeenSet)
  {
   payload.WithObject("formatOptions", m_formatOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
