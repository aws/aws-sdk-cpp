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
    AWS_LIGHTSAIL_API CreateContainerServiceDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContainerServiceDeployment"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline CreateContainerServiceDeploymentRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline CreateContainerServiceDeploymentRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the container service for which to create the deployment.</p>
     */
    inline CreateContainerServiceDeploymentRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline const Aws::Map<Aws::String, Container>& GetContainers() const{ return m_containers; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline void SetContainers(const Aws::Map<Aws::String, Container>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline void SetContainers(Aws::Map<Aws::String, Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& WithContainers(const Aws::Map<Aws::String, Container>& value) { SetContainers(value); return *this;}

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& WithContainers(Aws::Map<Aws::String, Container>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& AddContainers(const Aws::String& key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(key, value); return *this; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& AddContainers(Aws::String&& key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& AddContainers(const Aws::String& key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& AddContainers(Aws::String&& key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& AddContainers(const char* key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that describes the settings of the containers that will be launched
     * on the container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& AddContainers(const char* key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(key, value); return *this; }


    /**
     * <p>An object that describes the settings of the public endpoint for the
     * container service.</p>
     */
    inline const EndpointRequest& GetPublicEndpoint() const{ return m_publicEndpoint; }

    /**
     * <p>An object that describes the settings of the public endpoint for the
     * container service.</p>
     */
    inline bool PublicEndpointHasBeenSet() const { return m_publicEndpointHasBeenSet; }

    /**
     * <p>An object that describes the settings of the public endpoint for the
     * container service.</p>
     */
    inline void SetPublicEndpoint(const EndpointRequest& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = value; }

    /**
     * <p>An object that describes the settings of the public endpoint for the
     * container service.</p>
     */
    inline void SetPublicEndpoint(EndpointRequest&& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = std::move(value); }

    /**
     * <p>An object that describes the settings of the public endpoint for the
     * container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& WithPublicEndpoint(const EndpointRequest& value) { SetPublicEndpoint(value); return *this;}

    /**
     * <p>An object that describes the settings of the public endpoint for the
     * container service.</p>
     */
    inline CreateContainerServiceDeploymentRequest& WithPublicEndpoint(EndpointRequest&& value) { SetPublicEndpoint(std::move(value)); return *this;}

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
