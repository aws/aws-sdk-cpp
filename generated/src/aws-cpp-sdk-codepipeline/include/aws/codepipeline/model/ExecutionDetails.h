﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
   * <p>The details of the actions taken and results produced on an artifact as it
   * passes through stages in the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ExecutionDetails">AWS
   * API Reference</a></p>
   */
  class ExecutionDetails
  {
  public:
    AWS_CODEPIPELINE_API ExecutionDetails();
    AWS_CODEPIPELINE_API ExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The summary of the current status of the actions.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline ExecutionDetails& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline ExecutionDetails& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline ExecutionDetails& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of this action used to identify this job
     * worker in any external systems, such as CodeDeploy.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }
    inline ExecutionDetails& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}
    inline ExecutionDetails& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}
    inline ExecutionDetails& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of work completed on the action, represented on a scale of 0
     * to 100 percent.</p>
     */
    inline int GetPercentComplete() const{ return m_percentComplete; }
    inline bool PercentCompleteHasBeenSet() const { return m_percentCompleteHasBeenSet; }
    inline void SetPercentComplete(int value) { m_percentCompleteHasBeenSet = true; m_percentComplete = value; }
    inline ExecutionDetails& WithPercentComplete(int value) { SetPercentComplete(value); return *this;}
    ///@}
  private:

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;

    int m_percentComplete;
    bool m_percentCompleteHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
