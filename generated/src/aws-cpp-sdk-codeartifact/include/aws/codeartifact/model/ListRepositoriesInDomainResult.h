/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/RepositorySummary.h>
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
namespace CodeArtifact
{
namespace Model
{
  class ListRepositoriesInDomainResult
  {
  public:
    AWS_CODEARTIFACT_API ListRepositoriesInDomainResult() = default;
    AWS_CODEARTIFACT_API ListRepositoriesInDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListRepositoriesInDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The returned list of repositories. </p>
     */
    inline const Aws::Vector<RepositorySummary>& GetRepositories() const { return m_repositories; }
    template<typename RepositoriesT = Aws::Vector<RepositorySummary>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<RepositorySummary>>
    ListRepositoriesInDomainResult& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = RepositorySummary>
    ListRepositoriesInDomainResult& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositoriesInDomainResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRepositoriesInDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RepositorySummary> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
