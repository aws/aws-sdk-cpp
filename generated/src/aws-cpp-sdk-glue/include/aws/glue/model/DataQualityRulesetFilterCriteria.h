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
    AWS_GLUE_API DataQualityRulesetFilterCriteria() = default;
    AWS_GLUE_API DataQualityRulesetFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRulesetFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the ruleset filter criteria.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataQualityRulesetFilterCriteria& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ruleset filter criteria.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataQualityRulesetFilterCriteria& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets created before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    DataQualityRulesetFilterCriteria& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets created after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    DataQualityRulesetFilterCriteria& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets last modified before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedBefore() const { return m_lastModifiedBefore; }
    inline bool LastModifiedBeforeHasBeenSet() const { return m_lastModifiedBeforeHasBeenSet; }
    template<typename LastModifiedBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedBefore(LastModifiedBeforeT&& value) { m_lastModifiedBeforeHasBeenSet = true; m_lastModifiedBefore = std::forward<LastModifiedBeforeT>(value); }
    template<typename LastModifiedBeforeT = Aws::Utils::DateTime>
    DataQualityRulesetFilterCriteria& WithLastModifiedBefore(LastModifiedBeforeT&& value) { SetLastModifiedBefore(std::forward<LastModifiedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on rulesets last modified after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAfter() const { return m_lastModifiedAfter; }
    inline bool LastModifiedAfterHasBeenSet() const { return m_lastModifiedAfterHasBeenSet; }
    template<typename LastModifiedAfterT = Aws::Utils::DateTime>
    void SetLastModifiedAfter(LastModifiedAfterT&& value) { m_lastModifiedAfterHasBeenSet = true; m_lastModifiedAfter = std::forward<LastModifiedAfterT>(value); }
    template<typename LastModifiedAfterT = Aws::Utils::DateTime>
    DataQualityRulesetFilterCriteria& WithLastModifiedAfter(LastModifiedAfterT&& value) { SetLastModifiedAfter(std::forward<LastModifiedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and database name of the target table.</p>
     */
    inline const DataQualityTargetTable& GetTargetTable() const { return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    template<typename TargetTableT = DataQualityTargetTable>
    void SetTargetTable(TargetTableT&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::forward<TargetTableT>(value); }
    template<typename TargetTableT = DataQualityTargetTable>
    DataQualityRulesetFilterCriteria& WithTargetTable(TargetTableT&& value) { SetTargetTable(std::forward<TargetTableT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedBefore{};
    bool m_lastModifiedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAfter{};
    bool m_lastModifiedAfterHasBeenSet = false;

    DataQualityTargetTable m_targetTable;
    bool m_targetTableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
