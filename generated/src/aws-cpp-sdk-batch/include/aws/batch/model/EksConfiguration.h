/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/EksAccessEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>Configuration for the Amazon EKS cluster that supports the Batch compute
 * environment. The cluster must exist before the compute environment can be
 * created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksConfiguration">AWS
 * API Reference</a></p>
 */
class EksConfiguration {
 public:
  AWS_BATCH_API EksConfiguration() = default;
  AWS_BATCH_API EksConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API EksConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon EKS cluster. An example is
   * <code>arn:<i>aws</i>:eks:<i>us-east-1</i>:<i>123456789012</i>:cluster/<i>ClusterForBatch</i>
   * </code>. </p>
   */
  inline const Aws::String& GetEksClusterArn() const { return m_eksClusterArn; }
  inline bool EksClusterArnHasBeenSet() const { return m_eksClusterArnHasBeenSet; }
  template <typename EksClusterArnT = Aws::String>
  void SetEksClusterArn(EksClusterArnT&& value) {
    m_eksClusterArnHasBeenSet = true;
    m_eksClusterArn = std::forward<EksClusterArnT>(value);
  }
  template <typename EksClusterArnT = Aws::String>
  EksConfiguration& WithEksClusterArn(EksClusterArnT&& value) {
    SetEksClusterArn(std::forward<EksClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the Amazon EKS cluster. Batch manages pods in this
   * namespace. The value can't left empty or null. It must be fewer than 64
   * characters long, can't be set to <code>default</code>, can't start with
   * "<code>kube-</code>," and must match this regular expression:
   * <code>^[a-z0-9]([-a-z0-9]*[a-z0-9])?$</code>. For more information, see <a
   * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/namespaces/">Namespaces</a>
   * in the Kubernetes documentation.</p>
   */
  inline const Aws::String& GetKubernetesNamespace() const { return m_kubernetesNamespace; }
  inline bool KubernetesNamespaceHasBeenSet() const { return m_kubernetesNamespaceHasBeenSet; }
  template <typename KubernetesNamespaceT = Aws::String>
  void SetKubernetesNamespace(KubernetesNamespaceT&& value) {
    m_kubernetesNamespaceHasBeenSet = true;
    m_kubernetesNamespace = std::forward<KubernetesNamespaceT>(value);
  }
  template <typename KubernetesNamespaceT = Aws::String>
  EksConfiguration& WithKubernetesNamespace(KubernetesNamespaceT&& value) {
    SetKubernetesNamespace(std::forward<KubernetesNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Batch-managed Amazon EKS access entry for the compute environment. Set
   * <code>desiredState</code> to declare whether Batch manages an access entry on
   * the cluster. In a <code>DescribeComputeEnvironments</code> response,
   * <code>desiredState</code> is the value that Batch recorded for the compute
   * environment and <code>status</code> is the observed state of the access entry on
   * the cluster. To change the access entry on an existing compute environment, use
   * <a
   * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_EksConfigurationUpdate.html#Batch-Type-EksConfigurationUpdate-accessEntry">
   * <code>EksConfigurationUpdate.accessEntry</code> </a>.</p> <p>Whether the entry
   * is provisioned on the cluster depends on the cluster's
   * <code>authenticationMode</code> and the <code>desiredState</code> recorded for
   * each Batch compute environment targeting the cluster. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/eks-access-entries.html">Amazon
   * EKS access entry authentication</a> in the <i>Batch User Guide</i>.</p> <p>If
   * you don't specify this field, Batch doesn't record a <code>desiredState</code>
   * for the compute environment and <code>DescribeComputeEnvironments</code> doesn't
   * return one. For the purpose of provisioning the access entry, Batch behaves as
   * it does for <code>INHERIT_FROM_CLUSTER</code>.</p>
   */
  inline const EksAccessEntry& GetAccessEntry() const { return m_accessEntry; }
  inline bool AccessEntryHasBeenSet() const { return m_accessEntryHasBeenSet; }
  template <typename AccessEntryT = EksAccessEntry>
  void SetAccessEntry(AccessEntryT&& value) {
    m_accessEntryHasBeenSet = true;
    m_accessEntry = std::forward<AccessEntryT>(value);
  }
  template <typename AccessEntryT = EksAccessEntry>
  EksConfiguration& WithAccessEntry(AccessEntryT&& value) {
    SetAccessEntry(std::forward<AccessEntryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eksClusterArn;

  Aws::String m_kubernetesNamespace;

  EksAccessEntry m_accessEntry;
  bool m_eksClusterArnHasBeenSet = false;
  bool m_kubernetesNamespaceHasBeenSet = false;
  bool m_accessEntryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
