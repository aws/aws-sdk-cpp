/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
