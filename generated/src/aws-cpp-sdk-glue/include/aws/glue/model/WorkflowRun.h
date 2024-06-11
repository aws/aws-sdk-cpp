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
    AWS_GLUE_API WorkflowRun();
    AWS_GLUE_API WorkflowRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API WorkflowRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the workflow that was run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkflowRun& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkflowRun& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkflowRun& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of this workflow run.</p>
     */
    inline const Aws::String& GetWorkflowRunId() const{ return m_workflowRunId; }
    inline bool WorkflowRunIdHasBeenSet() const { return m_workflowRunIdHasBeenSet; }
    inline void SetWorkflowRunId(const Aws::String& value) { m_workflowRunIdHasBeenSet = true; m_workflowRunId = value; }
    inline void SetWorkflowRunId(Aws::String&& value) { m_workflowRunIdHasBeenSet = true; m_workflowRunId = std::move(value); }
    inline void SetWorkflowRunId(const char* value) { m_workflowRunIdHasBeenSet = true; m_workflowRunId.assign(value); }
    inline WorkflowRun& WithWorkflowRunId(const Aws::String& value) { SetWorkflowRunId(value); return *this;}
    inline WorkflowRun& WithWorkflowRunId(Aws::String&& value) { SetWorkflowRunId(std::move(value)); return *this;}
    inline WorkflowRun& WithWorkflowRunId(const char* value) { SetWorkflowRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the previous workflow run.</p>
     */
    inline const Aws::String& GetPreviousRunId() const{ return m_previousRunId; }
    inline bool PreviousRunIdHasBeenSet() const { return m_previousRunIdHasBeenSet; }
    inline void SetPreviousRunId(const Aws::String& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = value; }
    inline void SetPreviousRunId(Aws::String&& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = std::move(value); }
    inline void SetPreviousRunId(const char* value) { m_previousRunIdHasBeenSet = true; m_previousRunId.assign(value); }
    inline WorkflowRun& WithPreviousRunId(const Aws::String& value) { SetPreviousRunId(value); return *this;}
    inline WorkflowRun& WithPreviousRunId(Aws::String&& value) { SetPreviousRunId(std::move(value)); return *this;}
    inline WorkflowRun& WithPreviousRunId(const char* value) { SetPreviousRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow run properties which were set during the run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetWorkflowRunProperties() const{ return m_workflowRunProperties; }
    inline bool WorkflowRunPropertiesHasBeenSet() const { return m_workflowRunPropertiesHasBeenSet; }
    inline void SetWorkflowRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties = value; }
    inline void SetWorkflowRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties = std::move(value); }
    inline WorkflowRun& WithWorkflowRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetWorkflowRunProperties(value); return *this;}
    inline WorkflowRun& WithWorkflowRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetWorkflowRunProperties(std::move(value)); return *this;}
    inline WorkflowRun& AddWorkflowRunProperties(const Aws::String& key, const Aws::String& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(key, value); return *this; }
    inline WorkflowRun& AddWorkflowRunProperties(Aws::String&& key, const Aws::String& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(std::move(key), value); return *this; }
    inline WorkflowRun& AddWorkflowRunProperties(const Aws::String& key, Aws::String&& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(key, std::move(value)); return *this; }
    inline WorkflowRun& AddWorkflowRunProperties(Aws::String&& key, Aws::String&& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline WorkflowRun& AddWorkflowRunProperties(const char* key, Aws::String&& value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(key, std::move(value)); return *this; }
    inline WorkflowRun& AddWorkflowRunProperties(Aws::String&& key, const char* value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(std::move(key), value); return *this; }
    inline WorkflowRun& AddWorkflowRunProperties(const char* key, const char* value) { m_workflowRunPropertiesHasBeenSet = true; m_workflowRunProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the workflow run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }
    inline WorkflowRun& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline WorkflowRun& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the workflow run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }
    inline WorkflowRun& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline WorkflowRun& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the workflow run.</p>
     */
    inline const WorkflowRunStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkflowRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkflowRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkflowRun& WithStatus(const WorkflowRunStatus& value) { SetStatus(value); return *this;}
    inline WorkflowRun& WithStatus(WorkflowRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This error message describes any error that may have occurred in starting the
     * workflow run. Currently the only error message is "Concurrent runs exceeded for
     * workflow: <code>foo</code>."</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline WorkflowRun& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline WorkflowRun& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline WorkflowRun& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistics of the run.</p>
     */
    inline const WorkflowRunStatistics& GetStatistics() const{ return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    inline void SetStatistics(const WorkflowRunStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }
    inline void SetStatistics(WorkflowRunStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }
    inline WorkflowRun& WithStatistics(const WorkflowRunStatistics& value) { SetStatistics(value); return *this;}
    inline WorkflowRun& WithStatistics(WorkflowRunStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph representing all the Glue components that belong to the workflow as
     * nodes and directed connections between them as edges.</p>
     */
    inline const WorkflowGraph& GetGraph() const{ return m_graph; }
    inline bool GraphHasBeenSet() const { return m_graphHasBeenSet; }
    inline void SetGraph(const WorkflowGraph& value) { m_graphHasBeenSet = true; m_graph = value; }
    inline void SetGraph(WorkflowGraph&& value) { m_graphHasBeenSet = true; m_graph = std::move(value); }
    inline WorkflowRun& WithGraph(const WorkflowGraph& value) { SetGraph(value); return *this;}
    inline WorkflowRun& WithGraph(WorkflowGraph&& value) { SetGraph(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch condition that started the workflow run.</p>
     */
    inline const StartingEventBatchCondition& GetStartingEventBatchCondition() const{ return m_startingEventBatchCondition; }
    inline bool StartingEventBatchConditionHasBeenSet() const { return m_startingEventBatchConditionHasBeenSet; }
    inline void SetStartingEventBatchCondition(const StartingEventBatchCondition& value) { m_startingEventBatchConditionHasBeenSet = true; m_startingEventBatchCondition = value; }
    inline void SetStartingEventBatchCondition(StartingEventBatchCondition&& value) { m_startingEventBatchConditionHasBeenSet = true; m_startingEventBatchCondition = std::move(value); }
    inline WorkflowRun& WithStartingEventBatchCondition(const StartingEventBatchCondition& value) { SetStartingEventBatchCondition(value); return *this;}
    inline WorkflowRun& WithStartingEventBatchCondition(StartingEventBatchCondition&& value) { SetStartingEventBatchCondition(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;

    WorkflowRunStatus m_status;
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
