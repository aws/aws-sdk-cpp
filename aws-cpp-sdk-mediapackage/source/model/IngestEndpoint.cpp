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

#include <aws/mediapackage/model/IngestEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

IngestEndpoint::IngestEndpoint() : 
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

IngestEndpoint::IngestEndpoint(const JsonValue& jsonValue) : 
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

IngestEndpoint& IngestEndpoint::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
