/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/CognitoConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

CognitoConfig::CognitoConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CognitoConfig& CognitoConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userPoolId"))
  {
    m_userPoolId = jsonValue.GetString("userPoolId");
    m_userPoolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");
    m_awsRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appIdClientRegex"))
  {
    m_appIdClientRegex = jsonValue.GetString("appIdClientRegex");
    m_appIdClientRegexHasBeenSet = true;
  }
  return *this;
}

JsonValue CognitoConfig::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("userPoolId", m_userPoolId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_appIdClientRegexHasBeenSet)
  {
   payload.WithString("appIdClientRegex", m_appIdClientRegex);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
