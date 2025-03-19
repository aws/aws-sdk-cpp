/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServiceHealthCheckConfig.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the public endpoint configuration of a deployment of an Amazon
   * Lightsail container service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceEndpoint">AWS
   * API Reference</a></p>
   */
  class ContainerServiceEndpoint
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceEndpoint() = default;
    AWS_LIGHTSAIL_API ContainerServiceEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container entry of the deployment that the endpoint
     * configuration applies to.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    ContainerServiceEndpoint& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port of the specified container to which traffic is forwarded to.</p>
     */
    inline int GetContainerPort() const { return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline ContainerServiceEndpoint& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the health check configuration of the container.</p>
     */
    inline const ContainerServiceHealthCheckConfig& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = ContainerServiceHealthCheckConfig>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = ContainerServiceHealthCheckConfig>
    ContainerServiceEndpoint& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort{0};
    bool m_containerPortHasBeenSet = false;

    ContainerServiceHealthCheckConfig m_healthCheck;
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
