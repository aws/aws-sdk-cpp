/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LinuxParameters
  {
  public:
    AWS_ECS_API LinuxParameters();
    AWS_ECS_API LinuxParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API LinuxParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>  <p>For tasks that use
     * the Fargate launch type, <code>capabilities</code> is supported for all platform
     * versions but the <code>add</code> parameter is only supported if using platform
     * version 1.4.0 or later.</p> 
     */
    inline const KernelCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>  <p>For tasks that use
     * the Fargate launch type, <code>capabilities</code> is supported for all platform
     * versions but the <code>add</code> parameter is only supported if using platform
     * version 1.4.0 or later.</p> 
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>  <p>For tasks that use
     * the Fargate launch type, <code>capabilities</code> is supported for all platform
     * versions but the <code>add</code> parameter is only supported if using platform
     * version 1.4.0 or later.</p> 
     */
    inline void SetCapabilities(const KernelCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>  <p>For tasks that use
     * the Fargate launch type, <code>capabilities</code> is supported for all platform
     * versions but the <code>add</code> parameter is only supported if using platform
     * version 1.4.0 or later.</p> 
     */
    inline void SetCapabilities(KernelCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>  <p>For tasks that use
     * the Fargate launch type, <code>capabilities</code> is supported for all platform
     * versions but the <code>add</code> parameter is only supported if using platform
     * version 1.4.0 or later.</p> 
     */
    inline LinuxParameters& WithCapabilities(const KernelCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>  <p>For tasks that use
     * the Fargate launch type, <code>capabilities</code> is supported for all platform
     * versions but the <code>add</code> parameter is only supported if using platform
     * version 1.4.0 or later.</p> 
     */
    inline LinuxParameters& WithCapabilities(KernelCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}


    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>devices</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline bool GetInitProcessEnabled() const{ return m_initProcessEnabled; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline bool InitProcessEnabledHasBeenSet() const { return m_initProcessEnabledHasBeenSet; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline void SetInitProcessEnabled(bool value) { m_initProcessEnabledHasBeenSet = true; m_initProcessEnabled = value; }

    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline LinuxParameters& WithInitProcessEnabled(bool value) { SetInitProcessEnabled(value); return *this;}


    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you are using tasks that use the Fargate launch type,
     * the <code>sharedMemorySize</code> parameter is not supported.</p> 
     */
    inline int GetSharedMemorySize() const{ return m_sharedMemorySize; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you are using tasks that use the Fargate launch type,
     * the <code>sharedMemorySize</code> parameter is not supported.</p> 
     */
    inline bool SharedMemorySizeHasBeenSet() const { return m_sharedMemorySizeHasBeenSet; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you are using tasks that use the Fargate launch type,
     * the <code>sharedMemorySize</code> parameter is not supported.</p> 
     */
    inline void SetSharedMemorySize(int value) { m_sharedMemorySizeHasBeenSet = true; m_sharedMemorySize = value; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you are using tasks that use the Fargate launch type,
     * the <code>sharedMemorySize</code> parameter is not supported.</p> 
     */
    inline LinuxParameters& WithSharedMemorySize(int value) { SetSharedMemorySize(value); return *this;}


    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline const Aws::Vector<Tmpfs>& GetTmpfs() const{ return m_tmpfs; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline bool TmpfsHasBeenSet() const { return m_tmpfsHasBeenSet; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline void SetTmpfs(const Aws::Vector<Tmpfs>& value) { m_tmpfsHasBeenSet = true; m_tmpfs = value; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline void SetTmpfs(Aws::Vector<Tmpfs>&& value) { m_tmpfsHasBeenSet = true; m_tmpfs = std::move(value); }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& WithTmpfs(const Aws::Vector<Tmpfs>& value) { SetTmpfs(value); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& WithTmpfs(Aws::Vector<Tmpfs>&& value) { SetTmpfs(std::move(value)); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& AddTmpfs(const Tmpfs& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(value); return *this; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& AddTmpfs(Tmpfs&& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(std::move(value)); return *this; }


    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * will be translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a> where the value would be the sum of the container memory plus the
     * <code>maxSwap</code> value.</p> <p>If a <code>maxSwap</code> value of
     * <code>0</code> is specified, the container will not use swap. Accepted values
     * are <code>0</code> or any positive integer. If the <code>maxSwap</code>
     * parameter is omitted, the container will use the swap configuration for the
     * container instance it is running on. A <code>maxSwap</code> value must be set
     * for the <code>swappiness</code> parameter to be used.</p>  <p>If you're
     * using tasks that use the Fargate launch type, the <code>maxSwap</code> parameter
     * isn't supported.</p> 
     */
    inline int GetMaxSwap() const{ return m_maxSwap; }

    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * will be translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a> where the value would be the sum of the container memory plus the
     * <code>maxSwap</code> value.</p> <p>If a <code>maxSwap</code> value of
     * <code>0</code> is specified, the container will not use swap. Accepted values
     * are <code>0</code> or any positive integer. If the <code>maxSwap</code>
     * parameter is omitted, the container will use the swap configuration for the
     * container instance it is running on. A <code>maxSwap</code> value must be set
     * for the <code>swappiness</code> parameter to be used.</p>  <p>If you're
     * using tasks that use the Fargate launch type, the <code>maxSwap</code> parameter
     * isn't supported.</p> 
     */
    inline bool MaxSwapHasBeenSet() const { return m_maxSwapHasBeenSet; }

    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * will be translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a> where the value would be the sum of the container memory plus the
     * <code>maxSwap</code> value.</p> <p>If a <code>maxSwap</code> value of
     * <code>0</code> is specified, the container will not use swap. Accepted values
     * are <code>0</code> or any positive integer. If the <code>maxSwap</code>
     * parameter is omitted, the container will use the swap configuration for the
     * container instance it is running on. A <code>maxSwap</code> value must be set
     * for the <code>swappiness</code> parameter to be used.</p>  <p>If you're
     * using tasks that use the Fargate launch type, the <code>maxSwap</code> parameter
     * isn't supported.</p> 
     */
    inline void SetMaxSwap(int value) { m_maxSwapHasBeenSet = true; m_maxSwap = value; }

    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * will be translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a> where the value would be the sum of the container memory plus the
     * <code>maxSwap</code> value.</p> <p>If a <code>maxSwap</code> value of
     * <code>0</code> is specified, the container will not use swap. Accepted values
     * are <code>0</code> or any positive integer. If the <code>maxSwap</code>
     * parameter is omitted, the container will use the swap configuration for the
     * container instance it is running on. A <code>maxSwap</code> value must be set
     * for the <code>swappiness</code> parameter to be used.</p>  <p>If you're
     * using tasks that use the Fargate launch type, the <code>maxSwap</code> parameter
     * isn't supported.</p> 
     */
    inline LinuxParameters& WithMaxSwap(int value) { SetMaxSwap(value); return *this;}


    /**
     * <p>This allows you to tune a container's memory swappiness behavior. A
     * <code>swappiness</code> value of <code>0</code> will cause swapping to not
     * happen unless absolutely necessary. A <code>swappiness</code> value of
     * <code>100</code> will cause pages to be swapped very aggressively. Accepted
     * values are whole numbers between <code>0</code> and <code>100</code>. If the
     * <code>swappiness</code> parameter is not specified, a default value of
     * <code>60</code> is used. If a value is not specified for <code>maxSwap</code>
     * then this parameter is ignored. This parameter maps to the
     * <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>swappiness</code> parameter isn't supported.</p> 
     */
    inline int GetSwappiness() const{ return m_swappiness; }

    /**
     * <p>This allows you to tune a container's memory swappiness behavior. A
     * <code>swappiness</code> value of <code>0</code> will cause swapping to not
     * happen unless absolutely necessary. A <code>swappiness</code> value of
     * <code>100</code> will cause pages to be swapped very aggressively. Accepted
     * values are whole numbers between <code>0</code> and <code>100</code>. If the
     * <code>swappiness</code> parameter is not specified, a default value of
     * <code>60</code> is used. If a value is not specified for <code>maxSwap</code>
     * then this parameter is ignored. This parameter maps to the
     * <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>swappiness</code> parameter isn't supported.</p> 
     */
    inline bool SwappinessHasBeenSet() const { return m_swappinessHasBeenSet; }

    /**
     * <p>This allows you to tune a container's memory swappiness behavior. A
     * <code>swappiness</code> value of <code>0</code> will cause swapping to not
     * happen unless absolutely necessary. A <code>swappiness</code> value of
     * <code>100</code> will cause pages to be swapped very aggressively. Accepted
     * values are whole numbers between <code>0</code> and <code>100</code>. If the
     * <code>swappiness</code> parameter is not specified, a default value of
     * <code>60</code> is used. If a value is not specified for <code>maxSwap</code>
     * then this parameter is ignored. This parameter maps to the
     * <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>swappiness</code> parameter isn't supported.</p> 
     */
    inline void SetSwappiness(int value) { m_swappinessHasBeenSet = true; m_swappiness = value; }

    /**
     * <p>This allows you to tune a container's memory swappiness behavior. A
     * <code>swappiness</code> value of <code>0</code> will cause swapping to not
     * happen unless absolutely necessary. A <code>swappiness</code> value of
     * <code>100</code> will cause pages to be swapped very aggressively. Accepted
     * values are whole numbers between <code>0</code> and <code>100</code>. If the
     * <code>swappiness</code> parameter is not specified, a default value of
     * <code>60</code> is used. If a value is not specified for <code>maxSwap</code>
     * then this parameter is ignored. This parameter maps to the
     * <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>If you're using tasks that use the Fargate launch type,
     * the <code>swappiness</code> parameter isn't supported.</p> 
     */
    inline LinuxParameters& WithSwappiness(int value) { SetSwappiness(value); return *this;}

  private:

    KernelCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet = false;

    bool m_initProcessEnabled;
    bool m_initProcessEnabledHasBeenSet = false;

    int m_sharedMemorySize;
    bool m_sharedMemorySizeHasBeenSet = false;

    Aws::Vector<Tmpfs> m_tmpfs;
    bool m_tmpfsHasBeenSet = false;

    int m_maxSwap;
    bool m_maxSwapHasBeenSet = false;

    int m_swappiness;
    bool m_swappinessHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
