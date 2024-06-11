/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/QueryStagePlanNode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Stage statistics such as input and output rows and bytes, execution time and
   * stage state. This information also includes substages and the query stage
   * plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryStage">AWS
   * API Reference</a></p>
   */
  class QueryStage
  {
  public:
    AWS_ATHENA_API QueryStage();
    AWS_ATHENA_API QueryStage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryStage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a stage.</p>
     */
    inline long long GetStageId() const{ return m_stageId; }
    inline bool StageIdHasBeenSet() const { return m_stageIdHasBeenSet; }
    inline void SetStageId(long long value) { m_stageIdHasBeenSet = true; m_stageId = value; }
    inline QueryStage& WithStageId(long long value) { SetStageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the stage after query execution.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline QueryStage& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline QueryStage& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline QueryStage& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes output from the stage after execution.</p>
     */
    inline long long GetOutputBytes() const{ return m_outputBytes; }
    inline bool OutputBytesHasBeenSet() const { return m_outputBytesHasBeenSet; }
    inline void SetOutputBytes(long long value) { m_outputBytesHasBeenSet = true; m_outputBytes = value; }
    inline QueryStage& WithOutputBytes(long long value) { SetOutputBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows output from the stage after execution.</p>
     */
    inline long long GetOutputRows() const{ return m_outputRows; }
    inline bool OutputRowsHasBeenSet() const { return m_outputRowsHasBeenSet; }
    inline void SetOutputRows(long long value) { m_outputRowsHasBeenSet = true; m_outputRows = value; }
    inline QueryStage& WithOutputRows(long long value) { SetOutputRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes input into the stage for execution.</p>
     */
    inline long long GetInputBytes() const{ return m_inputBytes; }
    inline bool InputBytesHasBeenSet() const { return m_inputBytesHasBeenSet; }
    inline void SetInputBytes(long long value) { m_inputBytesHasBeenSet = true; m_inputBytes = value; }
    inline QueryStage& WithInputBytes(long long value) { SetInputBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows input into the stage for execution.</p>
     */
    inline long long GetInputRows() const{ return m_inputRows; }
    inline bool InputRowsHasBeenSet() const { return m_inputRowsHasBeenSet; }
    inline void SetInputRows(long long value) { m_inputRowsHasBeenSet = true; m_inputRows = value; }
    inline QueryStage& WithInputRows(long long value) { SetInputRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time taken to execute this stage.</p>
     */
    inline long long GetExecutionTime() const{ return m_executionTime; }
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
    inline void SetExecutionTime(long long value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }
    inline QueryStage& WithExecutionTime(long long value) { SetExecutionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage plan information such as name, identifier, sub plans, and source
     * stages.</p>
     */
    inline const QueryStagePlanNode& GetQueryStagePlan() const{ return m_queryStagePlan; }
    inline bool QueryStagePlanHasBeenSet() const { return m_queryStagePlanHasBeenSet; }
    inline void SetQueryStagePlan(const QueryStagePlanNode& value) { m_queryStagePlanHasBeenSet = true; m_queryStagePlan = value; }
    inline void SetQueryStagePlan(QueryStagePlanNode&& value) { m_queryStagePlanHasBeenSet = true; m_queryStagePlan = std::move(value); }
    inline QueryStage& WithQueryStagePlan(const QueryStagePlanNode& value) { SetQueryStagePlan(value); return *this;}
    inline QueryStage& WithQueryStagePlan(QueryStagePlanNode&& value) { SetQueryStagePlan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of sub query stages that form this stage execution plan.</p>
     */
    inline const Aws::Vector<QueryStage>& GetSubStages() const{ return m_subStages; }
    inline bool SubStagesHasBeenSet() const { return m_subStagesHasBeenSet; }
    inline void SetSubStages(const Aws::Vector<QueryStage>& value) { m_subStagesHasBeenSet = true; m_subStages = value; }
    inline void SetSubStages(Aws::Vector<QueryStage>&& value) { m_subStagesHasBeenSet = true; m_subStages = std::move(value); }
    inline QueryStage& WithSubStages(const Aws::Vector<QueryStage>& value) { SetSubStages(value); return *this;}
    inline QueryStage& WithSubStages(Aws::Vector<QueryStage>&& value) { SetSubStages(std::move(value)); return *this;}
    inline QueryStage& AddSubStages(const QueryStage& value) { m_subStagesHasBeenSet = true; m_subStages.push_back(value); return *this; }
    inline QueryStage& AddSubStages(QueryStage&& value) { m_subStagesHasBeenSet = true; m_subStages.push_back(std::move(value)); return *this; }
    ///@}
  private:

    long long m_stageId;
    bool m_stageIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    long long m_outputBytes;
    bool m_outputBytesHasBeenSet = false;

    long long m_outputRows;
    bool m_outputRowsHasBeenSet = false;

    long long m_inputBytes;
    bool m_inputBytesHasBeenSet = false;

    long long m_inputRows;
    bool m_inputRowsHasBeenSet = false;

    long long m_executionTime;
    bool m_executionTimeHasBeenSet = false;

    QueryStagePlanNode m_queryStagePlan;
    bool m_queryStagePlanHasBeenSet = false;

    Aws::Vector<QueryStage> m_subStages;
    bool m_subStagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
