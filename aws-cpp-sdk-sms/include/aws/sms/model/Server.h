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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ServerType.h>
#include <aws/sms/model/VmServer.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/Server">AWS API
   * Reference</a></p>
   */
  class AWS_SMS_API Server
  {
  public:
    Server();
    Server(Aws::Utils::Json::JsonView jsonValue);
    Server& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The identifier of the server.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The identifier of the server.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The identifier of the server.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The identifier of the server.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The identifier of the server.</p>
     */
    inline Server& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server.</p>
     */
    inline Server& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server.</p>
     */
    inline Server& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The type of server.</p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }

    /**
     * <p>The type of server.</p>
     */
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }

    /**
     * <p>The type of server.</p>
     */
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }

    /**
     * <p>The type of server.</p>
     */
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }

    /**
     * <p>The type of server.</p>
     */
    inline Server& WithServerType(const ServerType& value) { SetServerType(value); return *this;}

    /**
     * <p>The type of server.</p>
     */
    inline Server& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}


    /**
     * <p>Information about the VM server.</p>
     */
    inline const VmServer& GetVmServer() const{ return m_vmServer; }

    /**
     * <p>Information about the VM server.</p>
     */
    inline bool VmServerHasBeenSet() const { return m_vmServerHasBeenSet; }

    /**
     * <p>Information about the VM server.</p>
     */
    inline void SetVmServer(const VmServer& value) { m_vmServerHasBeenSet = true; m_vmServer = value; }

    /**
     * <p>Information about the VM server.</p>
     */
    inline void SetVmServer(VmServer&& value) { m_vmServerHasBeenSet = true; m_vmServer = std::move(value); }

    /**
     * <p>Information about the VM server.</p>
     */
    inline Server& WithVmServer(const VmServer& value) { SetVmServer(value); return *this;}

    /**
     * <p>Information about the VM server.</p>
     */
    inline Server& WithVmServer(VmServer&& value) { SetVmServer(std::move(value)); return *this;}


    /**
     * <p>The identifier of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline Server& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline Server& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline Server& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}


    /**
     * <p>Indicates whether the replication job is deleted or failed.</p>
     */
    inline bool GetReplicationJobTerminated() const{ return m_replicationJobTerminated; }

    /**
     * <p>Indicates whether the replication job is deleted or failed.</p>
     */
    inline bool ReplicationJobTerminatedHasBeenSet() const { return m_replicationJobTerminatedHasBeenSet; }

    /**
     * <p>Indicates whether the replication job is deleted or failed.</p>
     */
    inline void SetReplicationJobTerminated(bool value) { m_replicationJobTerminatedHasBeenSet = true; m_replicationJobTerminated = value; }

    /**
     * <p>Indicates whether the replication job is deleted or failed.</p>
     */
    inline Server& WithReplicationJobTerminated(bool value) { SetReplicationJobTerminated(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet;

    VmServer m_vmServer;
    bool m_vmServerHasBeenSet;

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet;

    bool m_replicationJobTerminated;
    bool m_replicationJobTerminatedHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
