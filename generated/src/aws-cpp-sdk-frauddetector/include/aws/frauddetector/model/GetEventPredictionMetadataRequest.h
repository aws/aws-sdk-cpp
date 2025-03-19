/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class GetEventPredictionMetadataRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEventPredictionMetadata"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The event ID. </p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    GetEventPredictionMetadataRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The event type associated with the detector specified for the prediction.
     * </p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    GetEventPredictionMetadataRequest& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    GetEventPredictionMetadataRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const { return m_detectorVersionId; }
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }
    template<typename DetectorVersionIdT = Aws::String>
    void SetDetectorVersionId(DetectorVersionIdT&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::forward<DetectorVersionIdT>(value); }
    template<typename DetectorVersionIdT = Aws::String>
    GetEventPredictionMetadataRequest& WithDetectorVersionId(DetectorVersionIdT&& value) { SetDetectorVersionId(std::forward<DetectorVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that defines when the prediction was generated. The timestamp
     * must be specified using ISO 8601 standard in UTC.</p> <p>We recommend calling <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_ListEventPredictions.html">ListEventPredictions</a>
     * first, and using the <code>predictionTimestamp</code> value in the response to
     * provide an accurate prediction timestamp value.</p>
     */
    inline const Aws::String& GetPredictionTimestamp() const { return m_predictionTimestamp; }
    inline bool PredictionTimestampHasBeenSet() const { return m_predictionTimestampHasBeenSet; }
    template<typename PredictionTimestampT = Aws::String>
    void SetPredictionTimestamp(PredictionTimestampT&& value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp = std::forward<PredictionTimestampT>(value); }
    template<typename PredictionTimestampT = Aws::String>
    GetEventPredictionMetadataRequest& WithPredictionTimestamp(PredictionTimestampT&& value) { SetPredictionTimestamp(std::forward<PredictionTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    Aws::String m_predictionTimestamp;
    bool m_predictionTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
