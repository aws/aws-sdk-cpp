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

X12OutboundEdiHeaders::X12OutboundEdiHeaders() : 
    m_interchangeControlHeadersHasBeenSet(false),
    m_functionalGroupHeadersHasBeenSet(false),
    m_delimitersHasBeenSet(false),
    m_validateEdi(false),
    m_validateEdiHasBeenSet(false)
{
}

X12OutboundEdiHeaders::X12OutboundEdiHeaders(JsonView jsonValue)
  : X12OutboundEdiHeaders()
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

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
