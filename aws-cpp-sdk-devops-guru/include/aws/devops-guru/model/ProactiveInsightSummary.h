﻿/**
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
#include <aws/devops-guru/model/ServiceCollection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <code>DescribeInsight.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ProactiveInsightSummary">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API ProactiveInsightSummary
  {
  public:
    ProactiveInsightSummary();
    ProactiveInsightSummary(Aws::Utils::Json::JsonView jsonValue);
    ProactiveInsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ProactiveInsightSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline ProactiveInsightSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the proactive insight. </p>
     */
    inline ProactiveInsightSummary& WithId(const char* value) { SetId(value); return *this;}


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
    inline ProactiveInsightSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline ProactiveInsightSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the proactive insight. </p>
     */
    inline ProactiveInsightSummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline ProactiveInsightSummary& WithSeverity(const InsightSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the insight. For more information, see <a
     * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/working-with-insights.html#understanding-insights-severities">Understanding
     * insight severities</a> in the <i>Amazon DevOps Guru User Guide</i>.</p>
     */
    inline ProactiveInsightSummary& WithSeverity(InsightSeverity&& value) { SetSeverity(std::move(value)); return *this;}


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
    inline ProactiveInsightSummary& WithStatus(const InsightStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the proactive insight. </p>
     */
    inline ProactiveInsightSummary& WithStatus(InsightStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const InsightTimeRange& GetInsightTimeRange() const{ return m_insightTimeRange; }

    
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }

    
    inline void SetInsightTimeRange(const InsightTimeRange& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = value; }

    
    inline void SetInsightTimeRange(InsightTimeRange&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::move(value); }

    
    inline ProactiveInsightSummary& WithInsightTimeRange(const InsightTimeRange& value) { SetInsightTimeRange(value); return *this;}

    
    inline ProactiveInsightSummary& WithInsightTimeRange(InsightTimeRange&& value) { SetInsightTimeRange(std::move(value)); return *this;}


    
    inline const PredictionTimeRange& GetPredictionTimeRange() const{ return m_predictionTimeRange; }

    
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }

    
    inline void SetPredictionTimeRange(const PredictionTimeRange& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = value; }

    
    inline void SetPredictionTimeRange(PredictionTimeRange&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::move(value); }

    
    inline ProactiveInsightSummary& WithPredictionTimeRange(const PredictionTimeRange& value) { SetPredictionTimeRange(value); return *this;}

    
    inline ProactiveInsightSummary& WithPredictionTimeRange(PredictionTimeRange&& value) { SetPredictionTimeRange(std::move(value)); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ProactiveInsightSummary& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ProactiveInsightSummary& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}


    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline const ServiceCollection& GetServiceCollection() const{ return m_serviceCollection; }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline bool ServiceCollectionHasBeenSet() const { return m_serviceCollectionHasBeenSet; }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline void SetServiceCollection(const ServiceCollection& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = value; }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline void SetServiceCollection(ServiceCollection&& value) { m_serviceCollectionHasBeenSet = true; m_serviceCollection = std::move(value); }

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline ProactiveInsightSummary& WithServiceCollection(const ServiceCollection& value) { SetServiceCollection(value); return *this;}

    /**
     * <p>A collection of the names of Amazon Web Services services.</p>
     */
    inline ProactiveInsightSummary& WithServiceCollection(ServiceCollection&& value) { SetServiceCollection(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedResourceArns() const{ return m_associatedResourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline bool AssociatedResourceArnsHasBeenSet() const { return m_associatedResourceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline void SetAssociatedResourceArns(const Aws::Vector<Aws::String>& value) { m_associatedResourceArnsHasBeenSet = true; m_associatedResourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline void SetAssociatedResourceArns(Aws::Vector<Aws::String>&& value) { m_associatedResourceArnsHasBeenSet = true; m_associatedResourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline ProactiveInsightSummary& WithAssociatedResourceArns(const Aws::Vector<Aws::String>& value) { SetAssociatedResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline ProactiveInsightSummary& WithAssociatedResourceArns(Aws::Vector<Aws::String>&& value) { SetAssociatedResourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline ProactiveInsightSummary& AddAssociatedResourceArns(const Aws::String& value) { m_associatedResourceArnsHasBeenSet = true; m_associatedResourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline ProactiveInsightSummary& AddAssociatedResourceArns(Aws::String&& value) { m_associatedResourceArnsHasBeenSet = true; m_associatedResourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon Web Services resources that
     * generated this insight.</p>
     */
    inline ProactiveInsightSummary& AddAssociatedResourceArns(const char* value) { m_associatedResourceArnsHasBeenSet = true; m_associatedResourceArns.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    InsightSeverity m_severity;
    bool m_severityHasBeenSet;

    InsightStatus m_status;
    bool m_statusHasBeenSet;

    InsightTimeRange m_insightTimeRange;
    bool m_insightTimeRangeHasBeenSet;

    PredictionTimeRange m_predictionTimeRange;
    bool m_predictionTimeRangeHasBeenSet;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet;

    ServiceCollection m_serviceCollection;
    bool m_serviceCollectionHasBeenSet;

    Aws::Vector<Aws::String> m_associatedResourceArns;
    bool m_associatedResourceArnsHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
