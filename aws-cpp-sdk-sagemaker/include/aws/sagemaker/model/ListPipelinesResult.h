/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineSummary.h>
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
  class ListPipelinesResult
  {
  public:
    AWS_SAGEMAKER_API ListPipelinesResult();
    AWS_SAGEMAKER_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a sorted list of <code>PipelineSummary</code> objects matching the
     * specified filters. Each <code>PipelineSummary</code> consists of PipelineArn,
     * PipelineName, ExperimentName, PipelineDescription, CreationTime,
     * LastModifiedTime, LastRunTime, and RoleArn. This list can be empty. </p>
     */
    inline const Aws::Vector<PipelineSummary>& GetPipelineSummaries() const{ return m_pipelineSummaries; }

    /**
     * <p>Contains a sorted list of <code>PipelineSummary</code> objects matching the
     * specified filters. Each <code>PipelineSummary</code> consists of PipelineArn,
     * PipelineName, ExperimentName, PipelineDescription, CreationTime,
     * LastModifiedTime, LastRunTime, and RoleArn. This list can be empty. </p>
     */
    inline void SetPipelineSummaries(const Aws::Vector<PipelineSummary>& value) { m_pipelineSummaries = value; }

    /**
     * <p>Contains a sorted list of <code>PipelineSummary</code> objects matching the
     * specified filters. Each <code>PipelineSummary</code> consists of PipelineArn,
     * PipelineName, ExperimentName, PipelineDescription, CreationTime,
     * LastModifiedTime, LastRunTime, and RoleArn. This list can be empty. </p>
     */
    inline void SetPipelineSummaries(Aws::Vector<PipelineSummary>&& value) { m_pipelineSummaries = std::move(value); }

    /**
     * <p>Contains a sorted list of <code>PipelineSummary</code> objects matching the
     * specified filters. Each <code>PipelineSummary</code> consists of PipelineArn,
     * PipelineName, ExperimentName, PipelineDescription, CreationTime,
     * LastModifiedTime, LastRunTime, and RoleArn. This list can be empty. </p>
     */
    inline ListPipelinesResult& WithPipelineSummaries(const Aws::Vector<PipelineSummary>& value) { SetPipelineSummaries(value); return *this;}

    /**
     * <p>Contains a sorted list of <code>PipelineSummary</code> objects matching the
     * specified filters. Each <code>PipelineSummary</code> consists of PipelineArn,
     * PipelineName, ExperimentName, PipelineDescription, CreationTime,
     * LastModifiedTime, LastRunTime, and RoleArn. This list can be empty. </p>
     */
    inline ListPipelinesResult& WithPipelineSummaries(Aws::Vector<PipelineSummary>&& value) { SetPipelineSummaries(std::move(value)); return *this;}

    /**
     * <p>Contains a sorted list of <code>PipelineSummary</code> objects matching the
     * specified filters. Each <code>PipelineSummary</code> consists of PipelineArn,
     * PipelineName, ExperimentName, PipelineDescription, CreationTime,
     * LastModifiedTime, LastRunTime, and RoleArn. This list can be empty. </p>
     */
    inline ListPipelinesResult& AddPipelineSummaries(const PipelineSummary& value) { m_pipelineSummaries.push_back(value); return *this; }

    /**
     * <p>Contains a sorted list of <code>PipelineSummary</code> objects matching the
     * specified filters. Each <code>PipelineSummary</code> consists of PipelineArn,
     * PipelineName, ExperimentName, PipelineDescription, CreationTime,
     * LastModifiedTime, LastRunTime, and RoleArn. This list can be empty. </p>
     */
    inline ListPipelinesResult& AddPipelineSummaries(PipelineSummary&& value) { m_pipelineSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline ListPipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline ListPipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline ListPipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PipelineSummary> m_pipelineSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
