/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/FieldDataType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/FieldFilterOperator.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The <code>Field</code> object has information about the different properties
   * associated with a field in the connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Field">AWS API
   * Reference</a></p>
   */
  class Field
  {
  public:
    AWS_GLUE_API Field();
    AWS_GLUE_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the field.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline Field& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline Field& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline Field& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A readable label used for the field.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline Field& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline Field& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline Field& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the field.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Field& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Field& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Field& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data in the field.</p>
     */
    inline const FieldDataType& GetFieldType() const{ return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    inline void SetFieldType(const FieldDataType& value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }
    inline void SetFieldType(FieldDataType&& value) { m_fieldTypeHasBeenSet = true; m_fieldType = std::move(value); }
    inline Field& WithFieldType(const FieldDataType& value) { SetFieldType(value); return *this;}
    inline Field& WithFieldType(FieldDataType&& value) { SetFieldType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can used as a primary key for the given
     * entity.</p>
     */
    inline bool GetIsPrimaryKey() const{ return m_isPrimaryKey; }
    inline bool IsPrimaryKeyHasBeenSet() const { return m_isPrimaryKeyHasBeenSet; }
    inline void SetIsPrimaryKey(bool value) { m_isPrimaryKeyHasBeenSet = true; m_isPrimaryKey = value; }
    inline Field& WithIsPrimaryKey(bool value) { SetIsPrimaryKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be nullable or not.</p>
     */
    inline bool GetIsNullable() const{ return m_isNullable; }
    inline bool IsNullableHasBeenSet() const { return m_isNullableHasBeenSet; }
    inline void SetIsNullable(bool value) { m_isNullableHasBeenSet = true; m_isNullable = value; }
    inline Field& WithIsNullable(bool value) { SetIsNullable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be added in Select clause of SQL query or
     * whether it is retrievable or not.</p>
     */
    inline bool GetIsRetrievable() const{ return m_isRetrievable; }
    inline bool IsRetrievableHasBeenSet() const { return m_isRetrievableHasBeenSet; }
    inline void SetIsRetrievable(bool value) { m_isRetrievableHasBeenSet = true; m_isRetrievable = value; }
    inline Field& WithIsRetrievable(bool value) { SetIsRetrievable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether this field can used in a filter clause (<code>WHERE</code>
     * clause) of a SQL statement when querying data. </p>
     */
    inline bool GetIsFilterable() const{ return m_isFilterable; }
    inline bool IsFilterableHasBeenSet() const { return m_isFilterableHasBeenSet; }
    inline void SetIsFilterable(bool value) { m_isFilterableHasBeenSet = true; m_isFilterable = value; }
    inline Field& WithIsFilterable(bool value) { SetIsFilterable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a given field can be used in partitioning the query made to
     * SaaS.</p>
     */
    inline bool GetIsPartitionable() const{ return m_isPartitionable; }
    inline bool IsPartitionableHasBeenSet() const { return m_isPartitionableHasBeenSet; }
    inline void SetIsPartitionable(bool value) { m_isPartitionableHasBeenSet = true; m_isPartitionable = value; }
    inline Field& WithIsPartitionable(bool value) { SetIsPartitionable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be created as part of a destination
     * write.</p>
     */
    inline bool GetIsCreateable() const{ return m_isCreateable; }
    inline bool IsCreateableHasBeenSet() const { return m_isCreateableHasBeenSet; }
    inline void SetIsCreateable(bool value) { m_isCreateableHasBeenSet = true; m_isCreateable = value; }
    inline Field& WithIsCreateable(bool value) { SetIsCreateable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be updated as part of a destination
     * write.</p>
     */
    inline bool GetIsUpdateable() const{ return m_isUpdateable; }
    inline bool IsUpdateableHasBeenSet() const { return m_isUpdateableHasBeenSet; }
    inline void SetIsUpdateable(bool value) { m_isUpdateableHasBeenSet = true; m_isUpdateable = value; }
    inline Field& WithIsUpdateable(bool value) { SetIsUpdateable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be upserted as part of a destination
     * write.</p>
     */
    inline bool GetIsUpsertable() const{ return m_isUpsertable; }
    inline bool IsUpsertableHasBeenSet() const { return m_isUpsertableHasBeenSet; }
    inline void SetIsUpsertable(bool value) { m_isUpsertableHasBeenSet = true; m_isUpsertable = value; }
    inline Field& WithIsUpsertable(bool value) { SetIsUpsertable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field is populated automatically when the object is
     * created, such as a created at timestamp.</p>
     */
    inline bool GetIsDefaultOnCreate() const{ return m_isDefaultOnCreate; }
    inline bool IsDefaultOnCreateHasBeenSet() const { return m_isDefaultOnCreateHasBeenSet; }
    inline void SetIsDefaultOnCreate(bool value) { m_isDefaultOnCreateHasBeenSet = true; m_isDefaultOnCreate = value; }
    inline Field& WithIsDefaultOnCreate(bool value) { SetIsDefaultOnCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of supported values for the field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedValues() const{ return m_supportedValues; }
    inline bool SupportedValuesHasBeenSet() const { return m_supportedValuesHasBeenSet; }
    inline void SetSupportedValues(const Aws::Vector<Aws::String>& value) { m_supportedValuesHasBeenSet = true; m_supportedValues = value; }
    inline void SetSupportedValues(Aws::Vector<Aws::String>&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues = std::move(value); }
    inline Field& WithSupportedValues(const Aws::Vector<Aws::String>& value) { SetSupportedValues(value); return *this;}
    inline Field& WithSupportedValues(Aws::Vector<Aws::String>&& value) { SetSupportedValues(std::move(value)); return *this;}
    inline Field& AddSupportedValues(const Aws::String& value) { m_supportedValuesHasBeenSet = true; m_supportedValues.push_back(value); return *this; }
    inline Field& AddSupportedValues(Aws::String&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues.push_back(std::move(value)); return *this; }
    inline Field& AddSupportedValues(const char* value) { m_supportedValuesHasBeenSet = true; m_supportedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the support filter operators for this field.</p>
     */
    inline const Aws::Vector<FieldFilterOperator>& GetSupportedFilterOperators() const{ return m_supportedFilterOperators; }
    inline bool SupportedFilterOperatorsHasBeenSet() const { return m_supportedFilterOperatorsHasBeenSet; }
    inline void SetSupportedFilterOperators(const Aws::Vector<FieldFilterOperator>& value) { m_supportedFilterOperatorsHasBeenSet = true; m_supportedFilterOperators = value; }
    inline void SetSupportedFilterOperators(Aws::Vector<FieldFilterOperator>&& value) { m_supportedFilterOperatorsHasBeenSet = true; m_supportedFilterOperators = std::move(value); }
    inline Field& WithSupportedFilterOperators(const Aws::Vector<FieldFilterOperator>& value) { SetSupportedFilterOperators(value); return *this;}
    inline Field& WithSupportedFilterOperators(Aws::Vector<FieldFilterOperator>&& value) { SetSupportedFilterOperators(std::move(value)); return *this;}
    inline Field& AddSupportedFilterOperators(const FieldFilterOperator& value) { m_supportedFilterOperatorsHasBeenSet = true; m_supportedFilterOperators.push_back(value); return *this; }
    inline Field& AddSupportedFilterOperators(FieldFilterOperator&& value) { m_supportedFilterOperatorsHasBeenSet = true; m_supportedFilterOperators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A parent field name for a nested field.</p>
     */
    inline const Aws::String& GetParentField() const{ return m_parentField; }
    inline bool ParentFieldHasBeenSet() const { return m_parentFieldHasBeenSet; }
    inline void SetParentField(const Aws::String& value) { m_parentFieldHasBeenSet = true; m_parentField = value; }
    inline void SetParentField(Aws::String&& value) { m_parentFieldHasBeenSet = true; m_parentField = std::move(value); }
    inline void SetParentField(const char* value) { m_parentFieldHasBeenSet = true; m_parentField.assign(value); }
    inline Field& WithParentField(const Aws::String& value) { SetParentField(value); return *this;}
    inline Field& WithParentField(Aws::String&& value) { SetParentField(std::move(value)); return *this;}
    inline Field& WithParentField(const char* value) { SetParentField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type returned by the SaaS API, such as “picklist” or “textarea” from
     * Salesforce.</p>
     */
    inline const Aws::String& GetNativeDataType() const{ return m_nativeDataType; }
    inline bool NativeDataTypeHasBeenSet() const { return m_nativeDataTypeHasBeenSet; }
    inline void SetNativeDataType(const Aws::String& value) { m_nativeDataTypeHasBeenSet = true; m_nativeDataType = value; }
    inline void SetNativeDataType(Aws::String&& value) { m_nativeDataTypeHasBeenSet = true; m_nativeDataType = std::move(value); }
    inline void SetNativeDataType(const char* value) { m_nativeDataTypeHasBeenSet = true; m_nativeDataType.assign(value); }
    inline Field& WithNativeDataType(const Aws::String& value) { SetNativeDataType(value); return *this;}
    inline Field& WithNativeDataType(Aws::String&& value) { SetNativeDataType(std::move(value)); return *this;}
    inline Field& WithNativeDataType(const char* value) { SetNativeDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional map of keys which may be returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const{ return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    inline void SetCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customPropertiesHasBeenSet = true; m_customProperties = value; }
    inline void SetCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::move(value); }
    inline Field& WithCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomProperties(value); return *this;}
    inline Field& WithCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomProperties(std::move(value)); return *this;}
    inline Field& AddCustomProperties(const Aws::String& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    inline Field& AddCustomProperties(Aws::String&& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline Field& AddCustomProperties(const Aws::String& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline Field& AddCustomProperties(Aws::String&& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline Field& AddCustomProperties(const char* key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }
    inline Field& AddCustomProperties(Aws::String&& key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }
    inline Field& AddCustomProperties(const char* key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FieldDataType m_fieldType;
    bool m_fieldTypeHasBeenSet = false;

    bool m_isPrimaryKey;
    bool m_isPrimaryKeyHasBeenSet = false;

    bool m_isNullable;
    bool m_isNullableHasBeenSet = false;

    bool m_isRetrievable;
    bool m_isRetrievableHasBeenSet = false;

    bool m_isFilterable;
    bool m_isFilterableHasBeenSet = false;

    bool m_isPartitionable;
    bool m_isPartitionableHasBeenSet = false;

    bool m_isCreateable;
    bool m_isCreateableHasBeenSet = false;

    bool m_isUpdateable;
    bool m_isUpdateableHasBeenSet = false;

    bool m_isUpsertable;
    bool m_isUpsertableHasBeenSet = false;

    bool m_isDefaultOnCreate;
    bool m_isDefaultOnCreateHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedValues;
    bool m_supportedValuesHasBeenSet = false;

    Aws::Vector<FieldFilterOperator> m_supportedFilterOperators;
    bool m_supportedFilterOperatorsHasBeenSet = false;

    Aws::String m_parentField;
    bool m_parentFieldHasBeenSet = false;

    Aws::String m_nativeDataType;
    bool m_nativeDataTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
