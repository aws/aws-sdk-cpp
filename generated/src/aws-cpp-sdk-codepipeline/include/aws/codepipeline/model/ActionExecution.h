/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codepipeline/model/ErrorDetails.h>
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
   * <p>Represents information about the run of an action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionExecution">AWS
   * API Reference</a></p>
   */
  class ActionExecution
  {
  public:
    AWS_CODEPIPELINE_API ActionExecution();
    AWS_CODEPIPELINE_API ActionExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline const Aws::String& GetActionExecutionId() const{ return m_actionExecutionId; }

    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline bool ActionExecutionIdHasBeenSet() const { return m_actionExecutionIdHasBeenSet; }

    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline void SetActionExecutionId(const Aws::String& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = value; }

    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline void SetActionExecutionId(Aws::String&& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = std::move(value); }

    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline void SetActionExecutionId(const char* value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId.assign(value); }

    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline ActionExecution& WithActionExecutionId(const Aws::String& value) { SetActionExecutionId(value); return *this;}

    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline ActionExecution& WithActionExecutionId(Aws::String&& value) { SetActionExecutionId(std::move(value)); return *this;}

    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline ActionExecution& WithActionExecutionId(const char* value) { SetActionExecutionId(value); return *this;}


    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline const ActionExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline void SetStatus(const ActionExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline void SetStatus(ActionExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline ActionExecution& WithStatus(const ActionExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline ActionExecution& WithStatus(ActionExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A summary of the run of the action.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline ActionExecution& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline ActionExecution& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline ActionExecution& WithSummary(const char* value) { SetSummary(value); return *this;}


    /**
     * <p>The last status change of the action.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const{ return m_lastStatusChange; }

    /**
     * <p>The last status change of the action.</p>
     */
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }

    /**
     * <p>The last status change of the action.</p>
     */
    inline void SetLastStatusChange(const Aws::Utils::DateTime& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }

    /**
     * <p>The last status change of the action.</p>
     */
    inline void SetLastStatusChange(Aws::Utils::DateTime&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::move(value); }

    /**
     * <p>The last status change of the action.</p>
     */
    inline ActionExecution& WithLastStatusChange(const Aws::Utils::DateTime& value) { SetLastStatusChange(value); return *this;}

    /**
     * <p>The last status change of the action.</p>
     */
    inline ActionExecution& WithLastStatusChange(Aws::Utils::DateTime&& value) { SetLastStatusChange(std::move(value)); return *this;}


    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline ActionExecution& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline ActionExecution& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline ActionExecution& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline ActionExecution& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline ActionExecution& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline ActionExecution& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}


    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline ActionExecution& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline ActionExecution& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline ActionExecution& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}


    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const{ return m_externalExecutionUrl; }

    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline bool ExternalExecutionUrlHasBeenSet() const { return m_externalExecutionUrlHasBeenSet; }

    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline void SetExternalExecutionUrl(const Aws::String& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = value; }

    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline void SetExternalExecutionUrl(Aws::String&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = std::move(value); }

    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline void SetExternalExecutionUrl(const char* value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl.assign(value); }

    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline ActionExecution& WithExternalExecutionUrl(const Aws::String& value) { SetExternalExecutionUrl(value); return *this;}

    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline ActionExecution& WithExternalExecutionUrl(Aws::String&& value) { SetExternalExecutionUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of a resource external to AWS that is used when running the action
     * (for example, an external repository URL).</p>
     */
    inline ActionExecution& WithExternalExecutionUrl(const char* value) { SetExternalExecutionUrl(value); return *this;}


    /**
     * <p>A percentage of completeness of the action as it runs.</p>
     */
    inline int GetPercentComplete() const{ return m_percentComplete; }

    /**
     * <p>A percentage of completeness of the action as it runs.</p>
     */
    inline bool PercentCompleteHasBeenSet() const { return m_percentCompleteHasBeenSet; }

    /**
     * <p>A percentage of completeness of the action as it runs.</p>
     */
    inline void SetPercentComplete(int value) { m_percentCompleteHasBeenSet = true; m_percentComplete = value; }

    /**
     * <p>A percentage of completeness of the action as it runs.</p>
     */
    inline ActionExecution& WithPercentComplete(int value) { SetPercentComplete(value); return *this;}


    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline ActionExecution& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline ActionExecution& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}

  private:

    Aws::String m_actionExecutionId;
    bool m_actionExecutionIdHasBeenSet = false;

    ActionExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChange;
    bool m_lastStatusChangeHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;

    Aws::String m_externalExecutionUrl;
    bool m_externalExecutionUrlHasBeenSet = false;

    int m_percentComplete;
    bool m_percentCompleteHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
