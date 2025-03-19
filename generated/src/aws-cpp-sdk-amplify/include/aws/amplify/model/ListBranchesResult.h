/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Branch.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the list branches request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListBranchesResult">AWS
   * API Reference</a></p>
   */
  class ListBranchesResult
  {
  public:
    AWS_AMPLIFY_API ListBranchesResult() = default;
    AWS_AMPLIFY_API ListBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of branches for an Amplify app. </p>
     */
    inline const Aws::Vector<Branch>& GetBranches() const { return m_branches; }
    template<typename BranchesT = Aws::Vector<Branch>>
    void SetBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches = std::forward<BranchesT>(value); }
    template<typename BranchesT = Aws::Vector<Branch>>
    ListBranchesResult& WithBranches(BranchesT&& value) { SetBranches(std::forward<BranchesT>(value)); return *this;}
    template<typename BranchesT = Branch>
    ListBranchesResult& AddBranches(BranchesT&& value) { m_branchesHasBeenSet = true; m_branches.emplace_back(std::forward<BranchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries. </p>
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

    Aws::Vector<Branch> m_branches;
    bool m_branchesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
