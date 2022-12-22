/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RecommendationExportJob.h>
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
namespace ComputeOptimizer
{
namespace Model
{
  class DescribeRecommendationExportJobsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsResult();
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API DescribeRecommendationExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline const Aws::Vector<RecommendationExportJob>& GetRecommendationExportJobs() const{ return m_recommendationExportJobs; }

    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline void SetRecommendationExportJobs(const Aws::Vector<RecommendationExportJob>& value) { m_recommendationExportJobs = value; }

    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline void SetRecommendationExportJobs(Aws::Vector<RecommendationExportJob>&& value) { m_recommendationExportJobs = std::move(value); }

    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline DescribeRecommendationExportJobsResult& WithRecommendationExportJobs(const Aws::Vector<RecommendationExportJob>& value) { SetRecommendationExportJobs(value); return *this;}

    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline DescribeRecommendationExportJobsResult& WithRecommendationExportJobs(Aws::Vector<RecommendationExportJob>&& value) { SetRecommendationExportJobs(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline DescribeRecommendationExportJobsResult& AddRecommendationExportJobs(const RecommendationExportJob& value) { m_recommendationExportJobs.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe recommendation export jobs.</p>
     */
    inline DescribeRecommendationExportJobsResult& AddRecommendationExportJobs(RecommendationExportJob&& value) { m_recommendationExportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline DescribeRecommendationExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline DescribeRecommendationExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to advance to the next page of export jobs.</p> <p>This
     * value is null when there are no more pages of export jobs to return.</p>
     */
    inline DescribeRecommendationExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RecommendationExportJob> m_recommendationExportJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
