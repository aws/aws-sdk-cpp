/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Metadata about a rule. Rule metadata includes an ID, a name, a list of tags,
   * and a short and long description. CodeGuru Reviewer uses rules to analyze code.
   * A rule's recommendation is included in analysis results if code is detected that
   * violates the rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RuleMetadata">AWS
   * API Reference</a></p>
   */
  class RuleMetadata
  {
  public:
    AWS_CODEGURUREVIEWER_API RuleMetadata() = default;
    AWS_CODEGURUREVIEWER_API RuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the rule.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    RuleMetadata& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    RuleMetadata& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the rule.</p>
     */
    inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    template<typename ShortDescriptionT = Aws::String>
    void SetShortDescription(ShortDescriptionT&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::forward<ShortDescriptionT>(value); }
    template<typename ShortDescriptionT = Aws::String>
    RuleMetadata& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A long description of the rule.</p>
     */
    inline const Aws::String& GetLongDescription() const { return m_longDescription; }
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
    template<typename LongDescriptionT = Aws::String>
    void SetLongDescription(LongDescriptionT&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::forward<LongDescriptionT>(value); }
    template<typename LongDescriptionT = Aws::String>
    RuleMetadata& WithLongDescription(LongDescriptionT&& value) { SetLongDescription(std::forward<LongDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleTags() const { return m_ruleTags; }
    inline bool RuleTagsHasBeenSet() const { return m_ruleTagsHasBeenSet; }
    template<typename RuleTagsT = Aws::Vector<Aws::String>>
    void SetRuleTags(RuleTagsT&& value) { m_ruleTagsHasBeenSet = true; m_ruleTags = std::forward<RuleTagsT>(value); }
    template<typename RuleTagsT = Aws::Vector<Aws::String>>
    RuleMetadata& WithRuleTags(RuleTagsT&& value) { SetRuleTags(std::forward<RuleTagsT>(value)); return *this;}
    template<typename RuleTagsT = Aws::String>
    RuleMetadata& AddRuleTags(RuleTagsT&& value) { m_ruleTagsHasBeenSet = true; m_ruleTags.emplace_back(std::forward<RuleTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;

    Aws::String m_longDescription;
    bool m_longDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ruleTags;
    bool m_ruleTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
