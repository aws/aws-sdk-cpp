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


    /**
     * <p>The ID of the insight.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the insight.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the insight.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the insight.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the insight.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the insight.</p>
     */
    inline InsightSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the insight.</p>
     */
    inline InsightSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the insight.</p>
     */
    inline InsightSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the insight.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the insight.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the insight.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the insight.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the insight.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the insight.</p>
     */
    inline InsightSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the insight.</p>
     */
    inline InsightSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the insight.</p>
     */
    inline InsightSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The category of the insight.</p>
     */
    inline const Category& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the insight.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the insight.</p>
     */
    inline void SetCategory(const Category& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the insight.</p>
     */
    inline void SetCategory(Category&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the insight.</p>
     */
    inline InsightSummary& WithCategory(const Category& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the insight.</p>
     */
    inline InsightSummary& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline const Aws::String& GetKubernetesVersion() const{ return m_kubernetesVersion; }

    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }

    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline void SetKubernetesVersion(const Aws::String& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = value; }

    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline void SetKubernetesVersion(Aws::String&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::move(value); }

    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline void SetKubernetesVersion(const char* value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion.assign(value); }

    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline InsightSummary& WithKubernetesVersion(const Aws::String& value) { SetKubernetesVersion(value); return *this;}

    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline InsightSummary& WithKubernetesVersion(Aws::String&& value) { SetKubernetesVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes minor version associated with an insight if applicable. </p>
     */
    inline InsightSummary& WithKubernetesVersion(const char* value) { SetKubernetesVersion(value); return *this;}


    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshTime() const{ return m_lastRefreshTime; }

    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline bool LastRefreshTimeHasBeenSet() const { return m_lastRefreshTimeHasBeenSet; }

    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline void SetLastRefreshTime(const Aws::Utils::DateTime& value) { m_lastRefreshTimeHasBeenSet = true; m_lastRefreshTime = value; }

    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline void SetLastRefreshTime(Aws::Utils::DateTime&& value) { m_lastRefreshTimeHasBeenSet = true; m_lastRefreshTime = std::move(value); }

    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline InsightSummary& WithLastRefreshTime(const Aws::Utils::DateTime& value) { SetLastRefreshTime(value); return *this;}

    /**
     * <p>The time Amazon EKS last successfully completed a refresh of this insight
     * check on the cluster.</p>
     */
    inline InsightSummary& WithLastRefreshTime(Aws::Utils::DateTime&& value) { SetLastRefreshTime(std::move(value)); return *this;}


    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastTransitionTime() const{ return m_lastTransitionTime; }

    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline bool LastTransitionTimeHasBeenSet() const { return m_lastTransitionTimeHasBeenSet; }

    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline void SetLastTransitionTime(const Aws::Utils::DateTime& value) { m_lastTransitionTimeHasBeenSet = true; m_lastTransitionTime = value; }

    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline void SetLastTransitionTime(Aws::Utils::DateTime&& value) { m_lastTransitionTimeHasBeenSet = true; m_lastTransitionTime = std::move(value); }

    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline InsightSummary& WithLastTransitionTime(const Aws::Utils::DateTime& value) { SetLastTransitionTime(value); return *this;}

    /**
     * <p>The time the status of the insight last changed.</p>
     */
    inline InsightSummary& WithLastTransitionTime(Aws::Utils::DateTime&& value) { SetLastTransitionTime(std::move(value)); return *this;}


    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline InsightSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline InsightSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the insight which includes alert criteria, remediation
     * recommendation, and additional resources (contains Markdown).</p>
     */
    inline InsightSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline const InsightStatus& GetInsightStatus() const{ return m_insightStatus; }

    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline bool InsightStatusHasBeenSet() const { return m_insightStatusHasBeenSet; }

    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline void SetInsightStatus(const InsightStatus& value) { m_insightStatusHasBeenSet = true; m_insightStatus = value; }

    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline void SetInsightStatus(InsightStatus&& value) { m_insightStatusHasBeenSet = true; m_insightStatus = std::move(value); }

    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline InsightSummary& WithInsightStatus(const InsightStatus& value) { SetInsightStatus(value); return *this;}

    /**
     * <p>An object containing more detail on the status of the insight.</p>
     */
    inline InsightSummary& WithInsightStatus(InsightStatus&& value) { SetInsightStatus(std::move(value)); return *this;}

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
