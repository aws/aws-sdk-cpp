/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codepipeline/model/StageState.h>
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
   * <p>Represents the output of a <code>GetPipelineState</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineStateOutput">AWS
   * API Reference</a></p>
   */
  class GetPipelineStateResult
  {
  public:
    AWS_CODEPIPELINE_API GetPipelineStateResult() = default;
    AWS_CODEPIPELINE_API GetPipelineStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetPipelineStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    GetPipelineStateResult& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the pipeline.</p>  <p>A newly created pipeline is
     * always assigned a version number of <code>1</code>.</p> 
     */
    inline int GetPipelineVersion() const { return m_pipelineVersion; }
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }
    inline GetPipelineStateResult& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline const Aws::Vector<StageState>& GetStageStates() const { return m_stageStates; }
    template<typename StageStatesT = Aws::Vector<StageState>>
    void SetStageStates(StageStatesT&& value) { m_stageStatesHasBeenSet = true; m_stageStates = std::forward<StageStatesT>(value); }
    template<typename StageStatesT = Aws::Vector<StageState>>
    GetPipelineStateResult& WithStageStates(StageStatesT&& value) { SetStageStates(std::forward<StageStatesT>(value)); return *this;}
    template<typename StageStatesT = StageState>
    GetPipelineStateResult& AddStageStates(StageStatesT&& value) { m_stageStatesHasBeenSet = true; m_stageStates.emplace_back(std::forward<StageStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    GetPipelineStateResult& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const { return m_updated; }
    template<typename UpdatedT = Aws::Utils::DateTime>
    void SetUpdated(UpdatedT&& value) { m_updatedHasBeenSet = true; m_updated = std::forward<UpdatedT>(value); }
    template<typename UpdatedT = Aws::Utils::DateTime>
    GetPipelineStateResult& WithUpdated(UpdatedT&& value) { SetUpdated(std::forward<UpdatedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPipelineStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    int m_pipelineVersion{0};
    bool m_pipelineVersionHasBeenSet = false;

    Aws::Vector<StageState> m_stageStates;
    bool m_stageStatesHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_updated{};
    bool m_updatedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
