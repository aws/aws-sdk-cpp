/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/Branch.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the update branch request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranchResult">AWS
   * API Reference</a></p>
   */
  class UpdateBranchResult
  {
  public:
    AWS_AMPLIFY_API UpdateBranchResult() = default;
    AWS_AMPLIFY_API UpdateBranchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API UpdateBranchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The branch for an Amplify app, which maps to a third-party repository
     * branch. </p>
     */
    inline const Branch& GetBranch() const { return m_branch; }
    template<typename BranchT = Branch>
    void SetBranch(BranchT&& value) { m_branchHasBeenSet = true; m_branch = std::forward<BranchT>(value); }
    template<typename BranchT = Branch>
    UpdateBranchResult& WithBranch(BranchT&& value) { SetBranch(std::forward<BranchT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBranchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Branch m_branch;
    bool m_branchHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
