/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/DataQualityTargetTable.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes a data quality ruleset returned by
   * <code>GetDataQualityRuleset</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRulesetListDetails">AWS
   * API Reference</a></p>
   */
  class DataQualityRulesetListDetails
  {
  public:
    AWS_GLUE_API DataQualityRulesetListDetails() = default;
    AWS_GLUE_API DataQualityRulesetListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRulesetListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataQualityRulesetListDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    DataQualityRulesetListDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the data quality ruleset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    DataQualityRulesetListDetails& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the data quality ruleset was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    DataQualityRulesetListDetails& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing an Glue table.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const { return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    template<typename TargetTableT = DataQualityTargetTable>
    void SetTargetTable(TargetTableT&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::forward<TargetTableT>(value); }
    template<typename TargetTableT = DataQualityTargetTable>
    DataQualityRulesetListDetails& WithTargetTable(TargetTableT&& value) { SetTargetTable(std::forward<TargetTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a ruleset was created from a recommendation run, this run ID is
     * generated to link the two together.</p>
     */
    inline const Aws::String& GetRecommendationRunId() const { return m_recommendationRunId; }
    inline bool RecommendationRunIdHasBeenSet() const { return m_recommendationRunIdHasBeenSet; }
    template<typename RecommendationRunIdT = Aws::String>
    void SetRecommendationRunId(RecommendationRunIdT&& value) { m_recommendationRunIdHasBeenSet = true; m_recommendationRunId = std::forward<RecommendationRunIdT>(value); }
    template<typename RecommendationRunIdT = Aws::String>
    DataQualityRulesetListDetails& WithRecommendationRunId(RecommendationRunIdT&& value) { SetRecommendationRunId(std::forward<RecommendationRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules in the ruleset.</p>
     */
    inline int GetRuleCount() const { return m_ruleCount; }
    inline bool RuleCountHasBeenSet() const { return m_ruleCountHasBeenSet; }
    inline void SetRuleCount(int value) { m_ruleCountHasBeenSet = true; m_ruleCount = value; }
    inline DataQualityRulesetListDetails& WithRuleCount(int value) { SetRuleCount(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    DataQualityTargetTable m_targetTable;
    bool m_targetTableHasBeenSet = false;

    Aws::String m_recommendationRunId;
    bool m_recommendationRunIdHasBeenSet = false;

    int m_ruleCount{0};
    bool m_ruleCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
