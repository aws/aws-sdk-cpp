/**
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
    AWS_BATCH_API EksPodProperties() = default;
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
    inline const Aws::String& GetServiceAccountName() const { return m_serviceAccountName; }
    inline bool ServiceAccountNameHasBeenSet() const { return m_serviceAccountNameHasBeenSet; }
    template<typename ServiceAccountNameT = Aws::String>
    void SetServiceAccountName(ServiceAccountNameT&& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = std::forward<ServiceAccountNameT>(value); }
    template<typename ServiceAccountNameT = Aws::String>
    EksPodProperties& WithServiceAccountName(ServiceAccountNameT&& value) { SetServiceAccountName(std::forward<ServiceAccountNameT>(value)); return *this;}
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
    inline bool GetHostNetwork() const { return m_hostNetwork; }
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
    inline const Aws::String& GetDnsPolicy() const { return m_dnsPolicy; }
    inline bool DnsPolicyHasBeenSet() const { return m_dnsPolicyHasBeenSet; }
    template<typename DnsPolicyT = Aws::String>
    void SetDnsPolicy(DnsPolicyT&& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = std::forward<DnsPolicyT>(value); }
    template<typename DnsPolicyT = Aws::String>
    EksPodProperties& WithDnsPolicy(DnsPolicyT&& value) { SetDnsPolicy(std::forward<DnsPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>References a Kubernetes secret resource. It holds a list of secrets. These
     * secrets help to gain access to pull an images from a private registry.</p> <p>
     * <code>ImagePullSecret$name</code> is required when this object is used.</p>
     */
    inline const Aws::Vector<ImagePullSecret>& GetImagePullSecrets() const { return m_imagePullSecrets; }
    inline bool ImagePullSecretsHasBeenSet() const { return m_imagePullSecretsHasBeenSet; }
    template<typename ImagePullSecretsT = Aws::Vector<ImagePullSecret>>
    void SetImagePullSecrets(ImagePullSecretsT&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets = std::forward<ImagePullSecretsT>(value); }
    template<typename ImagePullSecretsT = Aws::Vector<ImagePullSecret>>
    EksPodProperties& WithImagePullSecrets(ImagePullSecretsT&& value) { SetImagePullSecrets(std::forward<ImagePullSecretsT>(value)); return *this;}
    template<typename ImagePullSecretsT = ImagePullSecret>
    EksPodProperties& AddImagePullSecrets(ImagePullSecretsT&& value) { m_imagePullSecretsHasBeenSet = true; m_imagePullSecrets.emplace_back(std::forward<ImagePullSecretsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p> 
     * <p>This object is limited to 10 elements.</p> 
     */
    inline const Aws::Vector<EksContainer>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<EksContainer>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<EksContainer>>
    EksPodProperties& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = EksContainer>
    EksPodProperties& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
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
     * is limited to 10 elements.</p> 
     */
    inline const Aws::Vector<EksContainer>& GetInitContainers() const { return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    template<typename InitContainersT = Aws::Vector<EksContainer>>
    void SetInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::forward<InitContainersT>(value); }
    template<typename InitContainersT = Aws::Vector<EksContainer>>
    EksPodProperties& WithInitContainers(InitContainersT&& value) { SetInitContainers(std::forward<InitContainersT>(value)); return *this;}
    template<typename InitContainersT = EksContainer>
    EksPodProperties& AddInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers.emplace_back(std::forward<InitContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline const Aws::Vector<EksVolume>& GetVolumes() const { return m_volumes; }
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
    template<typename VolumesT = Aws::Vector<EksVolume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<EksVolume>>
    EksPodProperties& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = EksVolume>
    EksPodProperties& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata about the Kubernetes pod. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/kubernetes-objects/">Understanding
     * Kubernetes Objects</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const EksMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = EksMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = EksMetadata>
    EksPodProperties& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the processes in a container are shared, or visible, to other
     * containers in the same pod. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/share-process-namespace/">Share
     * Process Namespace between Containers in a Pod</a>.</p>
     */
    inline bool GetShareProcessNamespace() const { return m_shareProcessNamespace; }
    inline bool ShareProcessNamespaceHasBeenSet() const { return m_shareProcessNamespaceHasBeenSet; }
    inline void SetShareProcessNamespace(bool value) { m_shareProcessNamespaceHasBeenSet = true; m_shareProcessNamespace = value; }
    inline EksPodProperties& WithShareProcessNamespace(bool value) { SetShareProcessNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccountName;
    bool m_serviceAccountNameHasBeenSet = false;

    bool m_hostNetwork{false};
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

    bool m_shareProcessNamespace{false};
    bool m_shareProcessNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
