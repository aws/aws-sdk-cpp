/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ContextDataType::ContextDataType(JsonView jsonValue) : 
    m_ipAddressHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serverPathHasBeenSet(false),
    m_httpHeadersHasBeenSet(false),
    m_encodedDataHasBeenSet(false)
{
  *this = jsonValue;
}

ContextDataType& ContextDataType::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> httpHeadersJsonList = jsonValue.GetArray("HttpHeaders");
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
   Aws::Utils::Array<JsonValue> httpHeadersJsonList(m_httpHeaders.size());
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
