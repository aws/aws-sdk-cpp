/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/storagegateway/model/StorageGatewayError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

StorageGatewayError::StorageGatewayError() : 
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

StorageGatewayError::StorageGatewayError(const JsonValue& jsonValue) : 
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

StorageGatewayError& StorageGatewayError::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDetails"))
  {
    Aws::Map<Aws::String, JsonValue> errorDetailsJsonMap = jsonValue.GetObject("errorDetails").GetAllObjects();
    for(auto& errorDetailsItem : errorDetailsJsonMap)
    {
      m_errorDetails[errorDetailsItem.first] = errorDetailsItem.second.AsString();
    }
    m_errorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageGatewayError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  if(m_errorDetailsHasBeenSet)
  {
   JsonValue errorDetailsJsonMap;
   for(auto& errorDetailsItem : m_errorDetails)
   {
     errorDetailsJsonMap.WithString(errorDetailsItem.first, errorDetailsItem.second);
   }
   payload.WithObject("errorDetails", std::move(errorDetailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws