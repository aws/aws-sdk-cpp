﻿/*
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
