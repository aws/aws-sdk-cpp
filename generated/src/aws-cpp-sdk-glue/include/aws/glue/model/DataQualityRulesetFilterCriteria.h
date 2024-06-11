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


    ///@{
    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataQualityRulesetFilterCriteria& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataQualityRulesetFilterCriteria& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataQualityRulesetFilterCriteria& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataQualityRulesetFilterCriteria& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataQualityRulesetFilterCriteria& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataQualityRulesetFilterCriteria& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline DataQualityRulesetFilterCriteria& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline DataQualityRulesetFilterCriteria& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline DataQualityRulesetFilterCriteria& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline DataQualityRulesetFilterCriteria& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedBefore() const{ return m_lastModifiedBefore; }
    inline bool LastModifiedBeforeHasBeenSet() const { return m_lastModifiedBeforeHasBeenSet; }
    inline void SetLastModifiedBefore(const Aws::Utils::DateTime& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = value; }
    inline void SetLastModifiedBefore(Aws::Utils::DateTime&& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = std::move(value); }
    inline DataQualityRulesetFilterCriteria& WithLastModifiedBefore(const Aws::Utils::DateTime& value) { SetLastModifiedBefore(value); return *this;}
    inline DataQualityRulesetFilterCriteria& WithLastModifiedBefore(Aws::Utils::DateTime&& value) { SetLastModifiedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAfter() const{ return m_lastModifiedAfter; }
    inline bool LastModifiedAfterHasBeenSet() const { return m_lastModifiedAfterHasBeenSet; }
    inline void SetLastModifiedAfter(const Aws::Utils::DateTime& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = value; }
    inline void SetLastModifiedAfter(Aws::Utils::DateTime&& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = std::move(value); }
    inline DataQualityRulesetFilterCriteria& WithLastModifiedAfter(const Aws::Utils::DateTime& value) { SetLastModifiedAfter(value); return *this;}
    inline DataQualityRulesetFilterCriteria& WithLastModifiedAfter(Aws::Utils::DateTime&& value) { SetLastModifiedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and database name of the target table.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const{ return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    inline void SetTargetTable(const DataQualityTargetTable& value) { m_targetTableHasBeenSet = true; m_targetTable = value; }
    inline void SetTargetTable(DataQualityTargetTable&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::move(value); }
    inline DataQualityRulesetFilterCriteria& WithTargetTable(const DataQualityTargetTable& value) { SetTargetTable(value); return *this;}
    inline DataQualityRulesetFilterCriteria& WithTargetTable(DataQualityTargetTable&& value) { SetTargetTable(std::move(value)); return *this;}
    ///@}
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
