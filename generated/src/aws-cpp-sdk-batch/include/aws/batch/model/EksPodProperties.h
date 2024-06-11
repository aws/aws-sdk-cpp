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
#include <aws/batch/model/EksContainer.h>
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
   * <p>The properties for the pod.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksPodProperties">AWS
   * API Reference</a></p>
   */
  class EksPodProperties
  {
  public:
    AWS_BATCH_API EksPodProperties();
    AWS_BATCH_API EksPodProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksPodProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EksPodProperties& WithServiceAccountName(const Aws::String& value) { SetServiceAccountName(value); return *this;}
    inline EksPodProperties& WithServiceAccountName(Aws::String&& value) { SetServiceAccountName(std::move(value)); return *this;}
    inline EksPodProperties& WithServiceAccountName(const char* value) { SetServiceAccountName(value); return *this;}
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
    inline EksPodProperties& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS policy for the pod. The default value is <code>ClusterFirst</code>.
     * If the <code>hostNetwork</code> parameter is not specified, the default is
     * <code>ClusterFirstWithHostNet</code>. <code>ClusterFirst</code> indicates that
     * any DNS query that does not match the configured cluster domain suffix is
     * forwarded to the upstream nameserver inherited from the node. For more
     * information, see <a
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
    inline EksPodProperties& WithDnsPolicy(const Aws::String& value) { SetDnsPolicy(value); return *this;}
    inline EksPodProperties& WithDnsPolicy(Aws::String&& value) { SetDnsPolicy(std::move(value)); return *this;}
    inline EksPodProperties& WithDnsPolicy(const char* value) { SetDnsPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>References a Kubernetes secret resource. It holds a list of secrets. These
     * secrets help to gain access to pull an images from a private registry.</p> <p>
     * <code>ImagePullSecret$name</code> is required when this object is used.</p>
     */
    inline const Aws::Vector<ImagePullSecret>& GetImagePullSecrets() const{ return m_imagePullSecrets; }
    inline bool ImagePullSecretsHasBeenSet() const { return m_imagePullSecretsHasBeenSet; }
    inline void SetImagePullSecrets(const Aws::Vector<ImagePullSecret>& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets = value; }
    inline void SetImagePullSecrets(Aws::Vector<ImagePullSecret>&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets = std::move(value); }
    inline EksPodProperties& WithImagePullSecrets(const Aws::Vector<ImagePullSecret>& value) { SetImagePullSecrets(value); return *this;}
    inline EksPodProperties& WithImagePullSecrets(Aws::Vector<ImagePullSecret>&& value) { SetImagePullSecrets(std::move(value)); return *this;}
    inline EksPodProperties& AddImagePullSecrets(const ImagePullSecret& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets.push_back(value); return *this; }
    inline EksPodProperties& AddImagePullSecrets(ImagePullSecret&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainer>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<EksContainer>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<EksContainer>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline EksPodProperties& WithContainers(const Aws::Vector<EksContainer>& value) { SetContainers(value); return *this;}
    inline EksPodProperties& WithContainers(Aws::Vector<EksContainer>&& value) { SetContainers(std::move(value)); return *this;}
    inline EksPodProperties& AddContainers(const EksContainer& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline EksPodProperties& AddContainers(EksContainer&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These containers run before application containers, always runs to
     * completion, and must complete successfully before the next container starts.
     * These containers are registered with the Amazon EKS Connector agent and persists
     * the registration information in the Kubernetes backend data store. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/workloads/pods/init-containers/">Init
     * Containers</a> in the <i>Kubernetes documentation</i>.</p>  <p>This object
     * is limited to 10 elements</p> 
     */
    inline const Aws::Vector<EksContainer>& GetInitContainers() const{ return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    inline void SetInitContainers(const Aws::Vector<EksContainer>& value) { m_initContainersHasBeenSet = true; m_initContainers = value; }
    inline void SetInitContainers(Aws::Vector<EksContainer>&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::move(value); }
    inline EksPodProperties& WithInitContainers(const Aws::Vector<EksContainer>& value) { SetInitContainers(value); return *this;}
    inline EksPodProperties& WithInitContainers(Aws::Vector<EksContainer>&& value) { SetInitContainers(std::move(value)); return *this;}
    inline EksPodProperties& AddInitContainers(const EksContainer& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(value); return *this; }
    inline EksPodProperties& AddInitContainers(EksContainer&& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline const Aws::Vector<EksVolume>& GetVolumes() const{ return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    inline void SetVolumes(const Aws::Vector<EksVolume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }
    inline void SetVolumes(Aws::Vector<EksVolume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }
    inline EksPodProperties& WithVolumes(const Aws::Vector<EksVolume>& value) { SetVolumes(value); return *this;}
    inline EksPodProperties& WithVolumes(Aws::Vector<EksVolume>&& value) { SetVolumes(std::move(value)); return *this;}
    inline EksPodProperties& AddVolumes(const EksVolume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }
    inline EksPodProperties& AddVolumes(EksVolume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata about the Kubernetes pod. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/kubernetes-objects/">Understanding
     * Kubernetes Objects</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const EksMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(EksMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline EksPodProperties& WithMetadata(const EksMetadata& value) { SetMetadata(value); return *this;}
    inline EksPodProperties& WithMetadata(EksMetadata&& value) { SetMetadata(std::move(value)); return *this;}
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
    inline EksPodProperties& WithShareProcessNamespace(bool value) { SetShareProcessNamespace(value); return *this;}
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

    Aws::Vector<EksContainer> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<EksContainer> m_initContainers;
    bool m_initContainersHasBeenSet = false;

    Aws::Vector<EksVolume> m_volumes;
    bool m_volumesHasBeenSet = false;

    EksMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    bool m_shareProcessNamespace;
    bool m_shareProcessNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
