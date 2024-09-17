/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>This parameter is specified when you're using Docker volumes. Docker volumes
   * are only supported when you're using the EC2 launch type. Windows containers
   * only support the use of the <code>local</code> driver. To use bind mounts,
   * specify a <code>host</code> instead.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DockerVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class DockerVolumeConfiguration
  {
  public:
    AWS_ECS_API DockerVolumeConfiguration();
    AWS_ECS_API DockerVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API DockerVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scope for the Docker volume that determines its lifecycle. Docker volumes
     * that are scoped to a <code>task</code> are automatically provisioned when the
     * task starts and destroyed when the task stops. Docker volumes that are scoped as
     * <code>shared</code> persist after the task stops.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline DockerVolumeConfiguration& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline DockerVolumeConfiguration& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is <code>true</code>, the Docker volume is created if it
     * doesn't already exist.</p>  <p>This field is only used if the
     * <code>scope</code> is <code>shared</code>.</p> 
     */
    inline bool GetAutoprovision() const{ return m_autoprovision; }
    inline bool AutoprovisionHasBeenSet() const { return m_autoprovisionHasBeenSet; }
    inline void SetAutoprovision(bool value) { m_autoprovisionHasBeenSet = true; m_autoprovision = value; }
    inline DockerVolumeConfiguration& WithAutoprovision(bool value) { SetAutoprovision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker volume driver to use. The driver value must match the driver name
     * provided by Docker because it is used for task placement. If the driver was
     * installed using the Docker plugin CLI, use <code>docker plugin ls</code> to
     * retrieve the driver name from your container instance. If the driver was
     * installed using another method, use Docker plugin discovery to retrieve the
     * driver name. This parameter maps to <code>Driver</code> in the docker container
     * create command and the <code>xxdriver</code> option to docker volume create.</p>
     */
    inline const Aws::String& GetDriver() const{ return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    inline void SetDriver(const Aws::String& value) { m_driverHasBeenSet = true; m_driver = value; }
    inline void SetDriver(Aws::String&& value) { m_driverHasBeenSet = true; m_driver = std::move(value); }
    inline void SetDriver(const char* value) { m_driverHasBeenSet = true; m_driver.assign(value); }
    inline DockerVolumeConfiguration& WithDriver(const Aws::String& value) { SetDriver(value); return *this;}
    inline DockerVolumeConfiguration& WithDriver(Aws::String&& value) { SetDriver(std::move(value)); return *this;}
    inline DockerVolumeConfiguration& WithDriver(const char* value) { SetDriver(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of Docker driver-specific options passed through. This parameter maps
     * to <code>DriverOpts</code> in the docker create-volume command and the
     * <code>xxopt</code> option to docker volume create.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDriverOpts() const{ return m_driverOpts; }
    inline bool DriverOptsHasBeenSet() const { return m_driverOptsHasBeenSet; }
    inline void SetDriverOpts(const Aws::Map<Aws::String, Aws::String>& value) { m_driverOptsHasBeenSet = true; m_driverOpts = value; }
    inline void SetDriverOpts(Aws::Map<Aws::String, Aws::String>&& value) { m_driverOptsHasBeenSet = true; m_driverOpts = std::move(value); }
    inline DockerVolumeConfiguration& WithDriverOpts(const Aws::Map<Aws::String, Aws::String>& value) { SetDriverOpts(value); return *this;}
    inline DockerVolumeConfiguration& WithDriverOpts(Aws::Map<Aws::String, Aws::String>&& value) { SetDriverOpts(std::move(value)); return *this;}
    inline DockerVolumeConfiguration& AddDriverOpts(const Aws::String& key, const Aws::String& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, value); return *this; }
    inline DockerVolumeConfiguration& AddDriverOpts(Aws::String&& key, const Aws::String& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::move(key), value); return *this; }
    inline DockerVolumeConfiguration& AddDriverOpts(const Aws::String& key, Aws::String&& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, std::move(value)); return *this; }
    inline DockerVolumeConfiguration& AddDriverOpts(Aws::String&& key, Aws::String&& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::move(key), std::move(value)); return *this; }
    inline DockerVolumeConfiguration& AddDriverOpts(const char* key, Aws::String&& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, std::move(value)); return *this; }
    inline DockerVolumeConfiguration& AddDriverOpts(Aws::String&& key, const char* value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::move(key), value); return *this; }
    inline DockerVolumeConfiguration& AddDriverOpts(const char* key, const char* value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom metadata to add to your Docker volume. This parameter maps to
     * <code>Labels</code> in the docker container create command and the
     * <code>xxlabel</code> option to docker volume create.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline DockerVolumeConfiguration& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}
    inline DockerVolumeConfiguration& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline DockerVolumeConfiguration& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }
    inline DockerVolumeConfiguration& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }
    inline DockerVolumeConfiguration& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }
    inline DockerVolumeConfiguration& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }
    inline DockerVolumeConfiguration& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }
    inline DockerVolumeConfiguration& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }
    inline DockerVolumeConfiguration& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }
    ///@}
  private:

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    bool m_autoprovision;
    bool m_autoprovisionHasBeenSet = false;

    Aws::String m_driver;
    bool m_driverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_driverOpts;
    bool m_driverOptsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
