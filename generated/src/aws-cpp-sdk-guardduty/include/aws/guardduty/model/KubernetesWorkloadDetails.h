/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/Container.h>
#include <aws/guardduty/model/Volume.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Details about the Kubernetes workload involved in a Kubernetes
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesWorkloadDetails">AWS
   * API Reference</a></p>
   */
  class KubernetesWorkloadDetails
  {
  public:
    AWS_GUARDDUTY_API KubernetesWorkloadDetails() = default;
    AWS_GUARDDUTY_API KubernetesWorkloadDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesWorkloadDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Kubernetes workload name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KubernetesWorkloadDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    KubernetesWorkloadDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline const Aws::String& GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    template<typename UidT = Aws::String>
    void SetUid(UidT&& value) { m_uidHasBeenSet = true; m_uid = std::forward<UidT>(value); }
    template<typename UidT = Aws::String>
    KubernetesWorkloadDetails& WithUid(UidT&& value) { SetUid(std::forward<UidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    KubernetesWorkloadDetails& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the hostNetwork flag is enabled for the pods included in the
     * workload.</p>
     */
    inline bool GetHostNetwork() const { return m_hostNetwork; }
    inline bool HostNetworkHasBeenSet() const { return m_hostNetworkHasBeenSet; }
    inline void SetHostNetwork(bool value) { m_hostNetworkHasBeenSet = true; m_hostNetwork = value; }
    inline KubernetesWorkloadDetails& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<Container>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<Container>>
    KubernetesWorkloadDetails& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = Container>
    KubernetesWorkloadDetails& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    KubernetesWorkloadDetails& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    KubernetesWorkloadDetails& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service account name that is associated with a Kubernetes workload.</p>
     */
    inline const Aws::String& GetServiceAccountName() const { return m_serviceAccountName; }
    inline bool ServiceAccountNameHasBeenSet() const { return m_serviceAccountNameHasBeenSet; }
    template<typename ServiceAccountNameT = Aws::String>
    void SetServiceAccountName(ServiceAccountNameT&& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = std::forward<ServiceAccountNameT>(value); }
    template<typename ServiceAccountNameT = Aws::String>
    KubernetesWorkloadDetails& WithServiceAccountName(ServiceAccountNameT&& value) { SetServiceAccountName(std::forward<ServiceAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the host IPC flag is enabled for the pods in the workload.</p>
     */
    inline bool GetHostIPC() const { return m_hostIPC; }
    inline bool HostIPCHasBeenSet() const { return m_hostIPCHasBeenSet; }
    inline void SetHostIPC(bool value) { m_hostIPCHasBeenSet = true; m_hostIPC = value; }
    inline KubernetesWorkloadDetails& WithHostIPC(bool value) { SetHostIPC(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the host PID flag is enabled for the pods in the workload. </p>
     */
    inline bool GetHostPID() const { return m_hostPID; }
    inline bool HostPIDHasBeenSet() const { return m_hostPIDHasBeenSet; }
    inline void SetHostPID(bool value) { m_hostPIDHasBeenSet = true; m_hostPID = value; }
    inline KubernetesWorkloadDetails& WithHostPID(bool value) { SetHostPID(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    bool m_hostNetwork{false};
    bool m_hostNetworkHasBeenSet = false;

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_serviceAccountName;
    bool m_serviceAccountNameHasBeenSet = false;

    bool m_hostIPC{false};
    bool m_hostIPCHasBeenSet = false;

    bool m_hostPID{false};
    bool m_hostPIDHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
