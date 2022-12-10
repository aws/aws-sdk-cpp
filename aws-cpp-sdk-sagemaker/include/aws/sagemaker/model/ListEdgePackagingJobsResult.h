/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgePackagingJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListEdgePackagingJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListEdgePackagingJobsResult();
    AWS_SAGEMAKER_API ListEdgePackagingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListEdgePackagingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline const Aws::Vector<EdgePackagingJobSummary>& GetEdgePackagingJobSummaries() const{ return m_edgePackagingJobSummaries; }

    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline void SetEdgePackagingJobSummaries(const Aws::Vector<EdgePackagingJobSummary>& value) { m_edgePackagingJobSummaries = value; }

    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline void SetEdgePackagingJobSummaries(Aws::Vector<EdgePackagingJobSummary>&& value) { m_edgePackagingJobSummaries = std::move(value); }

    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline ListEdgePackagingJobsResult& WithEdgePackagingJobSummaries(const Aws::Vector<EdgePackagingJobSummary>& value) { SetEdgePackagingJobSummaries(value); return *this;}

    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline ListEdgePackagingJobsResult& WithEdgePackagingJobSummaries(Aws::Vector<EdgePackagingJobSummary>&& value) { SetEdgePackagingJobSummaries(std::move(value)); return *this;}

    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline ListEdgePackagingJobsResult& AddEdgePackagingJobSummaries(const EdgePackagingJobSummary& value) { m_edgePackagingJobSummaries.push_back(value); return *this; }

    /**
     * <p>Summaries of edge packaging jobs.</p>
     */
    inline ListEdgePackagingJobsResult& AddEdgePackagingJobSummaries(EdgePackagingJobSummary&& value) { m_edgePackagingJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline ListEdgePackagingJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline ListEdgePackagingJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to use when calling the next page of results.</p>
     */
    inline ListEdgePackagingJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EdgePackagingJobSummary> m_edgePackagingJobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
