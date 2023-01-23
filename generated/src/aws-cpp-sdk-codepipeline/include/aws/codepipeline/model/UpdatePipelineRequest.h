/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/PipelineDeclaration.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>UpdatePipeline</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/UpdatePipelineInput">AWS
   * API Reference</a></p>
   */
  class UpdatePipelineRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API UpdatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipeline"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline to be updated.</p>
     */
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>The name of the pipeline to be updated.</p>
     */
    inline bool PipelineHasBeenSet() const { return m_pipelineHasBeenSet; }

    /**
     * <p>The name of the pipeline to be updated.</p>
     */
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipelineHasBeenSet = true; m_pipeline = value; }

    /**
     * <p>The name of the pipeline to be updated.</p>
     */
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::move(value); }

    /**
     * <p>The name of the pipeline to be updated.</p>
     */
    inline UpdatePipelineRequest& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    /**
     * <p>The name of the pipeline to be updated.</p>
     */
    inline UpdatePipelineRequest& WithPipeline(PipelineDeclaration&& value) { SetPipeline(std::move(value)); return *this;}

  private:

    PipelineDeclaration m_pipeline;
    bool m_pipelineHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
