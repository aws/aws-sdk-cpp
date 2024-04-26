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
  class RollbackStageResult
  {
  public:
    AWS_CODEPIPELINE_API RollbackStageResult();
    AWS_CODEPIPELINE_API RollbackStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API RollbackStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The execution ID of the pipeline execution for the stage that has been rolled
     * back.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The execution ID of the pipeline execution for the stage that has been rolled
     * back.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionId = value; }

    /**
     * <p>The execution ID of the pipeline execution for the stage that has been rolled
     * back.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The execution ID of the pipeline execution for the stage that has been rolled
     * back.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionId.assign(value); }

    /**
     * <p>The execution ID of the pipeline execution for the stage that has been rolled
     * back.</p>
     */
    inline RollbackStageResult& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The execution ID of the pipeline execution for the stage that has been rolled
     * back.</p>
     */
    inline RollbackStageResult& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID of the pipeline execution for the stage that has been rolled
     * back.</p>
     */
    inline RollbackStageResult& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RollbackStageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RollbackStageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RollbackStageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_pipelineExecutionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
