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
    AWS_EKS_API FargateProfileSelector();
    AWS_EKS_API FargateProfileSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API FargateProfileSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline FargateProfileSelector& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline FargateProfileSelector& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes namespace that the selector should match.</p>
     */
    inline FargateProfileSelector& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Kubernetes labels that the selector should match. A pod must contain all
     * of the labels that are specified in the selector for it to be considered a
     * match.</p>
     */
    inline FargateProfileSelector& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
