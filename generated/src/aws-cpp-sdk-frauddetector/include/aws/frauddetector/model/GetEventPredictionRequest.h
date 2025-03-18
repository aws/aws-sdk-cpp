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
    AWS_FRAUDDETECTOR_API GetEventPredictionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEventPrediction"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    GetEventPredictionRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector version ID.</p>
     */
    inline const Aws::String& GetDetectorVersionId() const { return m_detectorVersionId; }
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }
    template<typename DetectorVersionIdT = Aws::String>
    void SetDetectorVersionId(DetectorVersionIdT&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::forward<DetectorVersionIdT>(value); }
    template<typename DetectorVersionIdT = Aws::String>
    GetEventPredictionRequest& WithDetectorVersionId(DetectorVersionIdT&& value) { SetDetectorVersionId(std::forward<DetectorVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID used to identify the event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    GetEventPredictionRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type associated with the detector specified for the prediction.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    GetEventPredictionRequest& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type (associated with the detector's event type) and specific
     * entity ID representing who performed the event. If an entity id is not
     * available, use "UNKNOWN."</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const { return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    template<typename EntitiesT = Aws::Vector<Entity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<Entity>>
    GetEventPredictionRequest& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = Entity>
    GetEventPredictionRequest& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline const Aws::String& GetEventTimestamp() const { return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    template<typename EventTimestampT = Aws::String>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::String>
    GetEventPredictionRequest& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::String>& GetEventVariables() const { return m_eventVariables; }
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }
    template<typename EventVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::forward<EventVariablesT>(value); }
    template<typename EventVariablesT = Aws::Map<Aws::String, Aws::String>>
    GetEventPredictionRequest& WithEventVariables(EventVariablesT&& value) { SetEventVariables(std::forward<EventVariablesT>(value)); return *this;}
    template<typename EventVariablesKeyT = Aws::String, typename EventVariablesValueT = Aws::String>
    GetEventPredictionRequest& AddEventVariables(EventVariablesKeyT&& key, EventVariablesValueT&& value) {
      m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::forward<EventVariablesKeyT>(key), std::forward<EventVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon SageMaker model endpoint input data blobs.</p>
     */
    inline const Aws::Map<Aws::String, ModelEndpointDataBlob>& GetExternalModelEndpointDataBlobs() const { return m_externalModelEndpointDataBlobs; }
    inline bool ExternalModelEndpointDataBlobsHasBeenSet() const { return m_externalModelEndpointDataBlobsHasBeenSet; }
    template<typename ExternalModelEndpointDataBlobsT = Aws::Map<Aws::String, ModelEndpointDataBlob>>
    void SetExternalModelEndpointDataBlobs(ExternalModelEndpointDataBlobsT&& value) { m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs = std::forward<ExternalModelEndpointDataBlobsT>(value); }
    template<typename ExternalModelEndpointDataBlobsT = Aws::Map<Aws::String, ModelEndpointDataBlob>>
    GetEventPredictionRequest& WithExternalModelEndpointDataBlobs(ExternalModelEndpointDataBlobsT&& value) { SetExternalModelEndpointDataBlobs(std::forward<ExternalModelEndpointDataBlobsT>(value)); return *this;}
    template<typename ExternalModelEndpointDataBlobsKeyT = Aws::String, typename ExternalModelEndpointDataBlobsValueT = ModelEndpointDataBlob>
    GetEventPredictionRequest& AddExternalModelEndpointDataBlobs(ExternalModelEndpointDataBlobsKeyT&& key, ExternalModelEndpointDataBlobsValueT&& value) {
      m_externalModelEndpointDataBlobsHasBeenSet = true; m_externalModelEndpointDataBlobs.emplace(std::forward<ExternalModelEndpointDataBlobsKeyT>(key), std::forward<ExternalModelEndpointDataBlobsValueT>(value)); return *this;
    }
    ///@}
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
