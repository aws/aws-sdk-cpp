/**
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
    AWS_CODEPIPELINE_API ApprovalResult() = default;
    AWS_CODEPIPELINE_API ApprovalResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ApprovalResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The summary of the current status of the approval request.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    ApprovalResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response submitted by a reviewer assigned to an approval action
     * request.</p>
     */
    inline ApprovalStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApprovalStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ApprovalResult& WithStatus(ApprovalStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    ApprovalStatus m_status{ApprovalStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
