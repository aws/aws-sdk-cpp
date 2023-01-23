/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/DataQualityTargetTable.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateDataQualityRulesetRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateDataQualityRulesetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataQualityRuleset"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateDataQualityRulesetRequest& WithRuleset(const Aws::String& value) { SetRuleset(value); return *this;}

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline CreateDataQualityRulesetRequest& WithRuleset(Aws::String&& value) { SetRuleset(std::move(value)); return *this;}

    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline CreateDataQualityRulesetRequest& WithRuleset(const char* value) { SetRuleset(value); return *this;}


    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A target table associated with the data quality ruleset.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const{ return m_targetTable; }

    /**
     * <p>A target table associated with the data quality ruleset.</p>
     */
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }

    /**
     * <p>A target table associated with the data quality ruleset.</p>
     */
    inline void SetTargetTable(const DataQualityTargetTable& value) { m_targetTableHasBeenSet = true; m_targetTable = value; }

    /**
     * <p>A target table associated with the data quality ruleset.</p>
     */
    inline void SetTargetTable(DataQualityTargetTable&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::move(value); }

    /**
     * <p>A target table associated with the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithTargetTable(const DataQualityTargetTable& value) { SetTargetTable(value); return *this;}

    /**
     * <p>A target table associated with the data quality ruleset.</p>
     */
    inline CreateDataQualityRulesetRequest& WithTargetTable(DataQualityTargetTable&& value) { SetTargetTable(std::move(value)); return *this;}


    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline CreateDataQualityRulesetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline CreateDataQualityRulesetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline CreateDataQualityRulesetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ruleset;
    bool m_rulesetHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DataQualityTargetTable m_targetTable;
    bool m_targetTableHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
