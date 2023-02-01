/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/PipelineDeclaration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreatePipeline</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreatePipelineInput">AWS
   * API Reference</a></p>
   */
  class CreatePipelineRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API CreatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipeline"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline bool PipelineHasBeenSet() const { return m_pipelineHasBeenSet; }

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipelineHasBeenSet = true; m_pipeline = value; }

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::move(value); }

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline CreatePipelineRequest& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    /**
     * <p>Represents the structure of actions and stages to be performed in the
     * pipeline. </p>
     */
    inline CreatePipelineRequest& WithPipeline(PipelineDeclaration&& value) { SetPipeline(std::move(value)); return *this;}


    /**
     * <p>The tags for the pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the pipeline.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the pipeline.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the pipeline.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the pipeline.</p>
     */
    inline CreatePipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the pipeline.</p>
     */
    inline CreatePipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the pipeline.</p>
     */
    inline CreatePipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the pipeline.</p>
     */
    inline CreatePipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    PipelineDeclaration m_pipeline;
    bool m_pipelineHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
