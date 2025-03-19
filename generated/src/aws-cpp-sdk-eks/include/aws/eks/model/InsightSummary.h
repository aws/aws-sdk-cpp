/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/Category.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eks/model/InsightStatus.h>
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
   * <p>The summarized description of the insight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InsightSummary">AWS
   * API Reference</a></p>
   */
  class InsightSummary
  {
  public:
    AWS_EKS_API InsightSummary() = default;
    AWS_EKS_API InsightSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the insight.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InsightSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the insight.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InsightSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the insight.</p>
     */
    inline Category GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(Category value) { m_categoryHasBeenSet = true; m_category = value; }
    inline InsightSummary& WithCategory(Category value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline const Aws::String& GetKubernetesVersion() const { return m_kubernetesVersion; }
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }
    template<typename KubernetesVersionT = Aws::String>
    void SetKubernetesVersion(KubernetesVersionT&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::forward<KubernetesVersionT>(value); }
    template<typename KubernetesVersionT = Aws::String>
    InsightSummary& WithKubernetesVersion(KubernetesVersionT&& value) { SetKubernetesVersion(std::forward<KubernetesVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTime() const { return m_lastRefreshTime; }
    inline bool LastRefreshTimeHasBeenSet() const { return m_lastRefreshTimeHasBeenSet; }
    template<typename LastRefreshTimeT = Aws::Utils::DateTime>
    void SetLastRefreshTime(LastRefreshTimeT&& value) { m_lastRefreshTimeHasBeenSet = true; m_lastRefreshTime = std::forward<LastRefreshTimeT>(value); }
    template<typename LastRefreshTimeT = Aws::Utils::DateTime>
    InsightSummary& WithLastRefreshTime(LastRefreshTimeT&& value) { SetLastRefreshTime(std::forward<LastRefreshTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastTransitionTime() const { return m_lastTransitionTime; }
    inline bool LastTransitionTimeHasBeenSet() const { return m_lastTransitionTimeHasBeenSet; }
    template<typename LastTransitionTimeT = Aws::Utils::DateTime>
    void SetLastTransitionTime(LastTransitionTimeT&& value) { m_lastTransitionTimeHasBeenSet = true; m_lastTransitionTime = std::forward<LastTransitionTimeT>(value); }
    template<typename LastTransitionTimeT = Aws::Utils::DateTime>
    InsightSummary& WithLastTransitionTime(LastTransitionTimeT&& value) { SetLastTransitionTime(std::forward<LastTransitionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    InsightSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline const InsightStatus& GetInsightStatus() const { return m_insightStatus; }
    inline bool InsightStatusHasBeenSet() const { return m_insightStatusHasBeenSet; }
    template<typename InsightStatusT = InsightStatus>
    void SetInsightStatus(InsightStatusT&& value) { m_insightStatusHasBeenSet = true; m_insightStatus = std::forward<InsightStatusT>(value); }
    template<typename InsightStatusT = InsightStatus>
    InsightSummary& WithInsightStatus(InsightStatusT&& value) { SetInsightStatus(std::forward<InsightStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Category m_category{Category::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_kubernetesVersion;
    bool m_kubernetesVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTime{};
    bool m_lastRefreshTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastTransitionTime{};
    bool m_lastTransitionTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InsightStatus m_insightStatus;
    bool m_insightStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
