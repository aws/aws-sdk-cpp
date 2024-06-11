/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/HealthStatus.h>
#include <aws/ecs/model/NetworkBinding.h>
#include <aws/ecs/model/NetworkInterface.h>
#include <aws/ecs/model/ManagedAgent.h>
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
   * <p>A Docker container that's part of a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Container">AWS API
   * Reference</a></p>
   */
  class Container
  {
  public:
    AWS_ECS_API Container();
    AWS_ECS_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline const Aws::String& GetContainerArn() const{ return m_containerArn; }
    inline bool ContainerArnHasBeenSet() const { return m_containerArnHasBeenSet; }
    inline void SetContainerArn(const Aws::String& value) { m_containerArnHasBeenSet = true; m_containerArn = value; }
    inline void SetContainerArn(Aws::String&& value) { m_containerArnHasBeenSet = true; m_containerArn = std::move(value); }
    inline void SetContainerArn(const char* value) { m_containerArnHasBeenSet = true; m_containerArn.assign(value); }
    inline Container& WithContainerArn(const Aws::String& value) { SetContainerArn(value); return *this;}
    inline Container& WithContainerArn(Aws::String&& value) { SetContainerArn(std::move(value)); return *this;}
    inline Container& WithContainerArn(const char* value) { SetContainerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }
    inline Container& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}
    inline Container& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}
    inline Container& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Container& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Container& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Container& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used for the container.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline Container& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline Container& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline Container& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container image manifest digest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }
    inline Container& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}
    inline Container& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}
    inline Container& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Docker container.</p>
     */
    inline const Aws::String& GetRuntimeId() const{ return m_runtimeId; }
    inline bool RuntimeIdHasBeenSet() const { return m_runtimeIdHasBeenSet; }
    inline void SetRuntimeId(const Aws::String& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = value; }
    inline void SetRuntimeId(Aws::String&& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = std::move(value); }
    inline void SetRuntimeId(const char* value) { m_runtimeIdHasBeenSet = true; m_runtimeId.assign(value); }
    inline Container& WithRuntimeId(const Aws::String& value) { SetRuntimeId(value); return *this;}
    inline Container& WithRuntimeId(Aws::String&& value) { SetRuntimeId(std::move(value)); return *this;}
    inline Container& WithRuntimeId(const char* value) { SetRuntimeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known status of the container.</p>
     */
    inline const Aws::String& GetLastStatus() const{ return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(const Aws::String& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline void SetLastStatus(Aws::String&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }
    inline void SetLastStatus(const char* value) { m_lastStatusHasBeenSet = true; m_lastStatus.assign(value); }
    inline Container& WithLastStatus(const Aws::String& value) { SetLastStatus(value); return *this;}
    inline Container& WithLastStatus(Aws::String&& value) { SetLastStatus(std::move(value)); return *this;}
    inline Container& WithLastStatus(const char* value) { SetLastStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code returned from the container.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline Container& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline Container& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline Container& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline Container& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline const Aws::Vector<NetworkBinding>& GetNetworkBindings() const{ return m_networkBindings; }
    inline bool NetworkBindingsHasBeenSet() const { return m_networkBindingsHasBeenSet; }
    inline void SetNetworkBindings(const Aws::Vector<NetworkBinding>& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = value; }
    inline void SetNetworkBindings(Aws::Vector<NetworkBinding>&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = std::move(value); }
    inline Container& WithNetworkBindings(const Aws::Vector<NetworkBinding>& value) { SetNetworkBindings(value); return *this;}
    inline Container& WithNetworkBindings(Aws::Vector<NetworkBinding>&& value) { SetNetworkBindings(std::move(value)); return *this;}
    inline Container& AddNetworkBindings(const NetworkBinding& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(value); return *this; }
    inline Container& AddNetworkBindings(NetworkBinding&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline Container& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}
    inline Container& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline Container& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline Container& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The health status of the container. If health checks aren't configured for
     * this container in its task definition, then it reports the health status as
     * <code>UNKNOWN</code>.</p>
     */
    inline const HealthStatus& GetHealthStatus() const{ return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(const HealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline void SetHealthStatus(HealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }
    inline Container& WithHealthStatus(const HealthStatus& value) { SetHealthStatus(value); return *this;}
    inline Container& WithHealthStatus(HealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of any Amazon ECS managed agents associated with the
     * container.</p>
     */
    inline const Aws::Vector<ManagedAgent>& GetManagedAgents() const{ return m_managedAgents; }
    inline bool ManagedAgentsHasBeenSet() const { return m_managedAgentsHasBeenSet; }
    inline void SetManagedAgents(const Aws::Vector<ManagedAgent>& value) { m_managedAgentsHasBeenSet = true; m_managedAgents = value; }
    inline void SetManagedAgents(Aws::Vector<ManagedAgent>&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents = std::move(value); }
    inline Container& WithManagedAgents(const Aws::Vector<ManagedAgent>& value) { SetManagedAgents(value); return *this;}
    inline Container& WithManagedAgents(Aws::Vector<ManagedAgent>&& value) { SetManagedAgents(std::move(value)); return *this;}
    inline Container& AddManagedAgents(const ManagedAgent& value) { m_managedAgentsHasBeenSet = true; m_managedAgents.push_back(value); return *this; }
    inline Container& AddManagedAgents(ManagedAgent&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units set for the container. The value is <code>0</code> if
     * no value was specified in the container definition when the task definition was
     * registered.</p>
     */
    inline const Aws::String& GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(const Aws::String& value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline void SetCpu(Aws::String&& value) { m_cpuHasBeenSet = true; m_cpu = std::move(value); }
    inline void SetCpu(const char* value) { m_cpuHasBeenSet = true; m_cpu.assign(value); }
    inline Container& WithCpu(const Aws::String& value) { SetCpu(value); return *this;}
    inline Container& WithCpu(Aws::String&& value) { SetCpu(std::move(value)); return *this;}
    inline Container& WithCpu(const char* value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hard limit (in MiB) of memory set for the container.</p>
     */
    inline const Aws::String& GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(const Aws::String& value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline void SetMemory(Aws::String&& value) { m_memoryHasBeenSet = true; m_memory = std::move(value); }
    inline void SetMemory(const char* value) { m_memoryHasBeenSet = true; m_memory.assign(value); }
    inline Container& WithMemory(const Aws::String& value) { SetMemory(value); return *this;}
    inline Container& WithMemory(Aws::String&& value) { SetMemory(std::move(value)); return *this;}
    inline Container& WithMemory(const char* value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit (in MiB) of memory set for the container.</p>
     */
    inline const Aws::String& GetMemoryReservation() const{ return m_memoryReservation; }
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
    inline void SetMemoryReservation(const Aws::String& value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }
    inline void SetMemoryReservation(Aws::String&& value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = std::move(value); }
    inline void SetMemoryReservation(const char* value) { m_memoryReservationHasBeenSet = true; m_memoryReservation.assign(value); }
    inline Container& WithMemoryReservation(const Aws::String& value) { SetMemoryReservation(value); return *this;}
    inline Container& WithMemoryReservation(Aws::String&& value) { SetMemoryReservation(std::move(value)); return *this;}
    inline Container& WithMemoryReservation(const char* value) { SetMemoryReservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of each GPU assigned to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGpuIds() const{ return m_gpuIds; }
    inline bool GpuIdsHasBeenSet() const { return m_gpuIdsHasBeenSet; }
    inline void SetGpuIds(const Aws::Vector<Aws::String>& value) { m_gpuIdsHasBeenSet = true; m_gpuIds = value; }
    inline void SetGpuIds(Aws::Vector<Aws::String>&& value) { m_gpuIdsHasBeenSet = true; m_gpuIds = std::move(value); }
    inline Container& WithGpuIds(const Aws::Vector<Aws::String>& value) { SetGpuIds(value); return *this;}
    inline Container& WithGpuIds(Aws::Vector<Aws::String>&& value) { SetGpuIds(std::move(value)); return *this;}
    inline Container& AddGpuIds(const Aws::String& value) { m_gpuIdsHasBeenSet = true; m_gpuIds.push_back(value); return *this; }
    inline Container& AddGpuIds(Aws::String&& value) { m_gpuIdsHasBeenSet = true; m_gpuIds.push_back(std::move(value)); return *this; }
    inline Container& AddGpuIds(const char* value) { m_gpuIdsHasBeenSet = true; m_gpuIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_containerArn;
    bool m_containerArnHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_runtimeId;
    bool m_runtimeIdHasBeenSet = false;

    Aws::String m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    int m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<NetworkBinding> m_networkBindings;
    bool m_networkBindingsHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    HealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::Vector<ManagedAgent> m_managedAgents;
    bool m_managedAgentsHasBeenSet = false;

    Aws::String m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::String m_memory;
    bool m_memoryHasBeenSet = false;

    Aws::String m_memoryReservation;
    bool m_memoryReservationHasBeenSet = false;

    Aws::Vector<Aws::String> m_gpuIds;
    bool m_gpuIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
