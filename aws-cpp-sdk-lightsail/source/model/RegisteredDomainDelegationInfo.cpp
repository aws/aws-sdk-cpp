/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RegisteredDomainDelegationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RegisteredDomainDelegationInfo::RegisteredDomainDelegationInfo() : 
    m_nameServersUpdateStateHasBeenSet(false),
    m_r53HostedZoneDeletionStateHasBeenSet(false)
{
}

RegisteredDomainDelegationInfo::RegisteredDomainDelegationInfo(JsonView jsonValue) : 
    m_nameServersUpdateStateHasBeenSet(false),
    m_r53HostedZoneDeletionStateHasBeenSet(false)
{
  *this = jsonValue;
}

RegisteredDomainDelegationInfo& RegisteredDomainDelegationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nameServersUpdateState"))
  {
    m_nameServersUpdateState = jsonValue.GetObject("nameServersUpdateState");

    m_nameServersUpdateStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("r53HostedZoneDeletionState"))
  {
    m_r53HostedZoneDeletionState = jsonValue.GetObject("r53HostedZoneDeletionState");

    m_r53HostedZoneDeletionStateHasBeenSet = true;
  }

  return *this;
}

JsonValue RegisteredDomainDelegationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameServersUpdateStateHasBeenSet)
  {
   payload.WithObject("nameServersUpdateState", m_nameServersUpdateState.Jsonize());

  }

  if(m_r53HostedZoneDeletionStateHasBeenSet)
  {
   payload.WithObject("r53HostedZoneDeletionState", m_r53HostedZoneDeletionState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
