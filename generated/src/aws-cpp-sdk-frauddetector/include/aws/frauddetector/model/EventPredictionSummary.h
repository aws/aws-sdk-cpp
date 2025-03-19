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
    AWS_FRAUDDETECTOR_API EventPredictionSummary() = default;
    AWS_FRAUDDETECTOR_API EventPredictionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EventPredictionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The event ID. </p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    EventPredictionSummary& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The event type. </p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    EventPredictionSummary& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the event. </p>
     */
    inline const Aws::String& GetEventTimestamp() const { return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    template<typename EventTimestampT = Aws::String>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::String>
    EventPredictionSummary& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the prediction was generated. </p>
     */
    inline const Aws::String& GetPredictionTimestamp() const { return m_predictionTimestamp; }
    inline bool PredictionTimestampHasBeenSet() const { return m_predictionTimestampHasBeenSet; }
    template<typename PredictionTimestampT = Aws::String>
    void SetPredictionTimestamp(PredictionTimestampT&& value) { m_predictionTimestampHasBeenSet = true; m_predictionTimestamp = std::forward<PredictionTimestampT>(value); }
    template<typename PredictionTimestampT = Aws::String>
    EventPredictionSummary& WithPredictionTimestamp(PredictionTimestampT&& value) { SetPredictionTimestamp(std::forward<PredictionTimestampT>(value)); return *this;}
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
    EventPredictionSummary& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
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
    EventPredictionSummary& WithDetectorVersionId(DetectorVersionIdT&& value) { SetDetectorVersionId(std::forward<DetectorVersionIdT>(value)); return *this;}
    ///@}
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
