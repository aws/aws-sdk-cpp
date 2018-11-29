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
#include <aws/sagemaker/model/LabelingJobForWorkteamSummary.h>
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
  class AWS_SAGEMAKER_API ListLabelingJobsForWorkteamResult
  {
  public:
    ListLabelingJobsForWorkteamResult();
    ListLabelingJobsForWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLabelingJobsForWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline const Aws::Vector<LabelingJobForWorkteamSummary>& GetLabelingJobSummaryList() const{ return m_labelingJobSummaryList; }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline void SetLabelingJobSummaryList(const Aws::Vector<LabelingJobForWorkteamSummary>& value) { m_labelingJobSummaryList = value; }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline void SetLabelingJobSummaryList(Aws::Vector<LabelingJobForWorkteamSummary>&& value) { m_labelingJobSummaryList = std::move(value); }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsForWorkteamResult& WithLabelingJobSummaryList(const Aws::Vector<LabelingJobForWorkteamSummary>& value) { SetLabelingJobSummaryList(value); return *this;}

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsForWorkteamResult& WithLabelingJobSummaryList(Aws::Vector<LabelingJobForWorkteamSummary>&& value) { SetLabelingJobSummaryList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsForWorkteamResult& AddLabelingJobSummaryList(const LabelingJobForWorkteamSummary& value) { m_labelingJobSummaryList.push_back(value); return *this; }

    /**
     * <p>An array of <code>LabelingJobSummary</code> objects, each describing a
     * labeling job.</p>
     */
    inline ListLabelingJobsForWorkteamResult& AddLabelingJobSummaryList(LabelingJobForWorkteamSummary&& value) { m_labelingJobSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline ListLabelingJobsForWorkteamResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline ListLabelingJobsForWorkteamResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of labeling jobs, use it in the subsequent request.</p>
     */
    inline ListLabelingJobsForWorkteamResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LabelingJobForWorkteamSummary> m_labelingJobSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
