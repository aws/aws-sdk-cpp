/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenGenericDataRelationshipType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

CodegenGenericDataRelationshipType::CodegenGenericDataRelationshipType() : 
    m_type(GenericDataRelationshipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_relatedModelNameHasBeenSet(false),
    m_relatedModelFieldsHasBeenSet(false),
    m_canUnlinkAssociatedModel(false),
    m_canUnlinkAssociatedModelHasBeenSet(false),
    m_relatedJoinFieldNameHasBeenSet(false),
    m_relatedJoinTableNameHasBeenSet(false),
    m_belongsToFieldOnRelatedModelHasBeenSet(false),
    m_associatedFieldsHasBeenSet(false),
    m_isHasManyIndex(false),
    m_isHasManyIndexHasBeenSet(false)
{
}

CodegenGenericDataRelationshipType::CodegenGenericDataRelationshipType(JsonView jsonValue) : 
    m_type(GenericDataRelationshipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_relatedModelNameHasBeenSet(false),
    m_relatedModelFieldsHasBeenSet(false),
    m_canUnlinkAssociatedModel(false),
    m_canUnlinkAssociatedModelHasBeenSet(false),
    m_relatedJoinFieldNameHasBeenSet(false),
    m_relatedJoinTableNameHasBeenSet(false),
    m_belongsToFieldOnRelatedModelHasBeenSet(false),
    m_associatedFieldsHasBeenSet(false),
    m_isHasManyIndex(false),
    m_isHasManyIndexHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenGenericDataRelationshipType& CodegenGenericDataRelationshipType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GenericDataRelationshipTypeMapper::GetGenericDataRelationshipTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedModelName"))
  {
    m_relatedModelName = jsonValue.GetString("relatedModelName");

    m_relatedModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedModelFields"))
  {
    Aws::Utils::Array<JsonView> relatedModelFieldsJsonList = jsonValue.GetArray("relatedModelFields");
    for(unsigned relatedModelFieldsIndex = 0; relatedModelFieldsIndex < relatedModelFieldsJsonList.GetLength(); ++relatedModelFieldsIndex)
    {
      m_relatedModelFields.push_back(relatedModelFieldsJsonList[relatedModelFieldsIndex].AsString());
    }
    m_relatedModelFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canUnlinkAssociatedModel"))
  {
    m_canUnlinkAssociatedModel = jsonValue.GetBool("canUnlinkAssociatedModel");

    m_canUnlinkAssociatedModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedJoinFieldName"))
  {
    m_relatedJoinFieldName = jsonValue.GetString("relatedJoinFieldName");

    m_relatedJoinFieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedJoinTableName"))
  {
    m_relatedJoinTableName = jsonValue.GetString("relatedJoinTableName");

    m_relatedJoinTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("belongsToFieldOnRelatedModel"))
  {
    m_belongsToFieldOnRelatedModel = jsonValue.GetString("belongsToFieldOnRelatedModel");

    m_belongsToFieldOnRelatedModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedFields"))
  {
    Aws::Utils::Array<JsonView> associatedFieldsJsonList = jsonValue.GetArray("associatedFields");
    for(unsigned associatedFieldsIndex = 0; associatedFieldsIndex < associatedFieldsJsonList.GetLength(); ++associatedFieldsIndex)
    {
      m_associatedFields.push_back(associatedFieldsJsonList[associatedFieldsIndex].AsString());
    }
    m_associatedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isHasManyIndex"))
  {
    m_isHasManyIndex = jsonValue.GetBool("isHasManyIndex");

    m_isHasManyIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenGenericDataRelationshipType::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GenericDataRelationshipTypeMapper::GetNameForGenericDataRelationshipType(m_type));
  }

  if(m_relatedModelNameHasBeenSet)
  {
   payload.WithString("relatedModelName", m_relatedModelName);

  }

  if(m_relatedModelFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedModelFieldsJsonList(m_relatedModelFields.size());
   for(unsigned relatedModelFieldsIndex = 0; relatedModelFieldsIndex < relatedModelFieldsJsonList.GetLength(); ++relatedModelFieldsIndex)
   {
     relatedModelFieldsJsonList[relatedModelFieldsIndex].AsString(m_relatedModelFields[relatedModelFieldsIndex]);
   }
   payload.WithArray("relatedModelFields", std::move(relatedModelFieldsJsonList));

  }

  if(m_canUnlinkAssociatedModelHasBeenSet)
  {
   payload.WithBool("canUnlinkAssociatedModel", m_canUnlinkAssociatedModel);

  }

  if(m_relatedJoinFieldNameHasBeenSet)
  {
   payload.WithString("relatedJoinFieldName", m_relatedJoinFieldName);

  }

  if(m_relatedJoinTableNameHasBeenSet)
  {
   payload.WithString("relatedJoinTableName", m_relatedJoinTableName);

  }

  if(m_belongsToFieldOnRelatedModelHasBeenSet)
  {
   payload.WithString("belongsToFieldOnRelatedModel", m_belongsToFieldOnRelatedModel);

  }

  if(m_associatedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedFieldsJsonList(m_associatedFields.size());
   for(unsigned associatedFieldsIndex = 0; associatedFieldsIndex < associatedFieldsJsonList.GetLength(); ++associatedFieldsIndex)
   {
     associatedFieldsJsonList[associatedFieldsIndex].AsString(m_associatedFields[associatedFieldsIndex]);
   }
   payload.WithArray("associatedFields", std::move(associatedFieldsJsonList));

  }

  if(m_isHasManyIndexHasBeenSet)
  {
   payload.WithBool("isHasManyIndex", m_isHasManyIndex);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
