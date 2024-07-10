/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SalesforceSourceConfiguration.h>
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

SalesforceSourceConfiguration::SalesforceSourceConfiguration() : 
    m_authType(SalesforceAuthType::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_credentialsSecretArnHasBeenSet(false),
    m_hostUrlHasBeenSet(false)
{
}

SalesforceSourceConfiguration::SalesforceSourceConfiguration(JsonView jsonValue)
  : SalesforceSourceConfiguration()
{
  *this = jsonValue;
}

SalesforceSourceConfiguration& SalesforceSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = SalesforceAuthTypeMapper::GetSalesforceAuthTypeForName(jsonValue.GetString("authType"));

    m_authTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("credentialsSecretArn"))
  {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");

    m_credentialsSecretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostUrl"))
  {
    m_hostUrl = jsonValue.GetString("hostUrl");

    m_hostUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", SalesforceAuthTypeMapper::GetNameForSalesforceAuthType(m_authType));
  }

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  if(m_hostUrlHasBeenSet)
  {
   payload.WithString("hostUrl", m_hostUrl);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
