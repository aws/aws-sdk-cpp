﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Execution result information, such as the external execution
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleExecutionResult">AWS
   * API Reference</a></p>
   */
  class RuleExecutionResult
  {
  public:
    AWS_CODEPIPELINE_API RuleExecutionResult();
    AWS_CODEPIPELINE_API RuleExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The external ID for the rule execution.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }
    inline RuleExecutionResult& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}
    inline RuleExecutionResult& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}
    inline RuleExecutionResult& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external provider summary for the rule execution.</p>
     */
    inline const Aws::String& GetExternalExecutionSummary() const{ return m_externalExecutionSummary; }
    inline bool ExternalExecutionSummaryHasBeenSet() const { return m_externalExecutionSummaryHasBeenSet; }
    inline void SetExternalExecutionSummary(const Aws::String& value) { m_externalExecutionSummaryHasBeenSet = true; m_externalExecutionSummary = value; }
    inline void SetExternalExecutionSummary(Aws::String&& value) { m_externalExecutionSummaryHasBeenSet = true; m_externalExecutionSummary = std::move(value); }
    inline void SetExternalExecutionSummary(const char* value) { m_externalExecutionSummaryHasBeenSet = true; m_externalExecutionSummary.assign(value); }
    inline RuleExecutionResult& WithExternalExecutionSummary(const Aws::String& value) { SetExternalExecutionSummary(value); return *this;}
    inline RuleExecutionResult& WithExternalExecutionSummary(Aws::String&& value) { SetExternalExecutionSummary(std::move(value)); return *this;}
    inline RuleExecutionResult& WithExternalExecutionSummary(const char* value) { SetExternalExecutionSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the rule.</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const{ return m_externalExecutionUrl; }
    inline bool ExternalExecutionUrlHasBeenSet() const { return m_externalExecutionUrlHasBeenSet; }
    inline void SetExternalExecutionUrl(const Aws::String& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = value; }
    inline void SetExternalExecutionUrl(Aws::String&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = std::move(value); }
    inline void SetExternalExecutionUrl(const char* value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl.assign(value); }
    inline RuleExecutionResult& WithExternalExecutionUrl(const Aws::String& value) { SetExternalExecutionUrl(value); return *this;}
    inline RuleExecutionResult& WithExternalExecutionUrl(Aws::String&& value) { SetExternalExecutionUrl(std::move(value)); return *this;}
    inline RuleExecutionResult& WithExternalExecutionUrl(const char* value) { SetExternalExecutionUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline RuleExecutionResult& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline RuleExecutionResult& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;

    Aws::String m_externalExecutionSummary;
    bool m_externalExecutionSummaryHasBeenSet = false;

    Aws::String m_externalExecutionUrl;
    bool m_externalExecutionUrlHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
