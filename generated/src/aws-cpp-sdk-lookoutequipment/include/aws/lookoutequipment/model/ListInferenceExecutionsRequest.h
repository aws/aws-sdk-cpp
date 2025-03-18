/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/InferenceExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListInferenceExecutionsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceExecutions"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An opaque pagination token indicating where to continue the listing of
     * inference executions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceExecutionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of inference executions to list. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler for the inference execution listed. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    ListInferenceExecutionsRequest& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time reference in the inferenced dataset after which Amazon Lookout for
     * Equipment started the inference execution. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTimeAfter() const { return m_dataStartTimeAfter; }
    inline bool DataStartTimeAfterHasBeenSet() const { return m_dataStartTimeAfterHasBeenSet; }
    template<typename DataStartTimeAfterT = Aws::Utils::DateTime>
    void SetDataStartTimeAfter(DataStartTimeAfterT&& value) { m_dataStartTimeAfterHasBeenSet = true; m_dataStartTimeAfter = std::forward<DataStartTimeAfterT>(value); }
    template<typename DataStartTimeAfterT = Aws::Utils::DateTime>
    ListInferenceExecutionsRequest& WithDataStartTimeAfter(DataStartTimeAfterT&& value) { SetDataStartTimeAfter(std::forward<DataStartTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time reference in the inferenced dataset before which Amazon Lookout for
     * Equipment stopped the inference execution. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTimeBefore() const { return m_dataEndTimeBefore; }
    inline bool DataEndTimeBeforeHasBeenSet() const { return m_dataEndTimeBeforeHasBeenSet; }
    template<typename DataEndTimeBeforeT = Aws::Utils::DateTime>
    void SetDataEndTimeBefore(DataEndTimeBeforeT&& value) { m_dataEndTimeBeforeHasBeenSet = true; m_dataEndTimeBefore = std::forward<DataEndTimeBeforeT>(value); }
    template<typename DataEndTimeBeforeT = Aws::Utils::DateTime>
    ListInferenceExecutionsRequest& WithDataEndTimeBefore(DataEndTimeBeforeT&& value) { SetDataEndTimeBefore(std::forward<DataEndTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference execution. </p>
     */
    inline InferenceExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InferenceExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListInferenceExecutionsRequest& WithStatus(InferenceExecutionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::Utils::DateTime m_dataStartTimeAfter{};
    bool m_dataStartTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_dataEndTimeBefore{};
    bool m_dataEndTimeBeforeHasBeenSet = false;

    InferenceExecutionStatus m_status{InferenceExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
