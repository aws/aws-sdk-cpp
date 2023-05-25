/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CognitoOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

CognitoOptions::CognitoOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

CognitoOptions::CognitoOptions(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_userPoolIdHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoOptions& CognitoOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

    m_identityPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
