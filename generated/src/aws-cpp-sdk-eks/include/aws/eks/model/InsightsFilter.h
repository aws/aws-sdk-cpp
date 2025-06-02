/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/Category.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/InsightStatusValue.h>
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
   * <p>The criteria to use for the insights.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InsightsFilter">AWS
   * API Reference</a></p>
   */
  class InsightsFilter
  {
  public:
    AWS_EKS_API InsightsFilter() = default;
    AWS_EKS_API InsightsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The categories to use to filter insights. The following lists the available
     * categories:</p> <ul> <li> <p> <code>UPGRADE_READINESS</code>: Amazon EKS
     * identifies issues that could impact your ability to upgrade to new versions of
     * Kubernetes. These are called upgrade insights.</p> </li> <li> <p>
     * <code>MISCONFIGURATION</code>: Amazon EKS identifies misconfiguration in your
     * EKS Hybrid Nodes setup that could impair functionality of your cluster or
     * workloads. These are called configuration insights.</p> </li> </ul>
     */
    inline const Aws::Vector<Category>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<Category>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<Category>>
    InsightsFilter& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    inline InsightsFilter& AddCategories(Category value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKubernetesVersions() const { return m_kubernetesVersions; }
    inline bool KubernetesVersionsHasBeenSet() const { return m_kubernetesVersionsHasBeenSet; }
    template<typename KubernetesVersionsT = Aws::Vector<Aws::String>>
    void SetKubernetesVersions(KubernetesVersionsT&& value) { m_kubernetesVersionsHasBeenSet = true; m_kubernetesVersions = std::forward<KubernetesVersionsT>(value); }
    template<typename KubernetesVersionsT = Aws::Vector<Aws::String>>
    InsightsFilter& WithKubernetesVersions(KubernetesVersionsT&& value) { SetKubernetesVersions(std::forward<KubernetesVersionsT>(value)); return *this;}
    template<typename KubernetesVersionsT = Aws::String>
    InsightsFilter& AddKubernetesVersions(KubernetesVersionsT&& value) { m_kubernetesVersionsHasBeenSet = true; m_kubernetesVersions.emplace_back(std::forward<KubernetesVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline const Aws::Vector<InsightStatusValue>& GetStatuses() const { return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    template<typename StatusesT = Aws::Vector<InsightStatusValue>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Vector<InsightStatusValue>>
    InsightsFilter& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline InsightsFilter& AddStatuses(InsightStatusValue value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_kubernetesVersions;
    bool m_kubernetesVersionsHasBeenSet = false;

    Aws::Vector<InsightStatusValue> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
