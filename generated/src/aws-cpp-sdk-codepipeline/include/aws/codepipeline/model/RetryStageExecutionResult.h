/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>RetryStageExecution</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RetryStageExecutionOutput">AWS
   * API Reference</a></p>
   */
  class RetryStageExecutionResult
  {
  public:
    AWS_CODEPIPELINE_API RetryStageExecutionResult();
    AWS_CODEPIPELINE_API RetryStageExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API RetryStageExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the current workflow execution in the failed stage.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The ID of the current workflow execution in the failed stage.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionId = value; }

    /**
     * <p>The ID of the current workflow execution in the failed stage.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The ID of the current workflow execution in the failed stage.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionId.assign(value); }

    /**
     * <p>The ID of the current workflow execution in the failed stage.</p>
     */
    inline RetryStageExecutionResult& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The ID of the current workflow execution in the failed stage.</p>
     */
    inline RetryStageExecutionResult& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the current workflow execution in the failed stage.</p>
     */
    inline RetryStageExecutionResult& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}

  private:

    Aws::String m_pipelineExecutionId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
