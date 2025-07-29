/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/TableReference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisMethod.h>
#include <aws/cleanrooms/model/SelectedAnalysisMethod.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class UpdateConfiguredTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API UpdateConfiguredTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfiguredTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the configured table to update. Currently accepts the
     * configured table ID.</p>
     */
    inline const Aws::String& GetConfiguredTableIdentifier() const { return m_configuredTableIdentifier; }
    inline bool ConfiguredTableIdentifierHasBeenSet() const { return m_configuredTableIdentifierHasBeenSet; }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    void SetConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { m_configuredTableIdentifierHasBeenSet = true; m_configuredTableIdentifier = std::forward<ConfiguredTableIdentifierT>(value); }
    template<typename ConfiguredTableIdentifierT = Aws::String>
    UpdateConfiguredTableRequest& WithConfiguredTableIdentifier(ConfiguredTableIdentifierT&& value) { SetConfiguredTableIdentifier(std::forward<ConfiguredTableIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the configured table.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConfiguredTableRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the configured table.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConfiguredTableRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TableReference& GetTableReference() const { return m_tableReference; }
    inline bool TableReferenceHasBeenSet() const { return m_tableReferenceHasBeenSet; }
    template<typename TableReferenceT = TableReference>
    void SetTableReference(TableReferenceT&& value) { m_tableReferenceHasBeenSet = true; m_tableReference = std::forward<TableReferenceT>(value); }
    template<typename TableReferenceT = TableReference>
    UpdateConfiguredTableRequest& WithTableReference(TableReferenceT&& value) { SetTableReference(std::forward<TableReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedColumns() const { return m_allowedColumns; }
    inline bool AllowedColumnsHasBeenSet() const { return m_allowedColumnsHasBeenSet; }
    template<typename AllowedColumnsT = Aws::Vector<Aws::String>>
    void SetAllowedColumns(AllowedColumnsT&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = std::forward<AllowedColumnsT>(value); }
    template<typename AllowedColumnsT = Aws::Vector<Aws::String>>
    UpdateConfiguredTableRequest& WithAllowedColumns(AllowedColumnsT&& value) { SetAllowedColumns(std::forward<AllowedColumnsT>(value)); return *this;}
    template<typename AllowedColumnsT = Aws::String>
    UpdateConfiguredTableRequest& AddAllowedColumns(AllowedColumnsT&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.emplace_back(std::forward<AllowedColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The analysis method for the configured table.</p> <p>
     * <code>DIRECT_QUERY</code> allows SQL queries to be run directly on this
     * table.</p> <p> <code>DIRECT_JOB</code> allows PySpark jobs to be run directly on
     * this table.</p> <p> <code>MULTIPLE</code> allows both SQL queries and PySpark
     * jobs to be run directly on this table.</p>
     */
    inline AnalysisMethod GetAnalysisMethod() const { return m_analysisMethod; }
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }
    inline void SetAnalysisMethod(AnalysisMethod value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }
    inline UpdateConfiguredTableRequest& WithAnalysisMethod(AnalysisMethod value) { SetAnalysisMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The selected analysis methods for the table configuration update.</p>
     */
    inline const Aws::Vector<SelectedAnalysisMethod>& GetSelectedAnalysisMethods() const { return m_selectedAnalysisMethods; }
    inline bool SelectedAnalysisMethodsHasBeenSet() const { return m_selectedAnalysisMethodsHasBeenSet; }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    void SetSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods = std::forward<SelectedAnalysisMethodsT>(value); }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    UpdateConfiguredTableRequest& WithSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { SetSelectedAnalysisMethods(std::forward<SelectedAnalysisMethodsT>(value)); return *this;}
    inline UpdateConfiguredTableRequest& AddSelectedAnalysisMethods(SelectedAnalysisMethod value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_configuredTableIdentifier;
    bool m_configuredTableIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TableReference m_tableReference;
    bool m_tableReferenceHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedColumns;
    bool m_allowedColumnsHasBeenSet = false;

    AnalysisMethod m_analysisMethod{AnalysisMethod::NOT_SET};
    bool m_analysisMethodHasBeenSet = false;

    Aws::Vector<SelectedAnalysisMethod> m_selectedAnalysisMethods;
    bool m_selectedAnalysisMethodsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
