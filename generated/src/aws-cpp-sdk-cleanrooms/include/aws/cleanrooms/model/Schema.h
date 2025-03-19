/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/SchemaType.h>
#include <aws/cleanrooms/model/SchemaTypeProperties.h>
#include <aws/cleanrooms/model/Column.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
#include <aws/cleanrooms/model/SelectedAnalysisMethod.h>
#include <aws/cleanrooms/model/SchemaStatusDetail.h>
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
   * <p>A schema is a relation within a collaboration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/Schema">AWS
   * API Reference</a></p>
   */
  class Schema
  {
  public:
    AWS_CLEANROOMS_API Schema() = default;
    AWS_CLEANROOMS_API Schema(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Schema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The columns for the relation that this schema represents.</p>
     */
    inline const Aws::Vector<Column>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<Column>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<Column>>
    Schema& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = Column>
    Schema& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The partition keys for the dataset underlying this schema.</p>
     */
    inline const Aws::Vector<Column>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Vector<Column>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<Column>>
    Schema& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = Column>
    Schema& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis rule types that are associated with the schema. Currently, only
     * one entry is present.</p>
     */
    inline const Aws::Vector<AnalysisRuleType>& GetAnalysisRuleTypes() const { return m_analysisRuleTypes; }
    inline bool AnalysisRuleTypesHasBeenSet() const { return m_analysisRuleTypesHasBeenSet; }
    template<typename AnalysisRuleTypesT = Aws::Vector<AnalysisRuleType>>
    void SetAnalysisRuleTypes(AnalysisRuleTypesT&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = std::forward<AnalysisRuleTypesT>(value); }
    template<typename AnalysisRuleTypesT = Aws::Vector<AnalysisRuleType>>
    Schema& WithAnalysisRuleTypes(AnalysisRuleTypesT&& value) { SetAnalysisRuleTypes(std::forward<AnalysisRuleTypesT>(value)); return *this;}
    inline Schema& AddAnalysisRuleTypes(AnalysisRuleType value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis method for the schema. </p> <p> <code>DIRECT_QUERY</code> allows
     * SQL queries to be run directly on this table.</p> <p> <code>DIRECT_JOB</code>
     * allows PySpark jobs to be run directly on this table.</p> <p>
     * <code>MULTIPLE</code> allows both SQL queries and PySpark jobs to be run
     * directly on this table.</p>
     */
    inline AnalysisMethod GetAnalysisMethod() const { return m_analysisMethod; }
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }
    inline void SetAnalysisMethod(AnalysisMethod value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }
    inline Schema& WithAnalysisMethod(AnalysisMethod value) { SetAnalysisMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The selected analysis methods for the schema.</p>
     */
    inline const Aws::Vector<SelectedAnalysisMethod>& GetSelectedAnalysisMethods() const { return m_selectedAnalysisMethods; }
    inline bool SelectedAnalysisMethodsHasBeenSet() const { return m_selectedAnalysisMethodsHasBeenSet; }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    void SetSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods = std::forward<SelectedAnalysisMethodsT>(value); }
    template<typename SelectedAnalysisMethodsT = Aws::Vector<SelectedAnalysisMethod>>
    Schema& WithSelectedAnalysisMethods(SelectedAnalysisMethodsT&& value) { SetSelectedAnalysisMethods(std::forward<SelectedAnalysisMethodsT>(value)); return *this;}
    inline Schema& AddSelectedAnalysisMethods(SelectedAnalysisMethod value) { m_selectedAnalysisMethodsHasBeenSet = true; m_selectedAnalysisMethods.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    Schema& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the schema. The schema relation is referred to by this name when
     * queried by a protected query.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Schema& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    template<typename CollaborationIdT = Aws::String>
    void SetCollaborationId(CollaborationIdT&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::forward<CollaborationIdT>(value); }
    template<typename CollaborationIdT = Aws::String>
    Schema& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for the collaboration that the schema
     * belongs to.</p>
     */
    inline const Aws::String& GetCollaborationArn() const { return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    template<typename CollaborationArnT = Aws::String>
    void SetCollaborationArn(CollaborationArnT&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::forward<CollaborationArnT>(value); }
    template<typename CollaborationArnT = Aws::String>
    Schema& WithCollaborationArn(CollaborationArnT&& value) { SetCollaborationArn(std::forward<CollaborationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the schema.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Schema& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the schema was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Schema& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the schema was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    Schema& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of schema.</p>
     */
    inline SchemaType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SchemaType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Schema& WithType(SchemaType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the status of the schema. Currently, only one entry is
     * present.</p>
     */
    inline const Aws::Vector<SchemaStatusDetail>& GetSchemaStatusDetails() const { return m_schemaStatusDetails; }
    inline bool SchemaStatusDetailsHasBeenSet() const { return m_schemaStatusDetailsHasBeenSet; }
    template<typename SchemaStatusDetailsT = Aws::Vector<SchemaStatusDetail>>
    void SetSchemaStatusDetails(SchemaStatusDetailsT&& value) { m_schemaStatusDetailsHasBeenSet = true; m_schemaStatusDetails = std::forward<SchemaStatusDetailsT>(value); }
    template<typename SchemaStatusDetailsT = Aws::Vector<SchemaStatusDetail>>
    Schema& WithSchemaStatusDetails(SchemaStatusDetailsT&& value) { SetSchemaStatusDetails(std::forward<SchemaStatusDetailsT>(value)); return *this;}
    template<typename SchemaStatusDetailsT = SchemaStatusDetail>
    Schema& AddSchemaStatusDetails(SchemaStatusDetailsT&& value) { m_schemaStatusDetailsHasBeenSet = true; m_schemaStatusDetails.emplace_back(std::forward<SchemaStatusDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The schema type properties.</p>
     */
    inline const SchemaTypeProperties& GetSchemaTypeProperties() const { return m_schemaTypeProperties; }
    inline bool SchemaTypePropertiesHasBeenSet() const { return m_schemaTypePropertiesHasBeenSet; }
    template<typename SchemaTypePropertiesT = SchemaTypeProperties>
    void SetSchemaTypeProperties(SchemaTypePropertiesT&& value) { m_schemaTypePropertiesHasBeenSet = true; m_schemaTypeProperties = std::forward<SchemaTypePropertiesT>(value); }
    template<typename SchemaTypePropertiesT = SchemaTypeProperties>
    Schema& WithSchemaTypeProperties(SchemaTypePropertiesT&& value) { SetSchemaTypeProperties(std::forward<SchemaTypePropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Column> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<Column> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::Vector<AnalysisRuleType> m_analysisRuleTypes;
    bool m_analysisRuleTypesHasBeenSet = false;

    AnalysisMethod m_analysisMethod{AnalysisMethod::NOT_SET};
    bool m_analysisMethodHasBeenSet = false;

    Aws::Vector<SelectedAnalysisMethod> m_selectedAnalysisMethods;
    bool m_selectedAnalysisMethodsHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    SchemaType m_type{SchemaType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<SchemaStatusDetail> m_schemaStatusDetails;
    bool m_schemaStatusDetailsHasBeenSet = false;

    SchemaTypeProperties m_schemaTypeProperties;
    bool m_schemaTypePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
