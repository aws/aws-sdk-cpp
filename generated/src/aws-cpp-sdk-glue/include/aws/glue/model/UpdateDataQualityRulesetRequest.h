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


    ///@{
    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDataQualityRulesetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDataQualityRulesetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDataQualityRulesetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateDataQualityRulesetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDataQualityRulesetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDataQualityRulesetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline const Aws::String& GetRuleset() const{ return m_ruleset; }
    inline bool RulesetHasBeenSet() const { return m_rulesetHasBeenSet; }
    inline void SetRuleset(const Aws::String& value) { m_rulesetHasBeenSet = true; m_ruleset = value; }
    inline void SetRuleset(Aws::String&& value) { m_rulesetHasBeenSet = true; m_ruleset = std::move(value); }
    inline void SetRuleset(const char* value) { m_rulesetHasBeenSet = true; m_ruleset.assign(value); }
    inline UpdateDataQualityRulesetRequest& WithRuleset(const Aws::String& value) { SetRuleset(value); return *this;}
    inline UpdateDataQualityRulesetRequest& WithRuleset(Aws::String&& value) { SetRuleset(std::move(value)); return *this;}
    inline UpdateDataQualityRulesetRequest& WithRuleset(const char* value) { SetRuleset(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ruleset;
    bool m_rulesetHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
