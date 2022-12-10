/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineExecutionStep.h>
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
  class ListPipelineExecutionStepsResult
  {
  public:
    AWS_SAGEMAKER_API ListPipelineExecutionStepsResult();
    AWS_SAGEMAKER_API ListPipelineExecutionStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListPipelineExecutionStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline const Aws::Vector<PipelineExecutionStep>& GetPipelineExecutionSteps() const{ return m_pipelineExecutionSteps; }

    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline void SetPipelineExecutionSteps(const Aws::Vector<PipelineExecutionStep>& value) { m_pipelineExecutionSteps = value; }

    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline void SetPipelineExecutionSteps(Aws::Vector<PipelineExecutionStep>&& value) { m_pipelineExecutionSteps = std::move(value); }

    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline ListPipelineExecutionStepsResult& WithPipelineExecutionSteps(const Aws::Vector<PipelineExecutionStep>& value) { SetPipelineExecutionSteps(value); return *this;}

    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline ListPipelineExecutionStepsResult& WithPipelineExecutionSteps(Aws::Vector<PipelineExecutionStep>&& value) { SetPipelineExecutionSteps(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline ListPipelineExecutionStepsResult& AddPipelineExecutionSteps(const PipelineExecutionStep& value) { m_pipelineExecutionSteps.push_back(value); return *this; }

    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline ListPipelineExecutionStepsResult& AddPipelineExecutionSteps(PipelineExecutionStep&& value) { m_pipelineExecutionSteps.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline ListPipelineExecutionStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline ListPipelineExecutionStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline ListPipelineExecutionStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PipelineExecutionStep> m_pipelineExecutionSteps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
