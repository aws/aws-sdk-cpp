/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>A rule set contains a list of rules that are evaluated in order. Each rule is
   * evaluated sequentially for each email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleSet">AWS
   * API Reference</a></p>
   */
  class RuleSet
  {
  public:
    AWS_MAILMANAGER_API RuleSet();
    AWS_MAILMANAGER_API RuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last modification date of the rule set.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }
    inline bool LastModificationDateHasBeenSet() const { return m_lastModificationDateHasBeenSet; }
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = value; }
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::move(value); }
    inline RuleSet& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}
    inline RuleSet& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the rule set.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = value; }
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::move(value); }
    inline void SetRuleSetId(const char* value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId.assign(value); }
    inline RuleSet& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}
    inline RuleSet& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}
    inline RuleSet& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the rule set.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }
    inline RuleSet& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}
    inline RuleSet& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}
    inline RuleSet& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastModificationDate;
    bool m_lastModificationDateHasBeenSet = false;

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
