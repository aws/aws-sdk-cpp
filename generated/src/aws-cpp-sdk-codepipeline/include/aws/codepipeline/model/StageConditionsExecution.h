/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ConditionExecutionStatus.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the run of a condition for a
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StageConditionsExecution">AWS
   * API Reference</a></p>
   */
  class StageConditionsExecution
  {
  public:
    AWS_CODEPIPELINE_API StageConditionsExecution();
    AWS_CODEPIPELINE_API StageConditionsExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageConditionsExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of a run of a condition for a stage.</p>
     */
    inline const ConditionExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConditionExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConditionExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StageConditionsExecution& WithStatus(const ConditionExecutionStatus& value) { SetStatus(value); return *this;}
    inline StageConditionsExecution& WithStatus(ConditionExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the run of the condition for a stage.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline StageConditionsExecution& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline StageConditionsExecution& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline StageConditionsExecution& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}
  private:

    ConditionExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
