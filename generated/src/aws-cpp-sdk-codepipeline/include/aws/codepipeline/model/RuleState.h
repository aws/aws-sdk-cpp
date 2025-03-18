/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/RuleRevision.h>
#include <aws/codepipeline/model/RuleExecution.h>
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
   * <p>Returns information about the state of a rule.</p>  <p>Values returned
   * in the <code>revisionId</code> field indicate the rule revision information,
   * such as the commit ID, for the current state.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleState">AWS
   * API Reference</a></p>
   */
  class RuleState
  {
  public:
    AWS_CODEPIPELINE_API RuleState() = default;
    AWS_CODEPIPELINE_API RuleState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    RuleState& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline const RuleRevision& GetCurrentRevision() const { return m_currentRevision; }
    inline bool CurrentRevisionHasBeenSet() const { return m_currentRevisionHasBeenSet; }
    template<typename CurrentRevisionT = RuleRevision>
    void SetCurrentRevision(CurrentRevisionT&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = std::forward<CurrentRevisionT>(value); }
    template<typename CurrentRevisionT = RuleRevision>
    RuleState& WithCurrentRevision(CurrentRevisionT&& value) { SetCurrentRevision(std::forward<CurrentRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents information about the latest run of an rule.</p>
     */
    inline const RuleExecution& GetLatestExecution() const { return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    template<typename LatestExecutionT = RuleExecution>
    void SetLatestExecution(LatestExecutionT&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::forward<LatestExecutionT>(value); }
    template<typename LatestExecutionT = RuleExecution>
    RuleState& WithLatestExecution(LatestExecutionT&& value) { SetLatestExecution(std::forward<LatestExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL link for more information about the state of the action, such as a
     * details page.</p>
     */
    inline const Aws::String& GetEntityUrl() const { return m_entityUrl; }
    inline bool EntityUrlHasBeenSet() const { return m_entityUrlHasBeenSet; }
    template<typename EntityUrlT = Aws::String>
    void SetEntityUrl(EntityUrlT&& value) { m_entityUrlHasBeenSet = true; m_entityUrl = std::forward<EntityUrlT>(value); }
    template<typename EntityUrlT = Aws::String>
    RuleState& WithEntityUrl(EntityUrlT&& value) { SetEntityUrl(std::forward<EntityUrlT>(value)); return *this;}
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
    RuleState& WithRevisionUrl(RevisionUrlT&& value) { SetRevisionUrl(std::forward<RevisionUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    RuleRevision m_currentRevision;
    bool m_currentRevisionHasBeenSet = false;

    RuleExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet = false;

    Aws::String m_entityUrl;
    bool m_entityUrlHasBeenSet = false;

    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
