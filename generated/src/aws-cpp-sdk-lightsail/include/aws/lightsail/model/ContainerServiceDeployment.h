/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerServiceDeploymentState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/ContainerServiceEndpoint.h>
#include <aws/core/utils/DateTime.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceDeployment">AWS
   * API Reference</a></p>
   */
  class ContainerServiceDeployment
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceDeployment();
    AWS_LIGHTSAIL_API ContainerServiceDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the deployment.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline ContainerServiceDeployment& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the deployment.</p> <p>A deployment can be in one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVATING</code> - The deployment is
     * being created.</p> </li> <li> <p> <code>ACTIVE</code> - The deployment was
     * successfully created, and it's currently running on the container service. The
     * container service can have only one deployment in an active state at a time.</p>
     * </li> <li> <p> <code>INACTIVE</code> - The deployment was previously
     * successfully created, but it is not currently running on the container
     * service.</p> </li> <li> <p> <code>FAILED</code> - The deployment failed. Use the
     * <code>GetContainerLog</code> action to view the log events for the containers in
     * the deployment to try to determine the reason for the failure.</p> </li> </ul>
     */
    inline const ContainerServiceDeploymentState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ContainerServiceDeploymentState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ContainerServiceDeploymentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ContainerServiceDeployment& WithState(const ContainerServiceDeploymentState& value) { SetState(value); return *this;}
    inline ContainerServiceDeployment& WithState(ContainerServiceDeploymentState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the configuration for the containers of the
     * deployment.</p>
     */
    inline const Aws::Map<Aws::String, Container>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Map<Aws::String, Container>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Map<Aws::String, Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline ContainerServiceDeployment& WithContainers(const Aws::Map<Aws::String, Container>& value) { SetContainers(value); return *this;}
    inline ContainerServiceDeployment& WithContainers(Aws::Map<Aws::String, Container>&& value) { SetContainers(std::move(value)); return *this;}
    inline ContainerServiceDeployment& AddContainers(const Aws::String& key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(key, value); return *this; }
    inline ContainerServiceDeployment& AddContainers(Aws::String&& key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(std::move(key), value); return *this; }
    inline ContainerServiceDeployment& AddContainers(const Aws::String& key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(key, std::move(value)); return *this; }
    inline ContainerServiceDeployment& AddContainers(Aws::String&& key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(std::move(key), std::move(value)); return *this; }
    inline ContainerServiceDeployment& AddContainers(const char* key, Container&& value) { m_containersHasBeenSet = true; m_containers.emplace(key, std::move(value)); return *this; }
    inline ContainerServiceDeployment& AddContainers(const char* key, const Container& value) { m_containersHasBeenSet = true; m_containers.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that describes the endpoint of the deployment.</p>
     */
    inline const ContainerServiceEndpoint& GetPublicEndpoint() const{ return m_publicEndpoint; }
    inline bool PublicEndpointHasBeenSet() const { return m_publicEndpointHasBeenSet; }
    inline void SetPublicEndpoint(const ContainerServiceEndpoint& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = value; }
    inline void SetPublicEndpoint(ContainerServiceEndpoint&& value) { m_publicEndpointHasBeenSet = true; m_publicEndpoint = std::move(value); }
    inline ContainerServiceDeployment& WithPublicEndpoint(const ContainerServiceEndpoint& value) { SetPublicEndpoint(value); return *this;}
    inline ContainerServiceDeployment& WithPublicEndpoint(ContainerServiceEndpoint&& value) { SetPublicEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ContainerServiceDeployment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ContainerServiceDeployment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    int m_version;
    bool m_versionHasBeenSet = false;

    ContainerServiceDeploymentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Container> m_containers;
    bool m_containersHasBeenSet = false;

    ContainerServiceEndpoint m_publicEndpoint;
    bool m_publicEndpointHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
