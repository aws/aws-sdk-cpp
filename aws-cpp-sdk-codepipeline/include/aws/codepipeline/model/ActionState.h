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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionRevision.h>
#include <aws/codepipeline/model/ActionExecution.h>

namespace Aws
{
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
   * <p>Represents information about the state of an action.</p>
   */
  class AWS_CODEPIPELINE_API ActionState
  {
  public:
    ActionState();
    ActionState(const Aws::Utils::Json::JsonValue& jsonValue);
    ActionState& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline ActionState& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ActionState& WithActionName(Aws::String&& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ActionState& WithActionName(const char* value) { SetActionName(value); return *this;}

    
    inline const ActionRevision& GetCurrentRevision() const{ return m_currentRevision; }

    
    inline void SetCurrentRevision(const ActionRevision& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }

    
    inline void SetCurrentRevision(ActionRevision&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }

    
    inline ActionState& WithCurrentRevision(const ActionRevision& value) { SetCurrentRevision(value); return *this;}

    
    inline ActionState& WithCurrentRevision(ActionRevision&& value) { SetCurrentRevision(value); return *this;}

    
    inline const ActionExecution& GetLatestExecution() const{ return m_latestExecution; }

    
    inline void SetLatestExecution(const ActionExecution& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }

    
    inline void SetLatestExecution(ActionExecution&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }

    
    inline ActionState& WithLatestExecution(const ActionExecution& value) { SetLatestExecution(value); return *this;}

    
    inline ActionState& WithLatestExecution(ActionExecution&& value) { SetLatestExecution(value); return *this;}

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline const Aws::String& GetEntityUrl() const{ return m_entityUrl; }

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline void SetEntityUrl(const Aws::String& value) { m_entityUrlHasBeenSet = true; m_entityUrl = value; }

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline void SetEntityUrl(Aws::String&& value) { m_entityUrlHasBeenSet = true; m_entityUrl = value; }

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline void SetEntityUrl(const char* value) { m_entityUrlHasBeenSet = true; m_entityUrl.assign(value); }

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline ActionState& WithEntityUrl(const Aws::String& value) { SetEntityUrl(value); return *this;}

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline ActionState& WithEntityUrl(Aws::String&& value) { SetEntityUrl(value); return *this;}

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline ActionState& WithEntityUrl(const char* value) { SetEntityUrl(value); return *this;}

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline const Aws::String& GetRevisionUrl() const{ return m_revisionUrl; }

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(const Aws::String& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = value; }

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(Aws::String&& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = value; }

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(const char* value) { m_revisionUrlHasBeenSet = true; m_revisionUrl.assign(value); }

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline ActionState& WithRevisionUrl(const Aws::String& value) { SetRevisionUrl(value); return *this;}

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline ActionState& WithRevisionUrl(Aws::String&& value) { SetRevisionUrl(value); return *this;}

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline ActionState& WithRevisionUrl(const char* value) { SetRevisionUrl(value); return *this;}

  private:
    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;
    ActionRevision m_currentRevision;
    bool m_currentRevisionHasBeenSet;
    ActionExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet;
    Aws::String m_entityUrl;
    bool m_entityUrlHasBeenSet;
    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
