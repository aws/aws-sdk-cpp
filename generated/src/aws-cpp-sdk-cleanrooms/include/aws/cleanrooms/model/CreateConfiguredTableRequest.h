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


    /**
     * <p>The name of the configured table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configured table.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configured table.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configured table.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configured table.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configured table.</p>
     */
    inline CreateConfiguredTableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configured table.</p>
     */
    inline CreateConfiguredTableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configured table.</p>
     */
    inline CreateConfiguredTableRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description for the configured table.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the configured table.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the configured table.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the configured table.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the configured table.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the configured table.</p>
     */
    inline CreateConfiguredTableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the configured table.</p>
     */
    inline CreateConfiguredTableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the configured table.</p>
     */
    inline CreateConfiguredTableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A reference to the Glue table being configured.</p>
     */
    inline const TableReference& GetTableReference() const{ return m_tableReference; }

    /**
     * <p>A reference to the Glue table being configured.</p>
     */
    inline bool TableReferenceHasBeenSet() const { return m_tableReferenceHasBeenSet; }

    /**
     * <p>A reference to the Glue table being configured.</p>
     */
    inline void SetTableReference(const TableReference& value) { m_tableReferenceHasBeenSet = true; m_tableReference = value; }

    /**
     * <p>A reference to the Glue table being configured.</p>
     */
    inline void SetTableReference(TableReference&& value) { m_tableReferenceHasBeenSet = true; m_tableReference = std::move(value); }

    /**
     * <p>A reference to the Glue table being configured.</p>
     */
    inline CreateConfiguredTableRequest& WithTableReference(const TableReference& value) { SetTableReference(value); return *this;}

    /**
     * <p>A reference to the Glue table being configured.</p>
     */
    inline CreateConfiguredTableRequest& WithTableReference(TableReference&& value) { SetTableReference(std::move(value)); return *this;}


    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedColumns() const{ return m_allowedColumns; }

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline bool AllowedColumnsHasBeenSet() const { return m_allowedColumnsHasBeenSet; }

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline void SetAllowedColumns(const Aws::Vector<Aws::String>& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = value; }

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline void SetAllowedColumns(Aws::Vector<Aws::String>&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns = std::move(value); }

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline CreateConfiguredTableRequest& WithAllowedColumns(const Aws::Vector<Aws::String>& value) { SetAllowedColumns(value); return *this;}

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline CreateConfiguredTableRequest& WithAllowedColumns(Aws::Vector<Aws::String>&& value) { SetAllowedColumns(std::move(value)); return *this;}

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline CreateConfiguredTableRequest& AddAllowedColumns(const Aws::String& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(value); return *this; }

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline CreateConfiguredTableRequest& AddAllowedColumns(Aws::String&& value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>The columns of the underlying table that can be used by collaborations or
     * analysis rules.</p>
     */
    inline CreateConfiguredTableRequest& AddAllowedColumns(const char* value) { m_allowedColumnsHasBeenSet = true; m_allowedColumns.push_back(value); return *this; }


    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline const AnalysisMethod& GetAnalysisMethod() const{ return m_analysisMethod; }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline void SetAnalysisMethod(const AnalysisMethod& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline void SetAnalysisMethod(AnalysisMethod&& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = std::move(value); }

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline CreateConfiguredTableRequest& WithAnalysisMethod(const AnalysisMethod& value) { SetAnalysisMethod(value); return *this;}

    /**
     * <p>The analysis method for the configured tables. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline CreateConfiguredTableRequest& WithAnalysisMethod(AnalysisMethod&& value) { SetAnalysisMethod(std::move(value)); return *this;}


    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional label that you can assign to a resource when you create it. Each
     * tag consists of a key and an optional value, both of which you define. When you
     * use tagging, you can also use tag-based access control in IAM policies to
     * control access to this resource.</p>
     */
    inline CreateConfiguredTableRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
