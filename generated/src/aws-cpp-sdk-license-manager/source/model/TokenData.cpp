/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/TokenData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

TokenData::TokenData() : 
    m_tokenIdHasBeenSet(false),
    m_tokenTypeHasBeenSet(false),
    m_licenseArnHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_tokenPropertiesHasBeenSet(false),
    m_roleArnsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

TokenData::TokenData(JsonView jsonValue) : 
    m_tokenIdHasBeenSet(false),
    m_tokenTypeHasBeenSet(false),
    m_licenseArnHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_tokenPropertiesHasBeenSet(false),
    m_roleArnsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

TokenData& TokenData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TokenId"))
  {
    m_tokenId = jsonValue.GetString("TokenId");

    m_tokenIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenType"))
  {
    m_tokenType = jsonValue.GetString("TokenType");

    m_tokenTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseArn"))
  {
    m_licenseArn = jsonValue.GetString("LicenseArn");

    m_licenseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetString("ExpirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenProperties"))
  {
    Aws::Utils::Array<JsonView> tokenPropertiesJsonList = jsonValue.GetArray("TokenProperties");
    for(unsigned tokenPropertiesIndex = 0; tokenPropertiesIndex < tokenPropertiesJsonList.GetLength(); ++tokenPropertiesIndex)
    {
      m_tokenProperties.push_back(tokenPropertiesJsonList[tokenPropertiesIndex].AsString());
    }
    m_tokenPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArns"))
  {
    Aws::Utils::Array<JsonView> roleArnsJsonList = jsonValue.GetArray("RoleArns");
    for(unsigned roleArnsIndex = 0; roleArnsIndex < roleArnsJsonList.GetLength(); ++roleArnsIndex)
    {
      m_roleArns.push_back(roleArnsJsonList[roleArnsIndex].AsString());
    }
    m_roleArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue TokenData::Jsonize() const
{
  JsonValue payload;

  if(m_tokenIdHasBeenSet)
  {
   payload.WithString("TokenId", m_tokenId);

  }

  if(m_tokenTypeHasBeenSet)
  {
   payload.WithString("TokenType", m_tokenType);

  }

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("ExpirationTime", m_expirationTime);

  }

  if(m_tokenPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenPropertiesJsonList(m_tokenProperties.size());
   for(unsigned tokenPropertiesIndex = 0; tokenPropertiesIndex < tokenPropertiesJsonList.GetLength(); ++tokenPropertiesIndex)
   {
     tokenPropertiesJsonList[tokenPropertiesIndex].AsString(m_tokenProperties[tokenPropertiesIndex]);
   }
   payload.WithArray("TokenProperties", std::move(tokenPropertiesJsonList));

  }

  if(m_roleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> roleArnsJsonList(m_roleArns.size());
   for(unsigned roleArnsIndex = 0; roleArnsIndex < roleArnsJsonList.GetLength(); ++roleArnsIndex)
   {
     roleArnsJsonList[roleArnsIndex].AsString(m_roleArns[roleArnsIndex]);
   }
   payload.WithArray("RoleArns", std::move(roleArnsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
