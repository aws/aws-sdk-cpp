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
    AWS_CODEPIPELINE_API ActionState() = default;
    AWS_CODEPIPELINE_API ActionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    ActionState& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents information about the version (or revision) of an action.</p>
     */
    inline const ActionRevision& GetCurrentRevision() const { return m_currentRevision; }
    inline bool CurrentRevisionHasBeenSet() const { return m_currentRevisionHasBeenSet; }
    template<typename CurrentRevisionT = ActionRevision>
    void SetCurrentRevision(CurrentRevisionT&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = std::forward<CurrentRevisionT>(value); }
    template<typename CurrentRevisionT = ActionRevision>
    ActionState& WithCurrentRevision(CurrentRevisionT&& value) { SetCurrentRevision(std::forward<CurrentRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents information about the run of an action.</p>
     */
    inline const ActionExecution& GetLatestExecution() const { return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    template<typename LatestExecutionT = ActionExecution>
    void SetLatestExecution(LatestExecutionT&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::forward<LatestExecutionT>(value); }
    template<typename LatestExecutionT = ActionExecution>
    ActionState& WithLatestExecution(LatestExecutionT&& value) { SetLatestExecution(std::forward<LatestExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL link for more information about the state of the action, such as a
     * deployment group details page.</p>
     */
    inline const Aws::String& GetEntityUrl() const { return m_entityUrl; }
    inline bool EntityUrlHasBeenSet() const { return m_entityUrlHasBeenSet; }
    template<typename EntityUrlT = Aws::String>
    void SetEntityUrl(EntityUrlT&& value) { m_entityUrlHasBeenSet = true; m_entityUrl = std::forward<EntityUrlT>(value); }
    template<typename EntityUrlT = Aws::String>
    ActionState& WithEntityUrl(EntityUrlT&& value) { SetEntityUrl(std::forward<EntityUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline const Aws::String& GetRevisionUrl() const { return m_revisionUrl; }
    inline bool RevisionUrlHasBeenSet() const { return m_revisionUrlHasBeenSet; }
    template<typename RevisionUrlT = Aws::String>
    void SetRevisionUrl(RevisionUrlT&& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = std::forward<RevisionUrlT>(value); }
    template<typename RevisionUrlT = Aws::String>
    ActionState& WithRevisionUrl(RevisionUrlT&& value) { SetRevisionUrl(std::forward<RevisionUrlT>(value)); return *this;}
    ///@}
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
