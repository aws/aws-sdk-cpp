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
   * <p>The criteria used to filter data quality rulesets.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRulesetFilterCriteria">AWS
   * API Reference</a></p>
   */
  class DataQualityRulesetFilterCriteria
  {
  public:
    AWS_GLUE_API DataQualityRulesetFilterCriteria();
    AWS_GLUE_API DataQualityRulesetFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRulesetFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedBefore() const{ return m_lastModifiedBefore; }

    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline bool LastModifiedBeforeHasBeenSet() const { return m_lastModifiedBeforeHasBeenSet; }

    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline void SetLastModifiedBefore(const Aws::Utils::DateTime& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = value; }

    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline void SetLastModifiedBefore(Aws::Utils::DateTime&& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = std::move(value); }

    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithLastModifiedBefore(const Aws::Utils::DateTime& value) { SetLastModifiedBefore(value); return *this;}

    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithLastModifiedBefore(Aws::Utils::DateTime&& value) { SetLastModifiedBefore(std::move(value)); return *this;}


    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAfter() const{ return m_lastModifiedAfter; }

    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline bool LastModifiedAfterHasBeenSet() const { return m_lastModifiedAfterHasBeenSet; }

    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline void SetLastModifiedAfter(const Aws::Utils::DateTime& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = value; }

    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline void SetLastModifiedAfter(Aws::Utils::DateTime&& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = std::move(value); }

    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithLastModifiedAfter(const Aws::Utils::DateTime& value) { SetLastModifiedAfter(value); return *this;}

    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithLastModifiedAfter(Aws::Utils::DateTime&& value) { SetLastModifiedAfter(std::move(value)); return *this;}


    /**
     * <p>The name and database name of the target table.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const{ return m_targetTable; }

    /**
     * <p>The name and database name of the target table.</p>
     */
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }

    /**
     * <p>The name and database name of the target table.</p>
     */
    inline void SetTargetTable(const DataQualityTargetTable& value) { m_targetTableHasBeenSet = true; m_targetTable = value; }

    /**
     * <p>The name and database name of the target table.</p>
     */
    inline void SetTargetTable(DataQualityTargetTable&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::move(value); }

    /**
     * <p>The name and database name of the target table.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithTargetTable(const DataQualityTargetTable& value) { SetTargetTable(value); return *this;}

    /**
     * <p>The name and database name of the target table.</p>
     */
    inline DataQualityRulesetFilterCriteria& WithTargetTable(DataQualityTargetTable&& value) { SetTargetTable(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedBefore;
    bool m_lastModifiedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAfter;
    bool m_lastModifiedAfterHasBeenSet = false;

    DataQualityTargetTable m_targetTable;
    bool m_targetTableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
