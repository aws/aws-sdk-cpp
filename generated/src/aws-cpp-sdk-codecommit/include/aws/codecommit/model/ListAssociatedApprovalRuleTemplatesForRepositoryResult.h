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
  class ListAssociatedApprovalRuleTemplatesForRepositoryResult
  {
  public:
    AWS_CODECOMMIT_API ListAssociatedApprovalRuleTemplatesForRepositoryResult() = default;
    AWS_CODECOMMIT_API ListAssociatedApprovalRuleTemplatesForRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListAssociatedApprovalRuleTemplatesForRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of all approval rule templates associated with the repository.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovalRuleTemplateNames() const { return m_approvalRuleTemplateNames; }
    template<typename ApprovalRuleTemplateNamesT = Aws::Vector<Aws::String>>
    void SetApprovalRuleTemplateNames(ApprovalRuleTemplateNamesT&& value) { m_approvalRuleTemplateNamesHasBeenSet = true; m_approvalRuleTemplateNames = std::forward<ApprovalRuleTemplateNamesT>(value); }
    template<typename ApprovalRuleTemplateNamesT = Aws::Vector<Aws::String>>
    ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithApprovalRuleTemplateNames(ApprovalRuleTemplateNamesT&& value) { SetApprovalRuleTemplateNames(std::forward<ApprovalRuleTemplateNamesT>(value)); return *this;}
    template<typename ApprovalRuleTemplateNamesT = Aws::String>
    ListAssociatedApprovalRuleTemplatesForRepositoryResult& AddApprovalRuleTemplateNames(ApprovalRuleTemplateNamesT&& value) { m_approvalRuleTemplateNamesHasBeenSet = true; m_approvalRuleTemplateNames.emplace_back(std::forward<ApprovalRuleTemplateNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_approvalRuleTemplateNames;
    bool m_approvalRuleTemplateNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
