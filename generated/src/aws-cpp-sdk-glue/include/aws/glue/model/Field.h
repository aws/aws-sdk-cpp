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
    AWS_GLUE_API Field() = default;
    AWS_GLUE_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the field.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    Field& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A readable label used for the field.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    Field& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the field.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Field& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data in the field.</p>
     */
    inline FieldDataType GetFieldType() const { return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    inline void SetFieldType(FieldDataType value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }
    inline Field& WithFieldType(FieldDataType value) { SetFieldType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can used as a primary key for the given
     * entity.</p>
     */
    inline bool GetIsPrimaryKey() const { return m_isPrimaryKey; }
    inline bool IsPrimaryKeyHasBeenSet() const { return m_isPrimaryKeyHasBeenSet; }
    inline void SetIsPrimaryKey(bool value) { m_isPrimaryKeyHasBeenSet = true; m_isPrimaryKey = value; }
    inline Field& WithIsPrimaryKey(bool value) { SetIsPrimaryKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be nullable or not.</p>
     */
    inline bool GetIsNullable() const { return m_isNullable; }
    inline bool IsNullableHasBeenSet() const { return m_isNullableHasBeenSet; }
    inline void SetIsNullable(bool value) { m_isNullableHasBeenSet = true; m_isNullable = value; }
    inline Field& WithIsNullable(bool value) { SetIsNullable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be added in Select clause of SQL query or
     * whether it is retrievable or not.</p>
     */
    inline bool GetIsRetrievable() const { return m_isRetrievable; }
    inline bool IsRetrievableHasBeenSet() const { return m_isRetrievableHasBeenSet; }
    inline void SetIsRetrievable(bool value) { m_isRetrievableHasBeenSet = true; m_isRetrievable = value; }
    inline Field& WithIsRetrievable(bool value) { SetIsRetrievable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether this field can used in a filter clause (<code>WHERE</code>
     * clause) of a SQL statement when querying data. </p>
     */
    inline bool GetIsFilterable() const { return m_isFilterable; }
    inline bool IsFilterableHasBeenSet() const { return m_isFilterableHasBeenSet; }
    inline void SetIsFilterable(bool value) { m_isFilterableHasBeenSet = true; m_isFilterable = value; }
    inline Field& WithIsFilterable(bool value) { SetIsFilterable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a given field can be used in partitioning the query made to
     * SaaS.</p>
     */
    inline bool GetIsPartitionable() const { return m_isPartitionable; }
    inline bool IsPartitionableHasBeenSet() const { return m_isPartitionableHasBeenSet; }
    inline void SetIsPartitionable(bool value) { m_isPartitionableHasBeenSet = true; m_isPartitionable = value; }
    inline Field& WithIsPartitionable(bool value) { SetIsPartitionable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be created as part of a destination
     * write.</p>
     */
    inline bool GetIsCreateable() const { return m_isCreateable; }
    inline bool IsCreateableHasBeenSet() const { return m_isCreateableHasBeenSet; }
    inline void SetIsCreateable(bool value) { m_isCreateableHasBeenSet = true; m_isCreateable = value; }
    inline Field& WithIsCreateable(bool value) { SetIsCreateable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be updated as part of a destination
     * write.</p>
     */
    inline bool GetIsUpdateable() const { return m_isUpdateable; }
    inline bool IsUpdateableHasBeenSet() const { return m_isUpdateableHasBeenSet; }
    inline void SetIsUpdateable(bool value) { m_isUpdateableHasBeenSet = true; m_isUpdateable = value; }
    inline Field& WithIsUpdateable(bool value) { SetIsUpdateable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field can be upserted as part of a destination
     * write.</p>
     */
    inline bool GetIsUpsertable() const { return m_isUpsertable; }
    inline bool IsUpsertableHasBeenSet() const { return m_isUpsertableHasBeenSet; }
    inline void SetIsUpsertable(bool value) { m_isUpsertableHasBeenSet = true; m_isUpsertable = value; }
    inline Field& WithIsUpsertable(bool value) { SetIsUpsertable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field is populated automatically when the object is
     * created, such as a created at timestamp.</p>
     */
    inline bool GetIsDefaultOnCreate() const { return m_isDefaultOnCreate; }
    inline bool IsDefaultOnCreateHasBeenSet() const { return m_isDefaultOnCreateHasBeenSet; }
    inline void SetIsDefaultOnCreate(bool value) { m_isDefaultOnCreateHasBeenSet = true; m_isDefaultOnCreate = value; }
    inline Field& WithIsDefaultOnCreate(bool value) { SetIsDefaultOnCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of supported values for the field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedValues() const { return m_supportedValues; }
    inline bool SupportedValuesHasBeenSet() const { return m_supportedValuesHasBeenSet; }
    template<typename SupportedValuesT = Aws::Vector<Aws::String>>
    void SetSupportedValues(SupportedValuesT&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues = std::forward<SupportedValuesT>(value); }
    template<typename SupportedValuesT = Aws::Vector<Aws::String>>
    Field& WithSupportedValues(SupportedValuesT&& value) { SetSupportedValues(std::forward<SupportedValuesT>(value)); return *this;}
    template<typename SupportedValuesT = Aws::String>
    Field& AddSupportedValues(SupportedValuesT&& value) { m_supportedValuesHasBeenSet = true; m_supportedValues.emplace_back(std::forward<SupportedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the support filter operators for this field.</p>
     */
    inline const Aws::Vector<FieldFilterOperator>& GetSupportedFilterOperators() const { return m_supportedFilterOperators; }
    inline bool SupportedFilterOperatorsHasBeenSet() const { return m_supportedFilterOperatorsHasBeenSet; }
    template<typename SupportedFilterOperatorsT = Aws::Vector<FieldFilterOperator>>
    void SetSupportedFilterOperators(SupportedFilterOperatorsT&& value) { m_supportedFilterOperatorsHasBeenSet = true; m_supportedFilterOperators = std::forward<SupportedFilterOperatorsT>(value); }
    template<typename SupportedFilterOperatorsT = Aws::Vector<FieldFilterOperator>>
    Field& WithSupportedFilterOperators(SupportedFilterOperatorsT&& value) { SetSupportedFilterOperators(std::forward<SupportedFilterOperatorsT>(value)); return *this;}
    inline Field& AddSupportedFilterOperators(FieldFilterOperator value) { m_supportedFilterOperatorsHasBeenSet = true; m_supportedFilterOperators.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A parent field name for a nested field.</p>
     */
    inline const Aws::String& GetParentField() const { return m_parentField; }
    inline bool ParentFieldHasBeenSet() const { return m_parentFieldHasBeenSet; }
    template<typename ParentFieldT = Aws::String>
    void SetParentField(ParentFieldT&& value) { m_parentFieldHasBeenSet = true; m_parentField = std::forward<ParentFieldT>(value); }
    template<typename ParentFieldT = Aws::String>
    Field& WithParentField(ParentFieldT&& value) { SetParentField(std::forward<ParentFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type returned by the SaaS API, such as “picklist” or “textarea” from
     * Salesforce.</p>
     */
    inline const Aws::String& GetNativeDataType() const { return m_nativeDataType; }
    inline bool NativeDataTypeHasBeenSet() const { return m_nativeDataTypeHasBeenSet; }
    template<typename NativeDataTypeT = Aws::String>
    void SetNativeDataType(NativeDataTypeT&& value) { m_nativeDataTypeHasBeenSet = true; m_nativeDataType = std::forward<NativeDataTypeT>(value); }
    template<typename NativeDataTypeT = Aws::String>
    Field& WithNativeDataType(NativeDataTypeT&& value) { SetNativeDataType(std::forward<NativeDataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional map of keys which may be returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const { return m_customProperties; }
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomProperties(CustomPropertiesT&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::forward<CustomPropertiesT>(value); }
    template<typename CustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    Field& WithCustomProperties(CustomPropertiesT&& value) { SetCustomProperties(std::forward<CustomPropertiesT>(value)); return *this;}
    template<typename CustomPropertiesKeyT = Aws::String, typename CustomPropertiesValueT = Aws::String>
    Field& AddCustomProperties(CustomPropertiesKeyT&& key, CustomPropertiesValueT&& value) {
      m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::forward<CustomPropertiesKeyT>(key), std::forward<CustomPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FieldDataType m_fieldType{FieldDataType::NOT_SET};
    bool m_fieldTypeHasBeenSet = false;

    bool m_isPrimaryKey{false};
    bool m_isPrimaryKeyHasBeenSet = false;

    bool m_isNullable{false};
    bool m_isNullableHasBeenSet = false;

    bool m_isRetrievable{false};
    bool m_isRetrievableHasBeenSet = false;

    bool m_isFilterable{false};
    bool m_isFilterableHasBeenSet = false;

    bool m_isPartitionable{false};
    bool m_isPartitionableHasBeenSet = false;

    bool m_isCreateable{false};
    bool m_isCreateableHasBeenSet = false;

    bool m_isUpdateable{false};
    bool m_isUpdateableHasBeenSet = false;

    bool m_isUpsertable{false};
    bool m_isUpsertableHasBeenSet = false;

    bool m_isDefaultOnCreate{false};
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
