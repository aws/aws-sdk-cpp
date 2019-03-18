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

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectionState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the connection status of a WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceConnectionStatus">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API WorkspaceConnectionStatus
  {
  public:
    WorkspaceConnectionStatus();
    WorkspaceConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    WorkspaceConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline WorkspaceConnectionStatus& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline WorkspaceConnectionStatus& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline WorkspaceConnectionStatus& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }

    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline void SetConnectionState(const ConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }

    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline void SetConnectionState(ConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }

    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectionStateCheckTimestamp() const{ return m_connectionStateCheckTimestamp; }

    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline bool ConnectionStateCheckTimestampHasBeenSet() const { return m_connectionStateCheckTimestampHasBeenSet; }

    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline void SetConnectionStateCheckTimestamp(const Aws::Utils::DateTime& value) { m_connectionStateCheckTimestampHasBeenSet = true; m_connectionStateCheckTimestamp = value; }

    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline void SetConnectionStateCheckTimestamp(Aws::Utils::DateTime&& value) { m_connectionStateCheckTimestampHasBeenSet = true; m_connectionStateCheckTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionStateCheckTimestamp(const Aws::Utils::DateTime& value) { SetConnectionStateCheckTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline WorkspaceConnectionStatus& WithConnectionStateCheckTimestamp(Aws::Utils::DateTime&& value) { SetConnectionStateCheckTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastKnownUserConnectionTimestamp() const{ return m_lastKnownUserConnectionTimestamp; }

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline bool LastKnownUserConnectionTimestampHasBeenSet() const { return m_lastKnownUserConnectionTimestampHasBeenSet; }

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline void SetLastKnownUserConnectionTimestamp(const Aws::Utils::DateTime& value) { m_lastKnownUserConnectionTimestampHasBeenSet = true; m_lastKnownUserConnectionTimestamp = value; }

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline void SetLastKnownUserConnectionTimestamp(Aws::Utils::DateTime&& value) { m_lastKnownUserConnectionTimestampHasBeenSet = true; m_lastKnownUserConnectionTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline WorkspaceConnectionStatus& WithLastKnownUserConnectionTimestamp(const Aws::Utils::DateTime& value) { SetLastKnownUserConnectionTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline WorkspaceConnectionStatus& WithLastKnownUserConnectionTimestamp(Aws::Utils::DateTime&& value) { SetLastKnownUserConnectionTimestamp(std::move(value)); return *this;}

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
