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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerReplicationConfiguration.h>
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
   * <p>Replication configuration for a server group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerGroupReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ServerGroupReplicationConfiguration
  {
  public:
    ServerGroupReplicationConfiguration();
    ServerGroupReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ServerGroupReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline const Aws::String& GetServerGroupId() const{ return m_serverGroupId; }

    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }

    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline void SetServerGroupId(const Aws::String& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = value; }

    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline void SetServerGroupId(Aws::String&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::move(value); }

    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline void SetServerGroupId(const char* value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId.assign(value); }

    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerGroupId(const Aws::String& value) { SetServerGroupId(value); return *this;}

    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerGroupId(Aws::String&& value) { SetServerGroupId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the server group this replication configuration is associated
     * with.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerGroupId(const char* value) { SetServerGroupId(value); return *this;}


    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline const Aws::Vector<ServerReplicationConfiguration>& GetServerReplicationConfigurations() const{ return m_serverReplicationConfigurations; }

    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline bool ServerReplicationConfigurationsHasBeenSet() const { return m_serverReplicationConfigurationsHasBeenSet; }

    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline void SetServerReplicationConfigurations(const Aws::Vector<ServerReplicationConfiguration>& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations = value; }

    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline void SetServerReplicationConfigurations(Aws::Vector<ServerReplicationConfiguration>&& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations = std::move(value); }

    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerReplicationConfigurations(const Aws::Vector<ServerReplicationConfiguration>& value) { SetServerReplicationConfigurations(value); return *this;}

    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& WithServerReplicationConfigurations(Aws::Vector<ServerReplicationConfiguration>&& value) { SetServerReplicationConfigurations(std::move(value)); return *this;}

    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& AddServerReplicationConfigurations(const ServerReplicationConfiguration& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations.push_back(value); return *this; }

    /**
     * <p>Replication configuration for servers in the server group.</p>
     */
    inline ServerGroupReplicationConfiguration& AddServerReplicationConfigurations(ServerReplicationConfiguration&& value) { m_serverReplicationConfigurationsHasBeenSet = true; m_serverReplicationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet;

    Aws::Vector<ServerReplicationConfiguration> m_serverReplicationConfigurations;
    bool m_serverReplicationConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
