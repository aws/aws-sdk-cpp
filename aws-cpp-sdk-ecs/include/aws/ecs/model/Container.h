﻿/*
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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/HealthStatus.h>
#include <aws/ecs/model/NetworkBinding.h>
#include <aws/ecs/model/NetworkInterface.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>A Docker container that is part of a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Container">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Container
  {
  public:
    Container();
    Container(Aws::Utils::Json::JsonView jsonValue);
    Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline const Aws::String& GetContainerArn() const{ return m_containerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline void SetContainerArn(const Aws::String& value) { m_containerArnHasBeenSet = true; m_containerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline void SetContainerArn(Aws::String&& value) { m_containerArnHasBeenSet = true; m_containerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline void SetContainerArn(const char* value) { m_containerArnHasBeenSet = true; m_containerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline Container& WithContainerArn(const Aws::String& value) { SetContainerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline Container& WithContainerArn(Aws::String&& value) { SetContainerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline Container& WithContainerArn(const char* value) { SetContainerArn(value); return *this;}


    /**
     * <p>The ARN of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The ARN of the task.</p>
     */
    inline Container& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline Container& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task.</p>
     */
    inline Container& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline Container& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline Container& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline Container& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The last known status of the container.</p>
     */
    inline const Aws::String& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>The last known status of the container.</p>
     */
    inline void SetLastStatus(const Aws::String& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>The last known status of the container.</p>
     */
    inline void SetLastStatus(Aws::String&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>The last known status of the container.</p>
     */
    inline void SetLastStatus(const char* value) { m_lastStatusHasBeenSet = true; m_lastStatus.assign(value); }

    /**
     * <p>The last known status of the container.</p>
     */
    inline Container& WithLastStatus(const Aws::String& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The last known status of the container.</p>
     */
    inline Container& WithLastStatus(Aws::String&& value) { SetLastStatus(std::move(value)); return *this;}

    /**
     * <p>The last known status of the container.</p>
     */
    inline Container& WithLastStatus(const char* value) { SetLastStatus(value); return *this;}


    /**
     * <p>The exit code returned from the container.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }

    /**
     * <p>The exit code returned from the container.</p>
     */
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }

    /**
     * <p>The exit code returned from the container.</p>
     */
    inline Container& WithExitCode(int value) { SetExitCode(value); return *this;}


    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline Container& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline Container& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline Container& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline const Aws::Vector<NetworkBinding>& GetNetworkBindings() const{ return m_networkBindings; }

    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline void SetNetworkBindings(const Aws::Vector<NetworkBinding>& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = value; }

    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline void SetNetworkBindings(Aws::Vector<NetworkBinding>&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = std::move(value); }

    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline Container& WithNetworkBindings(const Aws::Vector<NetworkBinding>& value) { SetNetworkBindings(value); return *this;}

    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline Container& WithNetworkBindings(Aws::Vector<NetworkBinding>&& value) { SetNetworkBindings(std::move(value)); return *this;}

    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline Container& AddNetworkBindings(const NetworkBinding& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(value); return *this; }

    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline Container& AddNetworkBindings(NetworkBinding&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(std::move(value)); return *this; }


    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline Container& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline Container& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline Container& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline Container& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The health status of the container. If health checks are not configured for
     * this container in its task definition, then it reports health status as
     * <code>UNKNOWN</code>.</p>
     */
    inline const HealthStatus& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The health status of the container. If health checks are not configured for
     * this container in its task definition, then it reports health status as
     * <code>UNKNOWN</code>.</p>
     */
    inline void SetHealthStatus(const HealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The health status of the container. If health checks are not configured for
     * this container in its task definition, then it reports health status as
     * <code>UNKNOWN</code>.</p>
     */
    inline void SetHealthStatus(HealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>The health status of the container. If health checks are not configured for
     * this container in its task definition, then it reports health status as
     * <code>UNKNOWN</code>.</p>
     */
    inline Container& WithHealthStatus(const HealthStatus& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The health status of the container. If health checks are not configured for
     * this container in its task definition, then it reports health status as
     * <code>UNKNOWN</code>.</p>
     */
    inline Container& WithHealthStatus(HealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}

  private:

    Aws::String m_containerArn;
    bool m_containerArnHasBeenSet;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_lastStatus;
    bool m_lastStatusHasBeenSet;

    int m_exitCode;
    bool m_exitCodeHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::Vector<NetworkBinding> m_networkBindings;
    bool m_networkBindingsHasBeenSet;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;

    HealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
