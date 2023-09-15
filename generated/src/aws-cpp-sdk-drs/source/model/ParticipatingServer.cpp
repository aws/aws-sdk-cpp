/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ParticipatingServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

ParticipatingServer::ParticipatingServer() : 
    m_launchActionsStatusHasBeenSet(false),
    m_launchStatus(LaunchStatus::NOT_SET),
    m_launchStatusHasBeenSet(false),
    m_recoveryInstanceIDHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false)
{
}

ParticipatingServer::ParticipatingServer(JsonView jsonValue) : 
    m_launchActionsStatusHasBeenSet(false),
    m_launchStatus(LaunchStatus::NOT_SET),
    m_launchStatusHasBeenSet(false),
    m_recoveryInstanceIDHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipatingServer& ParticipatingServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("launchActionsStatus"))
  {
    m_launchActionsStatus = jsonValue.GetObject("launchActionsStatus");

    m_launchActionsStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchStatus"))
  {
    m_launchStatus = LaunchStatusMapper::GetLaunchStatusForName(jsonValue.GetString("launchStatus"));

    m_launchStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryInstanceID"))
  {
    m_recoveryInstanceID = jsonValue.GetString("recoveryInstanceID");

    m_recoveryInstanceIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipatingServer::Jsonize() const
{
  JsonValue payload;

  if(m_launchActionsStatusHasBeenSet)
  {
   payload.WithObject("launchActionsStatus", m_launchActionsStatus.Jsonize());

  }

  if(m_launchStatusHasBeenSet)
  {
   payload.WithString("launchStatus", LaunchStatusMapper::GetNameForLaunchStatus(m_launchStatus));
  }

  if(m_recoveryInstanceIDHasBeenSet)
  {
   payload.WithString("recoveryInstanceID", m_recoveryInstanceID);

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
