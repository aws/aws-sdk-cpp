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
    AWS_ECS_API DockerVolumeConfiguration() = default;
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
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline DockerVolumeConfiguration& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is <code>true</code>, the Docker volume is created if it
     * doesn't already exist.</p>  <p>This field is only used if the
     * <code>scope</code> is <code>shared</code>.</p> 
     */
    inline bool GetAutoprovision() const { return m_autoprovision; }
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
    inline const Aws::String& GetDriver() const { return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    template<typename DriverT = Aws::String>
    void SetDriver(DriverT&& value) { m_driverHasBeenSet = true; m_driver = std::forward<DriverT>(value); }
    template<typename DriverT = Aws::String>
    DockerVolumeConfiguration& WithDriver(DriverT&& value) { SetDriver(std::forward<DriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of Docker driver-specific options passed through. This parameter maps
     * to <code>DriverOpts</code> in the docker create-volume command and the
     * <code>xxopt</code> option to docker volume create.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDriverOpts() const { return m_driverOpts; }
    inline bool DriverOptsHasBeenSet() const { return m_driverOptsHasBeenSet; }
    template<typename DriverOptsT = Aws::Map<Aws::String, Aws::String>>
    void SetDriverOpts(DriverOptsT&& value) { m_driverOptsHasBeenSet = true; m_driverOpts = std::forward<DriverOptsT>(value); }
    template<typename DriverOptsT = Aws::Map<Aws::String, Aws::String>>
    DockerVolumeConfiguration& WithDriverOpts(DriverOptsT&& value) { SetDriverOpts(std::forward<DriverOptsT>(value)); return *this;}
    template<typename DriverOptsKeyT = Aws::String, typename DriverOptsValueT = Aws::String>
    DockerVolumeConfiguration& AddDriverOpts(DriverOptsKeyT&& key, DriverOptsValueT&& value) {
      m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::forward<DriverOptsKeyT>(key), std::forward<DriverOptsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Custom metadata to add to your Docker volume. This parameter maps to
     * <code>Labels</code> in the docker container create command and the
     * <code>xxlabel</code> option to docker volume create.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    DockerVolumeConfiguration& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
    DockerVolumeConfiguration& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
      m_labelsHasBeenSet = true; m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value)); return *this;
    }
    ///@}
  private:

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    bool m_autoprovision{false};
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
