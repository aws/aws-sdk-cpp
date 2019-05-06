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
  class AWS_CODEPIPELINE_API PutActionRevisionResult
  {
  public:
    PutActionRevisionResult();
    PutActionRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutActionRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the artifact revision was previously used in an execution
     * of the specified pipeline.</p>
     */
    inline bool GetNewRevision() const{ return m_newRevision; }

    /**
     * <p>Indicates whether the artifact revision was previously used in an execution
     * of the specified pipeline.</p>
     */
    inline void SetNewRevision(bool value) { m_newRevision = value; }

    /**
     * <p>Indicates whether the artifact revision was previously used in an execution
     * of the specified pipeline.</p>
     */
    inline PutActionRevisionResult& WithNewRevision(bool value) { SetNewRevision(value); return *this;}


    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionId = value; }

    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionId.assign(value); }

    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline PutActionRevisionResult& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline PutActionRevisionResult& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the current workflow state of the pipeline.</p>
     */
    inline PutActionRevisionResult& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}

  private:

    bool m_newRevision;

    Aws::String m_pipelineExecutionId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
