﻿/**
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
   * <p>Represents the output of a <code>PutActionRevision</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutActionRevisionOutput">AWS
   * API Reference</a></p>
   */
  class PutActionRevisionResult
  {
  public:
    AWS_CODEPIPELINE_API PutActionRevisionResult();
    AWS_CODEPIPELINE_API PutActionRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API PutActionRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether the artifact revision was previously used in an execution
     * of the specified pipeline.</p>
     */
    inline bool GetNewRevision() const{ return m_newRevision; }
    inline void SetNewRevision(bool value) { m_newRevision = value; }
    inline PutActionRevisionResult& WithNewRevision(bool value) { SetNewRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionId = value; }
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionId = std::move(value); }
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionId.assign(value); }
    inline PutActionRevisionResult& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}
    inline PutActionRevisionResult& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}
    inline PutActionRevisionResult& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutActionRevisionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutActionRevisionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutActionRevisionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_newRevision;

    Aws::String m_pipelineExecutionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
