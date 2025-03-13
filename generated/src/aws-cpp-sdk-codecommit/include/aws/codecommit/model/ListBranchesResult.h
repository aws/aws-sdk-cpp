/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the output of a list branches operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranchesOutput">AWS
   * API Reference</a></p>
   */
  class ListBranchesResult
  {
  public:
    AWS_CODECOMMIT_API ListBranchesResult() = default;
    AWS_CODECOMMIT_API ListBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of branch names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBranches() const { return m_branches; }
    template<typename BranchesT = Aws::Vector<Aws::String>>
    void SetBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches = std::forward<BranchesT>(value); }
    template<typename BranchesT = Aws::Vector<Aws::String>>
    ListBranchesResult& WithBranches(BranchesT&& value) { SetBranches(std::forward<BranchesT>(value)); return *this;}
    template<typename BranchesT = Aws::String>
    ListBranchesResult& AddBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches.emplace_back(std::forward<BranchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that returns the batch of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBranchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBranchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_branches;
    bool m_branchesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
