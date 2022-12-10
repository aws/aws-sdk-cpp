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
    AWS_CODEGURUREVIEWER_API RuleMetadata();
    AWS_CODEGURUREVIEWER_API RuleMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RuleMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the rule.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The ID of the rule.</p>
     */
    inline RuleMetadata& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The ID of the rule.</p>
     */
    inline RuleMetadata& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the rule.</p>
     */
    inline RuleMetadata& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline RuleMetadata& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline RuleMetadata& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline RuleMetadata& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>A short description of the rule.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }

    /**
     * <p>A short description of the rule.</p>
     */
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }

    /**
     * <p>A short description of the rule.</p>
     */
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }

    /**
     * <p>A short description of the rule.</p>
     */
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }

    /**
     * <p>A short description of the rule.</p>
     */
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }

    /**
     * <p>A short description of the rule.</p>
     */
    inline RuleMetadata& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}

    /**
     * <p>A short description of the rule.</p>
     */
    inline RuleMetadata& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}

    /**
     * <p>A short description of the rule.</p>
     */
    inline RuleMetadata& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}


    /**
     * <p>A long description of the rule.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }

    /**
     * <p>A long description of the rule.</p>
     */
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }

    /**
     * <p>A long description of the rule.</p>
     */
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }

    /**
     * <p>A long description of the rule.</p>
     */
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }

    /**
     * <p>A long description of the rule.</p>
     */
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }

    /**
     * <p>A long description of the rule.</p>
     */
    inline RuleMetadata& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}

    /**
     * <p>A long description of the rule.</p>
     */
    inline RuleMetadata& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}

    /**
     * <p>A long description of the rule.</p>
     */
    inline RuleMetadata& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}


    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleTags() const{ return m_ruleTags; }

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline bool RuleTagsHasBeenSet() const { return m_ruleTagsHasBeenSet; }

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline void SetRuleTags(const Aws::Vector<Aws::String>& value) { m_ruleTagsHasBeenSet = true; m_ruleTags = value; }

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline void SetRuleTags(Aws::Vector<Aws::String>&& value) { m_ruleTagsHasBeenSet = true; m_ruleTags = std::move(value); }

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline RuleMetadata& WithRuleTags(const Aws::Vector<Aws::String>& value) { SetRuleTags(value); return *this;}

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline RuleMetadata& WithRuleTags(Aws::Vector<Aws::String>&& value) { SetRuleTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline RuleMetadata& AddRuleTags(const Aws::String& value) { m_ruleTagsHasBeenSet = true; m_ruleTags.push_back(value); return *this; }

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline RuleMetadata& AddRuleTags(Aws::String&& value) { m_ruleTagsHasBeenSet = true; m_ruleTags.push_back(std::move(value)); return *this; }

    /**
     * <p>Tags that are associated with the rule.</p>
     */
    inline RuleMetadata& AddRuleTags(const char* value) { m_ruleTagsHasBeenSet = true; m_ruleTags.push_back(value); return *this; }

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
