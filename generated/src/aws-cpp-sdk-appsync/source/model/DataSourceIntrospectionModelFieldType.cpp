/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceIntrospectionModelFieldType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

DataSourceIntrospectionModelFieldType::DataSourceIntrospectionModelFieldType() : 
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

DataSourceIntrospectionModelFieldType::DataSourceIntrospectionModelFieldType(JsonView jsonValue) : 
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

const DataSourceIntrospectionModelFieldType& DataSourceIntrospectionModelFieldType::GetType() const{ return *m_type; }
bool DataSourceIntrospectionModelFieldType::TypeHasBeenSet() const { return m_typeHasBeenSet; }
void DataSourceIntrospectionModelFieldType::SetType(const DataSourceIntrospectionModelFieldType& value) { m_typeHasBeenSet = true; m_type = Aws::MakeShared<DataSourceIntrospectionModelFieldType>("DataSourceIntrospectionModelFieldType", value); }
void DataSourceIntrospectionModelFieldType::SetType(DataSourceIntrospectionModelFieldType&& value) { m_typeHasBeenSet = true; m_type = Aws::MakeShared<DataSourceIntrospectionModelFieldType>("DataSourceIntrospectionModelFieldType", std::move(value)); }
DataSourceIntrospectionModelFieldType& DataSourceIntrospectionModelFieldType::WithType(const DataSourceIntrospectionModelFieldType& value) { SetType(value); return *this;}
DataSourceIntrospectionModelFieldType& DataSourceIntrospectionModelFieldType::WithType(DataSourceIntrospectionModelFieldType&& value) { SetType(std::move(value)); return *this;}

DataSourceIntrospectionModelFieldType& DataSourceIntrospectionModelFieldType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kind"))
  {
    m_kind = jsonValue.GetString("kind");

    m_kindHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = Aws::MakeShared<DataSourceIntrospectionModelFieldType>("DataSourceIntrospectionModelFieldType", jsonValue.GetObject("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceIntrospectionModelFieldType::Jsonize() const
{
  JsonValue payload;

  if(m_kindHasBeenSet)
  {
   payload.WithString("kind", m_kind);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithObject("type", m_type->Jsonize());

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
