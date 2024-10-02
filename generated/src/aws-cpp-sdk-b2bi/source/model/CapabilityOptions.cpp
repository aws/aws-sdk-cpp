/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CapabilityOptions.h>
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

CapabilityOptions::CapabilityOptions() : 
    m_outboundEdiHasBeenSet(false)
{
}

CapabilityOptions::CapabilityOptions(JsonView jsonValue)
  : CapabilityOptions()
{
  *this = jsonValue;
}

CapabilityOptions& CapabilityOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outboundEdi"))
  {
    m_outboundEdi = jsonValue.GetObject("outboundEdi");

    m_outboundEdiHasBeenSet = true;
  }

  return *this;
}

JsonValue CapabilityOptions::Jsonize() const
{
  JsonValue payload;

  if(m_outboundEdiHasBeenSet)
  {
   payload.WithObject("outboundEdi", m_outboundEdi.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
