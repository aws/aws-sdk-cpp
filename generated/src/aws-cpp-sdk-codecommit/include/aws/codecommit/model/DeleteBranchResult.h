/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/BranchInfo.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a delete branch operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranchOutput">AWS
   * API Reference</a></p>
   */
  class DeleteBranchResult
  {
  public:
    AWS_CODECOMMIT_API DeleteBranchResult() = default;
    AWS_CODECOMMIT_API DeleteBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeleteBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the branch deleted by the operation, including the branch
     * name and the commit ID that was the tip of the branch.</p>
     */
    inline const BranchInfo& GetDeletedBranch() const { return m_deletedBranch; }
    template<typename DeletedBranchT = BranchInfo>
    void SetDeletedBranch(DeletedBranchT&& value) { m_deletedBranchHasBeenSet = true; m_deletedBranch = std::forward<DeletedBranchT>(value); }
    template<typename DeletedBranchT = BranchInfo>
    DeleteBranchResult& WithDeletedBranch(DeletedBranchT&& value) { SetDeletedBranch(std::forward<DeletedBranchT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteBranchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BranchInfo m_deletedBranch;
    bool m_deletedBranchHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
