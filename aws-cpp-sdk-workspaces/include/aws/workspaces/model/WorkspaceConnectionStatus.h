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
#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectionState.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the connection status of a WorkSpace.</p>
   */
  class AWS_WORKSPACES_API WorkspaceConnectionStatus
  {
  public:
    WorkspaceConnectionStatus();
    WorkspaceConnectionStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkspaceConnectionStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline WorkspaceConnectionStatus& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline WorkspaceConnectionStatus& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the WorkSpace.</p>
     */
    inline WorkspaceConnectionStatus& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The connection state of the WorkSpace. Returns UNKOWN if the WorkSpace is in
     * a Stopped state.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The connection state of the WorkSpace. Returns UNKOWN if the WorkSpace is in
     * a Stopped state.</p>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>The connection state of the WorkSpace. Returns UNKOWN if the WorkSpace is in
     * a Stopped state.</p>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>The connection state of the WorkSpace. Returns UNKOWN if the WorkSpace is in
     * a Stopped state.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The connection state of the WorkSpace. Returns UNKOWN if the WorkSpace is in
     * a Stopped state.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionState(ConnectionState&& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The timestamp of the connection state check.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectionStateCheckTimestamp() const{ return m_connectionStateCheckTimestamp; }

    /**
     * <p>The timestamp of the connection state check.</p>
     */
    inline void SetConnectionStateCheckTimestamp(const Aws::Utils::DateTime& value) { m_connectionStateCheckTimestampHasBeenSet = true; m_connectionStateCheckTimestamp = value; }

    /**
     * <p>The timestamp of the connection state check.</p>
     */
    inline void SetConnectionStateCheckTimestamp(Aws::Utils::DateTime&& value) { m_connectionStateCheckTimestampHasBeenSet = true; m_connectionStateCheckTimestamp = value; }

    /**
     * <p>The timestamp of the connection state check.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionStateCheckTimestamp(const Aws::Utils::DateTime& value) { SetConnectionStateCheckTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the connection state check.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionStateCheckTimestamp(Aws::Utils::DateTime&& value) { SetConnectionStateCheckTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastKnownUserConnectionTimestamp() const{ return m_lastKnownUserConnectionTimestamp; }

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline void SetLastKnownUserConnectionTimestamp(const Aws::Utils::DateTime& value) { m_lastKnownUserConnectionTimestampHasBeenSet = true; m_lastKnownUserConnectionTimestamp = value; }

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline void SetLastKnownUserConnectionTimestamp(Aws::Utils::DateTime&& value) { m_lastKnownUserConnectionTimestampHasBeenSet = true; m_lastKnownUserConnectionTimestamp = value; }

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline WorkspaceConnectionStatus& WithLastKnownUserConnectionTimestamp(const Aws::Utils::DateTime& value) { SetLastKnownUserConnectionTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline WorkspaceConnectionStatus& WithLastKnownUserConnectionTimestamp(Aws::Utils::DateTime&& value) { SetLastKnownUserConnectionTimestamp(value); return *this;}

  private:
    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;
    ConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet;
    Aws::Utils::DateTime m_connectionStateCheckTimestamp;
    bool m_connectionStateCheckTimestampHasBeenSet;
    Aws::Utils::DateTime m_lastKnownUserConnectionTimestamp;
    bool m_lastKnownUserConnectionTimestampHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
