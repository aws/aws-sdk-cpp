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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionRevision.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a put action revision action.</p>
   */
  class AWS_CODEPIPELINE_API PutActionRevisionRequest : public CodePipelineRequest
  {
  public:
    PutActionRevisionRequest();
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
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline that will start processing the revision to the
     * source.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

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
    inline PutActionRevisionRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(value); return *this;}

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
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage that contains the action that will act upon the
     * revision.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

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
    inline PutActionRevisionRequest& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

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
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

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
    inline PutActionRevisionRequest& WithActionName(Aws::String&& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action that will process the revision.</p>
     */
    inline PutActionRevisionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}

    
    inline const ActionRevision& GetActionRevision() const{ return m_actionRevision; }

    
    inline void SetActionRevision(const ActionRevision& value) { m_actionRevisionHasBeenSet = true; m_actionRevision = value; }

    
    inline void SetActionRevision(ActionRevision&& value) { m_actionRevisionHasBeenSet = true; m_actionRevision = value; }

    
    inline PutActionRevisionRequest& WithActionRevision(const ActionRevision& value) { SetActionRevision(value); return *this;}

    
    inline PutActionRevisionRequest& WithActionRevision(ActionRevision&& value) { SetActionRevision(value); return *this;}

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
