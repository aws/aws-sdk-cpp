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
    AWS_GLUE_API CreateSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSchema"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> This is a wrapper shape to contain the registry identity fields. If this is
     * not provided, the default registry will be used. The ARN format for the same
     * will be: <code>arn:aws:glue:us-east-2:&lt;customer
     * id&gt;:registry/default-registry:random-5-letter-id</code>.</p>
     */
    inline const RegistryId& GetRegistryId() const{ return m_registryId; }

    /**
     * <p> This is a wrapper shape to contain the registry identity fields. If this is
     * not provided, the default registry will be used. The ARN format for the same
     * will be: <code>arn:aws:glue:us-east-2:&lt;customer
     * id&gt;:registry/default-registry:random-5-letter-id</code>.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p> This is a wrapper shape to contain the registry identity fields. If this is
     * not provided, the default registry will be used. The ARN format for the same
     * will be: <code>arn:aws:glue:us-east-2:&lt;customer
     * id&gt;:registry/default-registry:random-5-letter-id</code>.</p>
     */
    inline void SetRegistryId(const RegistryId& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p> This is a wrapper shape to contain the registry identity fields. If this is
     * not provided, the default registry will be used. The ARN format for the same
     * will be: <code>arn:aws:glue:us-east-2:&lt;customer
     * id&gt;:registry/default-registry:random-5-letter-id</code>.</p>
     */
    inline void SetRegistryId(RegistryId&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p> This is a wrapper shape to contain the registry identity fields. If this is
     * not provided, the default registry will be used. The ARN format for the same
     * will be: <code>arn:aws:glue:us-east-2:&lt;customer
     * id&gt;:registry/default-registry:random-5-letter-id</code>.</p>
     */
    inline CreateSchemaRequest& WithRegistryId(const RegistryId& value) { SetRegistryId(value); return *this;}

    /**
     * <p> This is a wrapper shape to contain the registry identity fields. If this is
     * not provided, the default registry will be used. The ARN format for the same
     * will be: <code>arn:aws:glue:us-east-2:&lt;customer
     * id&gt;:registry/default-registry:random-5-letter-id</code>.</p>
     */
    inline CreateSchemaRequest& WithRegistryId(RegistryId&& value) { SetRegistryId(std::move(value)); return *this;}


    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline CreateSchemaRequest& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline CreateSchemaRequest& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>Name of the schema to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline CreateSchemaRequest& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline void SetDataFormat(const DataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline void SetDataFormat(DataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline CreateSchemaRequest& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline CreateSchemaRequest& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


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
    inline const Compatibility& GetCompatibility() const{ return m_compatibility; }

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
    inline bool CompatibilityHasBeenSet() const { return m_compatibilityHasBeenSet; }

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
    inline void SetCompatibility(const Compatibility& value) { m_compatibilityHasBeenSet = true; m_compatibility = value; }

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
    inline void SetCompatibility(Compatibility&& value) { m_compatibilityHasBeenSet = true; m_compatibility = std::move(value); }

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
    inline CreateSchemaRequest& WithCompatibility(const Compatibility& value) { SetCompatibility(value); return *this;}

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
    inline CreateSchemaRequest& WithCompatibility(Compatibility&& value) { SetCompatibility(std::move(value)); return *this;}


    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline CreateSchemaRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline CreateSchemaRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the schema. If description is not provided, there
     * will not be any automatic default value for this.</p>
     */
    inline CreateSchemaRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API. If specified, follows the Amazon Web Services
     * tags-on-create pattern.</p>
     */
    inline CreateSchemaRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline const Aws::String& GetSchemaDefinition() const{ return m_schemaDefinition; }

    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline bool SchemaDefinitionHasBeenSet() const { return m_schemaDefinitionHasBeenSet; }

    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline void SetSchemaDefinition(const Aws::String& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = value; }

    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline void SetSchemaDefinition(Aws::String&& value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition = std::move(value); }

    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline void SetSchemaDefinition(const char* value) { m_schemaDefinitionHasBeenSet = true; m_schemaDefinition.assign(value); }

    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline CreateSchemaRequest& WithSchemaDefinition(const Aws::String& value) { SetSchemaDefinition(value); return *this;}

    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline CreateSchemaRequest& WithSchemaDefinition(Aws::String&& value) { SetSchemaDefinition(std::move(value)); return *this;}

    /**
     * <p>The schema definition using the <code>DataFormat</code> setting for
     * <code>SchemaName</code>.</p>
     */
    inline CreateSchemaRequest& WithSchemaDefinition(const char* value) { SetSchemaDefinition(value); return *this;}

  private:

    RegistryId m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    DataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    Compatibility m_compatibility;
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
