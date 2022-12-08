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
#include <aws/devops-guru/model/PredictionTimeRange.h>
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
   * <p>Details about a proactive insight. This object is returned by
   * <code>ListInsights</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ProactiveInsight">AWS
   * API Reference</a></p>
   */
  class ProactiveInsight
  {
  public:
    AWS_DEVOPSGURU_API ProactiveInsight();
    AWS_DEVOPSGURU_API ProactiveInsight(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ProactiveInsight& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline ProactiveInsight& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline ProactiveInsight& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline ProactiveInsight& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the proactive insight. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline ProactiveInsight& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline ProactiveInsight& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline ProactiveInsight& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline const InsightSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline void SetSeverity(const InsightSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline void SetSeverity(InsightSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline ProactiveInsight& WithSeverity(const InsightSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline ProactiveInsight& WithSeverity(InsightSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>The status of the proactive insight. </p>
     */
    inline const InsightStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the proactive insight. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the proactive insight. </p>
     */
    inline void SetStatus(const InsightStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the proactive insight. </p>
     */
    inline void SetStatus(InsightStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the proactive insight. </p>
     */
    inline ProactiveInsight& WithStatus(const InsightStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the proactive insight. </p>
     */
    inline ProactiveInsight& WithStatus(InsightStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const InsightTimeRange& GetInsightTimeRange() const{ return m_insightTimeRange; }

    
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }

    
    inline void SetInsightTimeRange(const InsightTimeRange& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = value; }

    
    inline void SetInsightTimeRange(InsightTimeRange&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::move(value); }

    
    inline ProactiveInsight& WithInsightTimeRange(const InsightTimeRange& value) { SetInsightTimeRange(value); return *this;}

    
    inline ProactiveInsight& WithInsightTimeRange(InsightTimeRange&& value) { SetInsightTimeRange(std::move(value)); return *this;}


    
    inline const PredictionTimeRange& GetPredictionTimeRange() const{ return m_predictionTimeRange; }

    
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }

    
    inline void SetPredictionTimeRange(const PredictionTimeRange& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = value; }

    
    inline void SetPredictionTimeRange(PredictionTimeRange&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::move(value); }

    
    inline ProactiveInsight& WithPredictionTimeRange(const PredictionTimeRange& value) { SetPredictionTimeRange(value); return *this;}

    
    inline ProactiveInsight& WithPredictionTimeRange(PredictionTimeRange&& value) { SetPredictionTimeRange(std::move(value)); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ProactiveInsight& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ProactiveInsight& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}


    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline const Aws::String& GetSsmOpsItemId() const{ return m_ssmOpsItemId; }

    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline bool SsmOpsItemIdHasBeenSet() const { return m_ssmOpsItemIdHasBeenSet; }

    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline void SetSsmOpsItemId(const Aws::String& value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId = value; }

    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline void SetSsmOpsItemId(Aws::String&& value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId = std::move(value); }

    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline void SetSsmOpsItemId(const char* value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId.assign(value); }

    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline ProactiveInsight& WithSsmOpsItemId(const Aws::String& value) { SetSsmOpsItemId(value); return *this;}

    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline ProactiveInsight& WithSsmOpsItemId(Aws::String&& value) { SetSsmOpsItemId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Amazon Web Services System Manager OpsItem created for this
     * insight. You must enable the creation of OpstItems insights before they are
     * created for each insight. </p>
     */
    inline ProactiveInsight& WithSsmOpsItemId(const char* value) { SetSsmOpsItemId(value); return *this;}


    /**
     * <p>Describes the proactive insight.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes the proactive insight.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Describes the proactive insight.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes the proactive insight.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Describes the proactive insight.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes the proactive insight.</p>
     */
    inline ProactiveInsight& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes the proactive insight.</p>
     */
    inline ProactiveInsight& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes the proactive insight.</p>
     */
    inline ProactiveInsight& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InsightSeverity m_severity;
    bool m_severityHasBeenSet = false;

    InsightStatus m_status;
    bool m_statusHasBeenSet = false;

    InsightTimeRange m_insightTimeRange;
    bool m_insightTimeRangeHasBeenSet = false;

    PredictionTimeRange m_predictionTimeRange;
    bool m_predictionTimeRangeHasBeenSet = false;

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
