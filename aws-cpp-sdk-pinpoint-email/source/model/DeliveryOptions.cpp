/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/DeliveryOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

DeliveryOptions::DeliveryOptions() : 
    m_tlsPolicy(TlsPolicy::NOT_SET),
    m_tlsPolicyHasBeenSet(false),
    m_sendingPoolNameHasBeenSet(false)
{
}

DeliveryOptions::DeliveryOptions(JsonView jsonValue) : 
    m_tlsPolicy(TlsPolicy::NOT_SET),
    m_tlsPolicyHasBeenSet(false),
    m_sendingPoolNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeliveryOptions& DeliveryOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TlsPolicy"))
  {
    m_tlsPolicy = TlsPolicyMapper::GetTlsPolicyForName(jsonValue.GetString("TlsPolicy"));

    m_tlsPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SendingPoolName"))
  {
    m_sendingPoolName = jsonValue.GetString("SendingPoolName");

    m_sendingPoolNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliveryOptions::Jsonize() const
{
  JsonValue payload;

  if(m_tlsPolicyHasBeenSet)
  {
   payload.WithString("TlsPolicy", TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy));
  }

  if(m_sendingPoolNameHasBeenSet)
  {
   payload.WithString("SendingPoolName", m_sendingPoolName);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
