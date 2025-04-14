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
    AWS_ENTITYRESOLUTION_API UpdateSchemaMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSchemaMapping"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the schema. There can't be multiple <code>SchemaMappings</code>
     * with the same name.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    UpdateSchemaMappingRequest& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSchemaMappingRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information that Entity Resolution uses for matching.</p>
     */
    inline const Aws::Vector<SchemaInputAttribute>& GetMappedInputFields() const { return m_mappedInputFields; }
    inline bool MappedInputFieldsHasBeenSet() const { return m_mappedInputFieldsHasBeenSet; }
    template<typename MappedInputFieldsT = Aws::Vector<SchemaInputAttribute>>
    void SetMappedInputFields(MappedInputFieldsT&& value) { m_mappedInputFieldsHasBeenSet = true; m_mappedInputFields = std::forward<MappedInputFieldsT>(value); }
    template<typename MappedInputFieldsT = Aws::Vector<SchemaInputAttribute>>
    UpdateSchemaMappingRequest& WithMappedInputFields(MappedInputFieldsT&& value) { SetMappedInputFields(std::forward<MappedInputFieldsT>(value)); return *this;}
    template<typename MappedInputFieldsT = SchemaInputAttribute>
    UpdateSchemaMappingRequest& AddMappedInputFields(MappedInputFieldsT&& value) { m_mappedInputFieldsHasBeenSet = true; m_mappedInputFields.emplace_back(std::forward<MappedInputFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SchemaInputAttribute> m_mappedInputFields;
    bool m_mappedInputFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
