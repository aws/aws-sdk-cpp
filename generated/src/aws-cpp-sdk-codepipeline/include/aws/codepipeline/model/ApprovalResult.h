﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ApprovalStatus.h>
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
   * <p>Represents information about the result of an approval request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ApprovalResult">AWS
   * API Reference</a></p>
   */
  class ApprovalResult
  {
  public:
    AWS_CODEPIPELINE_API ApprovalResult();
    AWS_CODEPIPELINE_API ApprovalResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ApprovalResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline ApprovalResult& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline ApprovalResult& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline ApprovalResult& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline const ApprovalStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ApprovalStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ApprovalStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ApprovalResult& WithStatus(const ApprovalStatus& value) { SetStatus(value); return *this;}
    inline ApprovalResult& WithStatus(ApprovalStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    ApprovalStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
