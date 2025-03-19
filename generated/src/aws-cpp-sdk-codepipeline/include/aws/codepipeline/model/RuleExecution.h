/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/RuleExecutionStatus.h>
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
   * <p>Represents information about each time a rule is run as part of the pipeline
   * execution for a pipeline configured with conditions.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleExecution">AWS
   * API Reference</a></p>
   */
  class RuleExecution
  {
  public:
    AWS_CODEPIPELINE_API RuleExecution() = default;
    AWS_CODEPIPELINE_API RuleExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution ID for the run of the rule.</p>
     */
    inline const Aws::String& GetRuleExecutionId() const { return m_ruleExecutionId; }
    inline bool RuleExecutionIdHasBeenSet() const { return m_ruleExecutionIdHasBeenSet; }
    template<typename RuleExecutionIdT = Aws::String>
    void SetRuleExecutionId(RuleExecutionIdT&& value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId = std::forward<RuleExecutionIdT>(value); }
    template<typename RuleExecutionIdT = Aws::String>
    RuleExecution& WithRuleExecutionId(RuleExecutionIdT&& value) { SetRuleExecutionId(std::forward<RuleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the run of the rule, such as FAILED.</p>
     */
    inline RuleExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RuleExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RuleExecution& WithStatus(RuleExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the run of the rule.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    RuleExecution& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last status change of the rule.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const { return m_lastStatusChange; }
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }
    template<typename LastStatusChangeT = Aws::Utils::DateTime>
    void SetLastStatusChange(LastStatusChangeT&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::forward<LastStatusChangeT>(value); }
    template<typename LastStatusChangeT = Aws::Utils::DateTime>
    RuleExecution& WithLastStatusChange(LastStatusChangeT&& value) { SetLastStatusChange(std::forward<LastStatusChangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated token used to identify a unique request.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    RuleExecution& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user who last changed the rule.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    RuleExecution& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the run of the rule.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const { return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    template<typename ExternalExecutionIdT = Aws::String>
    void SetExternalExecutionId(ExternalExecutionIdT&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::forward<ExternalExecutionIdT>(value); }
    template<typename ExternalExecutionIdT = Aws::String>
    RuleExecution& WithExternalExecutionId(ExternalExecutionIdT&& value) { SetExternalExecutionId(std::forward<ExternalExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a resource external to Amazon Web Services that is used when
     * running the rule (for example, an external repository URL).</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const { return m_externalExecutionUrl; }
    inline bool ExternalExecutionUrlHasBeenSet() const { return m_externalExecutionUrlHasBeenSet; }
    template<typename ExternalExecutionUrlT = Aws::String>
    void SetExternalExecutionUrl(ExternalExecutionUrlT&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = std::forward<ExternalExecutionUrlT>(value); }
    template<typename ExternalExecutionUrlT = Aws::String>
    RuleExecution& WithExternalExecutionUrl(ExternalExecutionUrlT&& value) { SetExternalExecutionUrl(std::forward<ExternalExecutionUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    RuleExecution& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleExecutionId;
    bool m_ruleExecutionIdHasBeenSet = false;

    RuleExecutionStatus m_status{RuleExecutionStatus::NOT_SET};
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

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
