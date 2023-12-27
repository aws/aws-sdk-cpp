﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/GitPushFilter.h>
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
   * <p>A type of trigger configuration for Git-based source actions.</p> 
   * <p>You can specify the Git configuration trigger type for all third-party
   * Git-based source actions that are supported by the
   * <code>CodeStarSourceConnection</code> action type.</p>   <p>V2 type
   * pipelines, along with triggers on Git tags and pipeline-level variables, are not
   * currently supported for CloudFormation and CDK resources in CodePipeline. For
   * more information about V2 type pipelines, see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/pipeline-types.html">Pipeline
   * types</a> in the <i>CodePipeline User Guide</i>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GitConfiguration">AWS
   * API Reference</a></p>
   */
  class GitConfiguration
  {
  public:
    AWS_CODEPIPELINE_API GitConfiguration();
    AWS_CODEPIPELINE_API GitConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API GitConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline const Aws::String& GetSourceActionName() const{ return m_sourceActionName; }

    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline bool SourceActionNameHasBeenSet() const { return m_sourceActionNameHasBeenSet; }

    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline void SetSourceActionName(const Aws::String& value) { m_sourceActionNameHasBeenSet = true; m_sourceActionName = value; }

    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline void SetSourceActionName(Aws::String&& value) { m_sourceActionNameHasBeenSet = true; m_sourceActionName = std::move(value); }

    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline void SetSourceActionName(const char* value) { m_sourceActionNameHasBeenSet = true; m_sourceActionName.assign(value); }

    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline GitConfiguration& WithSourceActionName(const Aws::String& value) { SetSourceActionName(value); return *this;}

    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline GitConfiguration& WithSourceActionName(Aws::String&& value) { SetSourceActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline source action where the trigger configuration, such
     * as Git tags, is specified. The trigger configuration will start the pipeline
     * upon the specified change only.</p>  <p>You can only specify one trigger
     * configuration per source action.</p> 
     */
    inline GitConfiguration& WithSourceActionName(const char* value) { SetSourceActionName(value); return *this;}


    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline const Aws::Vector<GitPushFilter>& GetPush() const{ return m_push; }

    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline bool PushHasBeenSet() const { return m_pushHasBeenSet; }

    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline void SetPush(const Aws::Vector<GitPushFilter>& value) { m_pushHasBeenSet = true; m_push = value; }

    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline void SetPush(Aws::Vector<GitPushFilter>&& value) { m_pushHasBeenSet = true; m_push = std::move(value); }

    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline GitConfiguration& WithPush(const Aws::Vector<GitPushFilter>& value) { SetPush(value); return *this;}

    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline GitConfiguration& WithPush(Aws::Vector<GitPushFilter>&& value) { SetPush(std::move(value)); return *this;}

    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline GitConfiguration& AddPush(const GitPushFilter& value) { m_pushHasBeenSet = true; m_push.push_back(value); return *this; }

    /**
     * <p>The field where the repository event that will start the pipeline, such as
     * pushing Git tags, is specified with details.</p>  <p>Git tags is the only
     * supported event type.</p> 
     */
    inline GitConfiguration& AddPush(GitPushFilter&& value) { m_pushHasBeenSet = true; m_push.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceActionName;
    bool m_sourceActionNameHasBeenSet = false;

    Aws::Vector<GitPushFilter> m_push;
    bool m_pushHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
