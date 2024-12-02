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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateConfiguredTableRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateConfiguredTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfiguredTable"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configured table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateConfiguredTableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateConfiguredTableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateConfiguredTableRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateConfiguredTableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateConfiguredTableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateConfiguredTableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to the table being configured.</p>
     */
    inline const TableReference& GetTableReference() const{ return m_tableReference; }
    inline bool TableReferenceHasBeenSet() const { return m_tableReferenceHasBeenSet; }
    inline void SetTableReference(const TableReference& value) { m_tableReferenceHasBeenSet = true; m_tableReference = value; }
    inline void SetTableReference(TableReference&& value) { m_tableReferenceHasBeenSet = true; m_tableReference = std::move(value); }
    inline CreateConfiguredTableRequest& WithTableReference(const TableReference& value) { SetTableReference(value); return *this;}
    inline CreateConfiguredTableRequest& WithTableReference(TableReference&& value) { SetTableReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedColumns() const{ return m_allowedColumns; }
    inline bool AllowedColumnsHasBeenSet() const { return m_allowedColumnsHasBeenSet; }
    inline void SetAllowedColumns(const Aws::Vector<Aws::String>& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = value; }
    inline void SetAllowedColumns(Aws::Vector<Aws::String>&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = std::move(value); }
    inline CreateConfiguredTableRequest& WithAllowedColumns(const Aws::Vector<Aws::String>& value) { SetAllowedColumns(value); return *this;}
    inline CreateConfiguredTableRequest& WithAllowedColumns(Aws::Vector<Aws::String>&& value) { SetAllowedColumns(std::move(value)); return *this;}
    inline CreateConfiguredTableRequest& AddAllowedColumns(const Aws::String& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(value); return *this; }
    inline CreateConfiguredTableRequest& AddAllowedColumns(Aws::String&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(std::move(value)); return *this; }
    inline CreateConfiguredTableRequest& AddAllowedColumns(const char* value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline const AnalysisMethod& GetAnalysisMethod() const{ return m_analysisMethod; }
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }
    inline void SetAnalysisMethod(const AnalysisMethod& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }
    inline void SetAnalysisMethod(AnalysisMethod&& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = std::move(value); }
    inline CreateConfiguredTableRequest& WithAnalysisMethod(const AnalysisMethod& value) { SetAnalysisMethod(value); return *this;}
    inline CreateConfiguredTableRequest& WithAnalysisMethod(AnalysisMethod&& value) { SetAnalysisMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConfiguredTableRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateConfiguredTableRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConfiguredTableRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateConfiguredTableRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConfiguredTableRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConfiguredTableRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateConfiguredTableRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConfiguredTableRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConfiguredTableRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TableReference m_tableReference;
    bool m_tableReferenceHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedColumns;
    bool m_allowedColumnsHasBeenSet = false;

    AnalysisMethod m_analysisMethod;
    bool m_analysisMethodHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
