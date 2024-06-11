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
    AWS_GLUE_API DataQualityRulesetListDetails();
    AWS_GLUE_API DataQualityRulesetListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRulesetListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality ruleset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataQualityRulesetListDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataQualityRulesetListDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataQualityRulesetListDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data quality ruleset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataQualityRulesetListDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataQualityRulesetListDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataQualityRulesetListDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the data quality ruleset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }
    inline DataQualityRulesetListDetails& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}
    inline DataQualityRulesetListDetails& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the data quality ruleset was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }
    inline DataQualityRulesetListDetails& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}
    inline DataQualityRulesetListDetails& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing an Glue table.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const{ return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    inline void SetTargetTable(const DataQualityTargetTable& value) { m_targetTableHasBeenSet = true; m_targetTable = value; }
    inline void SetTargetTable(DataQualityTargetTable&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::move(value); }
    inline DataQualityRulesetListDetails& WithTargetTable(const DataQualityTargetTable& value) { SetTargetTable(value); return *this;}
    inline DataQualityRulesetListDetails& WithTargetTable(DataQualityTargetTable&& value) { SetTargetTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a ruleset was created from a recommendation run, this run ID is
     * generated to link the two together.</p>
     */
    inline const Aws::String& GetRecommendationRunId() const{ return m_recommendationRunId; }
    inline bool RecommendationRunIdHasBeenSet() const { return m_recommendationRunIdHasBeenSet; }
    inline void SetRecommendationRunId(const Aws::String& value) { m_recommendationRunIdHasBeenSet = true; m_recommendationRunId = value; }
    inline void SetRecommendationRunId(Aws::String&& value) { m_recommendationRunIdHasBeenSet = true; m_recommendationRunId = std::move(value); }
    inline void SetRecommendationRunId(const char* value) { m_recommendationRunIdHasBeenSet = true; m_recommendationRunId.assign(value); }
    inline DataQualityRulesetListDetails& WithRecommendationRunId(const Aws::String& value) { SetRecommendationRunId(value); return *this;}
    inline DataQualityRulesetListDetails& WithRecommendationRunId(Aws::String&& value) { SetRecommendationRunId(std::move(value)); return *this;}
    inline DataQualityRulesetListDetails& WithRecommendationRunId(const char* value) { SetRecommendationRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules in the ruleset.</p>
     */
    inline int GetRuleCount() const{ return m_ruleCount; }
    inline bool RuleCountHasBeenSet() const { return m_ruleCountHasBeenSet; }
    inline void SetRuleCount(int value) { m_ruleCountHasBeenSet = true; m_ruleCount = value; }
    inline DataQualityRulesetListDetails& WithRuleCount(int value) { SetRuleCount(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet = false;

    DataQualityTargetTable m_targetTable;
    bool m_targetTableHasBeenSet = false;

    Aws::String m_recommendationRunId;
    bool m_recommendationRunIdHasBeenSet = false;

    int m_ruleCount;
    bool m_ruleCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
