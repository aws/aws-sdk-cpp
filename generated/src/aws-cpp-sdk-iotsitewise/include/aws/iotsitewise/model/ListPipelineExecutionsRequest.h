/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PipelineExecutionState.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request structure for ListPipelineExecutions operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListPipelineExecutionsRequest">AWS
 * API Reference</a></p>
 */
class ListPipelineExecutionsRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API ListPipelineExecutionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListPipelineExecutions"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  ListPipelineExecutionsRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the pipeline.</p>
   */
  inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
  inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
  template <typename PipelineNameT = Aws::String>
  void SetPipelineName(PipelineNameT&& value) {
    m_pipelineNameHasBeenSet = true;
    m_pipelineName = std::forward<PipelineNameT>(value);
  }
  template <typename PipelineNameT = Aws::String>
  ListPipelineExecutionsRequest& WithPipelineName(PipelineNameT&& value) {
    SetPipelineName(std::forward<PipelineNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPipelineExecutionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per request. This is an upper bound;
   * the actual number of results may be less. Default: 50.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListPipelineExecutionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by execution state. If not specified, executions in all states are
   * returned.</p>
   */
  inline PipelineExecutionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(PipelineExecutionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListPipelineExecutionsRequest& WithState(PipelineExecutionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive lower bound on execution start time (ISO-8601). Only executions
   * with startTime &gt;= startTimeAfter are returned. Cannot be combined with
   * endTimeAfter or endTimeBefore.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimeAfter() const { return m_startTimeAfter; }
  inline bool StartTimeAfterHasBeenSet() const { return m_startTimeAfterHasBeenSet; }
  template <typename StartTimeAfterT = Aws::Utils::DateTime>
  void SetStartTimeAfter(StartTimeAfterT&& value) {
    m_startTimeAfterHasBeenSet = true;
    m_startTimeAfter = std::forward<StartTimeAfterT>(value);
  }
  template <typename StartTimeAfterT = Aws::Utils::DateTime>
  ListPipelineExecutionsRequest& WithStartTimeAfter(StartTimeAfterT&& value) {
    SetStartTimeAfter(std::forward<StartTimeAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exclusive upper bound on execution start time (ISO-8601). Only executions
   * with startTime &lt; startTimeBefore are returned. Cannot be combined with
   * endTimeAfter or endTimeBefore.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimeBefore() const { return m_startTimeBefore; }
  inline bool StartTimeBeforeHasBeenSet() const { return m_startTimeBeforeHasBeenSet; }
  template <typename StartTimeBeforeT = Aws::Utils::DateTime>
  void SetStartTimeBefore(StartTimeBeforeT&& value) {
    m_startTimeBeforeHasBeenSet = true;
    m_startTimeBefore = std::forward<StartTimeBeforeT>(value);
  }
  template <typename StartTimeBeforeT = Aws::Utils::DateTime>
  ListPipelineExecutionsRequest& WithStartTimeBefore(StartTimeBeforeT&& value) {
    SetStartTimeBefore(std::forward<StartTimeBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Inclusive lower bound on execution end time (ISO-8601). Only executions with
   * endTime &gt;= endTimeAfter are returned. Cannot be combined with startTimeAfter
   * or startTimeBefore. Only matches executions in terminal states.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimeAfter() const { return m_endTimeAfter; }
  inline bool EndTimeAfterHasBeenSet() const { return m_endTimeAfterHasBeenSet; }
  template <typename EndTimeAfterT = Aws::Utils::DateTime>
  void SetEndTimeAfter(EndTimeAfterT&& value) {
    m_endTimeAfterHasBeenSet = true;
    m_endTimeAfter = std::forward<EndTimeAfterT>(value);
  }
  template <typename EndTimeAfterT = Aws::Utils::DateTime>
  ListPipelineExecutionsRequest& WithEndTimeAfter(EndTimeAfterT&& value) {
    SetEndTimeAfter(std::forward<EndTimeAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exclusive upper bound on execution end time (ISO-8601). Only executions with
   * endTime &lt; endTimeBefore are returned. Cannot be combined with startTimeAfter
   * or startTimeBefore. Only matches executions in terminal states.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimeBefore() const { return m_endTimeBefore; }
  inline bool EndTimeBeforeHasBeenSet() const { return m_endTimeBeforeHasBeenSet; }
  template <typename EndTimeBeforeT = Aws::Utils::DateTime>
  void SetEndTimeBefore(EndTimeBeforeT&& value) {
    m_endTimeBeforeHasBeenSet = true;
    m_endTimeBefore = std::forward<EndTimeBeforeT>(value);
  }
  template <typename EndTimeBeforeT = Aws::Utils::DateTime>
  ListPipelineExecutionsRequest& WithEndTimeBefore(EndTimeBeforeT&& value) {
    SetEndTimeBefore(std::forward<EndTimeBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_pipelineName;

  Aws::String m_nextToken;

  int m_maxResults{0};

  PipelineExecutionState m_state{PipelineExecutionState::NOT_SET};

  Aws::Utils::DateTime m_startTimeAfter{};

  Aws::Utils::DateTime m_startTimeBefore{};

  Aws::Utils::DateTime m_endTimeAfter{};

  Aws::Utils::DateTime m_endTimeBefore{};
  bool m_workspaceNameHasBeenSet = false;
  bool m_pipelineNameHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_startTimeAfterHasBeenSet = false;
  bool m_startTimeBeforeHasBeenSet = false;
  bool m_endTimeAfterHasBeenSet = false;
  bool m_endTimeBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
