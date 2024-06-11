﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksMetadata.h>
#include <aws/batch/model/ImagePullSecret.h>
#include <aws/batch/model/EksContainerDetail.h>
#include <aws/batch/model/EksVolume.h>
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
   * <p>The details for the pod.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksPodPropertiesDetail">AWS
   * API Reference</a></p>
   */
  class EksPodPropertiesDetail
  {
  public:
    AWS_BATCH_API EksPodPropertiesDetail();
    AWS_BATCH_API EksPodPropertiesDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksPodPropertiesDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service account that's used to run the pod. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/service-accounts.html">Kubernetes
     * service accounts</a> and <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/associate-service-account-role.html">Configure
     * a Kubernetes service account to assume an IAM role</a> in the <i>Amazon EKS User
     * Guide</i> and <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/configure-service-account/">Configure
     * service accounts for pods</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetServiceAccountName() const{ return m_serviceAccountName; }
    inline bool ServiceAccountNameHasBeenSet() const { return m_serviceAccountNameHasBeenSet; }
    inline void SetServiceAccountName(const Aws::String& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = value; }
    inline void SetServiceAccountName(Aws::String&& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = std::move(value); }
    inline void SetServiceAccountName(const char* value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName.assign(value); }
    inline EksPodPropertiesDetail& WithServiceAccountName(const Aws::String& value) { SetServiceAccountName(value); return *this;}
    inline EksPodPropertiesDetail& WithServiceAccountName(Aws::String&& value) { SetServiceAccountName(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& WithServiceAccountName(const char* value) { SetServiceAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the pod uses the hosts' network IP address. The default value is
     * <code>true</code>. Setting this to <code>false</code> enables the Kubernetes pod
     * networking model. Most Batch workloads are egress-only and don't require the
     * overhead of IP allocation for each pod for incoming connections. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/security/pod-security-policy/#host-namespaces">Host
     * namespaces</a> and <a
     * href="https://kubernetes.io/docs/concepts/workloads/pods/#pod-networking">Pod
     * networking</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool GetHostNetwork() const{ return m_hostNetwork; }
    inline bool HostNetworkHasBeenSet() const { return m_hostNetworkHasBeenSet; }
    inline void SetHostNetwork(bool value) { m_hostNetworkHasBeenSet = true; m_hostNetwork = value; }
    inline EksPodPropertiesDetail& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS policy for the pod. The default value is <code>ClusterFirst</code>.
     * If the <code>hostNetwork</code> parameter is not specified, the default is
     * <code>ClusterFirstWithHostNet</code>. <code>ClusterFirst</code> indicates that
     * any DNS query that does not match the configured cluster domain suffix is
     * forwarded to the upstream nameserver inherited from the node. If no value was
     * specified for <code>dnsPolicy</code> in the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_RegisterJobDefinition.html">RegisterJobDefinition</a>
     * API operation, then no value will be returned for <code>dnsPolicy</code> by
     * either of <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_DescribeJobDefinitions.html">DescribeJobDefinitions</a>
     * or <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_DescribeJobs.html">DescribeJobs</a>
     * API operations. The pod spec setting will contain either
     * <code>ClusterFirst</code> or <code>ClusterFirstWithHostNet</code>, depending on
     * the value of the <code>hostNetwork</code> parameter. For more information, see
     * <a
     * href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/#pod-s-dns-policy">Pod's
     * DNS policy</a> in the <i>Kubernetes documentation</i>.</p> <p>Valid values:
     * <code>Default</code> | <code>ClusterFirst</code> |
     * <code>ClusterFirstWithHostNet</code> </p>
     */
    inline const Aws::String& GetDnsPolicy() const{ return m_dnsPolicy; }
    inline bool DnsPolicyHasBeenSet() const { return m_dnsPolicyHasBeenSet; }
    inline void SetDnsPolicy(const Aws::String& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = value; }
    inline void SetDnsPolicy(Aws::String&& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = std::move(value); }
    inline void SetDnsPolicy(const char* value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy.assign(value); }
    inline EksPodPropertiesDetail& WithDnsPolicy(const Aws::String& value) { SetDnsPolicy(value); return *this;}
    inline EksPodPropertiesDetail& WithDnsPolicy(Aws::String&& value) { SetDnsPolicy(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& WithDnsPolicy(const char* value) { SetDnsPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the reference pointer to the Kubernetes secret resource. These
     * secrets help to gain access to pull an images from a private registry.</p>
     */
    inline const Aws::Vector<ImagePullSecret>& GetImagePullSecrets() const{ return m_imagePullSecrets; }
    inline bool ImagePullSecretsHasBeenSet() const { return m_imagePullSecretsHasBeenSet; }
    inline void SetImagePullSecrets(const Aws::Vector<ImagePullSecret>& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets = value; }
    inline void SetImagePullSecrets(Aws::Vector<ImagePullSecret>&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets = std::move(value); }
    inline EksPodPropertiesDetail& WithImagePullSecrets(const Aws::Vector<ImagePullSecret>& value) { SetImagePullSecrets(value); return *this;}
    inline EksPodPropertiesDetail& WithImagePullSecrets(Aws::Vector<ImagePullSecret>&& value) { SetImagePullSecrets(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& AddImagePullSecrets(const ImagePullSecret& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets.push_back(value); return *this; }
    inline EksPodPropertiesDetail& AddImagePullSecrets(ImagePullSecret&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainerDetail>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<EksContainerDetail>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<EksContainerDetail>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline EksPodPropertiesDetail& WithContainers(const Aws::Vector<EksContainerDetail>& value) { SetContainers(value); return *this;}
    inline EksPodPropertiesDetail& WithContainers(Aws::Vector<EksContainerDetail>&& value) { SetContainers(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& AddContainers(const EksContainerDetail& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline EksPodPropertiesDetail& AddContainers(EksContainerDetail&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The container registered with the Amazon EKS Connector agent and persists the
     * registration information in the Kubernetes backend data store.</p>
     */
    inline const Aws::Vector<EksContainerDetail>& GetInitContainers() const{ return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    inline void SetInitContainers(const Aws::Vector<EksContainerDetail>& value) { m_initContainersHasBeenSet = true; m_initContainers = value; }
    inline void SetInitContainers(Aws::Vector<EksContainerDetail>&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::move(value); }
    inline EksPodPropertiesDetail& WithInitContainers(const Aws::Vector<EksContainerDetail>& value) { SetInitContainers(value); return *this;}
    inline EksPodPropertiesDetail& WithInitContainers(Aws::Vector<EksContainerDetail>&& value) { SetInitContainers(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& AddInitContainers(const EksContainerDetail& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(value); return *this; }
    inline EksPodPropertiesDetail& AddInitContainers(EksContainerDetail&& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline const Aws::Vector<EksVolume>& GetVolumes() const{ return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    inline void SetVolumes(const Aws::Vector<EksVolume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }
    inline void SetVolumes(Aws::Vector<EksVolume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }
    inline EksPodPropertiesDetail& WithVolumes(const Aws::Vector<EksVolume>& value) { SetVolumes(value); return *this;}
    inline EksPodPropertiesDetail& WithVolumes(Aws::Vector<EksVolume>&& value) { SetVolumes(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& AddVolumes(const EksVolume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }
    inline EksPodPropertiesDetail& AddVolumes(EksVolume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the pod for this job.</p>
     */
    inline const Aws::String& GetPodName() const{ return m_podName; }
    inline bool PodNameHasBeenSet() const { return m_podNameHasBeenSet; }
    inline void SetPodName(const Aws::String& value) { m_podNameHasBeenSet = true; m_podName = value; }
    inline void SetPodName(Aws::String&& value) { m_podNameHasBeenSet = true; m_podName = std::move(value); }
    inline void SetPodName(const char* value) { m_podNameHasBeenSet = true; m_podName.assign(value); }
    inline EksPodPropertiesDetail& WithPodName(const Aws::String& value) { SetPodName(value); return *this;}
    inline EksPodPropertiesDetail& WithPodName(Aws::String&& value) { SetPodName(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& WithPodName(const char* value) { SetPodName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node for this job.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline EksPodPropertiesDetail& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline EksPodPropertiesDetail& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline EksPodPropertiesDetail& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes and uniquely identifies Kubernetes resources. For example, the
     * compute environment that a pod runs in or the <code>jobID</code> for a job
     * running in the pod. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/kubernetes-objects/">Understanding
     * Kubernetes Objects</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const EksMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(EksMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline EksPodPropertiesDetail& WithMetadata(const EksMetadata& value) { SetMetadata(value); return *this;}
    inline EksPodPropertiesDetail& WithMetadata(EksMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the processes in a container are shared, or visible, to other
     * containers in the same pod. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/share-process-namespace/">Share
     * Process Namespace between Containers in a Pod</a>.</p>
     */
    inline bool GetShareProcessNamespace() const{ return m_shareProcessNamespace; }
    inline bool ShareProcessNamespaceHasBeenSet() const { return m_shareProcessNamespaceHasBeenSet; }
    inline void SetShareProcessNamespace(bool value) { m_shareProcessNamespaceHasBeenSet = true; m_shareProcessNamespace = value; }
    inline EksPodPropertiesDetail& WithShareProcessNamespace(bool value) { SetShareProcessNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccountName;
    bool m_serviceAccountNameHasBeenSet = false;

    bool m_hostNetwork;
    bool m_hostNetworkHasBeenSet = false;

    Aws::String m_dnsPolicy;
    bool m_dnsPolicyHasBeenSet = false;

    Aws::Vector<ImagePullSecret> m_imagePullSecrets;
    bool m_imagePullSecretsHasBeenSet = false;

    Aws::Vector<EksContainerDetail> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<EksContainerDetail> m_initContainers;
    bool m_initContainersHasBeenSet = false;

    Aws::Vector<EksVolume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_podName;
    bool m_podNameHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    EksMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    bool m_shareProcessNamespace;
    bool m_shareProcessNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
