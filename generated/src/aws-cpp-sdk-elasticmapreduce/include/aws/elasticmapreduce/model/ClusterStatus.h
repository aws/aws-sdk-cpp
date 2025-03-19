/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ClusterState.h>
#include <aws/elasticmapreduce/model/ClusterStateChangeReason.h>
#include <aws/elasticmapreduce/model/ClusterTimeline.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ErrorDetail.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The detailed status of the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ClusterStatus">AWS
   * API Reference</a></p>
   */
  class ClusterStatus
  {
  public:
    AWS_EMR_API ClusterStatus() = default;
    AWS_EMR_API ClusterStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ClusterStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the cluster.</p>
     */
    inline ClusterState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ClusterState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ClusterStatus& WithState(ClusterState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the cluster status change.</p>
     */
    inline const ClusterStateChangeReason& GetStateChangeReason() const { return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    template<typename StateChangeReasonT = ClusterStateChangeReason>
    void SetStateChangeReason(StateChangeReasonT&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::forward<StateChangeReasonT>(value); }
    template<typename StateChangeReasonT = ClusterStateChangeReason>
    ClusterStatus& WithStateChangeReason(StateChangeReasonT&& value) { SetStateChangeReason(std::forward<StateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timeline that represents the status of a cluster over the lifetime of the
     * cluster.</p>
     */
    inline const ClusterTimeline& GetTimeline() const { return m_timeline; }
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }
    template<typename TimelineT = ClusterTimeline>
    void SetTimeline(TimelineT&& value) { m_timelineHasBeenSet = true; m_timeline = std::forward<TimelineT>(value); }
    template<typename TimelineT = ClusterTimeline>
    ClusterStatus& WithTimeline(TimelineT&& value) { SetTimeline(std::forward<TimelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tuples that provides information about the errors that caused a
     * cluster to terminate. This structure can contain up to 10 different
     * <code>ErrorDetail</code> tuples.</p>
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
    ClusterStatus& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    template<typename ErrorDetailsT = ErrorDetail>
    ClusterStatus& AddErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value)); return *this; }
    ///@}
  private:

    ClusterState m_state{ClusterState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ClusterStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    ClusterTimeline m_timeline;
    bool m_timelineHasBeenSet = false;

    Aws::Vector<ErrorDetail> m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
