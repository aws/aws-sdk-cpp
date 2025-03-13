/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/PipelineExecution.h>
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
   * <p>Represents the output of a <code>GetPipelineExecution</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineExecutionOutput">AWS
   * API Reference</a></p>
   */
  class GetPipelineExecutionResult
  {
  public:
    AWS_CODEPIPELINE_API GetPipelineExecutionResult() = default;
    AWS_CODEPIPELINE_API GetPipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetPipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents information about the execution of a pipeline.</p>
     */
    inline const PipelineExecution& GetPipelineExecution() const { return m_pipelineExecution; }
    template<typename PipelineExecutionT = PipelineExecution>
    void SetPipelineExecution(PipelineExecutionT&& value) { m_pipelineExecutionHasBeenSet = true; m_pipelineExecution = std::forward<PipelineExecutionT>(value); }
    template<typename PipelineExecutionT = PipelineExecution>
    GetPipelineExecutionResult& WithPipelineExecution(PipelineExecutionT&& value) { SetPipelineExecution(std::forward<PipelineExecutionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPipelineExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PipelineExecution m_pipelineExecution;
    bool m_pipelineExecutionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
