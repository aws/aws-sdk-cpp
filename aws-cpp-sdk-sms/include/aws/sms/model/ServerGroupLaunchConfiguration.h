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
#include <aws/sms/model/ServerLaunchConfiguration.h>
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
   * <p>Launch configuration for a server group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerGroupLaunchConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ServerGroupLaunchConfiguration
  {
  public:
    ServerGroupLaunchConfiguration();
    ServerGroupLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ServerGroupLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline const Aws::String& GetServerGroupId() const{ return m_serverGroupId; }

    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }

    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline void SetServerGroupId(const Aws::String& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = value; }

    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline void SetServerGroupId(Aws::String&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::move(value); }

    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline void SetServerGroupId(const char* value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId.assign(value); }

    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerGroupId(const Aws::String& value) { SetServerGroupId(value); return *this;}

    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerGroupId(Aws::String&& value) { SetServerGroupId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the server group the launch configuration is associated
     * with.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerGroupId(const char* value) { SetServerGroupId(value); return *this;}


    /**
     * <p>Launch order of servers in the server group.</p>
     */
    inline int GetLaunchOrder() const{ return m_launchOrder; }

    /**
     * <p>Launch order of servers in the server group.</p>
     */
    inline bool LaunchOrderHasBeenSet() const { return m_launchOrderHasBeenSet; }

    /**
     * <p>Launch order of servers in the server group.</p>
     */
    inline void SetLaunchOrder(int value) { m_launchOrderHasBeenSet = true; m_launchOrder = value; }

    /**
     * <p>Launch order of servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& WithLaunchOrder(int value) { SetLaunchOrder(value); return *this;}


    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline const Aws::Vector<ServerLaunchConfiguration>& GetServerLaunchConfigurations() const{ return m_serverLaunchConfigurations; }

    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline bool ServerLaunchConfigurationsHasBeenSet() const { return m_serverLaunchConfigurationsHasBeenSet; }

    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline void SetServerLaunchConfigurations(const Aws::Vector<ServerLaunchConfiguration>& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations = value; }

    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline void SetServerLaunchConfigurations(Aws::Vector<ServerLaunchConfiguration>&& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations = std::move(value); }

    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerLaunchConfigurations(const Aws::Vector<ServerLaunchConfiguration>& value) { SetServerLaunchConfigurations(value); return *this;}

    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& WithServerLaunchConfigurations(Aws::Vector<ServerLaunchConfiguration>&& value) { SetServerLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& AddServerLaunchConfigurations(const ServerLaunchConfiguration& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations.push_back(value); return *this; }

    /**
     * <p>Launch configuration for servers in the server group.</p>
     */
    inline ServerGroupLaunchConfiguration& AddServerLaunchConfigurations(ServerLaunchConfiguration&& value) { m_serverLaunchConfigurationsHasBeenSet = true; m_serverLaunchConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet;

    int m_launchOrder;
    bool m_launchOrderHasBeenSet;

    Aws::Vector<ServerLaunchConfiguration> m_serverLaunchConfigurations;
    bool m_serverLaunchConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
