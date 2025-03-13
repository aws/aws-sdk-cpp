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
    AWS_CODEPIPELINE_API ActionExecution() = default;
    AWS_CODEPIPELINE_API ActionExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ID of the workflow action execution in the current stage. Use the
     * <a>GetPipelineState</a> action to retrieve the current action execution details
     * of the current stage.</p>  <p>For older executions, this field might be
     * empty. The action execution ID is available for executions run on or after March
     * 2020.</p> 
     */
    inline const Aws::String& GetActionExecutionId() const { return m_actionExecutionId; }
    inline bool ActionExecutionIdHasBeenSet() const { return m_actionExecutionIdHasBeenSet; }
    template<typename ActionExecutionIdT = Aws::String>
    void SetActionExecutionId(ActionExecutionIdT&& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = std::forward<ActionExecutionIdT>(value); }
    template<typename ActionExecutionIdT = Aws::String>
    ActionExecution& WithActionExecutionId(ActionExecutionIdT&& value) { SetActionExecutionId(std::forward<ActionExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the action, or for a completed action, the last status of the
     * action.</p>
     */
    inline ActionExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ActionExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ActionExecution& WithStatus(ActionExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the run of the action.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    ActionExecution& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last status change of the action.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const { return m_lastStatusChange; }
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }
    template<typename LastStatusChangeT = Aws::Utils::DateTime>
    void SetLastStatusChange(LastStatusChangeT&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::forward<LastStatusChangeT>(value); }
    template<typename LastStatusChangeT = Aws::Utils::DateTime>
    ActionExecution& WithLastStatusChange(LastStatusChangeT&& value) { SetLastStatusChange(std::forward<LastStatusChangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated token used to identify a unique approval request. The
     * token for each open approval request can be obtained using the
     * <code>GetPipelineState</code> command. It is used to validate that the approval
     * request corresponding to this token is still valid.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    ActionExecution& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user who last changed the pipeline.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    ActionExecution& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the run of the action.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const { return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    template<typename ExternalExecutionIdT = Aws::String>
    void SetExternalExecutionId(ExternalExecutionIdT&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::forward<ExternalExecutionIdT>(value); }
    template<typename ExternalExecutionIdT = Aws::String>
    ActionExecution& WithExternalExecutionId(ExternalExecutionIdT&& value) { SetExternalExecutionId(std::forward<ExternalExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a resource external to Amazon Web Services that is used when
     * running the action (for example, an external repository URL).</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const { return m_externalExecutionUrl; }
    inline bool ExternalExecutionUrlHasBeenSet() const { return m_externalExecutionUrlHasBeenSet; }
    template<typename ExternalExecutionUrlT = Aws::String>
    void SetExternalExecutionUrl(ExternalExecutionUrlT&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = std::forward<ExternalExecutionUrlT>(value); }
    template<typename ExternalExecutionUrlT = Aws::String>
    ActionExecution& WithExternalExecutionUrl(ExternalExecutionUrlT&& value) { SetExternalExecutionUrl(std::forward<ExternalExecutionUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A percentage of completeness of the action as it runs.</p>
     */
    inline int GetPercentComplete() const { return m_percentComplete; }
    inline bool PercentCompleteHasBeenSet() const { return m_percentCompleteHasBeenSet; }
    inline void SetPercentComplete(int value) { m_percentCompleteHasBeenSet = true; m_percentComplete = value; }
    inline ActionExecution& WithPercentComplete(int value) { SetPercentComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of an error returned by a URL external to Amazon Web
     * Services.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    ActionExecution& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log stream for the action compute.</p>
     */
    inline const Aws::String& GetLogStreamARN() const { return m_logStreamARN; }
    inline bool LogStreamARNHasBeenSet() const { return m_logStreamARNHasBeenSet; }
    template<typename LogStreamARNT = Aws::String>
    void SetLogStreamARN(LogStreamARNT&& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = std::forward<LogStreamARNT>(value); }
    template<typename LogStreamARNT = Aws::String>
    ActionExecution& WithLogStreamARN(LogStreamARNT&& value) { SetLogStreamARN(std::forward<LogStreamARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionExecutionId;
    bool m_actionExecutionIdHasBeenSet = false;

    ActionExecutionStatus m_status{ActionExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChange{};
    bool m_lastStatusChangeHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;

    Aws::String m_externalExecutionUrl;
    bool m_externalExecutionUrlHasBeenSet = false;

    int m_percentComplete{0};
    bool m_percentCompleteHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_logStreamARN;
    bool m_logStreamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
