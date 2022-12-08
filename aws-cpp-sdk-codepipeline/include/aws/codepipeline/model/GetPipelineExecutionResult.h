/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/PipelineExecution.h>
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
   * <p>Represents the output of a <code>GetPipelineExecution</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineExecutionOutput">AWS
   * API Reference</a></p>
   */
  class GetPipelineExecutionResult
  {
  public:
    AWS_CODEPIPELINE_API GetPipelineExecutionResult();
    AWS_CODEPIPELINE_API GetPipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetPipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents information about the execution of a pipeline.</p>
     */
    inline const PipelineExecution& GetPipelineExecution() const{ return m_pipelineExecution; }

    /**
     * <p>Represents information about the execution of a pipeline.</p>
     */
    inline void SetPipelineExecution(const PipelineExecution& value) { m_pipelineExecution = value; }

    /**
     * <p>Represents information about the execution of a pipeline.</p>
     */
    inline void SetPipelineExecution(PipelineExecution&& value) { m_pipelineExecution = std::move(value); }

    /**
     * <p>Represents information about the execution of a pipeline.</p>
     */
    inline GetPipelineExecutionResult& WithPipelineExecution(const PipelineExecution& value) { SetPipelineExecution(value); return *this;}

    /**
     * <p>Represents information about the execution of a pipeline.</p>
     */
    inline GetPipelineExecutionResult& WithPipelineExecution(PipelineExecution&& value) { SetPipelineExecution(std::move(value)); return *this;}

  private:

    PipelineExecution m_pipelineExecution;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
