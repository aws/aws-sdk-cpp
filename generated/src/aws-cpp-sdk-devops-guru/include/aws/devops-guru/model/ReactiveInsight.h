/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/devops-guru/model/InsightStatus.h>
#include <aws/devops-guru/model/InsightTimeRange.h>
#include <aws/devops-guru/model/ResourceCollection.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about a reactive insight. This object is returned by
   * <code>ListInsights</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ReactiveInsight">AWS
   * API Reference</a></p>
   */
  class ReactiveInsight
  {
  public:
    AWS_DEVOPSGURU_API ReactiveInsight() = default;
    AWS_DEVOPSGURU_API ReactiveInsight(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ReactiveInsight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of a reactive insight. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ReactiveInsight& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of a reactive insight. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReactiveInsight& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline InsightSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(InsightSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ReactiveInsight& WithSeverity(InsightSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of a reactive insight. </p>
     */
    inline InsightStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InsightStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReactiveInsight& WithStatus(InsightStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const InsightTimeRange& GetInsightTimeRange() const { return m_insightTimeRange; }
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }
    template<typename InsightTimeRangeT = InsightTimeRange>
    void SetInsightTimeRange(InsightTimeRangeT&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::forward<InsightTimeRangeT>(value); }
    template<typename InsightTimeRangeT = InsightTimeRange>
    ReactiveInsight& WithInsightTimeRange(InsightTimeRangeT&& value) { SetInsightTimeRange(std::forward<InsightTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceCollection& GetResourceCollection() const { return m_resourceCollection; }
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }
    template<typename ResourceCollectionT = ResourceCollection>
    void SetResourceCollection(ResourceCollectionT&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::forward<ResourceCollectionT>(value); }
    template<typename ResourceCollectionT = ResourceCollection>
    ReactiveInsight& WithResourceCollection(ResourceCollectionT&& value) { SetResourceCollection(std::forward<ResourceCollectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline const Aws::String& GetSsmOpsItemId() const { return m_ssmOpsItemId; }
    inline bool SsmOpsItemIdHasBeenSet() const { return m_ssmOpsItemIdHasBeenSet; }
    template<typename SsmOpsItemIdT = Aws::String>
    void SetSsmOpsItemId(SsmOpsItemIdT&& value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId = std::forward<SsmOpsItemIdT>(value); }
    template<typename SsmOpsItemIdT = Aws::String>
    ReactiveInsight& WithSsmOpsItemId(SsmOpsItemIdT&& value) { SetSsmOpsItemId(std::forward<SsmOpsItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the reactive insight.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReactiveInsight& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InsightSeverity m_severity{InsightSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    InsightStatus m_status{InsightStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    InsightTimeRange m_insightTimeRange;
    bool m_insightTimeRangeHasBeenSet = false;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet = false;

    Aws::String m_ssmOpsItemId;
    bool m_ssmOpsItemIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
