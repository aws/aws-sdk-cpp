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
    AWS_EKS_API InsightSummary();
    AWS_EKS_API InsightSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the insight.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline InsightSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline InsightSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline InsightSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the insight.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InsightSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InsightSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InsightSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the insight.</p>
     */
    inline const Category& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Category& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Category&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline InsightSummary& WithCategory(const Category& value) { SetCategory(value); return *this;}
    inline InsightSummary& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline const Aws::String& GetKubernetesVersion() const{ return m_kubernetesVersion; }
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }
    inline void SetKubernetesVersion(const Aws::String& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = value; }
    inline void SetKubernetesVersion(Aws::String&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::move(value); }
    inline void SetKubernetesVersion(const char* value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion.assign(value); }
    inline InsightSummary& WithKubernetesVersion(const Aws::String& value) { SetKubernetesVersion(value); return *this;}
    inline InsightSummary& WithKubernetesVersion(Aws::String&& value) { SetKubernetesVersion(std::move(value)); return *this;}
    inline InsightSummary& WithKubernetesVersion(const char* value) { SetKubernetesVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTime() const{ return m_lastRefreshTime; }
    inline bool LastRefreshTimeHasBeenSet() const { return m_lastRefreshTimeHasBeenSet; }
    inline void SetLastRefreshTime(const Aws::Utils::DateTime& value) { m_lastRefreshTimeHasBeenSet = true; m_lastRefreshTime = value; }
    inline void SetLastRefreshTime(Aws::Utils::DateTime&& value) { m_lastRefreshTimeHasBeenSet = true; m_lastRefreshTime = std::move(value); }
    inline InsightSummary& WithLastRefreshTime(const Aws::Utils::DateTime& value) { SetLastRefreshTime(value); return *this;}
    inline InsightSummary& WithLastRefreshTime(Aws::Utils::DateTime&& value) { SetLastRefreshTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastTransitionTime() const{ return m_lastTransitionTime; }
    inline bool LastTransitionTimeHasBeenSet() const { return m_lastTransitionTimeHasBeenSet; }
    inline void SetLastTransitionTime(const Aws::Utils::DateTime& value) { m_lastTransitionTimeHasBeenSet = true; m_lastTransitionTime = value; }
    inline void SetLastTransitionTime(Aws::Utils::DateTime&& value) { m_lastTransitionTimeHasBeenSet = true; m_lastTransitionTime = std::move(value); }
    inline InsightSummary& WithLastTransitionTime(const Aws::Utils::DateTime& value) { SetLastTransitionTime(value); return *this;}
    inline InsightSummary& WithLastTransitionTime(Aws::Utils::DateTime&& value) { SetLastTransitionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline InsightSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline InsightSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline InsightSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline const InsightStatus& GetInsightStatus() const{ return m_insightStatus; }
    inline bool InsightStatusHasBeenSet() const { return m_insightStatusHasBeenSet; }
    inline void SetInsightStatus(const InsightStatus& value) { m_insightStatusHasBeenSet = true; m_insightStatus = value; }
    inline void SetInsightStatus(InsightStatus&& value) { m_insightStatusHasBeenSet = true; m_insightStatus = std::move(value); }
    inline InsightSummary& WithInsightStatus(const InsightStatus& value) { SetInsightStatus(value); return *this;}
    inline InsightSummary& WithInsightStatus(InsightStatus&& value) { SetInsightStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Category m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_kubernetesVersion;
    bool m_kubernetesVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshTime;
    bool m_lastRefreshTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastTransitionTime;
    bool m_lastTransitionTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InsightStatus m_insightStatus;
    bool m_insightStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
