/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/TableReference.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisMethod.h>
#include <aws/cleanrooms/model/ConfiguredTableAnalysisRuleType.h>
#include <aws/cleanrooms/model/SelectedAnalysisMethod.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>A table that has been configured for use in a collaboration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTable">AWS
   * API Reference</a></p>
   */
  class ConfiguredTable
  {
  public:
    AWS_CLEANROOMS_API ConfiguredTable() = default;
    AWS_CLEANROOMS_API ConfiguredTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfiguredTable& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ConfiguredTable& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the configured table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfiguredTable& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the configured table.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfiguredTable& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table that this configured table represents.</p>
     */
    inline const TableReference& GetTableReference() const { return m_tableReference; }
    inline bool TableReferenceHasBeenSet() const { return m_tableReferenceHasBeenSet; }
    template<typename TableReferenceT = TableReference>
    void SetTableReference(TableReferenceT&& value) { m_tableReferenceHasBeenSet = true; m_tableReference = std::forward<TableReferenceT>(value); }
    template<typename TableReferenceT = TableReference>
    ConfiguredTable& WithTableReference(TableReferenceT&& value) { SetTableReference(std::forward<TableReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ConfiguredTable& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ConfiguredTable& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of analysis rules associated with this configured table. Currently,
     * only one analysis rule may be associated with a configured table.</p>
     */
    inline const Aws::Vector<ConfiguredTableAnalysisRuleType>& GetAnalysisRuleTypes() const { return m_analysisRuleTypes; }
    inline bool AnalysisRuleTypesHasBeenSet() const { return m_analysisRuleTypesHasBeenSet; }
    template<typename AnalysisRuleTypesT = Aws::Vector<ConfiguredTableAnalysisRuleType>>
    void SetAnalysisRuleTypes(AnalysisRuleTypesT&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = std::forward<AnalysisRuleTypesT>(value); }
    template<typename AnalysisRuleTypesT = Aws::Vector<ConfiguredTableAnalysisRuleType>>
    ConfiguredTable& WithAnalysisRuleTypes(AnalysisRuleTypesT&& value) { SetAnalysisRuleTypes(std::forward<AnalysisRuleTypesT>(value)); return *this;}
    inline ConfiguredTable& AddAnalysisRuleTypes(ConfiguredTableAnalysisRuleType value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis method for the configured table.</p> <p>
     * <code>DIRECT_QUERY</code> allows SQL queries to be run directly on this
     * table.</p> <p> <code>DIRECT_JOB</code> allows PySpark jobs to be run directly on
     * this table.</p> <p> <code>MULTIPLE</code> allows both SQL queries and PySpark
     * jobs to be run directly on this table.</p>
     */
    inline AnalysisMethod GetAnalysisMethod() const { return m_analysisMethod; }
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }
    inline void SetAnalysisMethod(AnalysisMethod value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }
    inline ConfiguredTable& WithAnalysisMethod(AnalysisMethod value) { SetAnalysisMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The columns within the underlying Glue table that can be utilized within
     * collaborations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedColumns() const { return m_allowedColumns; }
    inline bool AllowedColumnsHasBeenSet() const { return m_allowedColumnsHasBeenSet; }
    template<typename AllowedColumnsT = Aws::Vector<Aws::String>>
    void SetAllowedColumns(AllowedColumnsT&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = std::forward<AllowedColumnsT>(value); }
    template<typename AllowedColumnsT = Aws::Vector<Aws::String>>
    ConfiguredTable& WithAllowedColumns(AllowedColumnsT&& value) { SetAllowedColumns(std::forward<AllowedColumnsT>(value)); return *this;}
    template<typename AllowedColumnsT = Aws::String>
    ConfiguredTable& AddAllowedColumns(AllowedColumnsT&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.emplace_back(std::forward<AllowedColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The selected analysis methods for the configured table.</p>
     */
    inline const Aws::Vector<SelectedAnalysisMethod>& GetSelectedAnalysisMethods() const { return m_selectedAnalysisMethods; }
    inline bool SelectedAnalysisMethodsHasBeenSet() const { return m_selectedAnalysisMethodsHasBeenSet; }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    void SetSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods = std::forward<SelectedAnalysisMethodsT>(value); }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    ConfiguredTable& WithSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { SetSelectedAnalysisMethods(std::forward<SelectedAnalysisMethodsT>(value)); return *this;}
    inline ConfiguredTable& AddSelectedAnalysisMethods(SelectedAnalysisMethod value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TableReference m_tableReference;
    bool m_tableReferenceHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::Vector<ConfiguredTableAnalysisRuleType> m_analysisRuleTypes;
    bool m_analysisRuleTypesHasBeenSet = false;

    AnalysisMethod m_analysisMethod{AnalysisMethod::NOT_SET};
    bool m_analysisMethodHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedColumns;
    bool m_allowedColumnsHasBeenSet = false;

    Aws::Vector<SelectedAnalysisMethod> m_selectedAnalysisMethods;
    bool m_selectedAnalysisMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
