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
    AWS_FRAUDDETECTOR_API GetEventPredictionMetadataRequest();

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
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline GetEventPredictionMetadataRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline GetEventPredictionMetadataRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline GetEventPredictionMetadataRequest& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The event type associated with the detector specified for the prediction.
     * </p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }
    inline GetEventPredictionMetadataRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}
    inline GetEventPredictionMetadataRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}
    inline GetEventPredictionMetadataRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline GetEventPredictionMetadataRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline GetEventPredictionMetadataRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline GetEventPredictionMetadataRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId.assign(value); }
    inline GetEventPredictionMetadataRequest& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}
    inline GetEventPredictionMetadataRequest& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}
    inline GetEventPredictionMetadataRequest& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that defines when the prediction was generated. The timestamp
     * must be specified using ISO 8601 standard in UTC.</p> <p>We recommend calling <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/api/API_ListEventPredictions.html">ListEventPredictions</a>
     * first, and using the <code>predictionTimestamp</code> value in the response to
     * provide an accurate prediction timestamp value.</p>
     */
    inline const Aws::String& GetPredictionTimestamp() const{ return m_predictionTimestamp; }
    inline bool PredictionTimestampHasBeenSet() const { return m_predictionTimestampHasBeenSet; }
    inline void SetPredictionTimestamp(const Aws::String& value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp = value; }
    inline void SetPredictionTimestamp(Aws::String&& value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp = std::move(value); }
    inline void SetPredictionTimestamp(const char* value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp.assign(value); }
    inline GetEventPredictionMetadataRequest& WithPredictionTimestamp(const Aws::String& value) { SetPredictionTimestamp(value); return *this;}
    inline GetEventPredictionMetadataRequest& WithPredictionTimestamp(Aws::String&& value) { SetPredictionTimestamp(std::move(value)); return *this;}
    inline GetEventPredictionMetadataRequest& WithPredictionTimestamp(const char* value) { SetPredictionTimestamp(value); return *this;}
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
