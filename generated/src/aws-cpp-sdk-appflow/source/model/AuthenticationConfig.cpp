/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/AuthenticationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

AuthenticationConfig::AuthenticationConfig() : 
    m_isBasicAuthSupported(false),
    m_isBasicAuthSupportedHasBeenSet(false),
    m_isApiKeyAuthSupported(false),
    m_isApiKeyAuthSupportedHasBeenSet(false),
    m_isOAuth2Supported(false),
    m_isOAuth2SupportedHasBeenSet(false),
    m_isCustomAuthSupported(false),
    m_isCustomAuthSupportedHasBeenSet(false),
    m_oAuth2DefaultsHasBeenSet(false),
    m_customAuthConfigsHasBeenSet(false)
{
}

AuthenticationConfig::AuthenticationConfig(JsonView jsonValue) : 
    m_isBasicAuthSupported(false),
    m_isBasicAuthSupportedHasBeenSet(false),
    m_isApiKeyAuthSupported(false),
    m_isApiKeyAuthSupportedHasBeenSet(false),
    m_isOAuth2Supported(false),
    m_isOAuth2SupportedHasBeenSet(false),
    m_isCustomAuthSupported(false),
    m_isCustomAuthSupportedHasBeenSet(false),
    m_oAuth2DefaultsHasBeenSet(false),
    m_customAuthConfigsHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationConfig& AuthenticationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isBasicAuthSupported"))
  {
    m_isBasicAuthSupported = jsonValue.GetBool("isBasicAuthSupported");

    m_isBasicAuthSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isApiKeyAuthSupported"))
  {
    m_isApiKeyAuthSupported = jsonValue.GetBool("isApiKeyAuthSupported");

    m_isApiKeyAuthSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isOAuth2Supported"))
  {
    m_isOAuth2Supported = jsonValue.GetBool("isOAuth2Supported");

    m_isOAuth2SupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isCustomAuthSupported"))
  {
    m_isCustomAuthSupported = jsonValue.GetBool("isCustomAuthSupported");

    m_isCustomAuthSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuth2Defaults"))
  {
    m_oAuth2Defaults = jsonValue.GetObject("oAuth2Defaults");

    m_oAuth2DefaultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customAuthConfigs"))
  {
    Aws::Utils::Array<JsonView> customAuthConfigsJsonList = jsonValue.GetArray("customAuthConfigs");
    for(unsigned customAuthConfigsIndex = 0; customAuthConfigsIndex < customAuthConfigsJsonList.GetLength(); ++customAuthConfigsIndex)
    {
      m_customAuthConfigs.push_back(customAuthConfigsJsonList[customAuthConfigsIndex].AsObject());
    }
    m_customAuthConfigsHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_isBasicAuthSupportedHasBeenSet)
  {
   payload.WithBool("isBasicAuthSupported", m_isBasicAuthSupported);

  }

  if(m_isApiKeyAuthSupportedHasBeenSet)
  {
   payload.WithBool("isApiKeyAuthSupported", m_isApiKeyAuthSupported);

  }

  if(m_isOAuth2SupportedHasBeenSet)
  {
   payload.WithBool("isOAuth2Supported", m_isOAuth2Supported);

  }

  if(m_isCustomAuthSupportedHasBeenSet)
  {
   payload.WithBool("isCustomAuthSupported", m_isCustomAuthSupported);

  }

  if(m_oAuth2DefaultsHasBeenSet)
  {
   payload.WithObject("oAuth2Defaults", m_oAuth2Defaults.Jsonize());

  }

  if(m_customAuthConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customAuthConfigsJsonList(m_customAuthConfigs.size());
   for(unsigned customAuthConfigsIndex = 0; customAuthConfigsIndex < customAuthConfigsJsonList.GetLength(); ++customAuthConfigsIndex)
   {
     customAuthConfigsJsonList[customAuthConfigsIndex].AsObject(m_customAuthConfigs[customAuthConfigsIndex].Jsonize());
   }
   payload.WithArray("customAuthConfigs", std::move(customAuthConfigsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
