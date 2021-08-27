/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PortProbeDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

PortProbeDetail::PortProbeDetail() : 
    m_localPortDetailsHasBeenSet(false),
    m_localIpDetailsHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false)
{
}

PortProbeDetail::PortProbeDetail(JsonView jsonValue) : 
    m_localPortDetailsHasBeenSet(false),
    m_localIpDetailsHasBeenSet(false),
    m_remoteIpDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

PortProbeDetail& PortProbeDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("localPortDetails"))
  {
    m_localPortDetails = jsonValue.GetObject("localPortDetails");

    m_localPortDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("localIpDetails"))
  {
    m_localIpDetails = jsonValue.GetObject("localIpDetails");

    m_localIpDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteIpDetails"))
  {
    m_remoteIpDetails = jsonValue.GetObject("remoteIpDetails");

    m_remoteIpDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue PortProbeDetail::Jsonize() const
{
  JsonValue payload;

  if(m_localPortDetailsHasBeenSet)
  {
   payload.WithObject("localPortDetails", m_localPortDetails.Jsonize());

  }

  if(m_localIpDetailsHasBeenSet)
  {
   payload.WithObject("localIpDetails", m_localIpDetails.Jsonize());

  }

  if(m_remoteIpDetailsHasBeenSet)
  {
   payload.WithObject("remoteIpDetails", m_remoteIpDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
