/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/frauddetector/model/FilterCondition.h>
#include <aws/frauddetector/model/PredictionTimeRange.h>
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
  class ListEventPredictionsRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API ListEventPredictionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEventPredictions"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The event ID. </p>
     */
    inline const FilterCondition& GetEventId() const{ return m_eventId; }

    /**
     * <p> The event ID. </p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(const FilterCondition& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p> The event ID. </p>
     */
    inline void SetEventId(FilterCondition&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p> The event ID. </p>
     */
    inline ListEventPredictionsRequest& WithEventId(const FilterCondition& value) { SetEventId(value); return *this;}

    /**
     * <p> The event ID. </p>
     */
    inline ListEventPredictionsRequest& WithEventId(FilterCondition&& value) { SetEventId(std::move(value)); return *this;}


    /**
     * <p> The event type associated with the detector. </p>
     */
    inline const FilterCondition& GetEventType() const{ return m_eventType; }

    /**
     * <p> The event type associated with the detector. </p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p> The event type associated with the detector. </p>
     */
    inline void SetEventType(const FilterCondition& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p> The event type associated with the detector. </p>
     */
    inline void SetEventType(FilterCondition&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p> The event type associated with the detector. </p>
     */
    inline ListEventPredictionsRequest& WithEventType(const FilterCondition& value) { SetEventType(value); return *this;}

    /**
     * <p> The event type associated with the detector. </p>
     */
    inline ListEventPredictionsRequest& WithEventType(FilterCondition&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p> The detector ID. </p>
     */
    inline const FilterCondition& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p> The detector ID. </p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(const FilterCondition& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p> The detector ID. </p>
     */
    inline void SetDetectorId(FilterCondition&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p> The detector ID. </p>
     */
    inline ListEventPredictionsRequest& WithDetectorId(const FilterCondition& value) { SetDetectorId(value); return *this;}

    /**
     * <p> The detector ID. </p>
     */
    inline ListEventPredictionsRequest& WithDetectorId(FilterCondition&& value) { SetDetectorId(std::move(value)); return *this;}


    /**
     * <p> The detector version ID. </p>
     */
    inline const FilterCondition& GetDetectorVersionId() const{ return m_detectorVersionId; }

    /**
     * <p> The detector version ID. </p>
     */
    inline bool DetectorVersionIdHasBeenSet() const { return m_detectorVersionIdHasBeenSet; }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(const FilterCondition& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = value; }

    /**
     * <p> The detector version ID. </p>
     */
    inline void SetDetectorVersionId(FilterCondition&& value) { m_detectorVersionIdHasBeenSet = true; m_detectorVersionId = std::move(value); }

    /**
     * <p> The detector version ID. </p>
     */
    inline ListEventPredictionsRequest& WithDetectorVersionId(const FilterCondition& value) { SetDetectorVersionId(value); return *this;}

    /**
     * <p> The detector version ID. </p>
     */
    inline ListEventPredictionsRequest& WithDetectorVersionId(FilterCondition&& value) { SetDetectorVersionId(std::move(value)); return *this;}


    /**
     * <p> The time period for when the predictions were generated. </p>
     */
    inline const PredictionTimeRange& GetPredictionTimeRange() const{ return m_predictionTimeRange; }

    /**
     * <p> The time period for when the predictions were generated. </p>
     */
    inline bool PredictionTimeRangeHasBeenSet() const { return m_predictionTimeRangeHasBeenSet; }

    /**
     * <p> The time period for when the predictions were generated. </p>
     */
    inline void SetPredictionTimeRange(const PredictionTimeRange& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = value; }

    /**
     * <p> The time period for when the predictions were generated. </p>
     */
    inline void SetPredictionTimeRange(PredictionTimeRange&& value) { m_predictionTimeRangeHasBeenSet = true; m_predictionTimeRange = std::move(value); }

    /**
     * <p> The time period for when the predictions were generated. </p>
     */
    inline ListEventPredictionsRequest& WithPredictionTimeRange(const PredictionTimeRange& value) { SetPredictionTimeRange(value); return *this;}

    /**
     * <p> The time period for when the predictions were generated. </p>
     */
    inline ListEventPredictionsRequest& WithPredictionTimeRange(PredictionTimeRange&& value) { SetPredictionTimeRange(std::move(value)); return *this;}


    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline ListEventPredictionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline ListEventPredictionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Identifies the next page of results to return. Use the token to make the
     * call again to retrieve the next page. Keep all other arguments unchanged. Each
     * pagination token expires after 24 hours. </p>
     */
    inline ListEventPredictionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of predictions to return for the request. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of predictions to return for the request. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of predictions to return for the request. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of predictions to return for the request. </p>
     */
    inline ListEventPredictionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    FilterCondition m_eventId;
    bool m_eventIdHasBeenSet = false;

    FilterCondition m_eventType;
    bool m_eventTypeHasBeenSet = false;

    FilterCondition m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    FilterCondition m_detectorVersionId;
    bool m_detectorVersionIdHasBeenSet = false;

    PredictionTimeRange m_predictionTimeRange;
    bool m_predictionTimeRangeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
