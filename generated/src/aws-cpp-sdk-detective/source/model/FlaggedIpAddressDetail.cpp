/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/FlaggedIpAddressDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

FlaggedIpAddressDetail::FlaggedIpAddressDetail() : 
    m_ipAddressHasBeenSet(false),
    m_reason(Reason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

FlaggedIpAddressDetail::FlaggedIpAddressDetail(JsonView jsonValue) : 
    m_ipAddressHasBeenSet(false),
    m_reason(Reason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

FlaggedIpAddressDetail& FlaggedIpAddressDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ReasonMapper::GetReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue FlaggedIpAddressDetail::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ReasonMapper::GetNameForReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
