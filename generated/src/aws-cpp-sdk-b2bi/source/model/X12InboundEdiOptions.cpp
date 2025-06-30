/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12InboundEdiOptions.h>
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

X12InboundEdiOptions::X12InboundEdiOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

X12InboundEdiOptions& X12InboundEdiOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acknowledgmentOptions"))
  {
    m_acknowledgmentOptions = jsonValue.GetObject("acknowledgmentOptions");
    m_acknowledgmentOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue X12InboundEdiOptions::Jsonize() const
{
  JsonValue payload;

  if(m_acknowledgmentOptionsHasBeenSet)
  {
   payload.WithObject("acknowledgmentOptions", m_acknowledgmentOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
