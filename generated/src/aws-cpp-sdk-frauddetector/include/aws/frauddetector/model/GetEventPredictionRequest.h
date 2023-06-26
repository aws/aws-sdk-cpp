/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/frauddetector/model/Entity.h>
#include <aws/frauddetector/model/ModelEndpointDataBlob.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class GetEventPredictionRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventPredictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEventPrediction"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline GetEventPredictionRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline GetEventPredictionRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline GetEventPredictionRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The detector version ID.</p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p>The detector version ID.</p>
     */
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }

    /**
     * <p>The detector version ID.</p>
     */
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId.assign(value); }

    /**
     * <p>The detector version ID.</p>
     */
    inline GetEventPredictionRequest& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p>The detector version ID.</p>
     */
    inline GetEventPredictionRequest& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p>The detector version ID.</p>
     */
    inline GetEventPredictionRequest& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}


    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline GetEventPredictionRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline GetEventPredictionRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline GetEventPredictionRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline GetEventPredictionRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline GetEventPredictionRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline GetEventPredictionRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline GetEventPredictionRequest& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline GetEventPredictionRequest& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline GetEventPredictionRequest& AddEntities(const Entity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }

    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline GetEventPredictionRequest& AddEntities(Entity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline const Aws::String& GetEventTimestamp() const{ return m_eventTimestamp; }

    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }

    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline void SetEventTimestamp(const Aws::String& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }

    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline void SetEventTimestamp(Aws::String&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }

    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline void SetEventTimestamp(const char* value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp.assign(value); }

    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline GetEventPredictionRequest& WithEventTimestamp(const Aws::String& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline GetEventPredictionRequest& WithEventTimestamp(Aws::String&& value) { SetEventTimestamp(std::move(value)); return *this;}

    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline GetEventPredictionRequest& WithEventTimestamp(const char* value) { SetEventTimestamp(value); return *this;}


    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventVariables() const{ return m_eventVariables; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline void SetEventVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = value; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline void SetEventVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::move(value); }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& WithEventVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEventVariables(value); return *this;}

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& WithEventVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEventVariables(std::move(value)); return *this;}

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& AddEventVariables(const Aws::String& key, const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, value); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& AddEventVariables(Aws::String&& key, const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& AddEventVariables(const Aws::String& key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& AddEventVariables(Aws::String&& key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& AddEventVariables(const char* key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& AddEventVariables(Aws::String&& key, const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>  <p>You must provide at least one
     * eventVariable</p>  <p>To ensure most accurate fraud prediction and
     * to simplify your data preparation, Amazon Fraud Detector will replace all
     * missing variables or values as follows:</p> <p> <b>For Amazon Fraud Detector
     * trained models:</b> </p> <p>If a null value is provided explicitly for a
     * variable or if a variable is missing, model will replace the null value or the
     * missing variable (no variable name in the eventVariables map) with calculated
     * default mean/medians for numeric variables and with special values for
     * categorical variables.</p> <p> <b>For imported SageMaker models:</b> </p> <p>If
     * a null value is provided explicitly for a variable, the model and rules will use
     * “null” as the value. If a variable is not provided (no variable name in the
     * eventVariables map), model and rules will use the default value that is provided
     * for the variable. </p>
     */
    inline GetEventPredictionRequest& AddEventVariables(const char* key, const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, value); return *this; }


    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline const Aws::Map<Aws::String, ModelEndpointDataBlob>& GetExternalModelEndpointDataBlobs() const{ return m_externalModelEndpointDataBlobs; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline bool ExternalModelEndpointDataBlobsHasBeenSet() const { return m_externalModelEndpointDataBlobsHasBeenSet; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline void SetExternalModelEndpointDataBlobs(const Aws::Map<Aws::String, ModelEndpointDataBlob>& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs = value; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline void SetExternalModelEndpointDataBlobs(Aws::Map<Aws::String, ModelEndpointDataBlob>&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs = std::move(value); }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& WithExternalModelEndpointDataBlobs(const Aws::Map<Aws::String, ModelEndpointDataBlob>& value) { SetExternalModelEndpointDataBlobs(value); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& WithExternalModelEndpointDataBlobs(Aws::Map<Aws::String, ModelEndpointDataBlob>&& value) { SetExternalModelEndpointDataBlobs(std::move(value)); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& AddExternalModelEndpointDataBlobs(const Aws::String& key, const ModelEndpointDataBlob& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, value); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& AddExternalModelEndpointDataBlobs(Aws::String&& key, const ModelEndpointDataBlob& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& AddExternalModelEndpointDataBlobs(const Aws::String& key, ModelEndpointDataBlob&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& AddExternalModelEndpointDataBlobs(Aws::String&& key, ModelEndpointDataBlob&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& AddExternalModelEndpointDataBlobs(const char* key, ModelEndpointDataBlob&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline GetEventPredictionRequest& AddExternalModelEndpointDataBlobs(const char* key, const ModelEndpointDataBlob& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(key, value); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;

    Aws::String m_eventTimestamp;
    bool m_eventTimestampHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_eventVariables;
    bool m_eventVariablesHasBeenSet = false;

    Aws::Map<Aws::String, ModelEndpointDataBlob> m_externalModelEndpointDataBlobs;
    bool m_externalModelEndpointDataBlobsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
