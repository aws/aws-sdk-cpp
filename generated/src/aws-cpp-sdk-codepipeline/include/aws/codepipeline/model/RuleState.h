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
    AWS_CODEPIPELINE_API RuleState();
    AWS_CODEPIPELINE_API RuleState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline RuleState& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline RuleState& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline RuleState& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the current revision of the artifact successfully worked on by the
     * job.</p>
     */
    inline const RuleRevision& GetCurrentRevision() const{ return m_currentRevision; }
    inline bool CurrentRevisionHasBeenSet() const { return m_currentRevisionHasBeenSet; }
    inline void SetCurrentRevision(const RuleRevision& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = value; }
    inline void SetCurrentRevision(RuleRevision&& value) { m_currentRevisionHasBeenSet = true; m_currentRevision = std::move(value); }
    inline RuleState& WithCurrentRevision(const RuleRevision& value) { SetCurrentRevision(value); return *this;}
    inline RuleState& WithCurrentRevision(RuleRevision&& value) { SetCurrentRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents information about the latest run of an rule.</p>
     */
    inline const RuleExecution& GetLatestExecution() const{ return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    inline void SetLatestExecution(const RuleExecution& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }
    inline void SetLatestExecution(RuleExecution&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::move(value); }
    inline RuleState& WithLatestExecution(const RuleExecution& value) { SetLatestExecution(value); return *this;}
    inline RuleState& WithLatestExecution(RuleExecution&& value) { SetLatestExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL link for more information about the state of the action, such as a
     * details page.</p>
     */
    inline const Aws::String& GetEntityUrl() const{ return m_entityUrl; }
    inline bool EntityUrlHasBeenSet() const { return m_entityUrlHasBeenSet; }
    inline void SetEntityUrl(const Aws::String& value) { m_entityUrlHasBeenSet = true; m_entityUrl = value; }
    inline void SetEntityUrl(Aws::String&& value) { m_entityUrlHasBeenSet = true; m_entityUrl = std::move(value); }
    inline void SetEntityUrl(const char* value) { m_entityUrlHasBeenSet = true; m_entityUrl.assign(value); }
    inline RuleState& WithEntityUrl(const Aws::String& value) { SetEntityUrl(value); return *this;}
    inline RuleState& WithEntityUrl(Aws::String&& value) { SetEntityUrl(std::move(value)); return *this;}
    inline RuleState& WithEntityUrl(const char* value) { SetEntityUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL link for more information about the revision, such as a commit details
     * page.</p>
     */
    inline const Aws::String& GetRevisionUrl() const{ return m_revisionUrl; }
    inline bool RevisionUrlHasBeenSet() const { return m_revisionUrlHasBeenSet; }
    inline void SetRevisionUrl(const Aws::String& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = value; }
    inline void SetRevisionUrl(Aws::String&& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = std::move(value); }
    inline void SetRevisionUrl(const char* value) { m_revisionUrlHasBeenSet = true; m_revisionUrl.assign(value); }
    inline RuleState& WithRevisionUrl(const Aws::String& value) { SetRevisionUrl(value); return *this;}
    inline RuleState& WithRevisionUrl(Aws::String&& value) { SetRevisionUrl(std::move(value)); return *this;}
    inline RuleState& WithRevisionUrl(const char* value) { SetRevisionUrl(value); return *this;}
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
