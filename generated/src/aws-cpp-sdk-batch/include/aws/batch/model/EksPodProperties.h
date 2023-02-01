/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    inline bool ServiceAccountNameHasBeenSet() const { return m_serviceAccountNameHasBeenSet; }

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
    inline void SetServiceAccountName(const Aws::String& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = value; }

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
    inline void SetServiceAccountName(Aws::String&& value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName = std::move(value); }

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
    inline void SetServiceAccountName(const char* value) { m_serviceAccountNameHasBeenSet = true; m_serviceAccountName.assign(value); }

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
    inline EksPodProperties& WithServiceAccountName(const Aws::String& value) { SetServiceAccountName(value); return *this;}

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
    inline EksPodProperties& WithServiceAccountName(Aws::String&& value) { SetServiceAccountName(std::move(value)); return *this;}

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
    inline EksPodProperties& WithServiceAccountName(const char* value) { SetServiceAccountName(value); return *this;}


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
    inline bool HostNetworkHasBeenSet() const { return m_hostNetworkHasBeenSet; }

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
    inline void SetHostNetwork(bool value) { m_hostNetworkHasBeenSet = true; m_hostNetwork = value; }

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
    inline EksPodProperties& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}


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
    inline bool DnsPolicyHasBeenSet() const { return m_dnsPolicyHasBeenSet; }

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
    inline void SetDnsPolicy(const Aws::String& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = value; }

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
    inline void SetDnsPolicy(Aws::String&& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = std::move(value); }

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
    inline void SetDnsPolicy(const char* value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy.assign(value); }

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
    inline EksPodProperties& WithDnsPolicy(const Aws::String& value) { SetDnsPolicy(value); return *this;}

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
    inline EksPodProperties& WithDnsPolicy(Aws::String&& value) { SetDnsPolicy(std::move(value)); return *this;}

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
    inline EksPodProperties& WithDnsPolicy(const char* value) { SetDnsPolicy(value); return *this;}


    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainer>& GetContainers() const{ return m_containers; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline void SetContainers(const Aws::Vector<EksContainer>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline void SetContainers(Aws::Vector<EksContainer>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodProperties& WithContainers(const Aws::Vector<EksContainer>& value) { SetContainers(value); return *this;}

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodProperties& WithContainers(Aws::Vector<EksContainer>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodProperties& AddContainers(const EksContainer& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodProperties& AddContainers(EksContainer&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline const Aws::Vector<EksVolume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline void SetVolumes(const Aws::Vector<EksVolume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline void SetVolumes(Aws::Vector<EksVolume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline EksPodProperties& WithVolumes(const Aws::Vector<EksVolume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline EksPodProperties& WithVolumes(Aws::Vector<EksVolume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline EksPodProperties& AddVolumes(const EksVolume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>Specifies the volumes for a job definition that uses Amazon EKS
     * resources.</p>
     */
    inline EksPodProperties& AddVolumes(EksVolume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serviceAccountName;
    bool m_serviceAccountNameHasBeenSet = false;

    bool m_hostNetwork;
    bool m_hostNetworkHasBeenSet = false;

    Aws::String m_dnsPolicy;
    bool m_dnsPolicyHasBeenSet = false;

    Aws::Vector<EksContainer> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<EksVolume> m_volumes;
    bool m_volumesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
