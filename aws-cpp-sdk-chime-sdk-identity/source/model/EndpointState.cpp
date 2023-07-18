/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/EndpointState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

EndpointState::EndpointState() : 
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReason(EndpointStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false)
{
}

EndpointState::EndpointState(JsonView jsonValue) : 
    m_status(EndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReason(EndpointStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointState& EndpointState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EndpointStatusMapper::GetEndpointStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = EndpointStatusReasonMapper::GetEndpointStatusReasonForName(jsonValue.GetString("StatusReason"));

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EndpointStatusMapper::GetNameForEndpointStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", EndpointStatusReasonMapper::GetNameForEndpointStatusReason(m_statusReason));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
