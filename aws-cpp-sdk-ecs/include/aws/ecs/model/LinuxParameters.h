/*
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
#include <aws/ecs/model/KernelCapabilities.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Device.h>
#include <aws/ecs/model/Tmpfs.h>
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
   * <p>Linux-specific options that are applied to the container, such as Linux
   * <a>KernelCapabilities</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LinuxParameters">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API LinuxParameters
  {
  public:
    LinuxParameters();
    LinuxParameters(Aws::Utils::Json::JsonView jsonValue);
    LinuxParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p> <note> <p>If you are using
     * tasks that use the Fargate launch type, <code>capabilities</code> is supported
     * but the <code>add</code> parameter is not supported.</p> </note>
     */
    inline const KernelCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p> <note> <p>If you are using
     * tasks that use the Fargate launch type, <code>capabilities</code> is supported
     * but the <code>add</code> parameter is not supported.</p> </note>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p> <note> <p>If you are using
     * tasks that use the Fargate launch type, <code>capabilities</code> is supported
     * but the <code>add</code> parameter is not supported.</p> </note>
     */
    inline void SetCapabilities(const KernelCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p> <note> <p>If you are using
     * tasks that use the Fargate launch type, <code>capabilities</code> is supported
     * but the <code>add</code> parameter is not supported.</p> </note>
     */
    inline void SetCapabilities(KernelCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p> <note> <p>If you are using
     * tasks that use the Fargate launch type, <code>capabilities</code> is supported
     * but the <code>add</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& WithCapabilities(const KernelCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p> <note> <p>If you are using
     * tasks that use the Fargate launch type, <code>capabilities</code> is supported
     * but the <code>add</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& WithCapabilities(KernelCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}


    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>devices</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.25 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log in to your container instance and run the following command:
     * <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline bool GetInitProcessEnabled() const{ return m_initProcessEnabled; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.25 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log in to your container instance and run the following command:
     * <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline bool InitProcessEnabledHasBeenSet() const { return m_initProcessEnabledHasBeenSet; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.25 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log in to your container instance and run the following command:
     * <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline void SetInitProcessEnabled(bool value) { m_initProcessEnabledHasBeenSet = true; m_initProcessEnabled = value; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.25 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log in to your container instance and run the following command:
     * <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LinuxParameters& WithInitProcessEnabled(bool value) { SetInitProcessEnabled(value); return *this;}


    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>sharedMemorySize</code> parameter is not supported.</p> </note>
     */
    inline int GetSharedMemorySize() const{ return m_sharedMemorySize; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>sharedMemorySize</code> parameter is not supported.</p> </note>
     */
    inline bool SharedMemorySizeHasBeenSet() const { return m_sharedMemorySizeHasBeenSet; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>sharedMemorySize</code> parameter is not supported.</p> </note>
     */
    inline void SetSharedMemorySize(int value) { m_sharedMemorySizeHasBeenSet = true; m_sharedMemorySize = value; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>sharedMemorySize</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& WithSharedMemorySize(int value) { SetSharedMemorySize(value); return *this;}


    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline const Aws::Vector<Tmpfs>& GetTmpfs() const{ return m_tmpfs; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline bool TmpfsHasBeenSet() const { return m_tmpfsHasBeenSet; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline void SetTmpfs(const Aws::Vector<Tmpfs>& value) { m_tmpfsHasBeenSet = true; m_tmpfs = value; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline void SetTmpfs(Aws::Vector<Tmpfs>&& value) { m_tmpfsHasBeenSet = true; m_tmpfs = std::move(value); }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& WithTmpfs(const Aws::Vector<Tmpfs>& value) { SetTmpfs(value); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& WithTmpfs(Aws::Vector<Tmpfs>&& value) { SetTmpfs(std::move(value)); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& AddTmpfs(const Tmpfs& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(value); return *this; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter is not supported.</p> </note>
     */
    inline LinuxParameters& AddTmpfs(Tmpfs&& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(std::move(value)); return *this; }

  private:

    KernelCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet;

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet;

    bool m_initProcessEnabled;
    bool m_initProcessEnabledHasBeenSet;

    int m_sharedMemorySize;
    bool m_sharedMemorySizeHasBeenSet;

    Aws::Vector<Tmpfs> m_tmpfs;
    bool m_tmpfsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
