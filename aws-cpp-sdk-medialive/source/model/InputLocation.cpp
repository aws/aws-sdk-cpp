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

#include <aws/medialive/model/InputLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputLocation::InputLocation() : 
    m_passwordParamHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

InputLocation::InputLocation(const JsonValue& jsonValue) : 
    m_passwordParamHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

InputLocation& InputLocation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("passwordParam"))
  {
    m_passwordParam = jsonValue.GetString("passwordParam");

    m_passwordParamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue InputLocation::Jsonize() const
{
  JsonValue payload;

  if(m_passwordParamHasBeenSet)
  {
   payload.WithString("passwordParam", m_passwordParam);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
