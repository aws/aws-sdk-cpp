/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/WorkflowRunStatus.h>
#include <aws/glue/model/WorkflowRunStatistics.h>
#include <aws/glue/model/WorkflowGraph.h>
#include <aws/glue/model/StartingEventBatchCondition.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A workflow run is an execution of a workflow providing all the runtime
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/WorkflowRun">AWS
   * API Reference</a></p>
   */
  class WorkflowRun
  {
  public:
    AWS_GLUE_API WorkflowRun() = default;
    AWS_GLUE_API WorkflowRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API WorkflowRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the workflow that was run.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkflowRun& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of this workflow run.</p>
     */
    inline const Aws::String& GetWorkflowRunId() const { return m_workflowRunId; }
    inline bool WorkflowRunIdHasBeenSet() const { return m_workflowRunIdHasBeenSet; }
    template<typename WorkflowRunIdT = Aws::String>
    void SetWorkflowRunId(WorkflowRunIdT&& value) { m_workflowRunIdHasBeenSet = true; m_workflowRunId = std::forward<WorkflowRunIdT>(value); }
    template<typename WorkflowRunIdT = Aws::String>
    WorkflowRun& WithWorkflowRunId(WorkflowRunIdT&& value) { SetWorkflowRunId(std::forward<WorkflowRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the previous workflow run.</p>
     */
    inline const Aws::String& GetPreviousRunId() const { return m_previousRunId; }
    inline bool PreviousRunIdHasBeenSet() const { return m_previousRunIdHasBeenSet; }
    template<typename PreviousRunIdT = Aws::String>
    void SetPreviousRunId(PreviousRunIdT&& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = std::forward<PreviousRunIdT>(value); }
    template<typename PreviousRunIdT = Aws::String>
    WorkflowRun& WithPreviousRunId(PreviousRunIdT&& value) { SetPreviousRunId(std::forward<PreviousRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow run properties which were set during the run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWorkflowRunProperties() const { return m_workflowRunProperties; }
    inline bool WorkflowRunPropertiesHasBeenSet() const { return m_workflowRunPropertiesHasBeenSet; }
    template<typename WorkflowRunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetWorkflowRunProperties(WorkflowRunPropertiesT&& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties = std::forward<WorkflowRunPropertiesT>(value); }
    template<typename WorkflowRunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    WorkflowRun& WithWorkflowRunProperties(WorkflowRunPropertiesT&& value) { SetWorkflowRunProperties(std::forward<WorkflowRunPropertiesT>(value)); return *this;}
    template<typename WorkflowRunPropertiesKeyT = Aws::String, typename WorkflowRunPropertiesValueT = Aws::String>
    WorkflowRun& AddWorkflowRunProperties(WorkflowRunPropertiesKeyT&& key, WorkflowRunPropertiesValueT&& value) {
      m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(std::forward<WorkflowRunPropertiesKeyT>(key), std::forward<WorkflowRunPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time when the workflow run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    WorkflowRun& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the workflow run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    WorkflowRun& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the workflow run.</p>
     */
    inline WorkflowRunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkflowRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkflowRun& WithStatus(WorkflowRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This error message describes any error that may have occurred in starting the
     * workflow run. Currently the only error message is "Concurrent runs exceeded for
     * workflow: <code>foo</code>."</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    WorkflowRun& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistics of the run.</p>
     */
    inline const WorkflowRunStatistics& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = WorkflowRunStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = WorkflowRunStatistics>
    WorkflowRun& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph representing all the Glue components that belong to the workflow as
     * nodes and directed connections between them as edges.</p>
     */
    inline const WorkflowGraph& GetGraph() const { return m_graph; }
    inline bool GraphHasBeenSet() const { return m_graphHasBeenSet; }
    template<typename GraphT = WorkflowGraph>
    void SetGraph(GraphT&& value) { m_graphHasBeenSet = true; m_graph = std::forward<GraphT>(value); }
    template<typename GraphT = WorkflowGraph>
    WorkflowRun& WithGraph(GraphT&& value) { SetGraph(std::forward<GraphT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch condition that started the workflow run.</p>
     */
    inline const StartingEventBatchCondition& GetStartingEventBatchCondition() const { return m_startingEventBatchCondition; }
    inline bool StartingEventBatchConditionHasBeenSet() const { return m_startingEventBatchConditionHasBeenSet; }
    template<typename StartingEventBatchConditionT = StartingEventBatchCondition>
    void SetStartingEventBatchCondition(StartingEventBatchConditionT&& value) { m_startingEventBatchConditionHasBeenSet = true; m_startingEventBatchCondition = std::forward<StartingEventBatchConditionT>(value); }
    template<typename StartingEventBatchConditionT = StartingEventBatchCondition>
    WorkflowRun& WithStartingEventBatchCondition(StartingEventBatchConditionT&& value) { SetStartingEventBatchCondition(std::forward<StartingEventBatchConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workflowRunId;
    bool m_workflowRunIdHasBeenSet = false;

    Aws::String m_previousRunId;
    bool m_previousRunIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_workflowRunProperties;
    bool m_workflowRunPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn{};
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
    bool m_completedOnHasBeenSet = false;

    WorkflowRunStatus m_status{WorkflowRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    WorkflowRunStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    WorkflowGraph m_graph;
    bool m_graphHasBeenSet = false;

    StartingEventBatchCondition m_startingEventBatchCondition;
    bool m_startingEventBatchConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
