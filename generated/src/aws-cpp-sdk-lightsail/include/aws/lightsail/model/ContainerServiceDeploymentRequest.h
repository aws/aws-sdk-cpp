/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/EndpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Container.h>
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
   * <p>Describes a container deployment configuration of an Amazon Lightsail
   * container service.</p> <p>A deployment specifies the settings, such as the ports
   * and launch command, of containers that are deployed to your container
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceDeploymentRequest">AWS
   * API Reference</a></p>
   */
  class ContainerServiceDeploymentRequest
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceDeploymentRequest() = default;
    AWS_LIGHTSAIL_API ContainerServiceDeploymentRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceDeploymentRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline const Aws::Map<Aws::String, Container>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Map<Aws::String, Container>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Map<Aws::String, Container>>
    ContainerServiceDeploymentRequest& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersKeyT = Aws::String, typename ContainersValueT = Container>
    ContainerServiceDeploymentRequest& AddContainers(ContainersKeyT&& key, ContainersValueT&& value) {
      m_containersHasBeenSet = true; m_containers.emplace(std::forward<ContainersKeyT>(key), std::forward<ContainersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline const EndpointRequest& GetPublicEndpoint() const { return m_publicEndpoint; }
    inline bool PublicEndpointHasBeenSet() const { return m_publicEndpointHasBeenSet; }
    template<typename PublicEndpointT = EndpointRequest>
    void SetPublicEndpoint(PublicEndpointT&& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = std::forward<PublicEndpointT>(value); }
    template<typename PublicEndpointT = EndpointRequest>
    ContainerServiceDeploymentRequest& WithPublicEndpoint(PublicEndpointT&& value) { SetPublicEndpoint(std::forward<PublicEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Container> m_containers;
    bool m_containersHasBeenSet = false;

    EndpointRequest m_publicEndpoint;
    bool m_publicEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
