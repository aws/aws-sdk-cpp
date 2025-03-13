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
  class ListRepositoriesForApprovalRuleTemplateResult
  {
  public:
    AWS_CODECOMMIT_API ListRepositoriesForApprovalRuleTemplateResult() = default;
    AWS_CODECOMMIT_API ListRepositoriesForApprovalRuleTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListRepositoriesForApprovalRuleTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of repository names that are associated with the specified approval
     * rule template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const { return m_repositoryNames; }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    void SetRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::forward<RepositoryNamesT>(value); }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    ListRepositoriesForApprovalRuleTemplateResult& WithRepositoryNames(RepositoryNamesT&& value) { SetRepositoryNames(std::forward<RepositoryNamesT>(value)); return *this;}
    template<typename RepositoryNamesT = Aws::String>
    ListRepositoriesForApprovalRuleTemplateResult& AddRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.emplace_back(std::forward<RepositoryNamesT>(value)); return *this; }
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
    ListRepositoriesForApprovalRuleTemplateResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRepositoriesForApprovalRuleTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
