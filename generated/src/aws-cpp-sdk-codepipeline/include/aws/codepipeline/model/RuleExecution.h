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
    AWS_CODEPIPELINE_API RuleExecution();
    AWS_CODEPIPELINE_API RuleExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution ID for the run of the rule.</p>
     */
    inline const Aws::String& GetRuleExecutionId() const{ return m_ruleExecutionId; }
    inline bool RuleExecutionIdHasBeenSet() const { return m_ruleExecutionIdHasBeenSet; }
    inline void SetRuleExecutionId(const Aws::String& value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId = value; }
    inline void SetRuleExecutionId(Aws::String&& value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId = std::move(value); }
    inline void SetRuleExecutionId(const char* value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId.assign(value); }
    inline RuleExecution& WithRuleExecutionId(const Aws::String& value) { SetRuleExecutionId(value); return *this;}
    inline RuleExecution& WithRuleExecutionId(Aws::String&& value) { SetRuleExecutionId(std::move(value)); return *this;}
    inline RuleExecution& WithRuleExecutionId(const char* value) { SetRuleExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the run of the rule, such as FAILED.</p>
     */
    inline const RuleExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RuleExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RuleExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RuleExecution& WithStatus(const RuleExecutionStatus& value) { SetStatus(value); return *this;}
    inline RuleExecution& WithStatus(RuleExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the run of the rule.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline RuleExecution& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline RuleExecution& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline RuleExecution& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last status change of the rule.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const{ return m_lastStatusChange; }
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }
    inline void SetLastStatusChange(const Aws::Utils::DateTime& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }
    inline void SetLastStatusChange(Aws::Utils::DateTime&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::move(value); }
    inline RuleExecution& WithLastStatusChange(const Aws::Utils::DateTime& value) { SetLastStatusChange(value); return *this;}
    inline RuleExecution& WithLastStatusChange(Aws::Utils::DateTime&& value) { SetLastStatusChange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated token used to identify a unique request.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }
    inline RuleExecution& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline RuleExecution& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline RuleExecution& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user who last changed the rule.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }
    inline RuleExecution& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}
    inline RuleExecution& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}
    inline RuleExecution& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the run of the rule.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }
    inline RuleExecution& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}
    inline RuleExecution& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}
    inline RuleExecution& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a resource external to Amazon Web Services that is used when
     * running the rule (for example, an external repository URL).</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const{ return m_externalExecutionUrl; }
    inline bool ExternalExecutionUrlHasBeenSet() const { return m_externalExecutionUrlHasBeenSet; }
    inline void SetExternalExecutionUrl(const Aws::String& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = value; }
    inline void SetExternalExecutionUrl(Aws::String&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = std::move(value); }
    inline void SetExternalExecutionUrl(const char* value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl.assign(value); }
    inline RuleExecution& WithExternalExecutionUrl(const Aws::String& value) { SetExternalExecutionUrl(value); return *this;}
    inline RuleExecution& WithExternalExecutionUrl(Aws::String&& value) { SetExternalExecutionUrl(std::move(value)); return *this;}
    inline RuleExecution& WithExternalExecutionUrl(const char* value) { SetExternalExecutionUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline RuleExecution& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline RuleExecution& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleExecutionId;
    bool m_ruleExecutionIdHasBeenSet = false;

    RuleExecutionStatus m_status;
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

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
