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

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    API_KEY,
    AWS_IAM,
    AMAZON_COGNITO_USER_POOLS,
    OPENID_CONNECT
  };

namespace AuthenticationTypeMapper
{
AWS_APPSYNC_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
