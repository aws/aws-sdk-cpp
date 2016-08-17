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
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/PipelineDeclaration.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a create pipeline action.</p>
   */
  class AWS_CODEPIPELINE_API CreatePipelineRequest : public CodePipelineRequest
  {
  public:
    CreatePipelineRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const PipelineDeclaration& GetPipeline() const{ return m_pipeline; }

    
    inline void SetPipeline(const PipelineDeclaration& value) { m_pipelineHasBeenSet = true; m_pipeline = value; }

    
    inline void SetPipeline(PipelineDeclaration&& value) { m_pipelineHasBeenSet = true; m_pipeline = value; }

    
    inline CreatePipelineRequest& WithPipeline(const PipelineDeclaration& value) { SetPipeline(value); return *this;}

    
    inline CreatePipelineRequest& WithPipeline(PipelineDeclaration&& value) { SetPipeline(value); return *this;}

  private:
    PipelineDeclaration m_pipeline;
    bool m_pipelineHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
