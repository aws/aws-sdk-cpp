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
    AWS_ECS_API Container() = default;
    AWS_ECS_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container.</p>
     */
    inline const Aws::String& GetContainerArn() const { return m_containerArn; }
    inline bool ContainerArnHasBeenSet() const { return m_containerArnHasBeenSet; }
    template<typename ContainerArnT = Aws::String>
    void SetContainerArn(ContainerArnT&& value) { m_containerArnHasBeenSet = true; m_containerArn = std::forward<ContainerArnT>(value); }
    template<typename ContainerArnT = Aws::String>
    Container& WithContainerArn(ContainerArnT&& value) { SetContainerArn(std::forward<ContainerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the task.</p>
     */
    inline const Aws::String& GetTaskArn() const { return m_taskArn; }
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
    template<typename TaskArnT = Aws::String>
    void SetTaskArn(TaskArnT&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::forward<TaskArnT>(value); }
    template<typename TaskArnT = Aws::String>
    Container& WithTaskArn(TaskArnT&& value) { SetTaskArn(std::forward<TaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Container& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used for the container.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    Container& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container image manifest digest.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    Container& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Docker container.</p>
     */
    inline const Aws::String& GetRuntimeId() const { return m_runtimeId; }
    inline bool RuntimeIdHasBeenSet() const { return m_runtimeIdHasBeenSet; }
    template<typename RuntimeIdT = Aws::String>
    void SetRuntimeId(RuntimeIdT&& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = std::forward<RuntimeIdT>(value); }
    template<typename RuntimeIdT = Aws::String>
    Container& WithRuntimeId(RuntimeIdT&& value) { SetRuntimeId(std::forward<RuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known status of the container.</p>
     */
    inline const Aws::String& GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    template<typename LastStatusT = Aws::String>
    void SetLastStatus(LastStatusT&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::forward<LastStatusT>(value); }
    template<typename LastStatusT = Aws::String>
    Container& WithLastStatus(LastStatusT&& value) { SetLastStatus(std::forward<LastStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code returned from the container.</p>
     */
    inline int GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline Container& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short (1024 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    Container& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network bindings associated with the container.</p>
     */
    inline const Aws::Vector<NetworkBinding>& GetNetworkBindings() const { return m_networkBindings; }
    inline bool NetworkBindingsHasBeenSet() const { return m_networkBindingsHasBeenSet; }
    template<typename NetworkBindingsT = Aws::Vector<NetworkBinding>>
    void SetNetworkBindings(NetworkBindingsT&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = std::forward<NetworkBindingsT>(value); }
    template<typename NetworkBindingsT = Aws::Vector<NetworkBinding>>
    Container& WithNetworkBindings(NetworkBindingsT&& value) { SetNetworkBindings(std::forward<NetworkBindingsT>(value)); return *this;}
    template<typename NetworkBindingsT = NetworkBinding>
    Container& AddNetworkBindings(NetworkBindingsT&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.emplace_back(std::forward<NetworkBindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network interfaces associated with the container.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    Container& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    Container& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The health status of the container. If health checks aren't configured for
     * this container in its task definition, then it reports the health status as
     * <code>UNKNOWN</code>.</p>
     */
    inline HealthStatus GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(HealthStatus value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline Container& WithHealthStatus(HealthStatus value) { SetHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of any Amazon ECS managed agents associated with the
     * container.</p>
     */
    inline const Aws::Vector<ManagedAgent>& GetManagedAgents() const { return m_managedAgents; }
    inline bool ManagedAgentsHasBeenSet() const { return m_managedAgentsHasBeenSet; }
    template<typename ManagedAgentsT = Aws::Vector<ManagedAgent>>
    void SetManagedAgents(ManagedAgentsT&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents = std::forward<ManagedAgentsT>(value); }
    template<typename ManagedAgentsT = Aws::Vector<ManagedAgent>>
    Container& WithManagedAgents(ManagedAgentsT&& value) { SetManagedAgents(std::forward<ManagedAgentsT>(value)); return *this;}
    template<typename ManagedAgentsT = ManagedAgent>
    Container& AddManagedAgents(ManagedAgentsT&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents.emplace_back(std::forward<ManagedAgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units set for the container. The value is <code>0</code> if
     * no value was specified in the container definition when the task definition was
     * registered.</p>
     */
    inline const Aws::String& GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    template<typename CpuT = Aws::String>
    void SetCpu(CpuT&& value) { m_cpuHasBeenSet = true; m_cpu = std::forward<CpuT>(value); }
    template<typename CpuT = Aws::String>
    Container& WithCpu(CpuT&& value) { SetCpu(std::forward<CpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hard limit (in MiB) of memory set for the container.</p>
     */
    inline const Aws::String& GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    template<typename MemoryT = Aws::String>
    void SetMemory(MemoryT&& value) { m_memoryHasBeenSet = true; m_memory = std::forward<MemoryT>(value); }
    template<typename MemoryT = Aws::String>
    Container& WithMemory(MemoryT&& value) { SetMemory(std::forward<MemoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit (in MiB) of memory set for the container.</p>
     */
    inline const Aws::String& GetMemoryReservation() const { return m_memoryReservation; }
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
    template<typename MemoryReservationT = Aws::String>
    void SetMemoryReservation(MemoryReservationT&& value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = std::forward<MemoryReservationT>(value); }
    template<typename MemoryReservationT = Aws::String>
    Container& WithMemoryReservation(MemoryReservationT&& value) { SetMemoryReservation(std::forward<MemoryReservationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of each GPU assigned to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGpuIds() const { return m_gpuIds; }
    inline bool GpuIdsHasBeenSet() const { return m_gpuIdsHasBeenSet; }
    template<typename GpuIdsT = Aws::Vector<Aws::String>>
    void SetGpuIds(GpuIdsT&& value) { m_gpuIdsHasBeenSet = true; m_gpuIds = std::forward<GpuIdsT>(value); }
    template<typename GpuIdsT = Aws::Vector<Aws::String>>
    Container& WithGpuIds(GpuIdsT&& value) { SetGpuIds(std::forward<GpuIdsT>(value)); return *this;}
    template<typename GpuIdsT = Aws::String>
    Container& AddGpuIds(GpuIdsT&& value) { m_gpuIdsHasBeenSet = true; m_gpuIds.emplace_back(std::forward<GpuIdsT>(value)); return *this; }
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

    int m_exitCode{0};
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<NetworkBinding> m_networkBindings;
    bool m_networkBindingsHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    HealthStatus m_healthStatus{HealthStatus::NOT_SET};
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
