/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateDataQualityRulesetRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateDataQualityRulesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataQualityRuleset"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline const Aws::String& GetUpdatedName() const{ return m_updatedName; }

    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline bool UpdatedNameHasBeenSet() const { return m_updatedNameHasBeenSet; }

    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline void SetUpdatedName(const Aws::String& value) { m_updatedNameHasBeenSet = true; m_updatedName = value; }

    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline void SetUpdatedName(Aws::String&& value) { m_updatedNameHasBeenSet = true; m_updatedName = std::move(value); }

    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline void SetUpdatedName(const char* value) { m_updatedNameHasBeenSet = true; m_updatedName.assign(value); }

    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithUpdatedName(const Aws::String& value) { SetUpdatedName(value); return *this;}

    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithUpdatedName(Aws::String&& value) { SetUpdatedName(std::move(value)); return *this;}

    /**
     * <p>The new name of the ruleset, if you are renaming it.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithUpdatedName(const char* value) { SetUpdatedName(value); return *this;}


    /**
     * <p>A description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the ruleset.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the ruleset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the ruleset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the ruleset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the ruleset.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the ruleset.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the ruleset.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline const Aws::String& GetRuleset() const{ return m_ruleset; }

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline bool RulesetHasBeenSet() const { return m_rulesetHasBeenSet; }

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline void SetRuleset(const Aws::String& value) { m_rulesetHasBeenSet = true; m_ruleset = value; }

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline void SetRuleset(Aws::String&& value) { m_rulesetHasBeenSet = true; m_ruleset = std::move(value); }

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline void SetRuleset(const char* value) { m_rulesetHasBeenSet = true; m_ruleset.assign(value); }

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithRuleset(const Aws::String& value) { SetRuleset(value); return *this;}

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithRuleset(Aws::String&& value) { SetRuleset(std::move(value)); return *this;}

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline UpdateDataQualityRulesetRequest& WithRuleset(const char* value) { SetRuleset(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_updatedName;
    bool m_updatedNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ruleset;
    bool m_rulesetHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
