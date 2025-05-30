﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Represents the output of a <code>PutApprovalResult</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutApprovalResultOutput">AWS
   * API Reference</a></p>
   */
  class PutApprovalResultResult
  {
  public:
    AWS_CODEPIPELINE_API PutApprovalResultResult() = default;
    AWS_CODEPIPELINE_API PutApprovalResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API PutApprovalResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovedAt() const { return m_approvedAt; }
    template<typename ApprovedAtT = Aws::Utils::DateTime>
    void SetApprovedAt(ApprovedAtT&& value) { m_approvedAtHasBeenSet = true; m_approvedAt = std::forward<ApprovedAtT>(value); }
    template<typename ApprovedAtT = Aws::Utils::DateTime>
    PutApprovalResultResult& WithApprovedAt(ApprovedAtT&& value) { SetApprovedAt(std::forward<ApprovedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutApprovalResultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_approvedAt{};
    bool m_approvedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
