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


    /**
     * <p>Kubernetes workload name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Kubernetes workload name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Kubernetes workload name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Kubernetes workload name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Kubernetes workload name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Kubernetes workload name.</p>
     */
    inline KubernetesWorkloadDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Kubernetes workload name.</p>
     */
    inline KubernetesWorkloadDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Kubernetes workload name.</p>
     */
    inline KubernetesWorkloadDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline KubernetesWorkloadDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline KubernetesWorkloadDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Kubernetes workload type (e.g. Pod, Deployment, etc.).</p>
     */
    inline KubernetesWorkloadDetails& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }

    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }

    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }

    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline KubernetesWorkloadDetails& WithUid(const Aws::String& value) { SetUid(value); return *this;}

    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline KubernetesWorkloadDetails& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}

    /**
     * <p>Kubernetes workload ID.</p>
     */
    inline KubernetesWorkloadDetails& WithUid(const char* value) { SetUid(value); return *this;}


    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline KubernetesWorkloadDetails& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline KubernetesWorkloadDetails& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>Kubernetes namespace that the workload is part of.</p>
     */
    inline KubernetesWorkloadDetails& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>Whether the hostNetwork flag is enabled for the pods included in the
     * workload.</p>
     */
    inline bool GetHostNetwork() const{ return m_hostNetwork; }

    /**
     * <p>Whether the hostNetwork flag is enabled for the pods included in the
     * workload.</p>
     */
    inline bool HostNetworkHasBeenSet() const { return m_hostNetworkHasBeenSet; }

    /**
     * <p>Whether the hostNetwork flag is enabled for the pods included in the
     * workload.</p>
     */
    inline void SetHostNetwork(bool value) { m_hostNetworkHasBeenSet = true; m_hostNetwork = value; }

    /**
     * <p>Whether the hostNetwork flag is enabled for the pods included in the
     * workload.</p>
     */
    inline KubernetesWorkloadDetails& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}


    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }

    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline void SetContainers(Aws::Vector<Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}

    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& WithContainers(Aws::Vector<Container>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& AddContainers(const Container& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>Containers running as part of the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& AddContainers(Container&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>Volumes used by the Kubernetes workload.</p>
     */
    inline KubernetesWorkloadDetails& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
