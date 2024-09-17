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
    AWS_CODEPIPELINE_API GetPipelineStateResult();
    AWS_CODEPIPELINE_API GetPipelineStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetPipelineStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineName.assign(value); }
    inline GetPipelineStateResult& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline GetPipelineStateResult& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline GetPipelineStateResult& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the pipeline.</p>  <p>A newly created pipeline is
     * always assigned a version number of <code>1</code>.</p> 
     */
    inline int GetPipelineVersion() const{ return m_pipelineVersion; }
    inline void SetPipelineVersion(int value) { m_pipelineVersion = value; }
    inline GetPipelineStateResult& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline const Aws::Vector<StageState>& GetStageStates() const{ return m_stageStates; }
    inline void SetStageStates(const Aws::Vector<StageState>& value) { m_stageStates = value; }
    inline void SetStageStates(Aws::Vector<StageState>&& value) { m_stageStates = std::move(value); }
    inline GetPipelineStateResult& WithStageStates(const Aws::Vector<StageState>& value) { SetStageStates(value); return *this;}
    inline GetPipelineStateResult& WithStageStates(Aws::Vector<StageState>&& value) { SetStageStates(std::move(value)); return *this;}
    inline GetPipelineStateResult& AddStageStates(const StageState& value) { m_stageStates.push_back(value); return *this; }
    inline GetPipelineStateResult& AddStageStates(StageState&& value) { m_stageStates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }
    inline GetPipelineStateResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline GetPipelineStateResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const{ return m_updated; }
    inline void SetUpdated(const Aws::Utils::DateTime& value) { m_updated = value; }
    inline void SetUpdated(Aws::Utils::DateTime&& value) { m_updated = std::move(value); }
    inline GetPipelineStateResult& WithUpdated(const Aws::Utils::DateTime& value) { SetUpdated(value); return *this;}
    inline GetPipelineStateResult& WithUpdated(Aws::Utils::DateTime&& value) { SetUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPipelineStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPipelineStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPipelineStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;

    int m_pipelineVersion;

    Aws::Vector<StageState> m_stageStates;

    Aws::Utils::DateTime m_created;

    Aws::Utils::DateTime m_updated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
