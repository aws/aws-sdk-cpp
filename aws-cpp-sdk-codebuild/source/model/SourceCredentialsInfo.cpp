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

#include <aws/codebuild/model/SourceCredentialsInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

SourceCredentialsInfo::SourceCredentialsInfo() : 
    m_arnHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false)
{
}

SourceCredentialsInfo::SourceCredentialsInfo(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SourceCredentialsInfo& SourceCredentialsInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverType"))
  {
    m_serverType = ServerTypeMapper::GetServerTypeForName(jsonValue.GetString("serverType"));

    m_serverTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("authType"));

    m_authTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceCredentialsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("serverType", ServerTypeMapper::GetNameForServerType(m_serverType));
  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
