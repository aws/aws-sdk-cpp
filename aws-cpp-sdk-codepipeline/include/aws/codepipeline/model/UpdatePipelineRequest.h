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
  class AWS_CODEPIPELINE_API UpdatePipelineRequest : public CodePipelineRequest
  {
  public:
    UpdatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipeline"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_pipelineHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
