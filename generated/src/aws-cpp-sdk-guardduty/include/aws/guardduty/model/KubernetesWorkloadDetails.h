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
    AWS_GUARDDUTY_API KubernetesWorkloadDetails();
    AWS_GUARDDUTY_API KubernetesWorkloadDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesWorkloadDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Kubernetes workload name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline KubernetesWorkloadDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline KubernetesWorkloadDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline KubernetesWorkloadDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline KubernetesWorkloadDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline KubernetesWorkloadDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline KubernetesWorkloadDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline KubernetesWorkloadDetails& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline KubernetesWorkloadDetails& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline KubernetesWorkloadDetails& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline KubernetesWorkloadDetails& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline KubernetesWorkloadDetails& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline KubernetesWorkloadDetails& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the hostNetwork flag is enabled for the pods included in the
     * workload.</p>
     */
    inline bool GetHostNetwork() const{ return m_hostNetwork; }
    inline bool HostNetworkHasBeenSet() const { return m_hostNetworkHasBeenSet; }
    inline void SetHostNetwork(bool value) { m_hostNetworkHasBeenSet = true; m_hostNetwork = value; }
    inline KubernetesWorkloadDetails& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline KubernetesWorkloadDetails& WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}
    inline KubernetesWorkloadDetails& WithContainers(Aws::Vector<Container>&& value) { SetContainers(std::move(value)); return *this;}
    inline KubernetesWorkloadDetails& AddContainers(const Container& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline KubernetesWorkloadDetails& AddContainers(Container&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }
    inline KubernetesWorkloadDetails& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}
    inline KubernetesWorkloadDetails& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}
    inline KubernetesWorkloadDetails& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }
    inline KubernetesWorkloadDetails& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service account name that is associated with a Kubernetes workload.</p>
     */
    inline const Aws::String& GetServiceAccountName() const{ return m_serviceAccountName; }
    inline bool ServiceAccountNameHasBeenSet() const { return m_serviceAccountNameHasBeenSet; }
    inline void SetServiceAccountName(const Aws::String& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = value; }
    inline void SetServiceAccountName(Aws::String&& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = std::move(value); }
    inline void SetServiceAccountName(const char* value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName.assign(value); }
    inline KubernetesWorkloadDetails& WithServiceAccountName(const Aws::String& value) { SetServiceAccountName(value); return *this;}
    inline KubernetesWorkloadDetails& WithServiceAccountName(Aws::String&& value) { SetServiceAccountName(std::move(value)); return *this;}
    inline KubernetesWorkloadDetails& WithServiceAccountName(const char* value) { SetServiceAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the host IPC flag is enabled for the pods in the workload.</p>
     */
    inline bool GetHostIPC() const{ return m_hostIPC; }
    inline bool HostIPCHasBeenSet() const { return m_hostIPCHasBeenSet; }
    inline void SetHostIPC(bool value) { m_hostIPCHasBeenSet = true; m_hostIPC = value; }
    inline KubernetesWorkloadDetails& WithHostIPC(bool value) { SetHostIPC(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the host PID flag is enabled for the pods in the workload. </p>
     */
    inline bool GetHostPID() const{ return m_hostPID; }
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

    bool m_hostNetwork;
    bool m_hostNetworkHasBeenSet = false;

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_serviceAccountName;
    bool m_serviceAccountNameHasBeenSet = false;

    bool m_hostIPC;
    bool m_hostIPCHasBeenSet = false;

    bool m_hostPID;
    bool m_hostPIDHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
