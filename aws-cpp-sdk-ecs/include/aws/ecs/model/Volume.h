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
#include <aws/ecs/model/HostVolumeProperties.h>
#include <aws/ecs/model/DockerVolumeConfiguration.h>
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
   * <p>A data volume used in a task definition. For tasks that use a Docker volume,
   * specify a <code>DockerVolumeConfiguration</code>. For tasks that use a bind
   * mount host volume, specify a <code>host</code> and optional
   * <code>sourcePath</code>. For more information, see <a
   * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguideusing_data_volumes.html">Using
   * Data Volumes in Tasks</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Volume">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Volume
  {
  public:
    Volume();
    Volume(Aws::Utils::Json::JsonView jsonValue);
    Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline Volume& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline Volume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
     * hyphens, and underscores are allowed. This name is referenced in the
     * <code>sourceVolume</code> parameter of container definition
     * <code>mountPoints</code>.</p>
     */
    inline Volume& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>This parameter is specified when using bind mount host volumes. Bind mount
     * host volumes are supported when using either the EC2 or Fargate launch types.
     * The contents of the <code>host</code> parameter determine whether your bind
     * mount host volume persists on the host container instance and where it is
     * stored. If the <code>host</code> parameter is empty, then the Docker daemon
     * assigns a host path for your data volume, but the data is not guaranteed to
     * persist after the containers associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers cannot mount directories on a
     * different drive, and mount point cannot be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline const HostVolumeProperties& GetHost() const{ return m_host; }

    /**
     * <p>This parameter is specified when using bind mount host volumes. Bind mount
     * host volumes are supported when using either the EC2 or Fargate launch types.
     * The contents of the <code>host</code> parameter determine whether your bind
     * mount host volume persists on the host container instance and where it is
     * stored. If the <code>host</code> parameter is empty, then the Docker daemon
     * assigns a host path for your data volume, but the data is not guaranteed to
     * persist after the containers associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers cannot mount directories on a
     * different drive, and mount point cannot be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline void SetHost(const HostVolumeProperties& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>This parameter is specified when using bind mount host volumes. Bind mount
     * host volumes are supported when using either the EC2 or Fargate launch types.
     * The contents of the <code>host</code> parameter determine whether your bind
     * mount host volume persists on the host container instance and where it is
     * stored. If the <code>host</code> parameter is empty, then the Docker daemon
     * assigns a host path for your data volume, but the data is not guaranteed to
     * persist after the containers associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers cannot mount directories on a
     * different drive, and mount point cannot be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline void SetHost(HostVolumeProperties&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>This parameter is specified when using bind mount host volumes. Bind mount
     * host volumes are supported when using either the EC2 or Fargate launch types.
     * The contents of the <code>host</code> parameter determine whether your bind
     * mount host volume persists on the host container instance and where it is
     * stored. If the <code>host</code> parameter is empty, then the Docker daemon
     * assigns a host path for your data volume, but the data is not guaranteed to
     * persist after the containers associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers cannot mount directories on a
     * different drive, and mount point cannot be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline Volume& WithHost(const HostVolumeProperties& value) { SetHost(value); return *this;}

    /**
     * <p>This parameter is specified when using bind mount host volumes. Bind mount
     * host volumes are supported when using either the EC2 or Fargate launch types.
     * The contents of the <code>host</code> parameter determine whether your bind
     * mount host volume persists on the host container instance and where it is
     * stored. If the <code>host</code> parameter is empty, then the Docker daemon
     * assigns a host path for your data volume, but the data is not guaranteed to
     * persist after the containers associated with it stop running.</p> <p>Windows
     * containers can mount whole directories on the same drive as
     * <code>$env:ProgramData</code>. Windows containers cannot mount directories on a
     * different drive, and mount point cannot be across drives. For example, you can
     * mount <code>C:\my\path:C:\my\path</code> and <code>D:\:D:\</code>, but not
     * <code>D:\my\path:C:\my\path</code> or <code>D:\:C:\my\path</code>.</p>
     */
    inline Volume& WithHost(HostVolumeProperties&& value) { SetHost(std::move(value)); return *this;}


    /**
     * <p>The configuration for the Docker volume. This parameter is specified when
     * using Docker volumes.</p>
     */
    inline const DockerVolumeConfiguration& GetDockerVolumeConfiguration() const{ return m_dockerVolumeConfiguration; }

    /**
     * <p>The configuration for the Docker volume. This parameter is specified when
     * using Docker volumes.</p>
     */
    inline void SetDockerVolumeConfiguration(const DockerVolumeConfiguration& value) { m_dockerVolumeConfigurationHasBeenSet = true; m_dockerVolumeConfiguration = value; }

    /**
     * <p>The configuration for the Docker volume. This parameter is specified when
     * using Docker volumes.</p>
     */
    inline void SetDockerVolumeConfiguration(DockerVolumeConfiguration&& value) { m_dockerVolumeConfigurationHasBeenSet = true; m_dockerVolumeConfiguration = std::move(value); }

    /**
     * <p>The configuration for the Docker volume. This parameter is specified when
     * using Docker volumes.</p>
     */
    inline Volume& WithDockerVolumeConfiguration(const DockerVolumeConfiguration& value) { SetDockerVolumeConfiguration(value); return *this;}

    /**
     * <p>The configuration for the Docker volume. This parameter is specified when
     * using Docker volumes.</p>
     */
    inline Volume& WithDockerVolumeConfiguration(DockerVolumeConfiguration&& value) { SetDockerVolumeConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    HostVolumeProperties m_host;
    bool m_hostHasBeenSet;

    DockerVolumeConfiguration m_dockerVolumeConfiguration;
    bool m_dockerVolumeConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
