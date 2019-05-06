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
  class AWS_CODEPIPELINE_API GetPipelineExecutionResult
  {
  public:
    GetPipelineExecutionResult();
    GetPipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
