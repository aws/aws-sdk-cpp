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
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsResult();
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline const Aws::Vector<RepositoryAssociationSummary>& GetRepositoryAssociationSummaries() const{ return m_repositoryAssociationSummaries; }

    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline void SetRepositoryAssociationSummaries(const Aws::Vector<RepositoryAssociationSummary>& value) { m_repositoryAssociationSummaries = value; }

    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline void SetRepositoryAssociationSummaries(Aws::Vector<RepositoryAssociationSummary>&& value) { m_repositoryAssociationSummaries = std::move(value); }

    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline ListRepositoryAssociationsResult& WithRepositoryAssociationSummaries(const Aws::Vector<RepositoryAssociationSummary>& value) { SetRepositoryAssociationSummaries(value); return *this;}

    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline ListRepositoryAssociationsResult& WithRepositoryAssociationSummaries(Aws::Vector<RepositoryAssociationSummary>&& value) { SetRepositoryAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline ListRepositoryAssociationsResult& AddRepositoryAssociationSummaries(const RepositoryAssociationSummary& value) { m_repositoryAssociationSummaries.push_back(value); return *this; }

    /**
     * <p>A list of repository associations that meet the criteria of the request.</p>
     */
    inline ListRepositoryAssociationsResult& AddRepositoryAssociationSummaries(RepositoryAssociationSummary&& value) { m_repositoryAssociationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListRepositoryAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListRepositoryAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRecommendations</code> request. When the results of a
     * <code>ListRecommendations</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListRepositoryAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RepositoryAssociationSummary> m_repositoryAssociationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
