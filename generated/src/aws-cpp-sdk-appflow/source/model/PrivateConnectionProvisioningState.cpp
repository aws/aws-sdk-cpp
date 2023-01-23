/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PrivateConnectionProvisioningState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

PrivateConnectionProvisioningState::PrivateConnectionProvisioningState() : 
    m_status(PrivateConnectionProvisioningStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_failureCause(PrivateConnectionProvisioningFailureCause::NOT_SET),
    m_failureCauseHasBeenSet(false)
{
}

PrivateConnectionProvisioningState::PrivateConnectionProvisioningState(JsonView jsonValue) : 
    m_status(PrivateConnectionProvisioningStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_failureCause(PrivateConnectionProvisioningFailureCause::NOT_SET),
    m_failureCauseHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateConnectionProvisioningState& PrivateConnectionProvisioningState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = PrivateConnectionProvisioningStatusMapper::GetPrivateConnectionProvisioningStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCause"))
  {
    m_failureCause = PrivateConnectionProvisioningFailureCauseMapper::GetPrivateConnectionProvisioningFailureCauseForName(jsonValue.GetString("failureCause"));

    m_failureCauseHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateConnectionProvisioningState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PrivateConnectionProvisioningStatusMapper::GetNameForPrivateConnectionProvisioningStatus(m_status));
  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  if(m_failureCauseHasBeenSet)
  {
   payload.WithString("failureCause", PrivateConnectionProvisioningFailureCauseMapper::GetNameForPrivateConnectionProvisioningFailureCause(m_failureCause));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
