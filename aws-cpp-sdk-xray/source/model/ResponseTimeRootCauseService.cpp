﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/ResponseTimeRootCauseService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

ResponseTimeRootCauseService::ResponseTimeRootCauseService() : 
    m_nameHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_entityPathHasBeenSet(false),
    m_inferred(false),
    m_inferredHasBeenSet(false)
{
}

ResponseTimeRootCauseService::ResponseTimeRootCauseService(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_entityPathHasBeenSet(false),
    m_inferred(false),
    m_inferredHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseTimeRootCauseService& ResponseTimeRootCauseService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Names"))
  {
    Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
    {
      m_names.push_back(namesJsonList[namesIndex].AsString());
    }
    m_namesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityPath"))
  {
    Array<JsonView> entityPathJsonList = jsonValue.GetArray("EntityPath");
    for(unsigned entityPathIndex = 0; entityPathIndex < entityPathJsonList.GetLength(); ++entityPathIndex)
    {
      m_entityPath.push_back(entityPathJsonList[entityPathIndex].AsObject());
    }
    m_entityPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inferred"))
  {
    m_inferred = jsonValue.GetBool("Inferred");

    m_inferredHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseTimeRootCauseService::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namesHasBeenSet)
  {
   Array<JsonValue> namesJsonList(m_names.size());
   for(unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex)
   {
     namesJsonList[namesIndex].AsString(m_names[namesIndex]);
   }
   payload.WithArray("Names", std::move(namesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_entityPathHasBeenSet)
  {
   Array<JsonValue> entityPathJsonList(m_entityPath.size());
   for(unsigned entityPathIndex = 0; entityPathIndex < entityPathJsonList.GetLength(); ++entityPathIndex)
   {
     entityPathJsonList[entityPathIndex].AsObject(m_entityPath[entityPathIndex].Jsonize());
   }
   payload.WithArray("EntityPath", std::move(entityPathJsonList));

  }

  if(m_inferredHasBeenSet)
  {
   payload.WithBool("Inferred", m_inferred);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
