/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    inline EksPodPropertiesDetail& WithServiceAccountName(const Aws::String& value) { SetServiceAccountName(value); return *this;}

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
    inline EksPodPropertiesDetail& WithServiceAccountName(Aws::String&& value) { SetServiceAccountName(std::move(value)); return *this;}

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
    inline EksPodPropertiesDetail& WithServiceAccountName(const char* value) { SetServiceAccountName(value); return *this;}


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
    inline EksPodPropertiesDetail& WithHostNetwork(bool value) { SetHostNetwork(value); return *this;}


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
    inline bool DnsPolicyHasBeenSet() const { return m_dnsPolicyHasBeenSet; }

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
    inline void SetDnsPolicy(const Aws::String& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = value; }

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
    inline void SetDnsPolicy(Aws::String&& value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy = std::move(value); }

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
    inline void SetDnsPolicy(const char* value) { m_dnsPolicyHasBeenSet = true; m_dnsPolicy.assign(value); }

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
    inline EksPodPropertiesDetail& WithDnsPolicy(const Aws::String& value) { SetDnsPolicy(value); return *this;}

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
    inline EksPodPropertiesDetail& WithDnsPolicy(Aws::String&& value) { SetDnsPolicy(std::move(value)); return *this;}

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
    inline EksPodPropertiesDetail& WithDnsPolicy(const char* value) { SetDnsPolicy(value); return *this;}


    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline const Aws::Vector<EksContainerDetail>& GetContainers() const{ return m_containers; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline void SetContainers(const Aws::Vector<EksContainerDetail>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline void SetContainers(Aws::Vector<EksContainerDetail>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesDetail& WithContainers(const Aws::Vector<EksContainerDetail>& value) { SetContainers(value); return *this;}

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesDetail& WithContainers(Aws::Vector<EksContainerDetail>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesDetail& AddContainers(const EksContainerDetail& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The properties of the container that's used on the Amazon EKS pod.</p>
     */
    inline EksPodPropertiesDetail& AddContainers(EksContainerDetail&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline const Aws::Vector<EksVolume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline void SetVolumes(const Aws::Vector<EksVolume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline void SetVolumes(Aws::Vector<EksVolume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline EksPodPropertiesDetail& WithVolumes(const Aws::Vector<EksVolume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline EksPodPropertiesDetail& WithVolumes(Aws::Vector<EksVolume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline EksPodPropertiesDetail& AddVolumes(const EksVolume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>Specifies the volumes for a job definition using Amazon EKS resources.</p>
     */
    inline EksPodPropertiesDetail& AddVolumes(EksVolume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the pod for this job.</p>
     */
    inline const Aws::String& GetPodName() const{ return m_podName; }

    /**
     * <p>The name of the pod for this job.</p>
     */
    inline bool PodNameHasBeenSet() const { return m_podNameHasBeenSet; }

    /**
     * <p>The name of the pod for this job.</p>
     */
    inline void SetPodName(const Aws::String& value) { m_podNameHasBeenSet = true; m_podName = value; }

    /**
     * <p>The name of the pod for this job.</p>
     */
    inline void SetPodName(Aws::String&& value) { m_podNameHasBeenSet = true; m_podName = std::move(value); }

    /**
     * <p>The name of the pod for this job.</p>
     */
    inline void SetPodName(const char* value) { m_podNameHasBeenSet = true; m_podName.assign(value); }

    /**
     * <p>The name of the pod for this job.</p>
     */
    inline EksPodPropertiesDetail& WithPodName(const Aws::String& value) { SetPodName(value); return *this;}

    /**
     * <p>The name of the pod for this job.</p>
     */
    inline EksPodPropertiesDetail& WithPodName(Aws::String&& value) { SetPodName(std::move(value)); return *this;}

    /**
     * <p>The name of the pod for this job.</p>
     */
    inline EksPodPropertiesDetail& WithPodName(const char* value) { SetPodName(value); return *this;}


    /**
     * <p>The name of the node for this job.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>The name of the node for this job.</p>
     */
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }

    /**
     * <p>The name of the node for this job.</p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>The name of the node for this job.</p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }

    /**
     * <p>The name of the node for this job.</p>
     */
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }

    /**
     * <p>The name of the node for this job.</p>
     */
    inline EksPodPropertiesDetail& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>The name of the node for this job.</p>
     */
    inline EksPodPropertiesDetail& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}

    /**
     * <p>The name of the node for this job.</p>
     */
    inline EksPodPropertiesDetail& WithNodeName(const char* value) { SetNodeName(value); return *this;}

  private:

    Aws::String m_serviceAccountName;
    bool m_serviceAccountNameHasBeenSet = false;

    bool m_hostNetwork;
    bool m_hostNetworkHasBeenSet = false;

    Aws::String m_dnsPolicy;
    bool m_dnsPolicyHasBeenSet = false;

    Aws::Vector<EksContainerDetail> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<EksVolume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_podName;
    bool m_podNameHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
