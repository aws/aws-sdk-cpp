/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/PipelineDeclaration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/Tag.h>
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
   * <p>Represents the output of a <code>CreatePipeline</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreatePipelineOutput">AWS
   * API Reference</a></p>
   */
  class CreatePipelineResult
  {
  public:
    AWS_CODEPIPELINE_API CreatePipelineResult();
    AWS_CODEPIPELINE_API CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreatePipelineResult& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline CreatePipelineResult& WithPipeline(PipelineDeclaration&& value) { SetPipeline(std::move(value)); return *this;}


    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline CreatePipelineResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline CreatePipelineResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline CreatePipelineResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags applied to the pipeline.</p>
     */
    inline CreatePipelineResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    PipelineDeclaration m_pipeline;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
