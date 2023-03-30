/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ErrorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ErrorDetail::ErrorDetail() : 
    m_errorCodeHasBeenSet(false),
    m_errorDataHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

ErrorDetail::ErrorDetail(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorDataHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorDetail& ErrorDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorData"))
  {
    Aws::Utils::Array<JsonView> errorDataJsonList = jsonValue.GetArray("ErrorData");
    for(unsigned errorDataIndex = 0; errorDataIndex < errorDataJsonList.GetLength(); ++errorDataIndex)
    {
      Aws::Map<Aws::String, JsonView> stringMapJsonMap = errorDataJsonList[errorDataIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> stringMapMap;
      for(auto& stringMapItem : stringMapJsonMap)
      {
        stringMapMap[stringMapItem.first] = stringMapItem.second.AsString();
      }
      m_errorData.push_back(std::move(stringMapMap));
    }
    m_errorDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorDetail::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorDataJsonList(m_errorData.size());
   for(unsigned errorDataIndex = 0; errorDataIndex < errorDataJsonList.GetLength(); ++errorDataIndex)
   {
     JsonValue stringMapJsonMap;
     for(auto& stringMapItem : m_errorData[errorDataIndex])
     {
       stringMapJsonMap.WithString(stringMapItem.first, stringMapItem.second);
     }
     errorDataJsonList[errorDataIndex].AsObject(std::move(stringMapJsonMap));
   }
   payload.WithArray("ErrorData", std::move(errorDataJsonList));

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
