﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configuration for the Amazon EKS cluster that supports the Batch compute
   * environment. The cluster must exist before the compute environment can be
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksConfiguration">AWS
   * API Reference</a></p>
   */
  class EksConfiguration
  {
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
    template<typename EksClusterArnT = Aws::String>
    void SetEksClusterArn(EksClusterArnT&& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = std::forward<EksClusterArnT>(value); }
    template<typename EksClusterArnT = Aws::String>
    EksConfiguration& WithEksClusterArn(EksClusterArnT&& value) { SetEksClusterArn(std::forward<EksClusterArnT>(value)); return *this;}
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
    template<typename KubernetesNamespaceT = Aws::String>
    void SetKubernetesNamespace(KubernetesNamespaceT&& value) { m_kubernetesNamespaceHasBeenSet = true; m_kubernetesNamespace = std::forward<KubernetesNamespaceT>(value); }
    template<typename KubernetesNamespaceT = Aws::String>
    EksConfiguration& WithKubernetesNamespace(KubernetesNamespaceT&& value) { SetKubernetesNamespace(std::forward<KubernetesNamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eksClusterArn;
    bool m_eksClusterArnHasBeenSet = false;

    Aws::String m_kubernetesNamespace;
    bool m_kubernetesNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
