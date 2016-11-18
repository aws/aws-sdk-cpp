/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codepipeline/model/ErrorDetails.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the run of an action.</p>
   */
  class AWS_CODEPIPELINE_API ActionExecution
  {
  public:
    ActionExecution();
    ActionExecution(const Aws::Utils::Json::JsonValue& jsonValue);
    ActionExecution& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline const ActionExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline void SetStatus(const ActionExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline void SetStatus(ActionExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline ActionExecution& WithStatus(const ActionExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline ActionExecution& WithStatus(ActionExecutionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>A summary of the run of the action.</p>
     */
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = value; }

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
    inline ActionExecution& WithSummary(Aws::String&& value) { SetSummary(value); return *this;}

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
    inline void SetLastStatusChange(const Aws::Utils::DateTime& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }

    /**
     * <p>The last status change of the action.</p>
     */
    inline void SetLastStatusChange(Aws::Utils::DateTime&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }

    /**
     * <p>The last status change of the action.</p>
     */
    inline ActionExecution& WithLastStatusChange(const Aws::Utils::DateTime& value) { SetLastStatusChange(value); return *this;}

    /**
     * <p>The last status change of the action.</p>
     */
    inline ActionExecution& WithLastStatusChange(Aws::Utils::DateTime&& value) { SetLastStatusChange(value); return *this;}

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the GetPipelineState
     * command and is used to validate that the approval request corresponding to this
     * token is still valid.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the GetPipelineState
     * command and is used to validate that the approval request corresponding to this
     * token is still valid.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the GetPipelineState
     * command and is used to validate that the approval request corresponding to this
     * token is still valid.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the GetPipelineState
     * command and is used to validate that the approval request corresponding to this
     * token is still valid.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the GetPipelineState
     * command and is used to validate that the approval request corresponding to this
     * token is still valid.</p>
     */
    inline ActionExecution& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the GetPipelineState
     * command and is used to validate that the approval request corresponding to this
     * token is still valid.</p>
     */
    inline ActionExecution& WithToken(Aws::String&& value) { SetToken(value); return *this;}

    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the GetPipelineState
     * command and is used to validate that the approval request corresponding to this
     * token is still valid.</p>
     */
    inline ActionExecution& WithToken(const char* value) { SetToken(value); return *this;}

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

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
    inline ActionExecution& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(value); return *this;}

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
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }

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
    inline ActionExecution& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(value); return *this;}

    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline ActionExecution& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}

    /**
     * <p>The URL of a resource external to AWS that will be used when running the
     * action, for example an external repository URL.</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const{ return m_externalExecutionUrl; }

    /**
     * <p>The URL of a resource external to AWS that will be used when running the
     * action, for example an external repository URL.</p>
     */
    inline void SetExternalExecutionUrl(const Aws::String& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = value; }

    /**
     * <p>The URL of a resource external to AWS that will be used when running the
     * action, for example an external repository URL.</p>
     */
    inline void SetExternalExecutionUrl(Aws::String&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = value; }

    /**
     * <p>The URL of a resource external to AWS that will be used when running the
     * action, for example an external repository URL.</p>
     */
    inline void SetExternalExecutionUrl(const char* value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl.assign(value); }

    /**
     * <p>The URL of a resource external to AWS that will be used when running the
     * action, for example an external repository URL.</p>
     */
    inline ActionExecution& WithExternalExecutionUrl(const Aws::String& value) { SetExternalExecutionUrl(value); return *this;}

    /**
     * <p>The URL of a resource external to AWS that will be used when running the
     * action, for example an external repository URL.</p>
     */
    inline ActionExecution& WithExternalExecutionUrl(Aws::String&& value) { SetExternalExecutionUrl(value); return *this;}

    /**
     * <p>The URL of a resource external to AWS that will be used when running the
     * action, for example an external repository URL.</p>
     */
    inline ActionExecution& WithExternalExecutionUrl(const char* value) { SetExternalExecutionUrl(value); return *this;}

    /**
     * <p>A percentage of completeness of the action as it runs.</p>
     */
    inline int GetPercentComplete() const{ return m_percentComplete; }

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
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline ActionExecution& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>The details of an error returned by a URL external to AWS.</p>
     */
    inline ActionExecution& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(value); return *this;}

  private:
    ActionExecutionStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_summary;
    bool m_summaryHasBeenSet;
    Aws::Utils::DateTime m_lastStatusChange;
    bool m_lastStatusChangeHasBeenSet;
    Aws::String m_token;
    bool m_tokenHasBeenSet;
    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet;
    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet;
    Aws::String m_externalExecutionUrl;
    bool m_externalExecutionUrlHasBeenSet;
    int m_percentComplete;
    bool m_percentCompleteHasBeenSet;
    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
