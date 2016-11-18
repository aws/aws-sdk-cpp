/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Represents the output of a start pipeline execution action.</p>
   */
  class AWS_CODEPIPELINE_API StartPipelineExecutionResult
  {
  public:
    StartPipelineExecutionResult();
    StartPipelineExecutionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartPipelineExecutionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The unique system-generated ID of the pipeline execution that was
     * started.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The unique system-generated ID of the pipeline execution that was
     * started.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionId = value; }

    /**
     * <p>The unique system-generated ID of the pipeline execution that was
     * started.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionId = value; }

    /**
     * <p>The unique system-generated ID of the pipeline execution that was
     * started.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionId.assign(value); }

    /**
     * <p>The unique system-generated ID of the pipeline execution that was
     * started.</p>
     */
    inline StartPipelineExecutionResult& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the pipeline execution that was
     * started.</p>
     */
    inline StartPipelineExecutionResult& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the pipeline execution that was
     * started.</p>
     */
    inline StartPipelineExecutionResult& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}

  private:
    Aws::String m_pipelineExecutionId;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
