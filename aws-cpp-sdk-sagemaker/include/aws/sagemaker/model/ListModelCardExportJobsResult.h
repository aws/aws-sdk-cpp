/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardExportJobSummary.h>
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
  class ListModelCardExportJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelCardExportJobsResult();
    AWS_SAGEMAKER_API ListModelCardExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelCardExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline const Aws::Vector<ModelCardExportJobSummary>& GetModelCardExportJobSummaries() const{ return m_modelCardExportJobSummaries; }

    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline void SetModelCardExportJobSummaries(const Aws::Vector<ModelCardExportJobSummary>& value) { m_modelCardExportJobSummaries = value; }

    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline void SetModelCardExportJobSummaries(Aws::Vector<ModelCardExportJobSummary>&& value) { m_modelCardExportJobSummaries = std::move(value); }

    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline ListModelCardExportJobsResult& WithModelCardExportJobSummaries(const Aws::Vector<ModelCardExportJobSummary>& value) { SetModelCardExportJobSummaries(value); return *this;}

    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline ListModelCardExportJobsResult& WithModelCardExportJobSummaries(Aws::Vector<ModelCardExportJobSummary>&& value) { SetModelCardExportJobSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline ListModelCardExportJobsResult& AddModelCardExportJobSummaries(const ModelCardExportJobSummary& value) { m_modelCardExportJobSummaries.push_back(value); return *this; }

    /**
     * <p>The summaries of the listed model card export jobs.</p>
     */
    inline ListModelCardExportJobsResult& AddModelCardExportJobSummaries(ModelCardExportJobSummary&& value) { m_modelCardExportJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline ListModelCardExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline ListModelCardExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of model card export jobs, use it in the subsequent request.</p>
     */
    inline ListModelCardExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelCardExportJobSummary> m_modelCardExportJobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
