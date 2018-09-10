/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobSummary.h>
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
  class AWS_SAGEMAKER_API ListHyperParameterTuningJobsResult
  {
  public:
    ListHyperParameterTuningJobsResult();
    ListHyperParameterTuningJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListHyperParameterTuningJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a>HyperParameterTuningJobSummary</a> objects that describe the
     * tuning jobs that the <code>ListHyperParameterTuningJobs</code> request
     * returned.</p>
     */
    inline const Aws::Vector<HyperParameterTuningJobSummary>& GetHyperParameterTuningJobSummaries() const{ return m_hyperParameterTuningJobSummaries; }

    /**
     * <p>A list of <a>HyperParameterTuningJobSummary</a> objects that describe the
     * tuning jobs that the <code>ListHyperParameterTuningJobs</code> request
     * returned.</p>
     */
    inline void SetHyperParameterTuningJobSummaries(const Aws::Vector<HyperParameterTuningJobSummary>& value) { m_hyperParameterTuningJobSummaries = value; }

    /**
     * <p>A list of <a>HyperParameterTuningJobSummary</a> objects that describe the
     * tuning jobs that the <code>ListHyperParameterTuningJobs</code> request
     * returned.</p>
     */
    inline void SetHyperParameterTuningJobSummaries(Aws::Vector<HyperParameterTuningJobSummary>&& value) { m_hyperParameterTuningJobSummaries = std::move(value); }

    /**
     * <p>A list of <a>HyperParameterTuningJobSummary</a> objects that describe the
     * tuning jobs that the <code>ListHyperParameterTuningJobs</code> request
     * returned.</p>
     */
    inline ListHyperParameterTuningJobsResult& WithHyperParameterTuningJobSummaries(const Aws::Vector<HyperParameterTuningJobSummary>& value) { SetHyperParameterTuningJobSummaries(value); return *this;}

    /**
     * <p>A list of <a>HyperParameterTuningJobSummary</a> objects that describe the
     * tuning jobs that the <code>ListHyperParameterTuningJobs</code> request
     * returned.</p>
     */
    inline ListHyperParameterTuningJobsResult& WithHyperParameterTuningJobSummaries(Aws::Vector<HyperParameterTuningJobSummary>&& value) { SetHyperParameterTuningJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <a>HyperParameterTuningJobSummary</a> objects that describe the
     * tuning jobs that the <code>ListHyperParameterTuningJobs</code> request
     * returned.</p>
     */
    inline ListHyperParameterTuningJobsResult& AddHyperParameterTuningJobSummaries(const HyperParameterTuningJobSummary& value) { m_hyperParameterTuningJobSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <a>HyperParameterTuningJobSummary</a> objects that describe the
     * tuning jobs that the <code>ListHyperParameterTuningJobs</code> request
     * returned.</p>
     */
    inline ListHyperParameterTuningJobsResult& AddHyperParameterTuningJobSummaries(HyperParameterTuningJobSummary&& value) { m_hyperParameterTuningJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline ListHyperParameterTuningJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline ListHyperParameterTuningJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline ListHyperParameterTuningJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<HyperParameterTuningJobSummary> m_hyperParameterTuningJobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
