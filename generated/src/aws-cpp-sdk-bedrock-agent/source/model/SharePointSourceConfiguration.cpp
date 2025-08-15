/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SharePointSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

SharePointSourceConfiguration::SharePointSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SharePointSourceConfiguration& SharePointSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tenantId"))
  {
    m_tenantId = jsonValue.GetString("tenantId");
    m_tenantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("siteUrls"))
  {
    Aws::Utils::Array<JsonView> siteUrlsJsonList = jsonValue.GetArray("siteUrls");
    for(unsigned siteUrlsIndex = 0; siteUrlsIndex < siteUrlsJsonList.GetLength(); ++siteUrlsIndex)
    {
      m_siteUrls.push_back(siteUrlsJsonList[siteUrlsIndex].AsString());
    }
    m_siteUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostType"))
  {
    m_hostType = SharePointHostTypeMapper::GetSharePointHostTypeForName(jsonValue.GetString("hostType"));
    m_hostTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = SharePointAuthTypeMapper::GetSharePointAuthTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialsSecretArn"))
  {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");
    m_credentialsSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SharePointSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tenantIdHasBeenSet)
  {
   payload.WithString("tenantId", m_tenantId);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_siteUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> siteUrlsJsonList(m_siteUrls.size());
   for(unsigned siteUrlsIndex = 0; siteUrlsIndex < siteUrlsJsonList.GetLength(); ++siteUrlsIndex)
   {
     siteUrlsJsonList[siteUrlsIndex].AsString(m_siteUrls[siteUrlsIndex]);
   }
   payload.WithArray("siteUrls", std::move(siteUrlsJsonList));

  }

  if(m_hostTypeHasBeenSet)
  {
   payload.WithString("hostType", SharePointHostTypeMapper::GetNameForSharePointHostType(m_hostType));
  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", SharePointAuthTypeMapper::GetNameForSharePointAuthType(m_authType));
  }

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
