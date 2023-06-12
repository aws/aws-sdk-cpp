/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenGenericDataModel.h>
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

CodegenGenericDataModel::CodegenGenericDataModel() : 
    m_fieldsHasBeenSet(false),
    m_isJoinTable(false),
    m_isJoinTableHasBeenSet(false),
    m_primaryKeysHasBeenSet(false)
{
}

CodegenGenericDataModel::CodegenGenericDataModel(JsonView jsonValue) : 
    m_fieldsHasBeenSet(false),
    m_isJoinTable(false),
    m_isJoinTableHasBeenSet(false),
    m_primaryKeysHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenGenericDataModel& CodegenGenericDataModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fields"))
  {
    Aws::Map<Aws::String, JsonView> fieldsJsonMap = jsonValue.GetObject("fields").GetAllObjects();
    for(auto& fieldsItem : fieldsJsonMap)
    {
      m_fields[fieldsItem.first] = fieldsItem.second.AsObject();
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isJoinTable"))
  {
    m_isJoinTable = jsonValue.GetBool("isJoinTable");

    m_isJoinTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("primaryKeys"))
  {
    Aws::Utils::Array<JsonView> primaryKeysJsonList = jsonValue.GetArray("primaryKeys");
    for(unsigned primaryKeysIndex = 0; primaryKeysIndex < primaryKeysJsonList.GetLength(); ++primaryKeysIndex)
    {
      m_primaryKeys.push_back(primaryKeysJsonList[primaryKeysIndex].AsString());
    }
    m_primaryKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenGenericDataModel::Jsonize() const
{
  JsonValue payload;

  if(m_fieldsHasBeenSet)
  {
   JsonValue fieldsJsonMap;
   for(auto& fieldsItem : m_fields)
   {
     fieldsJsonMap.WithObject(fieldsItem.first, fieldsItem.second.Jsonize());
   }
   payload.WithObject("fields", std::move(fieldsJsonMap));

  }

  if(m_isJoinTableHasBeenSet)
  {
   payload.WithBool("isJoinTable", m_isJoinTable);

  }

  if(m_primaryKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> primaryKeysJsonList(m_primaryKeys.size());
   for(unsigned primaryKeysIndex = 0; primaryKeysIndex < primaryKeysJsonList.GetLength(); ++primaryKeysIndex)
   {
     primaryKeysJsonList[primaryKeysIndex].AsString(m_primaryKeys[primaryKeysIndex]);
   }
   payload.WithArray("primaryKeys", std::move(primaryKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
