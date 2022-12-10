/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/Device.h>
#include <aws/batch/model/Tmpfs.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Linux-specific modifications that are applied to the container, such as
   * details for device mappings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/LinuxParameters">AWS
   * API Reference</a></p>
   */
  class LinuxParameters
  {
  public:
    AWS_BATCH_API LinuxParameters();
    AWS_BATCH_API LinuxParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API LinuxParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline LinuxParameters& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline LinuxParameters& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline LinuxParameters& AddDevices(const Device& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>Any of the host devices to expose to the container. This parameter maps to
     * <code>Devices</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--device</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline LinuxParameters& AddDevices(Device&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>If true, run an <code>init</code> process inside the container that forwards
     * signals and reaps processes. This parameter maps to the <code>--init</code>
     * option to <a href="https://docs.docker.com/engine/reference/run/">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline bool GetInitProcessEnabled() const{ return m_initProcessEnabled; }

    /**
     * <p>If true, run an <code>init</code> process inside the container that forwards
     * signals and reaps processes. This parameter maps to the <code>--init</code>
     * option to <a href="https://docs.docker.com/engine/reference/run/">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline bool InitProcessEnabledHasBeenSet() const { return m_initProcessEnabledHasBeenSet; }

    /**
     * <p>If true, run an <code>init</code> process inside the container that forwards
     * signals and reaps processes. This parameter maps to the <code>--init</code>
     * option to <a href="https://docs.docker.com/engine/reference/run/">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline void SetInitProcessEnabled(bool value) { m_initProcessEnabledHasBeenSet = true; m_initProcessEnabled = value; }

    /**
     * <p>If true, run an <code>init</code> process inside the container that forwards
     * signals and reaps processes. This parameter maps to the <code>--init</code>
     * option to <a href="https://docs.docker.com/engine/reference/run/">docker
     * run</a>. This parameter requires version 1.25 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline LinuxParameters& WithInitProcessEnabled(bool value) { SetInitProcessEnabled(value); return *this;}


    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline int GetSharedMemorySize() const{ return m_sharedMemorySize; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline bool SharedMemorySizeHasBeenSet() const { return m_sharedMemorySizeHasBeenSet; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline void SetSharedMemorySize(int value) { m_sharedMemorySizeHasBeenSet = true; m_sharedMemorySize = value; }

    /**
     * <p>The value for the size (in MiB) of the <code>/dev/shm</code> volume. This
     * parameter maps to the <code>--shm-size</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide it for these jobs.</p> 
     */
    inline LinuxParameters& WithSharedMemorySize(int value) { SetSharedMemorySize(value); return *this;}


    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline const Aws::Vector<Tmpfs>& GetTmpfs() const{ return m_tmpfs; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline bool TmpfsHasBeenSet() const { return m_tmpfsHasBeenSet; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline void SetTmpfs(const Aws::Vector<Tmpfs>& value) { m_tmpfsHasBeenSet = true; m_tmpfs = value; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline void SetTmpfs(Aws::Vector<Tmpfs>&& value) { m_tmpfsHasBeenSet = true; m_tmpfs = std::move(value); }

    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline LinuxParameters& WithTmpfs(const Aws::Vector<Tmpfs>& value) { SetTmpfs(value); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline LinuxParameters& WithTmpfs(Aws::Vector<Tmpfs>&& value) { SetTmpfs(std::move(value)); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline LinuxParameters& AddTmpfs(const Tmpfs& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(value); return *this; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the
     * <code>tmpfs</code> mount. This parameter maps to the <code>--tmpfs</code> option
     * to <a href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't provide this parameter for this resource type.</p> 
     */
    inline LinuxParameters& AddTmpfs(Tmpfs&& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(std::move(value)); return *this; }


    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * is translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a> where the
     * value is the sum of the container memory plus the <code>maxSwap</code> value.
     * For more information, see <a
     * href="https://docs.docker.com/config/containers/resource_constraints/#--memory-swap-details">
     * <code>--memory-swap</code> details</a> in the Docker documentation.</p> <p>If a
     * <code>maxSwap</code> value of <code>0</code> is specified, the container doesn't
     * use swap. Accepted values are <code>0</code> or any positive integer. If the
     * <code>maxSwap</code> parameter is omitted, the container doesn't use the swap
     * configuration for the container instance that it's running on. A
     * <code>maxSwap</code> value must be set for the <code>swappiness</code> parameter
     * to be used.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources. Don't provide it for these jobs.</p> 
     */
    inline int GetMaxSwap() const{ return m_maxSwap; }

    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * is translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a> where the
     * value is the sum of the container memory plus the <code>maxSwap</code> value.
     * For more information, see <a
     * href="https://docs.docker.com/config/containers/resource_constraints/#--memory-swap-details">
     * <code>--memory-swap</code> details</a> in the Docker documentation.</p> <p>If a
     * <code>maxSwap</code> value of <code>0</code> is specified, the container doesn't
     * use swap. Accepted values are <code>0</code> or any positive integer. If the
     * <code>maxSwap</code> parameter is omitted, the container doesn't use the swap
     * configuration for the container instance that it's running on. A
     * <code>maxSwap</code> value must be set for the <code>swappiness</code> parameter
     * to be used.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources. Don't provide it for these jobs.</p> 
     */
    inline bool MaxSwapHasBeenSet() const { return m_maxSwapHasBeenSet; }

    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * is translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a> where the
     * value is the sum of the container memory plus the <code>maxSwap</code> value.
     * For more information, see <a
     * href="https://docs.docker.com/config/containers/resource_constraints/#--memory-swap-details">
     * <code>--memory-swap</code> details</a> in the Docker documentation.</p> <p>If a
     * <code>maxSwap</code> value of <code>0</code> is specified, the container doesn't
     * use swap. Accepted values are <code>0</code> or any positive integer. If the
     * <code>maxSwap</code> parameter is omitted, the container doesn't use the swap
     * configuration for the container instance that it's running on. A
     * <code>maxSwap</code> value must be set for the <code>swappiness</code> parameter
     * to be used.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources. Don't provide it for these jobs.</p> 
     */
    inline void SetMaxSwap(int value) { m_maxSwapHasBeenSet = true; m_maxSwap = value; }

    /**
     * <p>The total amount of swap memory (in MiB) a container can use. This parameter
     * is translated to the <code>--memory-swap</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a> where the
     * value is the sum of the container memory plus the <code>maxSwap</code> value.
     * For more information, see <a
     * href="https://docs.docker.com/config/containers/resource_constraints/#--memory-swap-details">
     * <code>--memory-swap</code> details</a> in the Docker documentation.</p> <p>If a
     * <code>maxSwap</code> value of <code>0</code> is specified, the container doesn't
     * use swap. Accepted values are <code>0</code> or any positive integer. If the
     * <code>maxSwap</code> parameter is omitted, the container doesn't use the swap
     * configuration for the container instance that it's running on. A
     * <code>maxSwap</code> value must be set for the <code>swappiness</code> parameter
     * to be used.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources. Don't provide it for these jobs.</p> 
     */
    inline LinuxParameters& WithMaxSwap(int value) { SetMaxSwap(value); return *this;}


    /**
     * <p>You can use this parameter to tune a container's memory swappiness behavior.
     * A <code>swappiness</code> value of <code>0</code> causes swapping to not occur
     * unless absolutely necessary. A <code>swappiness</code> value of <code>100</code>
     * causes pages to be swapped aggressively. Valid values are whole numbers between
     * <code>0</code> and <code>100</code>. If the <code>swappiness</code> parameter
     * isn't specified, a default value of <code>60</code> is used. If a value isn't
     * specified for <code>maxSwap</code>, then this parameter is ignored. If
     * <code>maxSwap</code> is set to 0, the container doesn't use swap. This parameter
     * maps to the <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Consider the following when you use a per-container swap configuration.</p>
     * <ul> <li> <p>Swap space must be enabled and allocated on the container instance
     * for the containers to use.</p>  <p>By default, the Amazon ECS optimized
     * AMIs don't have swap enabled. You must enable swap on the instance to use this
     * feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-store-swap-volumes.html">Instance
     * store swap volumes</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>
     * or <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/ec2-memory-swap-file/">How
     * do I allocate memory to work as swap space in an Amazon EC2 instance by using a
     * swap file?</a> </p>  </li> <li> <p>The swap space parameters are only
     * supported for job definitions using EC2 resources.</p> </li> <li> <p>If the
     * <code>maxSwap</code> and <code>swappiness</code> parameters are omitted from a
     * job definition, each container has a default <code>swappiness</code> value of
     * 60. Moreover, the total swap usage is limited to two times the memory
     * reservation of the container.</p> </li> </ul>  <p>This parameter isn't
     * applicable to jobs that are running on Fargate resources. Don't provide it for
     * these jobs.</p> 
     */
    inline int GetSwappiness() const{ return m_swappiness; }

    /**
     * <p>You can use this parameter to tune a container's memory swappiness behavior.
     * A <code>swappiness</code> value of <code>0</code> causes swapping to not occur
     * unless absolutely necessary. A <code>swappiness</code> value of <code>100</code>
     * causes pages to be swapped aggressively. Valid values are whole numbers between
     * <code>0</code> and <code>100</code>. If the <code>swappiness</code> parameter
     * isn't specified, a default value of <code>60</code> is used. If a value isn't
     * specified for <code>maxSwap</code>, then this parameter is ignored. If
     * <code>maxSwap</code> is set to 0, the container doesn't use swap. This parameter
     * maps to the <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Consider the following when you use a per-container swap configuration.</p>
     * <ul> <li> <p>Swap space must be enabled and allocated on the container instance
     * for the containers to use.</p>  <p>By default, the Amazon ECS optimized
     * AMIs don't have swap enabled. You must enable swap on the instance to use this
     * feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-store-swap-volumes.html">Instance
     * store swap volumes</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>
     * or <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/ec2-memory-swap-file/">How
     * do I allocate memory to work as swap space in an Amazon EC2 instance by using a
     * swap file?</a> </p>  </li> <li> <p>The swap space parameters are only
     * supported for job definitions using EC2 resources.</p> </li> <li> <p>If the
     * <code>maxSwap</code> and <code>swappiness</code> parameters are omitted from a
     * job definition, each container has a default <code>swappiness</code> value of
     * 60. Moreover, the total swap usage is limited to two times the memory
     * reservation of the container.</p> </li> </ul>  <p>This parameter isn't
     * applicable to jobs that are running on Fargate resources. Don't provide it for
     * these jobs.</p> 
     */
    inline bool SwappinessHasBeenSet() const { return m_swappinessHasBeenSet; }

    /**
     * <p>You can use this parameter to tune a container's memory swappiness behavior.
     * A <code>swappiness</code> value of <code>0</code> causes swapping to not occur
     * unless absolutely necessary. A <code>swappiness</code> value of <code>100</code>
     * causes pages to be swapped aggressively. Valid values are whole numbers between
     * <code>0</code> and <code>100</code>. If the <code>swappiness</code> parameter
     * isn't specified, a default value of <code>60</code> is used. If a value isn't
     * specified for <code>maxSwap</code>, then this parameter is ignored. If
     * <code>maxSwap</code> is set to 0, the container doesn't use swap. This parameter
     * maps to the <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Consider the following when you use a per-container swap configuration.</p>
     * <ul> <li> <p>Swap space must be enabled and allocated on the container instance
     * for the containers to use.</p>  <p>By default, the Amazon ECS optimized
     * AMIs don't have swap enabled. You must enable swap on the instance to use this
     * feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-store-swap-volumes.html">Instance
     * store swap volumes</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>
     * or <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/ec2-memory-swap-file/">How
     * do I allocate memory to work as swap space in an Amazon EC2 instance by using a
     * swap file?</a> </p>  </li> <li> <p>The swap space parameters are only
     * supported for job definitions using EC2 resources.</p> </li> <li> <p>If the
     * <code>maxSwap</code> and <code>swappiness</code> parameters are omitted from a
     * job definition, each container has a default <code>swappiness</code> value of
     * 60. Moreover, the total swap usage is limited to two times the memory
     * reservation of the container.</p> </li> </ul>  <p>This parameter isn't
     * applicable to jobs that are running on Fargate resources. Don't provide it for
     * these jobs.</p> 
     */
    inline void SetSwappiness(int value) { m_swappinessHasBeenSet = true; m_swappiness = value; }

    /**
     * <p>You can use this parameter to tune a container's memory swappiness behavior.
     * A <code>swappiness</code> value of <code>0</code> causes swapping to not occur
     * unless absolutely necessary. A <code>swappiness</code> value of <code>100</code>
     * causes pages to be swapped aggressively. Valid values are whole numbers between
     * <code>0</code> and <code>100</code>. If the <code>swappiness</code> parameter
     * isn't specified, a default value of <code>60</code> is used. If a value isn't
     * specified for <code>maxSwap</code>, then this parameter is ignored. If
     * <code>maxSwap</code> is set to 0, the container doesn't use swap. This parameter
     * maps to the <code>--memory-swappiness</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Consider the following when you use a per-container swap configuration.</p>
     * <ul> <li> <p>Swap space must be enabled and allocated on the container instance
     * for the containers to use.</p>  <p>By default, the Amazon ECS optimized
     * AMIs don't have swap enabled. You must enable swap on the instance to use this
     * feature. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-store-swap-volumes.html">Instance
     * store swap volumes</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>
     * or <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/ec2-memory-swap-file/">How
     * do I allocate memory to work as swap space in an Amazon EC2 instance by using a
     * swap file?</a> </p>  </li> <li> <p>The swap space parameters are only
     * supported for job definitions using EC2 resources.</p> </li> <li> <p>If the
     * <code>maxSwap</code> and <code>swappiness</code> parameters are omitted from a
     * job definition, each container has a default <code>swappiness</code> value of
     * 60. Moreover, the total swap usage is limited to two times the memory
     * reservation of the container.</p> </li> </ul>  <p>This parameter isn't
     * applicable to jobs that are running on Fargate resources. Don't provide it for
     * these jobs.</p> 
     */
    inline LinuxParameters& WithSwappiness(int value) { SetSwappiness(value); return *this;}

  private:

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
} // namespace Batch
} // namespace Aws
