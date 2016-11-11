/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/model/WorkspaceConnectionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspaceConnectionStatus::WorkspaceConnectionStatus() : 
    m_workspaceIdHasBeenSet(false),
    m_connectionState(ConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_connectionStateCheckTimestampHasBeenSet(false),
    m_lastKnownUserConnectionTimestampHasBeenSet(false)
{
}

WorkspaceConnectionStatus::WorkspaceConnectionStatus(const JsonValue& jsonValue) : 
    m_workspaceIdHasBeenSet(false),
    m_connectionState(ConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_connectionStateCheckTimestampHasBeenSet(false),
    m_lastKnownUserConnectionTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceConnectionStatus& WorkspaceConnectionStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("WorkspaceId"))
  {
    m_workspaceId = jsonValue.GetString("WorkspaceId");

    m_workspaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("ConnectionState"));

    m_connectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionStateCheckTimestamp"))
  {
    m_connectionStateCheckTimestamp = jsonValue.GetDouble("ConnectionStateCheckTimestamp");

    m_connectionStateCheckTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastKnownUserConnectionTimestamp"))
  {
    m_lastKnownUserConnectionTimestamp = jsonValue.GetDouble("LastKnownUserConnectionTimestamp");

    m_lastKnownUserConnectionTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceConnectionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("ConnectionState", ConnectionStateMapper::GetNameForConnectionState(m_connectionState));
  }

  if(m_connectionStateCheckTimestampHasBeenSet)
  {
   payload.WithDouble("ConnectionStateCheckTimestamp", m_connectionStateCheckTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastKnownUserConnectionTimestampHasBeenSet)
  {
   payload.WithDouble("LastKnownUserConnectionTimestamp", m_lastKnownUserConnectionTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws