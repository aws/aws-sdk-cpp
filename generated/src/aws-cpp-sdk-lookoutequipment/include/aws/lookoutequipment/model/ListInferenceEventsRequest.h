/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListInferenceEventsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceEvents"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference events.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListInferenceEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInferenceEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInferenceEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of inference events to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler for the inference events listed. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }
    inline ListInferenceEventsRequest& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}
    inline ListInferenceEventsRequest& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}
    inline ListInferenceEventsRequest& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lookout for Equipment will return all the inference events with an end time
     * equal to or greater than the start time given.</p>
     */
    inline const Aws::Utils::DateTime& GetIntervalStartTime() const{ return m_intervalStartTime; }
    inline bool IntervalStartTimeHasBeenSet() const { return m_intervalStartTimeHasBeenSet; }
    inline void SetIntervalStartTime(const Aws::Utils::DateTime& value) { m_intervalStartTimeHasBeenSet = true; m_intervalStartTime = value; }
    inline void SetIntervalStartTime(Aws::Utils::DateTime&& value) { m_intervalStartTimeHasBeenSet = true; m_intervalStartTime = std::move(value); }
    inline ListInferenceEventsRequest& WithIntervalStartTime(const Aws::Utils::DateTime& value) { SetIntervalStartTime(value); return *this;}
    inline ListInferenceEventsRequest& WithIntervalStartTime(Aws::Utils::DateTime&& value) { SetIntervalStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns all the inference events with an end start time equal to or greater
     * than less than the end time given.</p>
     */
    inline const Aws::Utils::DateTime& GetIntervalEndTime() const{ return m_intervalEndTime; }
    inline bool IntervalEndTimeHasBeenSet() const { return m_intervalEndTimeHasBeenSet; }
    inline void SetIntervalEndTime(const Aws::Utils::DateTime& value) { m_intervalEndTimeHasBeenSet = true; m_intervalEndTime = value; }
    inline void SetIntervalEndTime(Aws::Utils::DateTime&& value) { m_intervalEndTimeHasBeenSet = true; m_intervalEndTime = std::move(value); }
    inline ListInferenceEventsRequest& WithIntervalEndTime(const Aws::Utils::DateTime& value) { SetIntervalEndTime(value); return *this;}
    inline ListInferenceEventsRequest& WithIntervalEndTime(Aws::Utils::DateTime&& value) { SetIntervalEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::Utils::DateTime m_intervalStartTime;
    bool m_intervalStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_intervalEndTime;
    bool m_intervalEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
