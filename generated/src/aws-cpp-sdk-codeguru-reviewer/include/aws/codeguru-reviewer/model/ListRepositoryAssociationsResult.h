/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociationSummary.h>
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
namespace CodeGuruReviewer
{
namespace Model
{
  class ListRepositoryAssociationsResult
  {
  public:
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsResult() = default;
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline const Aws::Vector<RepositoryAssociationSummary>& GetRepositoryAssociationSummaries() const { return m_repositoryAssociationSummaries; }
    template<typename RepositoryAssociationSummariesT = Aws::Vector<RepositoryAssociationSummary>>
    void SetRepositoryAssociationSummaries(RepositoryAssociationSummariesT&& value) { m_repositoryAssociationSummariesHasBeenSet = true; m_repositoryAssociationSummaries = std::forward<RepositoryAssociationSummariesT>(value); }
    template<typename RepositoryAssociationSummariesT = Aws::Vector<RepositoryAssociationSummary>>
    ListRepositoryAssociationsResult& WithRepositoryAssociationSummaries(RepositoryAssociationSummariesT&& value) { SetRepositoryAssociationSummaries(std::forward<RepositoryAssociationSummariesT>(value)); return *this;}
    template<typename RepositoryAssociationSummariesT = RepositoryAssociationSummary>
    ListRepositoryAssociationsResult& AddRepositoryAssociationSummaries(RepositoryAssociationSummariesT&& value) { m_repositoryAssociationSummariesHasBeenSet = true; m_repositoryAssociationSummaries.emplace_back(std::forward<RepositoryAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositoryAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRepositoryAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RepositoryAssociationSummary> m_repositoryAssociationSummaries;
    bool m_repositoryAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
