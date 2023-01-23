/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/PipelineDeclaration.h>
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
   * <p>Represents the output of an <code>UpdatePipeline</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdatePipelineOutput">AWS
   * API Reference</a></p>
   */
  class UpdatePipelineResult
  {
  public:
    AWS_CODEPIPELINE_API UpdatePipelineResult();
    AWS_CODEPIPELINE_API UpdatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API UpdatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipeline = value; }

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipeline = std::move(value); }

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline UpdatePipelineResult& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    /**
     * <p>The structure of the updated pipeline.</p>
     */
    inline UpdatePipelineResult& WithPipeline(PipelineDeclaration&& value) { SetPipeline(std::move(value)); return *this;}

  private:

    PipelineDeclaration m_pipeline;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
