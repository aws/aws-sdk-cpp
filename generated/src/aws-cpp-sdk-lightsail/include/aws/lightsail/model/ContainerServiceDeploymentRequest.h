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
    AWS_LIGHTSAIL_API ContainerServiceDeploymentRequest();
    AWS_LIGHTSAIL_API ContainerServiceDeploymentRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceDeploymentRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline const Aws::Map<Aws::String, Container>& GetContainers() const{ return m_containers; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline void SetContainers(const Aws::Map<Aws::String, Container>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline void SetContainers(Aws::Map<Aws::String, Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& WithContainers(const Aws::Map<Aws::String, Container>& value) { SetContainers(value); return *this;}

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& WithContainers(Aws::Map<Aws::String, Container>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& AddContainers(const Aws::String& key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(key, value); return *this; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& AddContainers(Aws::String&& key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& AddContainers(const Aws::String& key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& AddContainers(Aws::String&& key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& AddContainers(const char* key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& AddContainers(const char* key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(key, value); return *this; }


    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline const EndpointRequest& GetPublicEndpoint() const{ return m_publicEndpoint; }

    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline bool PublicEndpointHasBeenSet() const { return m_publicEndpointHasBeenSet; }

    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline void SetPublicEndpoint(const EndpointRequest& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = value; }

    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline void SetPublicEndpoint(EndpointRequest&& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = std::move(value); }

    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& WithPublicEndpoint(const EndpointRequest& value) { SetPublicEndpoint(value); return *this;}

    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline ContainerServiceDeploymentRequest& WithPublicEndpoint(EndpointRequest&& value) { SetPublicEndpoint(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Container> m_containers;
    bool m_containersHasBeenSet = false;

    EndpointRequest m_publicEndpoint;
    bool m_publicEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
