/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionRevision.h>
#include <aws/codepipeline/model/ActionExecution.h>
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
   * <p>Represents information about the state of an action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionState">AWS
   * API Reference</a></p>
   */
  class ActionState
  {
  public:
    AWS_CODEPIPELINE_API ActionState();
    AWS_CODEPIPELINE_API ActionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

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
    inline ActionState& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ActionState& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline const ActionRevision& GetCurrentRevision() const{ return m_currentRevision; }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline bool CurrentRevisionHasBeenSet() const { return m_currentRevisionHasBeenSet; }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline void SetCurrentRevision(const ActionRevision& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline void SetCurrentRevision(ActionRevision&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = std::move(value); }

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline ActionState& WithCurrentRevision(const ActionRevision& value) { SetCurrentRevision(value); return *this;}

    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline ActionState& WithCurrentRevision(ActionRevision&& value) { SetCurrentRevision(std::move(value)); return *this;}


    /**
     * <p>Represents information about the run of an action.</p>
     */
    inline const ActionExecution& GetLatestExecution() const{ return m_latestExecution; }

    /**
     * <p>Represents information about the run of an action.</p>
     */
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }

    /**
     * <p>Represents information about the run of an action.</p>
     */
    inline void SetLatestExecution(const ActionExecution& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }

    /**
     * <p>Represents information about the run of an action.</p>
     */
    inline void SetLatestExecution(ActionExecution&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::move(value); }

    /**
     * <p>Represents information about the run of an action.</p>
     */
    inline ActionState& WithLatestExecution(const ActionExecution& value) { SetLatestExecution(value); return *this;}

    /**
     * <p>Represents information about the run of an action.</p>
     */
    inline ActionState& WithLatestExecution(ActionExecution&& value) { SetLatestExecution(std::move(value)); return *this;}


    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline const Aws::String& GetEntityUrl() const{ return m_entityUrl; }

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline bool EntityUrlHasBeenSet() const { return m_entityUrlHasBeenSet; }

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline void SetEntityUrl(const Aws::String& value) { m_entityUrlHasBeenSet = true; m_entityUrl = value; }

    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline void SetEntityUrl(Aws::String&& value) { m_entityUrlHasBeenSet = true; m_entityUrl = std::move(value); }

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
    inline ActionState& WithEntityUrl(Aws::String&& value) { SetEntityUrl(std::move(value)); return *this;}

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
    inline bool RevisionUrlHasBeenSet() const { return m_revisionUrlHasBeenSet; }

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(const Aws::String& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = value; }

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline void SetRevisionUrl(Aws::String&& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = std::move(value); }

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
    inline ActionState& WithRevisionUrl(Aws::String&& value) { SetRevisionUrl(std::move(value)); return *this;}

    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline ActionState& WithRevisionUrl(const char* value) { SetRevisionUrl(value); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    ActionRevision m_currentRevision;
    bool m_currentRevisionHasBeenSet = false;

    ActionExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet = false;

    Aws::String m_entityUrl;
    bool m_entityUrlHasBeenSet = false;

    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
