/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/PipelineDeclaration.h>
#include <aws/codepipeline/model/PipelineMetadata.h>
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
   * <p>Represents the output of a <code>GetPipeline</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineOutput">AWS
   * API Reference</a></p>
   */
  class GetPipelineResult
  {
  public:
    AWS_CODEPIPELINE_API GetPipelineResult();
    AWS_CODEPIPELINE_API GetPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipeline = value; }

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipeline = std::move(value); }

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline GetPipelineResult& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline GetPipelineResult& WithPipeline(PipelineDeclaration&& value) { SetPipeline(std::move(value)); return *this;}


    /**
     * <p>Represents the pipeline metadata information returned as part of the output
     * of a <code>GetPipeline</code> action.</p>
     */
    inline const PipelineMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Represents the pipeline metadata information returned as part of the output
     * of a <code>GetPipeline</code> action.</p>
     */
    inline void SetMetadata(const PipelineMetadata& value) { m_metadata = value; }

    /**
     * <p>Represents the pipeline metadata information returned as part of the output
     * of a <code>GetPipeline</code> action.</p>
     */
    inline void SetMetadata(PipelineMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>Represents the pipeline metadata information returned as part of the output
     * of a <code>GetPipeline</code> action.</p>
     */
    inline GetPipelineResult& WithMetadata(const PipelineMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Represents the pipeline metadata information returned as part of the output
     * of a <code>GetPipeline</code> action.</p>
     */
    inline GetPipelineResult& WithMetadata(PipelineMetadata&& value) { SetMetadata(std::move(value)); return *this;}

  private:

    PipelineDeclaration m_pipeline;

    PipelineMetadata m_metadata;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
