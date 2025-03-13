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
    AWS_LOOKOUTEQUIPMENT_API ListInferenceEventsRequest() = default;

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
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of inference events to list. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler for the inference events listed. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    ListInferenceEventsRequest& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lookout for Equipment will return all the inference events with an end time
     * equal to or greater than the start time given.</p>
     */
    inline const Aws::Utils::DateTime& GetIntervalStartTime() const { return m_intervalStartTime; }
    inline bool IntervalStartTimeHasBeenSet() const { return m_intervalStartTimeHasBeenSet; }
    template<typename IntervalStartTimeT = Aws::Utils::DateTime>
    void SetIntervalStartTime(IntervalStartTimeT&& value) { m_intervalStartTimeHasBeenSet = true; m_intervalStartTime = std::forward<IntervalStartTimeT>(value); }
    template<typename IntervalStartTimeT = Aws::Utils::DateTime>
    ListInferenceEventsRequest& WithIntervalStartTime(IntervalStartTimeT&& value) { SetIntervalStartTime(std::forward<IntervalStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns all the inference events with an end start time equal to or greater
     * than less than the end time given.</p>
     */
    inline const Aws::Utils::DateTime& GetIntervalEndTime() const { return m_intervalEndTime; }
    inline bool IntervalEndTimeHasBeenSet() const { return m_intervalEndTimeHasBeenSet; }
    template<typename IntervalEndTimeT = Aws::Utils::DateTime>
    void SetIntervalEndTime(IntervalEndTimeT&& value) { m_intervalEndTimeHasBeenSet = true; m_intervalEndTime = std::forward<IntervalEndTimeT>(value); }
    template<typename IntervalEndTimeT = Aws::Utils::DateTime>
    ListInferenceEventsRequest& WithIntervalEndTime(IntervalEndTimeT&& value) { SetIntervalEndTime(std::forward<IntervalEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::Utils::DateTime m_intervalStartTime{};
    bool m_intervalStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_intervalEndTime{};
    bool m_intervalEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
