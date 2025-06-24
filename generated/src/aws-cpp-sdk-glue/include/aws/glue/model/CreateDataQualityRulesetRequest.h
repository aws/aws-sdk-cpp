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
   * <p>A request to create a data quality ruleset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDataQualityRulesetRequest">AWS
   * API Reference</a></p>
   */
  class CreateDataQualityRulesetRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateDataQualityRulesetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataQualityRuleset"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name for the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDataQualityRulesetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDataQualityRulesetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline const Aws::String& GetRuleset() const { return m_ruleset; }
    inline bool RulesetHasBeenSet() const { return m_rulesetHasBeenSet; }
    template<typename RulesetT = Aws::String>
    void SetRuleset(RulesetT&& value) { m_rulesetHasBeenSet = true; m_ruleset = std::forward<RulesetT>(value); }
    template<typename RulesetT = Aws::String>
    CreateDataQualityRulesetRequest& WithRuleset(RulesetT&& value) { SetRuleset(std::forward<RulesetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags applied to the data quality ruleset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDataQualityRulesetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDataQualityRulesetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A target table associated with the data quality ruleset.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const { return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    template<typename TargetTableT = DataQualityTargetTable>
    void SetTargetTable(TargetTableT&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::forward<TargetTableT>(value); }
    template<typename TargetTableT = DataQualityTargetTable>
    CreateDataQualityRulesetRequest& WithTargetTable(TargetTableT&& value) { SetTargetTable(std::forward<TargetTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration created with the data quality
     * encryption option.</p>
     */
    inline const Aws::String& GetDataQualitySecurityConfiguration() const { return m_dataQualitySecurityConfiguration; }
    inline bool DataQualitySecurityConfigurationHasBeenSet() const { return m_dataQualitySecurityConfigurationHasBeenSet; }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    void SetDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { m_dataQualitySecurityConfigurationHasBeenSet = true; m_dataQualitySecurityConfiguration = std::forward<DataQualitySecurityConfigurationT>(value); }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    CreateDataQualityRulesetRequest& WithDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { SetDataQualitySecurityConfiguration(std::forward<DataQualitySecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for idempotency and is recommended to be set to a random ID (such as a
     * UUID) to avoid creating or starting multiple instances of the same resource.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDataQualityRulesetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
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

    Aws::String m_dataQualitySecurityConfiguration;
    bool m_dataQualitySecurityConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
