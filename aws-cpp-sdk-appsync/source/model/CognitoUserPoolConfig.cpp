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

#include <aws/appsync/model/CognitoUserPoolConfig.h>
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

CognitoUserPoolConfig::CognitoUserPoolConfig() : 
    m_userPoolIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_appIdClientRegexHasBeenSet(false)
{
}

CognitoUserPoolConfig::CognitoUserPoolConfig(JsonView jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_appIdClientRegexHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoUserPoolConfig& CognitoUserPoolConfig::operator =(JsonView jsonValue)
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

JsonValue CognitoUserPoolConfig::Jsonize() const
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
