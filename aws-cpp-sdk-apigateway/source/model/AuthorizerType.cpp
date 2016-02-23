/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/AuthorizerType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int TOKEN_HASH = HashingUtils::HashString("TOKEN");

namespace Aws
{
namespace APIGateway
{
namespace Model
{
namespace AuthorizerTypeMapper
{
AuthorizerType GetAuthorizerTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == TOKEN_HASH)
  {
    return AuthorizerType::TOKEN;
  }

  return AuthorizerType::NOT_SET;
}

Aws::String GetNameForAuthorizerType(AuthorizerType value)
{
  switch(value)
  {
  case AuthorizerType::TOKEN:
    return "TOKEN";
  default:
    return "";
  }
}

} // namespace AuthorizerTypeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
