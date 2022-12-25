/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/Rule.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class UpdateRulesetRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API UpdateRulesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleset"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline UpdateRulesetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline UpdateRulesetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ruleset to be updated.</p>
     */
    inline UpdateRulesetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the ruleset.</p>
     */
    inline UpdateRulesetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ruleset.</p>
     */
    inline UpdateRulesetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ruleset.</p>
     */
    inline UpdateRulesetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline UpdateRulesetRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline UpdateRulesetRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline UpdateRulesetRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>A list of rules that are defined with the ruleset. A rule includes one or
     * more checks to be validated on a DataBrew dataset.</p>
     */
    inline UpdateRulesetRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
