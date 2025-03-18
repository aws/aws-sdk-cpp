/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/RuleExecutionMode.h>
#include <aws/frauddetector/model/EventVariableSummary.h>
#include <aws/frauddetector/model/EvaluatedRule.h>
#include <aws/frauddetector/model/EvaluatedModelVersion.h>
#include <aws/frauddetector/model/EvaluatedExternalModel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FraudDetector
{
namespace Model
{
  class GetEventPredictionMetadataResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataResult() = default;
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The event ID. </p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    GetEventPredictionMetadataResult& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    GetEventPredictionMetadataResult& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The entity ID. </p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    GetEventPredictionMetadataResult& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The entity type. </p>
     */
    inline const Aws::String& GetEntityType() const { return m_entityType; }
    template<typename EntityTypeT = Aws::String>
    void SetEntityType(EntityTypeT&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::forward<EntityTypeT>(value); }
    template<typename EntityTypeT = Aws::String>
    GetEventPredictionMetadataResult& WithEntityType(EntityTypeT&& value) { SetEntityType(std::forward<EntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline const Aws::String& GetEventTimestamp() const { return m_eventTimestamp; }
    template<typename EventTimestampT = Aws::String>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::String>
    GetEventPredictionMetadataResult& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    GetEventPredictionMetadataResult& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const { return m_detectorVersionId; }
    template<typename DetectorVersionIdT = Aws::String>
    void SetDetectorVersionId(DetectorVersionIdT&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::forward<DetectorVersionIdT>(value); }
    template<typename DetectorVersionIdT = Aws::String>
    GetEventPredictionMetadataResult& WithDetectorVersionId(DetectorVersionIdT&& value) { SetDetectorVersionId(std::forward<DetectorVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the detector version. </p>
     */
    inline const Aws::String& GetDetectorVersionStatus() const { return m_detectorVersionStatus; }
    template<typename DetectorVersionStatusT = Aws::String>
    void SetDetectorVersionStatus(DetectorVersionStatusT&& value) { m_detectorVersionStatusHasBeenSet = true; m_detectorVersionStatus = std::forward<DetectorVersionStatusT>(value); }
    template<typename DetectorVersionStatusT = Aws::String>
    GetEventPredictionMetadataResult& WithDetectorVersionStatus(DetectorVersionStatusT&& value) { SetDetectorVersionStatus(std::forward<DetectorVersionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline const Aws::Vector<EventVariableSummary>& GetEventVariables() const { return m_eventVariables; }
    template<typename EventVariablesT = Aws::Vector<EventVariableSummary>>
    void SetEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::forward<EventVariablesT>(value); }
    template<typename EventVariablesT = Aws::Vector<EventVariableSummary>>
    GetEventPredictionMetadataResult& WithEventVariables(EventVariablesT&& value) { SetEventVariables(std::forward<EventVariablesT>(value)); return *this;}
    template<typename EventVariablesT = EventVariableSummary>
    GetEventPredictionMetadataResult& AddEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace_back(std::forward<EventVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline const Aws::Vector<EvaluatedRule>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<EvaluatedRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<EvaluatedRule>>
    GetEventPredictionMetadataResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = EvaluatedRule>
    GetEventPredictionMetadataResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The execution mode of the rule used for evaluating variable values. </p>
     */
    inline RuleExecutionMode GetRuleExecutionMode() const { return m_ruleExecutionMode; }
    inline void SetRuleExecutionMode(RuleExecutionMode value) { m_ruleExecutionModeHasBeenSet = true; m_ruleExecutionMode = value; }
    inline GetEventPredictionMetadataResult& WithRuleExecutionMode(RuleExecutionMode value) { SetRuleExecutionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const { return m_outcomes; }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    void SetOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes = std::forward<OutcomesT>(value); }
    template<typename OutcomesT = Aws::Vector<Aws::String>>
    GetEventPredictionMetadataResult& WithOutcomes(OutcomesT&& value) { SetOutcomes(std::forward<OutcomesT>(value)); return *this;}
    template<typename OutcomesT = Aws::String>
    GetEventPredictionMetadataResult& AddOutcomes(OutcomesT&& value) { m_outcomesHasBeenSet = true; m_outcomes.emplace_back(std::forward<OutcomesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline const Aws::Vector<EvaluatedModelVersion>& GetEvaluatedModelVersions() const { return m_evaluatedModelVersions; }
    template<typename EvaluatedModelVersionsT = Aws::Vector<EvaluatedModelVersion>>
    void SetEvaluatedModelVersions(EvaluatedModelVersionsT&& value) { m_evaluatedModelVersionsHasBeenSet = true; m_evaluatedModelVersions = std::forward<EvaluatedModelVersionsT>(value); }
    template<typename EvaluatedModelVersionsT = Aws::Vector<EvaluatedModelVersion>>
    GetEventPredictionMetadataResult& WithEvaluatedModelVersions(EvaluatedModelVersionsT&& value) { SetEvaluatedModelVersions(std::forward<EvaluatedModelVersionsT>(value)); return *this;}
    template<typename EvaluatedModelVersionsT = EvaluatedModelVersion>
    GetEventPredictionMetadataResult& AddEvaluatedModelVersions(EvaluatedModelVersionsT&& value) { m_evaluatedModelVersionsHasBeenSet = true; m_evaluatedModelVersions.emplace_back(std::forward<EvaluatedModelVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline const Aws::Vector<EvaluatedExternalModel>& GetEvaluatedExternalModels() const { return m_evaluatedExternalModels; }
    template<typename EvaluatedExternalModelsT = Aws::Vector<EvaluatedExternalModel>>
    void SetEvaluatedExternalModels(EvaluatedExternalModelsT&& value) { m_evaluatedExternalModelsHasBeenSet = true; m_evaluatedExternalModels = std::forward<EvaluatedExternalModelsT>(value); }
    template<typename EvaluatedExternalModelsT = Aws::Vector<EvaluatedExternalModel>>
    GetEventPredictionMetadataResult& WithEvaluatedExternalModels(EvaluatedExternalModelsT&& value) { SetEvaluatedExternalModels(std::forward<EvaluatedExternalModelsT>(value)); return *this;}
    template<typename EvaluatedExternalModelsT = EvaluatedExternalModel>
    GetEventPredictionMetadataResult& AddEvaluatedExternalModels(EvaluatedExternalModelsT&& value) { m_evaluatedExternalModelsHasBeenSet = true; m_evaluatedExternalModels.emplace_back(std::forward<EvaluatedExternalModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline const Aws::String& GetPredictionTimestamp() const { return m_predictionTimestamp; }
    template<typename PredictionTimestampT = Aws::String>
    void SetPredictionTimestamp(PredictionTimestampT&& value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp = std::forward<PredictionTimestampT>(value); }
    template<typename PredictionTimestampT = Aws::String>
    GetEventPredictionMetadataResult& WithPredictionTimestamp(PredictionTimestampT&& value) { SetPredictionTimestamp(std::forward<PredictionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEventPredictionMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityType;
    bool m_entityTypeHasBeenSet = false;

    Aws::String m_eventTimestamp;
    bool m_eventTimestampHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    Aws::String m_detectorVersionStatus;
    bool m_detectorVersionStatusHasBeenSet = false;

    Aws::Vector<EventVariableSummary> m_eventVariables;
    bool m_eventVariablesHasBeenSet = false;

    Aws::Vector<EvaluatedRule> m_rules;
    bool m_rulesHasBeenSet = false;

    RuleExecutionMode m_ruleExecutionMode{RuleExecutionMode::NOT_SET};
    bool m_ruleExecutionModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_outcomes;
    bool m_outcomesHasBeenSet = false;

    Aws::Vector<EvaluatedModelVersion> m_evaluatedModelVersions;
    bool m_evaluatedModelVersionsHasBeenSet = false;

    Aws::Vector<EvaluatedExternalModel> m_evaluatedExternalModels;
    bool m_evaluatedExternalModelsHasBeenSet = false;

    Aws::String m_predictionTimestamp;
    bool m_predictionTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
