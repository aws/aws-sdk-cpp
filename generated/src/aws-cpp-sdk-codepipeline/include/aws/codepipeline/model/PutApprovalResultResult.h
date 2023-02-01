/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_CODEPIPELINE_API PutApprovalResultResult();
    AWS_CODEPIPELINE_API PutApprovalResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API PutApprovalResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovedAt() const{ return m_approvedAt; }

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline void SetApprovedAt(const Aws::Utils::DateTime& value) { m_approvedAt = value; }

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline void SetApprovedAt(Aws::Utils::DateTime&& value) { m_approvedAt = std::move(value); }

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline PutApprovalResultResult& WithApprovedAt(const Aws::Utils::DateTime& value) { SetApprovedAt(value); return *this;}

    /**
     * <p>The timestamp showing when the approval or rejection was submitted.</p>
     */
    inline PutApprovalResultResult& WithApprovedAt(Aws::Utils::DateTime&& value) { SetApprovedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_approvedAt;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
