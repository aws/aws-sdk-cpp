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
  /**
   * <p>Represents the output of a <code>StartPipelineExecution</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StartPipelineExecutionOutput">AWS
   * API Reference</a></p>
   */
  class StartPipelineExecutionResult
  {
  public:
    AWS_CODEPIPELINE_API StartPipelineExecutionResult();
    AWS_CODEPIPELINE_API StartPipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API StartPipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionId = std::move(value); }

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
    inline StartPipelineExecutionResult& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

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
