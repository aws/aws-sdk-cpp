/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineExecutionSummary.h>
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
   * <p>Represents the output of a <code>ListPipelineExecutions</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelineExecutionsOutput">AWS
   * API Reference</a></p>
   */
  class ListPipelineExecutionsResult
  {
  public:
    AWS_CODEPIPELINE_API ListPipelineExecutionsResult() = default;
    AWS_CODEPIPELINE_API ListPipelineExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListPipelineExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of executions in the history of a pipeline.</p>
     */
    inline const Aws::Vector<PipelineExecutionSummary>& GetPipelineExecutionSummaries() const { return m_pipelineExecutionSummaries; }
    template<typename PipelineExecutionSummariesT = Aws::Vector<PipelineExecutionSummary>>
    void SetPipelineExecutionSummaries(PipelineExecutionSummariesT&& value) { m_pipelineExecutionSummariesHasBeenSet = true; m_pipelineExecutionSummaries = std::forward<PipelineExecutionSummariesT>(value); }
    template<typename PipelineExecutionSummariesT = Aws::Vector<PipelineExecutionSummary>>
    ListPipelineExecutionsResult& WithPipelineExecutionSummaries(PipelineExecutionSummariesT&& value) { SetPipelineExecutionSummaries(std::forward<PipelineExecutionSummariesT>(value)); return *this;}
    template<typename PipelineExecutionSummariesT = PipelineExecutionSummary>
    ListPipelineExecutionsResult& AddPipelineExecutionSummaries(PipelineExecutionSummariesT&& value) { m_pipelineExecutionSummariesHasBeenSet = true; m_pipelineExecutionSummaries.emplace_back(std::forward<PipelineExecutionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used in the next <code>ListPipelineExecutions</code>
     * call. To view all items in the list, continue to call this operation with each
     * subsequent token until no more nextToken values are returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPipelineExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPipelineExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineExecutionSummary> m_pipelineExecutionSummaries;
    bool m_pipelineExecutionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
