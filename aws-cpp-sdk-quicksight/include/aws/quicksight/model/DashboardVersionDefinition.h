/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnalysisDefaults.h>
#include <aws/quicksight/model/DataSetIdentifierDeclaration.h>
#include <aws/quicksight/model/SheetDefinition.h>
#include <aws/quicksight/model/CalculatedField.h>
#include <aws/quicksight/model/ParameterDeclaration.h>
#include <aws/quicksight/model/FilterGroup.h>
#include <aws/quicksight/model/ColumnConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The contents of a dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardVersionDefinition">AWS
   * API Reference</a></p>
   */
  class DashboardVersionDefinition
  {
  public:
    AWS_QUICKSIGHT_API DashboardVersionDefinition();
    AWS_QUICKSIGHT_API DashboardVersionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVersionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline const Aws::Vector<DataSetIdentifierDeclaration>& GetDataSetIdentifierDeclarations() const{ return m_dataSetIdentifierDeclarations; }

    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline bool DataSetIdentifierDeclarationsHasBeenSet() const { return m_dataSetIdentifierDeclarationsHasBeenSet; }

    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline void SetDataSetIdentifierDeclarations(const Aws::Vector<DataSetIdentifierDeclaration>& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations = value; }

    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline void SetDataSetIdentifierDeclarations(Aws::Vector<DataSetIdentifierDeclaration>&& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations = std::move(value); }

    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline DashboardVersionDefinition& WithDataSetIdentifierDeclarations(const Aws::Vector<DataSetIdentifierDeclaration>& value) { SetDataSetIdentifierDeclarations(value); return *this;}

    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline DashboardVersionDefinition& WithDataSetIdentifierDeclarations(Aws::Vector<DataSetIdentifierDeclaration>&& value) { SetDataSetIdentifierDeclarations(std::move(value)); return *this;}

    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline DashboardVersionDefinition& AddDataSetIdentifierDeclarations(const DataSetIdentifierDeclaration& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations.push_back(value); return *this; }

    /**
     * <p>An array of dataset identifier declarations. With this mapping,you can use
     * dataset identifiers instead of dataset Amazon Resource Names (ARNs) throughout
     * the dashboard's sub-structures.</p>
     */
    inline DashboardVersionDefinition& AddDataSetIdentifierDeclarations(DataSetIdentifierDeclaration&& value) { m_dataSetIdentifierDeclarationsHasBeenSet = true; m_dataSetIdentifierDeclarations.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline const Aws::Vector<SheetDefinition>& GetSheets() const{ return m_sheets; }

    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }

    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline void SetSheets(const Aws::Vector<SheetDefinition>& value) { m_sheetsHasBeenSet = true; m_sheets = value; }

    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline void SetSheets(Aws::Vector<SheetDefinition>&& value) { m_sheetsHasBeenSet = true; m_sheets = std::move(value); }

    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline DashboardVersionDefinition& WithSheets(const Aws::Vector<SheetDefinition>& value) { SetSheets(value); return *this;}

    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline DashboardVersionDefinition& WithSheets(Aws::Vector<SheetDefinition>&& value) { SetSheets(std::move(value)); return *this;}

    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline DashboardVersionDefinition& AddSheets(const SheetDefinition& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(value); return *this; }

    /**
     * <p>An array of sheet definitions for a dashboard.</p>
     */
    inline DashboardVersionDefinition& AddSheets(SheetDefinition&& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline const Aws::Vector<CalculatedField>& GetCalculatedFields() const{ return m_calculatedFields; }

    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline bool CalculatedFieldsHasBeenSet() const { return m_calculatedFieldsHasBeenSet; }

    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline void SetCalculatedFields(const Aws::Vector<CalculatedField>& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = value; }

    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline void SetCalculatedFields(Aws::Vector<CalculatedField>&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = std::move(value); }

    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline DashboardVersionDefinition& WithCalculatedFields(const Aws::Vector<CalculatedField>& value) { SetCalculatedFields(value); return *this;}

    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline DashboardVersionDefinition& WithCalculatedFields(Aws::Vector<CalculatedField>&& value) { SetCalculatedFields(std::move(value)); return *this;}

    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline DashboardVersionDefinition& AddCalculatedFields(const CalculatedField& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(value); return *this; }

    /**
     * <p>An array of calculated field definitions for the dashboard.</p>
     */
    inline DashboardVersionDefinition& AddCalculatedFields(CalculatedField&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameterDeclarations() const{ return m_parameterDeclarations; }

    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool ParameterDeclarationsHasBeenSet() const { return m_parameterDeclarationsHasBeenSet; }

    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = value; }

    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations = std::move(value); }

    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& WithParameterDeclarations(const Aws::Vector<ParameterDeclaration>& value) { SetParameterDeclarations(value); return *this;}

    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& WithParameterDeclarations(Aws::Vector<ParameterDeclaration>&& value) { SetParameterDeclarations(std::move(value)); return *this;}

    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& AddParameterDeclarations(const ParameterDeclaration& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(value); return *this; }

    /**
     * <p>The parameter declarations for a dashboard. Parameters are named variables
     * that can transfer a value for use by an action or an object.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
     * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& AddParameterDeclarations(ParameterDeclaration&& value) { m_parameterDeclarationsHasBeenSet = true; m_parameterDeclarations.push_back(std::move(value)); return *this; }


    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<FilterGroup>& GetFilterGroups() const{ return m_filterGroups; }

    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }

    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFilterGroups(const Aws::Vector<FilterGroup>& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = value; }

    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFilterGroups(Aws::Vector<FilterGroup>&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::move(value); }

    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& WithFilterGroups(const Aws::Vector<FilterGroup>& value) { SetFilterGroups(value); return *this;}

    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& WithFilterGroups(Aws::Vector<FilterGroup>&& value) { SetFilterGroups(std::move(value)); return *this;}

    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& AddFilterGroups(const FilterGroup& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(value); return *this; }

    /**
     * <p>The filter definitions for a dashboard.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/adding-a-filter.html">Filtering
     * Data in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline DashboardVersionDefinition& AddFilterGroups(FilterGroup&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline const Aws::Vector<ColumnConfiguration>& GetColumnConfigurations() const{ return m_columnConfigurations; }

    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline bool ColumnConfigurationsHasBeenSet() const { return m_columnConfigurationsHasBeenSet; }

    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline void SetColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = value; }

    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline void SetColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations = std::move(value); }

    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline DashboardVersionDefinition& WithColumnConfigurations(const Aws::Vector<ColumnConfiguration>& value) { SetColumnConfigurations(value); return *this;}

    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline DashboardVersionDefinition& WithColumnConfigurations(Aws::Vector<ColumnConfiguration>&& value) { SetColumnConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline DashboardVersionDefinition& AddColumnConfigurations(const ColumnConfiguration& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of dashboard-level column configurations. Column configurations are
     * used to set the default formatting for a column that is used throughout a
     * dashboard. </p>
     */
    inline DashboardVersionDefinition& AddColumnConfigurations(ColumnConfiguration&& value) { m_columnConfigurationsHasBeenSet = true; m_columnConfigurations.push_back(std::move(value)); return *this; }


    
    inline const AnalysisDefaults& GetAnalysisDefaults() const{ return m_analysisDefaults; }

    
    inline bool AnalysisDefaultsHasBeenSet() const { return m_analysisDefaultsHasBeenSet; }

    
    inline void SetAnalysisDefaults(const AnalysisDefaults& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = value; }

    
    inline void SetAnalysisDefaults(AnalysisDefaults&& value) { m_analysisDefaultsHasBeenSet = true; m_analysisDefaults = std::move(value); }

    
    inline DashboardVersionDefinition& WithAnalysisDefaults(const AnalysisDefaults& value) { SetAnalysisDefaults(value); return *this;}

    
    inline DashboardVersionDefinition& WithAnalysisDefaults(AnalysisDefaults&& value) { SetAnalysisDefaults(std::move(value)); return *this;}

  private:

    Aws::Vector<DataSetIdentifierDeclaration> m_dataSetIdentifierDeclarations;
    bool m_dataSetIdentifierDeclarationsHasBeenSet = false;

    Aws::Vector<SheetDefinition> m_sheets;
    bool m_sheetsHasBeenSet = false;

    Aws::Vector<CalculatedField> m_calculatedFields;
    bool m_calculatedFieldsHasBeenSet = false;

    Aws::Vector<ParameterDeclaration> m_parameterDeclarations;
    bool m_parameterDeclarationsHasBeenSet = false;

    Aws::Vector<FilterGroup> m_filterGroups;
    bool m_filterGroupsHasBeenSet = false;

    Aws::Vector<ColumnConfiguration> m_columnConfigurations;
    bool m_columnConfigurationsHasBeenSet = false;

    AnalysisDefaults m_analysisDefaults;
    bool m_analysisDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
