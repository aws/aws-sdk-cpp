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
    AWS_EKS_API InsightsFilter();
    AWS_EKS_API InsightsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }

    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }

    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categoriesHasBeenSet = true; m_categories = value; }

    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }

    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline InsightsFilter& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}

    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline InsightsFilter& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}

    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline InsightsFilter& AddCategories(const Category& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }

    /**
     * <p>The categories to use to filter insights.</p>
     */
    inline InsightsFilter& AddCategories(Category&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }


    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKubernetesVersions() const{ return m_kubernetesVersions; }

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline bool KubernetesVersionsHasBeenSet() const { return m_kubernetesVersionsHasBeenSet; }

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline void SetKubernetesVersions(const Aws::Vector<Aws::String>& value) { m_kubernetesVersionsHasBeenSet = true; m_kubernetesVersions = value; }

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline void SetKubernetesVersions(Aws::Vector<Aws::String>&& value) { m_kubernetesVersionsHasBeenSet = true; m_kubernetesVersions = std::move(value); }

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline InsightsFilter& WithKubernetesVersions(const Aws::Vector<Aws::String>& value) { SetKubernetesVersions(value); return *this;}

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline InsightsFilter& WithKubernetesVersions(Aws::Vector<Aws::String>&& value) { SetKubernetesVersions(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline InsightsFilter& AddKubernetesVersions(const Aws::String& value) { m_kubernetesVersionsHasBeenSet = true; m_kubernetesVersions.push_back(value); return *this; }

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline InsightsFilter& AddKubernetesVersions(Aws::String&& value) { m_kubernetesVersionsHasBeenSet = true; m_kubernetesVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The Kubernetes versions to use to filter the insights.</p>
     */
    inline InsightsFilter& AddKubernetesVersions(const char* value) { m_kubernetesVersionsHasBeenSet = true; m_kubernetesVersions.push_back(value); return *this; }


    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline const Aws::Vector<InsightStatusValue>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }

    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline void SetStatuses(const Aws::Vector<InsightStatusValue>& value) { m_statusesHasBeenSet = true; m_statuses = value; }

    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline void SetStatuses(Aws::Vector<InsightStatusValue>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }

    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline InsightsFilter& WithStatuses(const Aws::Vector<InsightStatusValue>& value) { SetStatuses(value); return *this;}

    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline InsightsFilter& WithStatuses(Aws::Vector<InsightStatusValue>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline InsightsFilter& AddStatuses(const InsightStatusValue& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }

    /**
     * <p>The statuses to use to filter the insights. </p>
     */
    inline InsightsFilter& AddStatuses(InsightStatusValue&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }

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
