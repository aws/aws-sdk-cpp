/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Field.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Field::Field(JsonView jsonValue)
{
  *this = jsonValue;
}

Field& Field::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FieldType"))
  {
    m_fieldType = FieldDataTypeMapper::GetFieldDataTypeForName(jsonValue.GetString("FieldType"));
    m_fieldTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsPrimaryKey"))
  {
    m_isPrimaryKey = jsonValue.GetBool("IsPrimaryKey");
    m_isPrimaryKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsNullable"))
  {
    m_isNullable = jsonValue.GetBool("IsNullable");
    m_isNullableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsRetrievable"))
  {
    m_isRetrievable = jsonValue.GetBool("IsRetrievable");
    m_isRetrievableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsFilterable"))
  {
    m_isFilterable = jsonValue.GetBool("IsFilterable");
    m_isFilterableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsPartitionable"))
  {
    m_isPartitionable = jsonValue.GetBool("IsPartitionable");
    m_isPartitionableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsCreateable"))
  {
    m_isCreateable = jsonValue.GetBool("IsCreateable");
    m_isCreateableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsUpdateable"))
  {
    m_isUpdateable = jsonValue.GetBool("IsUpdateable");
    m_isUpdateableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsUpsertable"))
  {
    m_isUpsertable = jsonValue.GetBool("IsUpsertable");
    m_isUpsertableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsDefaultOnCreate"))
  {
    m_isDefaultOnCreate = jsonValue.GetBool("IsDefaultOnCreate");
    m_isDefaultOnCreateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedValues"))
  {
    Aws::Utils::Array<JsonView> supportedValuesJsonList = jsonValue.GetArray("SupportedValues");
    for(unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex)
    {
      m_supportedValues.push_back(supportedValuesJsonList[supportedValuesIndex].AsString());
    }
    m_supportedValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedFilterOperators"))
  {
    Aws::Utils::Array<JsonView> supportedFilterOperatorsJsonList = jsonValue.GetArray("SupportedFilterOperators");
    for(unsigned supportedFilterOperatorsIndex = 0; supportedFilterOperatorsIndex < supportedFilterOperatorsJsonList.GetLength(); ++supportedFilterOperatorsIndex)
    {
      m_supportedFilterOperators.push_back(FieldFilterOperatorMapper::GetFieldFilterOperatorForName(supportedFilterOperatorsJsonList[supportedFilterOperatorsIndex].AsString()));
    }
    m_supportedFilterOperatorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParentField"))
  {
    m_parentField = jsonValue.GetString("ParentField");
    m_parentFieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NativeDataType"))
  {
    m_nativeDataType = jsonValue.GetString("NativeDataType");
    m_nativeDataTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomProperties"))
  {
    Aws::Map<Aws::String, JsonView> customPropertiesJsonMap = jsonValue.GetObject("CustomProperties").GetAllObjects();
    for(auto& customPropertiesItem : customPropertiesJsonMap)
    {
      m_customProperties[customPropertiesItem.first] = customPropertiesItem.second.AsString();
    }
    m_customPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue Field::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_fieldTypeHasBeenSet)
  {
   payload.WithString("FieldType", FieldDataTypeMapper::GetNameForFieldDataType(m_fieldType));
  }

  if(m_isPrimaryKeyHasBeenSet)
  {
   payload.WithBool("IsPrimaryKey", m_isPrimaryKey);

  }

  if(m_isNullableHasBeenSet)
  {
   payload.WithBool("IsNullable", m_isNullable);

  }

  if(m_isRetrievableHasBeenSet)
  {
   payload.WithBool("IsRetrievable", m_isRetrievable);

  }

  if(m_isFilterableHasBeenSet)
  {
   payload.WithBool("IsFilterable", m_isFilterable);

  }

  if(m_isPartitionableHasBeenSet)
  {
   payload.WithBool("IsPartitionable", m_isPartitionable);

  }

  if(m_isCreateableHasBeenSet)
  {
   payload.WithBool("IsCreateable", m_isCreateable);

  }

  if(m_isUpdateableHasBeenSet)
  {
   payload.WithBool("IsUpdateable", m_isUpdateable);

  }

  if(m_isUpsertableHasBeenSet)
  {
   payload.WithBool("IsUpsertable", m_isUpsertable);

  }

  if(m_isDefaultOnCreateHasBeenSet)
  {
   payload.WithBool("IsDefaultOnCreate", m_isDefaultOnCreate);

  }

  if(m_supportedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedValuesJsonList(m_supportedValues.size());
   for(unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex)
   {
     supportedValuesJsonList[supportedValuesIndex].AsString(m_supportedValues[supportedValuesIndex]);
   }
   payload.WithArray("SupportedValues", std::move(supportedValuesJsonList));

  }

  if(m_supportedFilterOperatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedFilterOperatorsJsonList(m_supportedFilterOperators.size());
   for(unsigned supportedFilterOperatorsIndex = 0; supportedFilterOperatorsIndex < supportedFilterOperatorsJsonList.GetLength(); ++supportedFilterOperatorsIndex)
   {
     supportedFilterOperatorsJsonList[supportedFilterOperatorsIndex].AsString(FieldFilterOperatorMapper::GetNameForFieldFilterOperator(m_supportedFilterOperators[supportedFilterOperatorsIndex]));
   }
   payload.WithArray("SupportedFilterOperators", std::move(supportedFilterOperatorsJsonList));

  }

  if(m_parentFieldHasBeenSet)
  {
   payload.WithString("ParentField", m_parentField);

  }

  if(m_nativeDataTypeHasBeenSet)
  {
   payload.WithString("NativeDataType", m_nativeDataType);

  }

  if(m_customPropertiesHasBeenSet)
  {
   JsonValue customPropertiesJsonMap;
   for(auto& customPropertiesItem : m_customProperties)
   {
     customPropertiesJsonMap.WithString(customPropertiesItem.first, customPropertiesItem.second);
   }
   payload.WithObject("CustomProperties", std::move(customPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
