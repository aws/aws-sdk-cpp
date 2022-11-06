/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UserDefinedFunction.h>
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

UserDefinedFunction::UserDefinedFunction() : 
    m_functionNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerType(PrincipalType::NOT_SET),
    m_ownerTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_resourceUrisHasBeenSet(false),
    m_catalogIdHasBeenSet(false)
{
}

UserDefinedFunction::UserDefinedFunction(JsonView jsonValue) : 
    m_functionNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerType(PrincipalType::NOT_SET),
    m_ownerTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_resourceUrisHasBeenSet(false),
    m_catalogIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserDefinedFunction& UserDefinedFunction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FunctionName"))
  {
    m_functionName = jsonValue.GetString("FunctionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClassName"))
  {
    m_className = jsonValue.GetString("ClassName");

    m_classNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerName"))
  {
    m_ownerName = jsonValue.GetString("OwnerName");

    m_ownerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerType"))
  {
    m_ownerType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("OwnerType"));

    m_ownerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceUris"))
  {
    Aws::Utils::Array<JsonView> resourceUrisJsonList = jsonValue.GetArray("ResourceUris");
    for(unsigned resourceUrisIndex = 0; resourceUrisIndex < resourceUrisJsonList.GetLength(); ++resourceUrisIndex)
    {
      m_resourceUris.push_back(resourceUrisJsonList[resourceUrisIndex].AsObject());
    }
    m_resourceUrisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserDefinedFunction::Jsonize() const
{
  JsonValue payload;

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("FunctionName", m_functionName);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_classNameHasBeenSet)
  {
   payload.WithString("ClassName", m_className);

  }

  if(m_ownerNameHasBeenSet)
  {
   payload.WithString("OwnerName", m_ownerName);

  }

  if(m_ownerTypeHasBeenSet)
  {
   payload.WithString("OwnerType", PrincipalTypeMapper::GetNameForPrincipalType(m_ownerType));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_resourceUrisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceUrisJsonList(m_resourceUris.size());
   for(unsigned resourceUrisIndex = 0; resourceUrisIndex < resourceUrisJsonList.GetLength(); ++resourceUrisIndex)
   {
     resourceUrisJsonList[resourceUrisIndex].AsObject(m_resourceUris[resourceUrisIndex].Jsonize());
   }
   payload.WithArray("ResourceUris", std::move(resourceUrisJsonList));

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
