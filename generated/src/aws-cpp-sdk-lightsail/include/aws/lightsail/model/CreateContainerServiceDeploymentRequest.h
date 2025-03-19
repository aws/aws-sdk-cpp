/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/EndpointRequest.h>
#include <aws/lightsail/model/Container.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateContainerServiceDeploymentRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateContainerServiceDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerServiceDeployment"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    CreateContainerServiceDeploymentRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline const Aws::Map<Aws::String, Container>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Map<Aws::String, Container>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Map<Aws::String, Container>>
    CreateContainerServiceDeploymentRequest& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersKeyT = Aws::String, typename ContainersValueT = Container>
    CreateContainerServiceDeploymentRequest& AddContainers(ContainersKeyT&& key, ContainersValueT&& value) {
      m_containersHasBeenSet = true; m_containers.emplace(std::forward<ContainersKeyT>(key), std::forward<ContainersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object that describes the settings of the public endpoint for the
     * container service.</p>
     */
    inline const EndpointRequest& GetPublicEndpoint() const { return m_publicEndpoint; }
    inline bool PublicEndpointHasBeenSet() const { return m_publicEndpointHasBeenSet; }
    template<typename PublicEndpointT = EndpointRequest>
    void SetPublicEndpoint(PublicEndpointT&& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = std::forward<PublicEndpointT>(value); }
    template<typename PublicEndpointT = EndpointRequest>
    CreateContainerServiceDeploymentRequest& WithPublicEndpoint(PublicEndpointT&& value) { SetPublicEndpoint(std::forward<PublicEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::Map<Aws::String, Container> m_containers;
    bool m_containersHasBeenSet = false;

    EndpointRequest m_publicEndpoint;
    bool m_publicEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
