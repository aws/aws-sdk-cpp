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
    AWS_CLEANROOMS_API ConfiguredTable();
    AWS_CLEANROOMS_API ConfiguredTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the configured table.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ConfiguredTable& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ConfiguredTable& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ConfiguredTable& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the configured table.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ConfiguredTable& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ConfiguredTable& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ConfiguredTable& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the configured table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfiguredTable& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfiguredTable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfiguredTable& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the configured table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConfiguredTable& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConfiguredTable& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConfiguredTable& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table that this configured table represents.</p>
     */
    inline const TableReference& GetTableReference() const{ return m_tableReference; }
    inline bool TableReferenceHasBeenSet() const { return m_tableReferenceHasBeenSet; }
    inline void SetTableReference(const TableReference& value) { m_tableReferenceHasBeenSet = true; m_tableReference = value; }
    inline void SetTableReference(TableReference&& value) { m_tableReferenceHasBeenSet = true; m_tableReference = std::move(value); }
    inline ConfiguredTable& WithTableReference(const TableReference& value) { SetTableReference(value); return *this;}
    inline ConfiguredTable& WithTableReference(TableReference&& value) { SetTableReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ConfiguredTable& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ConfiguredTable& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the configured table was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline ConfiguredTable& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline ConfiguredTable& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of analysis rules associated with this configured table. Currently,
     * only one analysis rule may be associated with a configured table.</p>
     */
    inline const Aws::Vector<ConfiguredTableAnalysisRuleType>& GetAnalysisRuleTypes() const{ return m_analysisRuleTypes; }
    inline bool AnalysisRuleTypesHasBeenSet() const { return m_analysisRuleTypesHasBeenSet; }
    inline void SetAnalysisRuleTypes(const Aws::Vector<ConfiguredTableAnalysisRuleType>& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = value; }
    inline void SetAnalysisRuleTypes(Aws::Vector<ConfiguredTableAnalysisRuleType>&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = std::move(value); }
    inline ConfiguredTable& WithAnalysisRuleTypes(const Aws::Vector<ConfiguredTableAnalysisRuleType>& value) { SetAnalysisRuleTypes(value); return *this;}
    inline ConfiguredTable& WithAnalysisRuleTypes(Aws::Vector<ConfiguredTableAnalysisRuleType>&& value) { SetAnalysisRuleTypes(std::move(value)); return *this;}
    inline ConfiguredTable& AddAnalysisRuleTypes(const ConfiguredTableAnalysisRuleType& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(value); return *this; }
    inline ConfiguredTable& AddAnalysisRuleTypes(ConfiguredTableAnalysisRuleType&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis method for the configured table. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline const AnalysisMethod& GetAnalysisMethod() const{ return m_analysisMethod; }
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }
    inline void SetAnalysisMethod(const AnalysisMethod& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }
    inline void SetAnalysisMethod(AnalysisMethod&& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = std::move(value); }
    inline ConfiguredTable& WithAnalysisMethod(const AnalysisMethod& value) { SetAnalysisMethod(value); return *this;}
    inline ConfiguredTable& WithAnalysisMethod(AnalysisMethod&& value) { SetAnalysisMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The columns within the underlying Glue table that can be utilized within
     * collaborations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedColumns() const{ return m_allowedColumns; }
    inline bool AllowedColumnsHasBeenSet() const { return m_allowedColumnsHasBeenSet; }
    inline void SetAllowedColumns(const Aws::Vector<Aws::String>& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = value; }
    inline void SetAllowedColumns(Aws::Vector<Aws::String>&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = std::move(value); }
    inline ConfiguredTable& WithAllowedColumns(const Aws::Vector<Aws::String>& value) { SetAllowedColumns(value); return *this;}
    inline ConfiguredTable& WithAllowedColumns(Aws::Vector<Aws::String>&& value) { SetAllowedColumns(std::move(value)); return *this;}
    inline ConfiguredTable& AddAllowedColumns(const Aws::String& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(value); return *this; }
    inline ConfiguredTable& AddAllowedColumns(Aws::String&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(std::move(value)); return *this; }
    inline ConfiguredTable& AddAllowedColumns(const char* value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(value); return *this; }
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

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::Vector<ConfiguredTableAnalysisRuleType> m_analysisRuleTypes;
    bool m_analysisRuleTypesHasBeenSet = false;

    AnalysisMethod m_analysisMethod;
    bool m_analysisMethodHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedColumns;
    bool m_allowedColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
