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
   * <p>The Linux-specific options that are applied to the container, such as Linux
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LinuxParameters">AWS
   * API Reference</a></p>
   */
  class LinuxParameters
  {
  public:
    AWS_ECS_API LinuxParameters() = default;
    AWS_ECS_API LinuxParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API LinuxParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>  <p>For tasks that use
     * the Fargate launch type, <code>capabilities</code> is supported for all platform
     * versions but the <code>add</code> parameter is only supported if using platform
     * version 1.4.0 or later.</p> 
     */
    inline const KernelCapabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = KernelCapabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = KernelCapabilities>
    LinuxParameters& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the docker container create command and the
     * <code>--device</code> option to docker run.</p>  <p>If you're using tasks
     * that use the Fargate launch type, the <code>devices</code> parameter isn't
     * supported.</p> 
     */
    inline const Aws::Vector<Device>& GetDevices() const { return m_devices; }
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }
    template<typename DevicesT = Aws::Vector<Device>>
    void SetDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices = std::forward<DevicesT>(value); }
    template<typename DevicesT = Aws::Vector<Device>>
    LinuxParameters& WithDevices(DevicesT&& value) { SetDevices(std::forward<DevicesT>(value)); return *this;}
    template<typename DevicesT = Device>
    LinuxParameters& AddDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices.emplace_back(std::forward<DevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Run an <code>init</code> process inside the container that forwards signals
     * and reaps processes. This parameter maps to the <code>--init</code> option to
     * docker run. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline bool GetInitProcessEnabled() const { return m_initProcessEnabled; }
    inline bool InitProcessEnabledHasBeenSet() const { return m_initProcessEnabledHasBeenSet; }
    inline void SetInitProcessEnabled(bool value) { m_initProcessEnabledHasBeenSet = true; m_initProcessEnabled = value; }
    inline LinuxParameters& WithInitProcessEnabled(bool value) { SetInitProcessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to docker run.</p> 
     * <p>If you are using tasks that use the Fargate launch type, the
     * <code>sharedMemorySize</code> parameter is not supported.</p> 
     */
    inline int GetSharedMemorySize() const { return m_sharedMemorySize; }
    inline bool SharedMemorySizeHasBeenSet() const { return m_sharedMemorySizeHasBeenSet; }
    inline void SetSharedMemorySize(int value) { m_sharedMemorySizeHasBeenSet = true; m_sharedMemorySize = value; }
    inline LinuxParameters& WithSharedMemorySize(int value) { SetSharedMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount. This
     * parameter maps to the <code>--tmpfs</code> option to docker run.</p> 
     * <p>If you're using tasks that use the Fargate launch type, the
     * <code>tmpfs</code> parameter isn't supported.</p> 
     */
    inline const Aws::Vector<Tmpfs>& GetTmpfs() const { return m_tmpfs; }
    inline bool TmpfsHasBeenSet() const { return m_tmpfsHasBeenSet; }
    template<typename TmpfsT = Aws::Vector<Tmpfs>>
    void SetTmpfs(TmpfsT&& value) { m_tmpfsHasBeenSet = true; m_tmpfs = std::forward<TmpfsT>(value); }
    template<typename TmpfsT = Aws::Vector<Tmpfs>>
    LinuxParameters& WithTmpfs(TmpfsT&& value) { SetTmpfs(std::forward<TmpfsT>(value)); return *this;}
    template<typename TmpfsT = Tmpfs>
    LinuxParameters& AddTmpfs(TmpfsT&& value) { m_tmpfsHasBeenSet = true; m_tmpfs.emplace_back(std::forward<TmpfsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * will be translated to the <code>--memory-swap</code> option to docker run where
     * the value would be the sum of the container memory plus the <code>maxSwap</code>
     * value.</p> <p>If a <code>maxSwap</code> value of <code>0</code> is specified,
     * the container will not use swap. Accepted values are <code>0</code> or any
     * positive integer. If the <code>maxSwap</code> parameter is omitted, the
     * container will use the swap configuration for the container instance it is
     * running on. A <code>maxSwap</code> value must be set for the
     * <code>swappiness</code> parameter to be used.</p>  <p>If you're using
     * tasks that use the Fargate launch type, the <code>maxSwap</code> parameter isn't
     * supported.</p> <p>If you're using tasks on Amazon Linux 2023 the
     * <code>swappiness</code> parameter isn't supported.</p> 
     */
    inline int GetMaxSwap() const { return m_maxSwap; }
    inline bool MaxSwapHasBeenSet() const { return m_maxSwapHasBeenSet; }
    inline void SetMaxSwap(int value) { m_maxSwapHasBeenSet = true; m_maxSwap = value; }
    inline LinuxParameters& WithMaxSwap(int value) { SetMaxSwap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This allows you to tune a container's memory swappiness behavior. A
     * <code>swappiness</code> value of <code>0</code> will cause swapping to not
     * happen unless absolutely necessary. A <code>swappiness</code> value of
     * <code>100</code> will cause pages to be swapped very aggressively. Accepted
     * values are whole numbers between <code>0</code> and <code>100</code>. If the
     * <code>swappiness</code> parameter is not specified, a default value of
     * <code>60</code> is used. If a value is not specified for <code>maxSwap</code>
     * then this parameter is ignored. This parameter maps to the
     * <code>--memory-swappiness</code> option to docker run.</p>  <p>If you're
     * using tasks that use the Fargate launch type, the <code>swappiness</code>
     * parameter isn't supported.</p> <p>If you're using tasks on Amazon Linux 2023 the
     * <code>swappiness</code> parameter isn't supported.</p> 
     */
    inline int GetSwappiness() const { return m_swappiness; }
    inline bool SwappinessHasBeenSet() const { return m_swappinessHasBeenSet; }
    inline void SetSwappiness(int value) { m_swappinessHasBeenSet = true; m_swappiness = value; }
    inline LinuxParameters& WithSwappiness(int value) { SetSwappiness(value); return *this;}
    ///@}
  private:

    KernelCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Device> m_devices;
    bool m_devicesHasBeenSet = false;

    bool m_initProcessEnabled{false};
    bool m_initProcessEnabledHasBeenSet = false;

    int m_sharedMemorySize{0};
    bool m_sharedMemorySizeHasBeenSet = false;

    Aws::Vector<Tmpfs> m_tmpfs;
    bool m_tmpfsHasBeenSet = false;

    int m_maxSwap{0};
    bool m_maxSwapHasBeenSet = false;

    int m_swappiness{0};
    bool m_swappinessHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
