/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/InputConversion.h>
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

InputConversion::InputConversion() : 
    m_fromFormat(FromFormat::NOT_SET),
    m_fromFormatHasBeenSet(false),
    m_formatOptionsHasBeenSet(false)
{
}

InputConversion::InputConversion(JsonView jsonValue)
  : InputConversion()
{
  *this = jsonValue;
}

InputConversion& InputConversion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fromFormat"))
  {
    m_fromFormat = FromFormatMapper::GetFromFormatForName(jsonValue.GetString("fromFormat"));

    m_fromFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formatOptions"))
  {
    m_formatOptions = jsonValue.GetObject("formatOptions");

    m_formatOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue InputConversion::Jsonize() const
{
  JsonValue payload;

  if(m_fromFormatHasBeenSet)
  {
   payload.WithString("fromFormat", FromFormatMapper::GetNameForFromFormat(m_fromFormat));
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
