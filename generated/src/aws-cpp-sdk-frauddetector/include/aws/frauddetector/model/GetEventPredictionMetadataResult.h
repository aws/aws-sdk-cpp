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
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataResult();
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The event ID. </p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventId = value; }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventId = std::move(value); }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(const char* value) { m_eventId.assign(value); }

    /**
     * <p> The event ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p> The event ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p> The event ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeName = value; }

    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeName = std::move(value); }

    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeName.assign(value); }

    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline GetEventPredictionMetadataResult& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline GetEventPredictionMetadataResult& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p> The event type associated with the detector specified for this prediction.
     * </p>
     */
    inline GetEventPredictionMetadataResult& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p> The entity ID. </p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p> The entity ID. </p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityId = value; }

    /**
     * <p> The entity ID. </p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityId = std::move(value); }

    /**
     * <p> The entity ID. </p>
     */
    inline void SetEntityId(const char* value) { m_entityId.assign(value); }

    /**
     * <p> The entity ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p> The entity ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p> The entity ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p> The entity type. </p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p> The entity type. </p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityType = value; }

    /**
     * <p> The entity type. </p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityType = std::move(value); }

    /**
     * <p> The entity type. </p>
     */
    inline void SetEntityType(const char* value) { m_entityType.assign(value); }

    /**
     * <p> The entity type. </p>
     */
    inline GetEventPredictionMetadataResult& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p> The entity type. </p>
     */
    inline GetEventPredictionMetadataResult& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p> The entity type. </p>
     */
    inline GetEventPredictionMetadataResult& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline const Aws::String& GetEventTimestamp() const{ return m_eventTimestamp; }

    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline void SetEventTimestamp(const Aws::String& value) { m_eventTimestamp = value; }

    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline void SetEventTimestamp(Aws::String&& value) { m_eventTimestamp = std::move(value); }

    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline void SetEventTimestamp(const char* value) { m_eventTimestamp.assign(value); }

    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventTimestamp(const Aws::String& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventTimestamp(Aws::String&& value) { SetEventTimestamp(std::move(value)); return *this;}

    /**
     * <p> The timestamp for when the prediction was generated for the associated event
     * ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventTimestamp(const char* value) { SetEventTimestamp(value); return *this;}


    /**
     * <p> The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorId = value; }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorId = std::move(value); }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(const char* value) { m_detectorId.assign(value); }

    /**
     * <p> The detector ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p> The detector ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p> The detector ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p> The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionId = value; }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionId = std::move(value); }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionId.assign(value); }

    /**
     * <p> The detector version ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p> The detector version ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p> The detector version ID. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}


    /**
     * <p> The status of the detector version. </p>
     */
    inline const Aws::String& GetDetectorVersionStatus() const{ return m_detectorVersionStatus; }

    /**
     * <p> The status of the detector version. </p>
     */
    inline void SetDetectorVersionStatus(const Aws::String& value) { m_detectorVersionStatus = value; }

    /**
     * <p> The status of the detector version. </p>
     */
    inline void SetDetectorVersionStatus(Aws::String&& value) { m_detectorVersionStatus = std::move(value); }

    /**
     * <p> The status of the detector version. </p>
     */
    inline void SetDetectorVersionStatus(const char* value) { m_detectorVersionStatus.assign(value); }

    /**
     * <p> The status of the detector version. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorVersionStatus(const Aws::String& value) { SetDetectorVersionStatus(value); return *this;}

    /**
     * <p> The status of the detector version. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorVersionStatus(Aws::String&& value) { SetDetectorVersionStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the detector version. </p>
     */
    inline GetEventPredictionMetadataResult& WithDetectorVersionStatus(const char* value) { SetDetectorVersionStatus(value); return *this;}


    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline const Aws::Vector<EventVariableSummary>& GetEventVariables() const{ return m_eventVariables; }

    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline void SetEventVariables(const Aws::Vector<EventVariableSummary>& value) { m_eventVariables = value; }

    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline void SetEventVariables(Aws::Vector<EventVariableSummary>&& value) { m_eventVariables = std::move(value); }

    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventVariables(const Aws::Vector<EventVariableSummary>& value) { SetEventVariables(value); return *this;}

    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline GetEventPredictionMetadataResult& WithEventVariables(Aws::Vector<EventVariableSummary>&& value) { SetEventVariables(std::move(value)); return *this;}

    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline GetEventPredictionMetadataResult& AddEventVariables(const EventVariableSummary& value) { m_eventVariables.push_back(value); return *this; }

    /**
     * <p> A list of event variables that influenced the prediction scores. </p>
     */
    inline GetEventPredictionMetadataResult& AddEventVariables(EventVariableSummary&& value) { m_eventVariables.push_back(std::move(value)); return *this; }


    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline const Aws::Vector<EvaluatedRule>& GetRules() const{ return m_rules; }

    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline void SetRules(const Aws::Vector<EvaluatedRule>& value) { m_rules = value; }

    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline void SetRules(Aws::Vector<EvaluatedRule>&& value) { m_rules = std::move(value); }

    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline GetEventPredictionMetadataResult& WithRules(const Aws::Vector<EvaluatedRule>& value) { SetRules(value); return *this;}

    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline GetEventPredictionMetadataResult& WithRules(Aws::Vector<EvaluatedRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline GetEventPredictionMetadataResult& AddRules(const EvaluatedRule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p> List of rules associated with the detector version that were used for
     * evaluating variable values. </p>
     */
    inline GetEventPredictionMetadataResult& AddRules(EvaluatedRule&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p> The execution mode of the rule used for evaluating variable values. </p>
     */
    inline const RuleExecutionMode& GetRuleExecutionMode() const{ return m_ruleExecutionMode; }

    /**
     * <p> The execution mode of the rule used for evaluating variable values. </p>
     */
    inline void SetRuleExecutionMode(const RuleExecutionMode& value) { m_ruleExecutionMode = value; }

    /**
     * <p> The execution mode of the rule used for evaluating variable values. </p>
     */
    inline void SetRuleExecutionMode(RuleExecutionMode&& value) { m_ruleExecutionMode = std::move(value); }

    /**
     * <p> The execution mode of the rule used for evaluating variable values. </p>
     */
    inline GetEventPredictionMetadataResult& WithRuleExecutionMode(const RuleExecutionMode& value) { SetRuleExecutionMode(value); return *this;}

    /**
     * <p> The execution mode of the rule used for evaluating variable values. </p>
     */
    inline GetEventPredictionMetadataResult& WithRuleExecutionMode(RuleExecutionMode&& value) { SetRuleExecutionMode(std::move(value)); return *this;}


    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOutcomes() const{ return m_outcomes; }

    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline void SetOutcomes(const Aws::Vector<Aws::String>& value) { m_outcomes = value; }

    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline void SetOutcomes(Aws::Vector<Aws::String>&& value) { m_outcomes = std::move(value); }

    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline GetEventPredictionMetadataResult& WithOutcomes(const Aws::Vector<Aws::String>& value) { SetOutcomes(value); return *this;}

    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline GetEventPredictionMetadataResult& WithOutcomes(Aws::Vector<Aws::String>&& value) { SetOutcomes(std::move(value)); return *this;}

    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline GetEventPredictionMetadataResult& AddOutcomes(const Aws::String& value) { m_outcomes.push_back(value); return *this; }

    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline GetEventPredictionMetadataResult& AddOutcomes(Aws::String&& value) { m_outcomes.push_back(std::move(value)); return *this; }

    /**
     * <p> The outcomes of the matched rule, based on the rule execution mode. </p>
     */
    inline GetEventPredictionMetadataResult& AddOutcomes(const char* value) { m_outcomes.push_back(value); return *this; }


    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline const Aws::Vector<EvaluatedModelVersion>& GetEvaluatedModelVersions() const{ return m_evaluatedModelVersions; }

    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline void SetEvaluatedModelVersions(const Aws::Vector<EvaluatedModelVersion>& value) { m_evaluatedModelVersions = value; }

    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline void SetEvaluatedModelVersions(Aws::Vector<EvaluatedModelVersion>&& value) { m_evaluatedModelVersions = std::move(value); }

    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline GetEventPredictionMetadataResult& WithEvaluatedModelVersions(const Aws::Vector<EvaluatedModelVersion>& value) { SetEvaluatedModelVersions(value); return *this;}

    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline GetEventPredictionMetadataResult& WithEvaluatedModelVersions(Aws::Vector<EvaluatedModelVersion>&& value) { SetEvaluatedModelVersions(std::move(value)); return *this;}

    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline GetEventPredictionMetadataResult& AddEvaluatedModelVersions(const EvaluatedModelVersion& value) { m_evaluatedModelVersions.push_back(value); return *this; }

    /**
     * <p> Model versions that were evaluated for generating predictions. </p>
     */
    inline GetEventPredictionMetadataResult& AddEvaluatedModelVersions(EvaluatedModelVersion&& value) { m_evaluatedModelVersions.push_back(std::move(value)); return *this; }


    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline const Aws::Vector<EvaluatedExternalModel>& GetEvaluatedExternalModels() const{ return m_evaluatedExternalModels; }

    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline void SetEvaluatedExternalModels(const Aws::Vector<EvaluatedExternalModel>& value) { m_evaluatedExternalModels = value; }

    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline void SetEvaluatedExternalModels(Aws::Vector<EvaluatedExternalModel>&& value) { m_evaluatedExternalModels = std::move(value); }

    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline GetEventPredictionMetadataResult& WithEvaluatedExternalModels(const Aws::Vector<EvaluatedExternalModel>& value) { SetEvaluatedExternalModels(value); return *this;}

    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline GetEventPredictionMetadataResult& WithEvaluatedExternalModels(Aws::Vector<EvaluatedExternalModel>&& value) { SetEvaluatedExternalModels(std::move(value)); return *this;}

    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline GetEventPredictionMetadataResult& AddEvaluatedExternalModels(const EvaluatedExternalModel& value) { m_evaluatedExternalModels.push_back(value); return *this; }

    /**
     * <p> External (Amazon SageMaker) models that were evaluated for generating
     * predictions. </p>
     */
    inline GetEventPredictionMetadataResult& AddEvaluatedExternalModels(EvaluatedExternalModel&& value) { m_evaluatedExternalModels.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline const Aws::String& GetPredictionTimestamp() const{ return m_predictionTimestamp; }

    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline void SetPredictionTimestamp(const Aws::String& value) { m_predictionTimestamp = value; }

    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline void SetPredictionTimestamp(Aws::String&& value) { m_predictionTimestamp = std::move(value); }

    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline void SetPredictionTimestamp(const char* value) { m_predictionTimestamp.assign(value); }

    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline GetEventPredictionMetadataResult& WithPredictionTimestamp(const Aws::String& value) { SetPredictionTimestamp(value); return *this;}

    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline GetEventPredictionMetadataResult& WithPredictionTimestamp(Aws::String&& value) { SetPredictionTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp that defines when the prediction was generated. </p>
     */
    inline GetEventPredictionMetadataResult& WithPredictionTimestamp(const char* value) { SetPredictionTimestamp(value); return *this;}

  private:

    Aws::String m_eventId;

    Aws::String m_eventTypeName;

    Aws::String m_entityId;

    Aws::String m_entityType;

    Aws::String m_eventTimestamp;

    Aws::String m_detectorId;

    Aws::String m_detectorVersionId;

    Aws::String m_detectorVersionStatus;

    Aws::Vector<EventVariableSummary> m_eventVariables;

    Aws::Vector<EvaluatedRule> m_rules;

    RuleExecutionMode m_ruleExecutionMode;

    Aws::Vector<Aws::String> m_outcomes;

    Aws::Vector<EvaluatedModelVersion> m_evaluatedModelVersions;

    Aws::Vector<EvaluatedExternalModel> m_evaluatedExternalModels;

    Aws::String m_predictionTimestamp;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
