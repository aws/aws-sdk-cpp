/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/SchemaInputAttribute.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class UpdateSchemaMappingRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateSchemaMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchemaMapping"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    /**
     * <p>A description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the schema.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the schema.</p>
     */
    inline UpdateSchemaMappingRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the schema.</p>
     */
    inline UpdateSchemaMappingRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the schema.</p>
     */
    inline UpdateSchemaMappingRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline const Aws::Vector<SchemaInputAttribute>& GetMappedInputFields() const{ return m_mappedInputFields; }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline bool MappedInputFieldsHasBeenSet() const { return m_mappedInputFieldsHasBeenSet; }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline void SetMappedInputFields(const Aws::Vector<SchemaInputAttribute>& value) { m_mappedInputFieldsHasBeenSet = true; m_mappedInputFields = value; }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline void SetMappedInputFields(Aws::Vector<SchemaInputAttribute>&& value) { m_mappedInputFieldsHasBeenSet = true; m_mappedInputFields = std::move(value); }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline UpdateSchemaMappingRequest& WithMappedInputFields(const Aws::Vector<SchemaInputAttribute>& value) { SetMappedInputFields(value); return *this;}

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline UpdateSchemaMappingRequest& WithMappedInputFields(Aws::Vector<SchemaInputAttribute>&& value) { SetMappedInputFields(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline UpdateSchemaMappingRequest& AddMappedInputFields(const SchemaInputAttribute& value) { m_mappedInputFieldsHasBeenSet = true; m_mappedInputFields.push_back(value); return *this; }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline UpdateSchemaMappingRequest& AddMappedInputFields(SchemaInputAttribute&& value) { m_mappedInputFieldsHasBeenSet = true; m_mappedInputFields.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline UpdateSchemaMappingRequest& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline UpdateSchemaMappingRequest& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline UpdateSchemaMappingRequest& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SchemaInputAttribute> m_mappedInputFields;
    bool m_mappedInputFieldsHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
