/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/HostVolumeProperties.h>
#include <aws/ecs/model/DockerVolumeConfiguration.h>
#include <aws/ecs/model/EFSVolumeConfiguration.h>
#include <aws/ecs/model/FSxWindowsFileServerVolumeConfiguration.h>
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
   * <p>The data volume configuration for tasks launched using this task definition.
   * Specifying a volume configuration in a task definition is optional. The volume
   * configuration may contain multiple volumes but only one volume configured at
   * launch is supported. Each volume defined in the volume configuration may only
   * specify a <code>name</code> and one of either <code>configuredAtLaunch</code>,
   * <code>dockerVolumeConfiguration</code>, <code>efsVolumeConfiguration</code>,
   * <code>fsxWindowsFileServerVolumeConfiguration</code>, or <code>host</code>. If
   * an empty volume configuration is specified, by default Amazon ECS uses a host
   * volume. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_data_volumes.html">Using
   * data volumes in tasks</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Volume">AWS API
   * Reference</a></p>
   */
  class Volume
  {
  public:
    AWS_ECS_API Volume();
    AWS_ECS_API Volume(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline Volume& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline Volume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed.</p> <p>When using a volume configured at
     * launch, the <code>name</code> is required and must also be specified as the
     * volume name in the <code>ServiceVolumeConfiguration</code> or
     * <code>TaskVolumeConfiguration</code> parameter when creating your service or
     * standalone task.</p> <p>For all other types of volumes, this name is referenced
     * in the <code>sourceVolume</code> parameter of the <code>mountPoints</code>
     * object in the container definition.</p> <p>When a volume is using the
     * <code>efsVolumeConfiguration</code>, the name is required.</p>
     */
    inline Volume& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. If
     * the <code>host</code> parameter is empty, then the Docker daemon assigns a host
     * path for your data volume. However, the data isn't guaranteed to persist after
     * the containers that are associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers can't mount directories on a
     * different drive, and mount point can't be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline const HostVolumeProperties& GetHost() const{ return m_host; }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. If
     * the <code>host</code> parameter is empty, then the Docker daemon assigns a host
     * path for your data volume. However, the data isn't guaranteed to persist after
     * the containers that are associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers can't mount directories on a
     * different drive, and mount point can't be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. If
     * the <code>host</code> parameter is empty, then the Docker daemon assigns a host
     * path for your data volume. However, the data isn't guaranteed to persist after
     * the containers that are associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers can't mount directories on a
     * different drive, and mount point can't be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline void SetHost(const HostVolumeProperties& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. If
     * the <code>host</code> parameter is empty, then the Docker daemon assigns a host
     * path for your data volume. However, the data isn't guaranteed to persist after
     * the containers that are associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers can't mount directories on a
     * different drive, and mount point can't be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline void SetHost(HostVolumeProperties&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. If
     * the <code>host</code> parameter is empty, then the Docker daemon assigns a host
     * path for your data volume. However, the data isn't guaranteed to persist after
     * the containers that are associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers can't mount directories on a
     * different drive, and mount point can't be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline Volume& WithHost(const HostVolumeProperties& value) { SetHost(value); return *this;}

    /**
     * <p>This parameter is specified when you use bind mount host volumes. The
     * contents of the <code>host</code> parameter determine whether your bind mount
     * host volume persists on the host container instance and where it's stored. If
     * the <code>host</code> parameter is empty, then the Docker daemon assigns a host
     * path for your data volume. However, the data isn't guaranteed to persist after
     * the containers that are associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers can't mount directories on a
     * different drive, and mount point can't be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline Volume& WithHost(HostVolumeProperties&& value) { SetHost(std::move(value)); return *this;}


    /**
     * <p>This parameter is specified when you use Docker volumes.</p> <p>Windows
     * containers only support the use of the <code>local</code> driver. To use bind
     * mounts, specify the <code>host</code> parameter instead.</p>  <p>Docker
     * volumes aren't supported by tasks run on Fargate.</p> 
     */
    inline const DockerVolumeConfiguration& GetDockerVolumeConfiguration() const{ return m_dockerVolumeConfiguration; }

    /**
     * <p>This parameter is specified when you use Docker volumes.</p> <p>Windows
     * containers only support the use of the <code>local</code> driver. To use bind
     * mounts, specify the <code>host</code> parameter instead.</p>  <p>Docker
     * volumes aren't supported by tasks run on Fargate.</p> 
     */
    inline bool DockerVolumeConfigurationHasBeenSet() const { return m_dockerVolumeConfigurationHasBeenSet; }

    /**
     * <p>This parameter is specified when you use Docker volumes.</p> <p>Windows
     * containers only support the use of the <code>local</code> driver. To use bind
     * mounts, specify the <code>host</code> parameter instead.</p>  <p>Docker
     * volumes aren't supported by tasks run on Fargate.</p> 
     */
    inline void SetDockerVolumeConfiguration(const DockerVolumeConfiguration& value) { m_dockerVolumeConfigurationHasBeenSet = true; m_dockerVolumeConfiguration = value; }

    /**
     * <p>This parameter is specified when you use Docker volumes.</p> <p>Windows
     * containers only support the use of the <code>local</code> driver. To use bind
     * mounts, specify the <code>host</code> parameter instead.</p>  <p>Docker
     * volumes aren't supported by tasks run on Fargate.</p> 
     */
    inline void SetDockerVolumeConfiguration(DockerVolumeConfiguration&& value) { m_dockerVolumeConfigurationHasBeenSet = true; m_dockerVolumeConfiguration = std::move(value); }

    /**
     * <p>This parameter is specified when you use Docker volumes.</p> <p>Windows
     * containers only support the use of the <code>local</code> driver. To use bind
     * mounts, specify the <code>host</code> parameter instead.</p>  <p>Docker
     * volumes aren't supported by tasks run on Fargate.</p> 
     */
    inline Volume& WithDockerVolumeConfiguration(const DockerVolumeConfiguration& value) { SetDockerVolumeConfiguration(value); return *this;}

    /**
     * <p>This parameter is specified when you use Docker volumes.</p> <p>Windows
     * containers only support the use of the <code>local</code> driver. To use bind
     * mounts, specify the <code>host</code> parameter instead.</p>  <p>Docker
     * volumes aren't supported by tasks run on Fargate.</p> 
     */
    inline Volume& WithDockerVolumeConfiguration(DockerVolumeConfiguration&& value) { SetDockerVolumeConfiguration(std::move(value)); return *this;}


    /**
     * <p>This parameter is specified when you use an Amazon Elastic File System file
     * system for task storage.</p>
     */
    inline const EFSVolumeConfiguration& GetEfsVolumeConfiguration() const{ return m_efsVolumeConfiguration; }

    /**
     * <p>This parameter is specified when you use an Amazon Elastic File System file
     * system for task storage.</p>
     */
    inline bool EfsVolumeConfigurationHasBeenSet() const { return m_efsVolumeConfigurationHasBeenSet; }

    /**
     * <p>This parameter is specified when you use an Amazon Elastic File System file
     * system for task storage.</p>
     */
    inline void SetEfsVolumeConfiguration(const EFSVolumeConfiguration& value) { m_efsVolumeConfigurationHasBeenSet = true; m_efsVolumeConfiguration = value; }

    /**
     * <p>This parameter is specified when you use an Amazon Elastic File System file
     * system for task storage.</p>
     */
    inline void SetEfsVolumeConfiguration(EFSVolumeConfiguration&& value) { m_efsVolumeConfigurationHasBeenSet = true; m_efsVolumeConfiguration = std::move(value); }

    /**
     * <p>This parameter is specified when you use an Amazon Elastic File System file
     * system for task storage.</p>
     */
    inline Volume& WithEfsVolumeConfiguration(const EFSVolumeConfiguration& value) { SetEfsVolumeConfiguration(value); return *this;}

    /**
     * <p>This parameter is specified when you use an Amazon Elastic File System file
     * system for task storage.</p>
     */
    inline Volume& WithEfsVolumeConfiguration(EFSVolumeConfiguration&& value) { SetEfsVolumeConfiguration(std::move(value)); return *this;}


    /**
     * <p>This parameter is specified when you use Amazon FSx for Windows File Server
     * file system for task storage.</p>
     */
    inline const FSxWindowsFileServerVolumeConfiguration& GetFsxWindowsFileServerVolumeConfiguration() const{ return m_fsxWindowsFileServerVolumeConfiguration; }

    /**
     * <p>This parameter is specified when you use Amazon FSx for Windows File Server
     * file system for task storage.</p>
     */
    inline bool FsxWindowsFileServerVolumeConfigurationHasBeenSet() const { return m_fsxWindowsFileServerVolumeConfigurationHasBeenSet; }

    /**
     * <p>This parameter is specified when you use Amazon FSx for Windows File Server
     * file system for task storage.</p>
     */
    inline void SetFsxWindowsFileServerVolumeConfiguration(const FSxWindowsFileServerVolumeConfiguration& value) { m_fsxWindowsFileServerVolumeConfigurationHasBeenSet = true; m_fsxWindowsFileServerVolumeConfiguration = value; }

    /**
     * <p>This parameter is specified when you use Amazon FSx for Windows File Server
     * file system for task storage.</p>
     */
    inline void SetFsxWindowsFileServerVolumeConfiguration(FSxWindowsFileServerVolumeConfiguration&& value) { m_fsxWindowsFileServerVolumeConfigurationHasBeenSet = true; m_fsxWindowsFileServerVolumeConfiguration = std::move(value); }

    /**
     * <p>This parameter is specified when you use Amazon FSx for Windows File Server
     * file system for task storage.</p>
     */
    inline Volume& WithFsxWindowsFileServerVolumeConfiguration(const FSxWindowsFileServerVolumeConfiguration& value) { SetFsxWindowsFileServerVolumeConfiguration(value); return *this;}

    /**
     * <p>This parameter is specified when you use Amazon FSx for Windows File Server
     * file system for task storage.</p>
     */
    inline Volume& WithFsxWindowsFileServerVolumeConfiguration(FSxWindowsFileServerVolumeConfiguration&& value) { SetFsxWindowsFileServerVolumeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the volume should be configured at launch time. This is
     * used to create Amazon EBS volumes for standalone tasks or tasks created as part
     * of a service. Each task definition revision may only have one volume configured
     * at launch in the volume configuration.</p> <p>To configure a volume at launch
     * time, use this task definition revision and specify a
     * <code>volumeConfigurations</code> object when calling the
     * <code>CreateService</code>, <code>UpdateService</code>, <code>RunTask</code> or
     * <code>StartTask</code> APIs.</p>
     */
    inline bool GetConfiguredAtLaunch() const{ return m_configuredAtLaunch; }

    /**
     * <p>Indicates whether the volume should be configured at launch time. This is
     * used to create Amazon EBS volumes for standalone tasks or tasks created as part
     * of a service. Each task definition revision may only have one volume configured
     * at launch in the volume configuration.</p> <p>To configure a volume at launch
     * time, use this task definition revision and specify a
     * <code>volumeConfigurations</code> object when calling the
     * <code>CreateService</code>, <code>UpdateService</code>, <code>RunTask</code> or
     * <code>StartTask</code> APIs.</p>
     */
    inline bool ConfiguredAtLaunchHasBeenSet() const { return m_configuredAtLaunchHasBeenSet; }

    /**
     * <p>Indicates whether the volume should be configured at launch time. This is
     * used to create Amazon EBS volumes for standalone tasks or tasks created as part
     * of a service. Each task definition revision may only have one volume configured
     * at launch in the volume configuration.</p> <p>To configure a volume at launch
     * time, use this task definition revision and specify a
     * <code>volumeConfigurations</code> object when calling the
     * <code>CreateService</code>, <code>UpdateService</code>, <code>RunTask</code> or
     * <code>StartTask</code> APIs.</p>
     */
    inline void SetConfiguredAtLaunch(bool value) { m_configuredAtLaunchHasBeenSet = true; m_configuredAtLaunch = value; }

    /**
     * <p>Indicates whether the volume should be configured at launch time. This is
     * used to create Amazon EBS volumes for standalone tasks or tasks created as part
     * of a service. Each task definition revision may only have one volume configured
     * at launch in the volume configuration.</p> <p>To configure a volume at launch
     * time, use this task definition revision and specify a
     * <code>volumeConfigurations</code> object when calling the
     * <code>CreateService</code>, <code>UpdateService</code>, <code>RunTask</code> or
     * <code>StartTask</code> APIs.</p>
     */
    inline Volume& WithConfiguredAtLaunch(bool value) { SetConfiguredAtLaunch(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HostVolumeProperties m_host;
    bool m_hostHasBeenSet = false;

    DockerVolumeConfiguration m_dockerVolumeConfiguration;
    bool m_dockerVolumeConfigurationHasBeenSet = false;

    EFSVolumeConfiguration m_efsVolumeConfiguration;
    bool m_efsVolumeConfigurationHasBeenSet = false;

    FSxWindowsFileServerVolumeConfiguration m_fsxWindowsFileServerVolumeConfiguration;
    bool m_fsxWindowsFileServerVolumeConfigurationHasBeenSet = false;

    bool m_configuredAtLaunch;
    bool m_configuredAtLaunchHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
