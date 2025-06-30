/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12OutboundEdiHeaders.h>
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

X12OutboundEdiHeaders::X12OutboundEdiHeaders(JsonView jsonValue)
{
  *this = jsonValue;
}

X12OutboundEdiHeaders& X12OutboundEdiHeaders::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("interchangeControlHeaders"))
  {
    m_interchangeControlHeaders = jsonValue.GetObject("interchangeControlHeaders");
    m_interchangeControlHeadersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("functionalGroupHeaders"))
  {
    m_functionalGroupHeaders = jsonValue.GetObject("functionalGroupHeaders");
    m_functionalGroupHeadersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("delimiters"))
  {
    m_delimiters = jsonValue.GetObject("delimiters");
    m_delimitersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validateEdi"))
  {
    m_validateEdi = jsonValue.GetBool("validateEdi");
    m_validateEdiHasBeenSet = true;
  }
  if(jsonValue.ValueExists("controlNumbers"))
  {
    m_controlNumbers = jsonValue.GetObject("controlNumbers");
    m_controlNumbersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gs05TimeFormat"))
  {
    m_gs05TimeFormat = X12GS05TimeFormatMapper::GetX12GS05TimeFormatForName(jsonValue.GetString("gs05TimeFormat"));
    m_gs05TimeFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue X12OutboundEdiHeaders::Jsonize() const
{
  JsonValue payload;

  if(m_interchangeControlHeadersHasBeenSet)
  {
   payload.WithObject("interchangeControlHeaders", m_interchangeControlHeaders.Jsonize());

  }

  if(m_functionalGroupHeadersHasBeenSet)
  {
   payload.WithObject("functionalGroupHeaders", m_functionalGroupHeaders.Jsonize());

  }

  if(m_delimitersHasBeenSet)
  {
   payload.WithObject("delimiters", m_delimiters.Jsonize());

  }

  if(m_validateEdiHasBeenSet)
  {
   payload.WithBool("validateEdi", m_validateEdi);

  }

  if(m_controlNumbersHasBeenSet)
  {
   payload.WithObject("controlNumbers", m_controlNumbers.Jsonize());

  }

  if(m_gs05TimeFormatHasBeenSet)
  {
   payload.WithString("gs05TimeFormat", X12GS05TimeFormatMapper::GetNameForX12GS05TimeFormat(m_gs05TimeFormat));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
