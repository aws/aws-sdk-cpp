/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataQualityTargetTable.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  /**
   * <p>Returns the data quality ruleset response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataQualityRulesetResponse">AWS
   * API Reference</a></p>
   */
  class GetDataQualityRulesetResult
  {
  public:
    AWS_GLUE_API GetDataQualityRulesetResult() = default;
    AWS_GLUE_API GetDataQualityRulesetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityRulesetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the ruleset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetDataQualityRulesetResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the ruleset.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDataQualityRulesetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Data Quality Definition Language (DQDL) ruleset. For more information, see
     * the Glue developer guide.</p>
     */
    inline const Aws::String& GetRuleset() const { return m_ruleset; }
    template<typename RulesetT = Aws::String>
    void SetRuleset(RulesetT&& value) { m_rulesetHasBeenSet = true; m_ruleset = std::forward<RulesetT>(value); }
    template<typename RulesetT = Aws::String>
    GetDataQualityRulesetResult& WithRuleset(RulesetT&& value) { SetRuleset(std::forward<RulesetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and database name of the target table.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const { return m_targetTable; }
    template<typename TargetTableT = DataQualityTargetTable>
    void SetTargetTable(TargetTableT&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::forward<TargetTableT>(value); }
    template<typename TargetTableT = DataQualityTargetTable>
    GetDataQualityRulesetResult& WithTargetTable(TargetTableT&& value) { SetTargetTable(std::forward<TargetTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The time and date that this data quality ruleset was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    GetDataQualityRulesetResult& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The last point in time when this data quality ruleset was
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    GetDataQualityRulesetResult& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a ruleset was created from a recommendation run, this run ID is
     * generated to link the two together.</p>
     */
    inline const Aws::String& GetRecommendationRunId() const { return m_recommendationRunId; }
    template<typename RecommendationRunIdT = Aws::String>
    void SetRecommendationRunId(RecommendationRunIdT&& value) { m_recommendationRunIdHasBeenSet = true; m_recommendationRunId = std::forward<RecommendationRunIdT>(value); }
    template<typename RecommendationRunIdT = Aws::String>
    GetDataQualityRulesetResult& WithRecommendationRunId(RecommendationRunIdT&& value) { SetRecommendationRunId(std::forward<RecommendationRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration created with the data quality
     * encryption option.</p>
     */
    inline const Aws::String& GetDataQualitySecurityConfiguration() const { return m_dataQualitySecurityConfiguration; }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    void SetDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { m_dataQualitySecurityConfigurationHasBeenSet = true; m_dataQualitySecurityConfiguration = std::forward<DataQualitySecurityConfigurationT>(value); }
    template<typename DataQualitySecurityConfigurationT = Aws::String>
    GetDataQualityRulesetResult& WithDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) { SetDataQualitySecurityConfiguration(std::forward<DataQualitySecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataQualityRulesetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ruleset;
    bool m_rulesetHasBeenSet = false;

    DataQualityTargetTable m_targetTable;
    bool m_targetTableHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::String m_recommendationRunId;
    bool m_recommendationRunIdHasBeenSet = false;

    Aws::String m_dataQualitySecurityConfiguration;
    bool m_dataQualitySecurityConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
