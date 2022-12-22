/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> Information about the summary of an event prediction. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EventPredictionSummary">AWS
   * API Reference</a></p>
   */
  class EventPredictionSummary
  {
  public:
    AWS_FRAUDDETECTOR_API EventPredictionSummary();
    AWS_FRAUDDETECTOR_API EventPredictionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EventPredictionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The event ID. </p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p> The event ID. </p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p> The event ID. </p>
     */
    inline EventPredictionSummary& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p> The event ID. </p>
     */
    inline EventPredictionSummary& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p> The event ID. </p>
     */
    inline EventPredictionSummary& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p> The event type. </p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p> The event type. </p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p> The event type. </p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p> The event type. </p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p> The event type. </p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p> The event type. </p>
     */
    inline EventPredictionSummary& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p> The event type. </p>
     */
    inline EventPredictionSummary& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p> The event type. </p>
     */
    inline EventPredictionSummary& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p> The timestamp of the event. </p>
     */
    inline const Aws::String& GetEventTimestamp() const{ return m_eventTimestamp; }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline void SetEventTimestamp(const Aws::String& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline void SetEventTimestamp(Aws::String&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline void SetEventTimestamp(const char* value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp.assign(value); }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline EventPredictionSummary& WithEventTimestamp(const Aws::String& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p> The timestamp of the event. </p>
     */
    inline EventPredictionSummary& WithEventTimestamp(Aws::String&& value) { SetEventTimestamp(std::move(value)); return *this;}

    /**
     * <p> The timestamp of the event. </p>
     */
    inline EventPredictionSummary& WithEventTimestamp(const char* value) { SetEventTimestamp(value); return *this;}


    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline const Aws::String& GetPredictionTimestamp() const{ return m_predictionTimestamp; }

    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline bool PredictionTimestampHasBeenSet() const { return m_predictionTimestampHasBeenSet; }

    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline void SetPredictionTimestamp(const Aws::String& value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp = value; }

    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline void SetPredictionTimestamp(Aws::String&& value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp = std::move(value); }

    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline void SetPredictionTimestamp(const char* value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp.assign(value); }

    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline EventPredictionSummary& WithPredictionTimestamp(const Aws::String& value) { SetPredictionTimestamp(value); return *this;}

    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline EventPredictionSummary& WithPredictionTimestamp(Aws::String&& value) { SetPredictionTimestamp(std::move(value)); return *this;}

    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline EventPredictionSummary& WithPredictionTimestamp(const char* value) { SetPredictionTimestamp(value); return *this;}


    /**
     * <p> The detector ID. </p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p> The detector ID. </p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p> The detector ID. </p>
     */
    inline EventPredictionSummary& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p> The detector ID. </p>
     */
    inline EventPredictionSummary& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p> The detector ID. </p>
     */
    inline EventPredictionSummary& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p> The detector version ID. </p>
     */
    inline const Aws::String& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p> The detector version ID. </p>
     */
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const Aws::String& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(Aws::String&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const char* value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId.assign(value); }

    /**
     * <p> The detector version ID. </p>
     */
    inline EventPredictionSummary& WithDetectorVersionId(const Aws::String& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p> The detector version ID. </p>
     */
    inline EventPredictionSummary& WithDetectorVersionId(Aws::String&& value) { SetDetectorVersionId(std::move(value)); return *this;}

    /**
     * <p> The detector version ID. </p>
     */
    inline EventPredictionSummary& WithDetectorVersionId(const char* value) { SetDetectorVersionId(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_eventTimestamp;
    bool m_eventTimestampHasBeenSet = false;

    Aws::String m_predictionTimestamp;
    bool m_predictionTimestampHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
