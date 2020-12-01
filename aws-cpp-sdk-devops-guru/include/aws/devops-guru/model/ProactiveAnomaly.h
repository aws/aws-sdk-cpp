/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/AnomalyTimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/PredictionTimeRange.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/devops-guru/model/AnomalySeverity.h>
#include <aws/devops-guru/model/AnomalySourceDetails.h>
#include <aws/devops-guru/model/AnomalyStatus.h>
#include <aws/core/utils/DateTime.h>
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

  class AWS_DEVOPSGURU_API ProactiveAnomaly
  {
  public:
    ProactiveAnomaly();
    ProactiveAnomaly(Aws::Utils::Json::JsonView jsonValue);
    ProactiveAnomaly& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AnomalyTimeRange& GetAnomalyTimeRange() const{ return m_anomalyTimeRange; }

    
    inline bool AnomalyTimeRangeHasBeenSet() const { return m_anomalyTimeRangeHasBeenSet; }

    
    inline void SetAnomalyTimeRange(const AnomalyTimeRange& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = value; }

    
    inline void SetAnomalyTimeRange(AnomalyTimeRange&& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = std::move(value); }

    
    inline ProactiveAnomaly& WithAnomalyTimeRange(const AnomalyTimeRange& value) { SetAnomalyTimeRange(value); return *this;}

    
    inline ProactiveAnomaly& WithAnomalyTimeRange(AnomalyTimeRange&& value) { SetAnomalyTimeRange(std::move(value)); return *this;}


    
    inline const Aws::String& GetAssociatedInsightId() const{ return m_associatedInsightId; }

    
    inline bool AssociatedInsightIdHasBeenSet() const { return m_associatedInsightIdHasBeenSet; }

    
    inline void SetAssociatedInsightId(const Aws::String& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = value; }

    
    inline void SetAssociatedInsightId(Aws::String&& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = std::move(value); }

    
    inline void SetAssociatedInsightId(const char* value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId.assign(value); }

    
    inline ProactiveAnomaly& WithAssociatedInsightId(const Aws::String& value) { SetAssociatedInsightId(value); return *this;}

    
    inline ProactiveAnomaly& WithAssociatedInsightId(Aws::String&& value) { SetAssociatedInsightId(std::move(value)); return *this;}

    
    inline ProactiveAnomaly& WithAssociatedInsightId(const char* value) { SetAssociatedInsightId(value); return *this;}


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline ProactiveAnomaly& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline ProactiveAnomaly& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline ProactiveAnomaly& WithId(const char* value) { SetId(value); return *this;}


    
    inline double GetLimit() const{ return m_limit; }

    
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    
    inline void SetLimit(double value) { m_limitHasBeenSet = true; m_limit = value; }

    
    inline ProactiveAnomaly& WithLimit(double value) { SetLimit(value); return *this;}


    
    inline const PredictionTimeRange& GetPredictionTimeRange() const{ return m_predictionTimeRange; }

    
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }

    
    inline void SetPredictionTimeRange(const PredictionTimeRange& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = value; }

    
    inline void SetPredictionTimeRange(PredictionTimeRange&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::move(value); }

    
    inline ProactiveAnomaly& WithPredictionTimeRange(const PredictionTimeRange& value) { SetPredictionTimeRange(value); return *this;}

    
    inline ProactiveAnomaly& WithPredictionTimeRange(PredictionTimeRange&& value) { SetPredictionTimeRange(std::move(value)); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ProactiveAnomaly& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ProactiveAnomaly& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}


    
    inline const AnomalySeverity& GetSeverity() const{ return m_severity; }

    
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    
    inline void SetSeverity(const AnomalySeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    
    inline void SetSeverity(AnomalySeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    
    inline ProactiveAnomaly& WithSeverity(const AnomalySeverity& value) { SetSeverity(value); return *this;}

    
    inline ProactiveAnomaly& WithSeverity(AnomalySeverity&& value) { SetSeverity(std::move(value)); return *this;}


    
    inline const AnomalySourceDetails& GetSourceDetails() const{ return m_sourceDetails; }

    
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }

    
    inline void SetSourceDetails(const AnomalySourceDetails& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = value; }

    
    inline void SetSourceDetails(AnomalySourceDetails&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::move(value); }

    
    inline ProactiveAnomaly& WithSourceDetails(const AnomalySourceDetails& value) { SetSourceDetails(value); return *this;}

    
    inline ProactiveAnomaly& WithSourceDetails(AnomalySourceDetails&& value) { SetSourceDetails(std::move(value)); return *this;}


    
    inline const AnomalyStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const AnomalyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(AnomalyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ProactiveAnomaly& WithStatus(const AnomalyStatus& value) { SetStatus(value); return *this;}

    
    inline ProactiveAnomaly& WithStatus(AnomalyStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    
    inline ProactiveAnomaly& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    
    inline ProactiveAnomaly& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    AnomalyTimeRange m_anomalyTimeRange;
    bool m_anomalyTimeRangeHasBeenSet;

    Aws::String m_associatedInsightId;
    bool m_associatedInsightIdHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    double m_limit;
    bool m_limitHasBeenSet;

    PredictionTimeRange m_predictionTimeRange;
    bool m_predictionTimeRangeHasBeenSet;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet;

    AnomalySeverity m_severity;
    bool m_severityHasBeenSet;

    AnomalySourceDetails m_sourceDetails;
    bool m_sourceDetailsHasBeenSet;

    AnomalyStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
