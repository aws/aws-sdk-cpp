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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionRevision.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PutActionRevision</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutActionRevisionInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API PutActionRevisionRequest : public CodePipelineRequest
  {
  public:
    PutActionRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutActionRevision"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline PutActionRevisionRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline PutActionRevisionRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline PutActionRevisionRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline PutActionRevisionRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline PutActionRevisionRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline PutActionRevisionRequest& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline PutActionRevisionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline PutActionRevisionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline PutActionRevisionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline const ActionRevision& GetActionRevision() const{ return m_actionRevision; }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline bool ActionRevisionHasBeenSet() const { return m_actionRevisionHasBeenSet; }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline void SetActionRevision(const ActionRevision& value) { m_actionRevisionHasBeenSet = true; m_actionRevision = value; }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline void SetActionRevision(ActionRevision&& value) { m_actionRevisionHasBeenSet = true; m_actionRevision = std::move(value); }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline PutActionRevisionRequest& WithActionRevision(const ActionRevision& value) { SetActionRevision(value); return *this;}

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline PutActionRevisionRequest& WithActionRevision(ActionRevision&& value) { SetActionRevision(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    ActionRevision m_actionRevision;
    bool m_actionRevisionHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
