/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an Fargate profile selector.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/FargateProfileSelector">AWS
   * API Reference</a></p>
   */
  class FargateProfileSelector
  {
  public:
    AWS_EKS_API FargateProfileSelector() = default;
    AWS_EKS_API FargateProfileSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API FargateProfileSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Kubernetes <code>namespace</code> that the selector should match.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    FargateProfileSelector& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    FargateProfileSelector& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
    FargateProfileSelector& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
      m_labelsHasBeenSet = true; m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
