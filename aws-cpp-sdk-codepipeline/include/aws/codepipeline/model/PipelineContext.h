﻿/*
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
#include <aws/codepipeline/model/StageContext.h>
#include <aws/codepipeline/model/ActionContext.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about a pipeline to a job worker.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineContext">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API PipelineContext
  {
  public:
    PipelineContext();
    PipelineContext(Aws::Utils::Json::JsonView jsonValue);
    PipelineContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline PipelineContext& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline PipelineContext& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline PipelineContext& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The stage of the pipeline.</p>
     */
    inline const StageContext& GetStage() const{ return m_stage; }

    /**
     * <p>The stage of the pipeline.</p>
     */
    inline void SetStage(const StageContext& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The stage of the pipeline.</p>
     */
    inline void SetStage(StageContext&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The stage of the pipeline.</p>
     */
    inline PipelineContext& WithStage(const StageContext& value) { SetStage(value); return *this;}

    /**
     * <p>The stage of the pipeline.</p>
     */
    inline PipelineContext& WithStage(StageContext&& value) { SetStage(std::move(value)); return *this;}


    /**
     * <p>The context of an action to a job worker within the stage of a pipeline.</p>
     */
    inline const ActionContext& GetAction() const{ return m_action; }

    /**
     * <p>The context of an action to a job worker within the stage of a pipeline.</p>
     */
    inline void SetAction(const ActionContext& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The context of an action to a job worker within the stage of a pipeline.</p>
     */
    inline void SetAction(ActionContext&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The context of an action to a job worker within the stage of a pipeline.</p>
     */
    inline PipelineContext& WithAction(const ActionContext& value) { SetAction(value); return *this;}

    /**
     * <p>The context of an action to a job worker within the stage of a pipeline.</p>
     */
    inline PipelineContext& WithAction(ActionContext&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    StageContext m_stage;
    bool m_stageHasBeenSet;

    ActionContext m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
