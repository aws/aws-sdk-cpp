/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/RegistryId.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataFormat.h>
#include <aws/glue/model/Compatibility.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateSchemaRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateSchemaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchema"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> This is a wrapper shape to contain the registry identity fields. If this is
     * not provided, the default registry will be used. The ARN format for the same
     * will be: <code>arn:aws:glue:us-east-2:&lt;customer
     * id&gt;:registry/default-registry:random-5-letter-id</code>.</p>
     */
    inline const RegistryId& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = RegistryId>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = RegistryId>
    CreateSchemaRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    CreateSchemaRequest& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline DataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(DataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline CreateSchemaRequest& WithDataFormat(DataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compatibility mode of the schema. The possible values are:</p> <ul> <li>
     * <p> <i>NONE</i>: No compatibility mode applies. You can use this choice in
     * development scenarios or if you do not know the compatibility mode that you want
     * to apply to schemas. Any new version added will be accepted without undergoing a
     * compatibility check.</p> </li> <li> <p> <i>DISABLED</i>: This compatibility
     * choice prevents versioning for a particular schema. You can use this choice to
     * prevent future versioning of a schema.</p> </li> <li> <p> <i>BACKWARD</i>: This
     * compatibility choice is recommended as it allows data receivers to read both the
     * current and one previous schema version. This means that for instance, a new
     * schema version cannot drop data fields or change the type of these fields, so
     * they can't be read by readers using the previous version.</p> </li> <li> <p>
     * <i>BACKWARD_ALL</i>: This compatibility choice allows data receivers to read
     * both the current and all previous schema versions. You can use this choice when
     * you need to delete fields or add optional fields, and check compatibility
     * against all previous schema versions. </p> </li> <li> <p> <i>FORWARD</i>: This
     * compatibility choice allows data receivers to read both the current and one next
     * schema version, but not necessarily later versions. You can use this choice when
     * you need to add fields or delete optional fields, but only check compatibility
     * against the last schema version.</p> </li> <li> <p> <i>FORWARD_ALL</i>: This
     * compatibility choice allows data receivers to read written by producers of any
     * new registered schema. You can use this choice when you need to add fields or
     * delete optional fields, and check compatibility against all previous schema
     * versions.</p> </li> <li> <p> <i>FULL</i>: This compatibility choice allows data
     * receivers to read data written by producers using the previous or next version
     * of the schema, but not necessarily earlier or later versions. You can use this
     * choice when you need to add or remove optional fields, but only check
     * compatibility against the last schema version.</p> </li> <li> <p>
     * <i>FULL_ALL</i>: This compatibility choice allows data receivers to read data
     * written by producers using all previous schema versions. You can use this choice
     * when you need to add or remove optional fields, and check compatibility against
     * all previous schema versions.</p> </li> </ul>
     */
    inline Compatibility GetCompatibility() const { return m_compatibility; }
    inline bool CompatibilityHasBeenSet() const { return m_compatibilityHasBeenSet; }
    inline void SetCompatibility(Compatibility value) { m_compatibilityHasBeenSet = true; m_compatibility = value; }
    inline CreateSchemaRequest& WithCompatibility(Compatibility value) { SetCompatibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSchemaRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSchemaRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSchemaRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline const Aws::String& GetSchemaDefinition() const { return m_schemaDefinition; }
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }
    template<typename SchemaDefinitionT = Aws::String>
    void SetSchemaDefinition(SchemaDefinitionT&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::forward<SchemaDefinitionT>(value); }
    template<typename SchemaDefinitionT = Aws::String>
    CreateSchemaRequest& WithSchemaDefinition(SchemaDefinitionT&& value) { SetSchemaDefinition(std::forward<SchemaDefinitionT>(value)); return *this;}
    ///@}
  private:

    RegistryId m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    DataFormat m_dataFormat{DataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    Compatibility m_compatibility{Compatibility::NOT_SET};
    bool m_compatibilityHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_schemaDefinition;
    bool m_schemaDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
