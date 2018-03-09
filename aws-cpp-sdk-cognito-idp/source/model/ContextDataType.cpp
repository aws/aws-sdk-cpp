/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/cognito-idp/model/ContextDataType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

ContextDataType::ContextDataType() : 
    m_ipAddressHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serverPathHasBeenSet(false),
    m_httpHeadersHasBeenSet(false),
    m_encodedDataHasBeenSet(false)
{
}

ContextDataType::ContextDataType(const JsonValue& jsonValue) : 
    m_ipAddressHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serverPathHasBeenSet(false),
    m_httpHeadersHasBeenSet(false),
    m_encodedDataHasBeenSet(false)
{
  *this = jsonValue;
}

ContextDataType& ContextDataType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerPath"))
  {
    m_serverPath = jsonValue.GetString("ServerPath");

    m_serverPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpHeaders"))
  {
    Array<JsonValue> httpHeadersJsonList = jsonValue.GetArray("HttpHeaders");
    for(unsigned httpHeadersIndex = 0; httpHeadersIndex < httpHeadersJsonList.GetLength(); ++httpHeadersIndex)
    {
      m_httpHeaders.push_back(httpHeadersJsonList[httpHeadersIndex].AsObject());
    }
    m_httpHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncodedData"))
  {
    m_encodedData = jsonValue.GetString("EncodedData");

    m_encodedDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ContextDataType::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_serverPathHasBeenSet)
  {
   payload.WithString("ServerPath", m_serverPath);

  }

  if(m_httpHeadersHasBeenSet)
  {
   Array<JsonValue> httpHeadersJsonList(m_httpHeaders.size());
   for(unsigned httpHeadersIndex = 0; httpHeadersIndex < httpHeadersJsonList.GetLength(); ++httpHeadersIndex)
   {
     httpHeadersJsonList[httpHeadersIndex].AsObject(m_httpHeaders[httpHeadersIndex].Jsonize());
   }
   payload.WithArray("HttpHeaders", std::move(httpHeadersJsonList));

  }

  if(m_encodedDataHasBeenSet)
  {
   payload.WithString("EncodedData", m_encodedData);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
