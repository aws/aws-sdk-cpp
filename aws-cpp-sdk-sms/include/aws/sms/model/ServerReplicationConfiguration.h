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
#include <aws/sms/model/Server.h>
#include <aws/sms/model/ServerReplicationParameters.h>
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
   * <p>Replication configuration of a server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ServerReplicationConfiguration
  {
  public:
    ServerReplicationConfiguration();
    ServerReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ServerReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the server this replication configuration is associated
     * with.</p>
     */
    inline const Server& GetServer() const{ return m_server; }

    /**
     * <p>Identifier of the server this replication configuration is associated
     * with.</p>
     */
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }

    /**
     * <p>Identifier of the server this replication configuration is associated
     * with.</p>
     */
    inline void SetServer(const Server& value) { m_serverHasBeenSet = true; m_server = value; }

    /**
     * <p>Identifier of the server this replication configuration is associated
     * with.</p>
     */
    inline void SetServer(Server&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }

    /**
     * <p>Identifier of the server this replication configuration is associated
     * with.</p>
     */
    inline ServerReplicationConfiguration& WithServer(const Server& value) { SetServer(value); return *this;}

    /**
     * <p>Identifier of the server this replication configuration is associated
     * with.</p>
     */
    inline ServerReplicationConfiguration& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}


    /**
     * <p>Parameters for replicating the server.</p>
     */
    inline const ServerReplicationParameters& GetServerReplicationParameters() const{ return m_serverReplicationParameters; }

    /**
     * <p>Parameters for replicating the server.</p>
     */
    inline bool ServerReplicationParametersHasBeenSet() const { return m_serverReplicationParametersHasBeenSet; }

    /**
     * <p>Parameters for replicating the server.</p>
     */
    inline void SetServerReplicationParameters(const ServerReplicationParameters& value) { m_serverReplicationParametersHasBeenSet = true; m_serverReplicationParameters = value; }

    /**
     * <p>Parameters for replicating the server.</p>
     */
    inline void SetServerReplicationParameters(ServerReplicationParameters&& value) { m_serverReplicationParametersHasBeenSet = true; m_serverReplicationParameters = std::move(value); }

    /**
     * <p>Parameters for replicating the server.</p>
     */
    inline ServerReplicationConfiguration& WithServerReplicationParameters(const ServerReplicationParameters& value) { SetServerReplicationParameters(value); return *this;}

    /**
     * <p>Parameters for replicating the server.</p>
     */
    inline ServerReplicationConfiguration& WithServerReplicationParameters(ServerReplicationParameters&& value) { SetServerReplicationParameters(std::move(value)); return *this;}

  private:

    Server m_server;
    bool m_serverHasBeenSet;

    ServerReplicationParameters m_serverReplicationParameters;
    bool m_serverReplicationParametersHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
