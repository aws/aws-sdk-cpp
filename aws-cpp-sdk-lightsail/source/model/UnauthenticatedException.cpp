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

#include <aws/lightsail/model/UnauthenticatedException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

UnauthenticatedException::UnauthenticatedException() : 
    m_codeHasBeenSet(false),
    m_docsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_tipHasBeenSet(false)
{
}

UnauthenticatedException::UnauthenticatedException(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_docsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_tipHasBeenSet(false)
{
  *this = jsonValue;
}

UnauthenticatedException& UnauthenticatedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("docs"))
  {
    m_docs = jsonValue.GetString("docs");

    m_docsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tip"))
  {
    m_tip = jsonValue.GetString("tip");

    m_tipHasBeenSet = true;
  }

  return *this;
}

JsonValue UnauthenticatedException::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_docsHasBeenSet)
  {
   payload.WithString("docs", m_docs);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_tipHasBeenSet)
  {
   payload.WithString("tip", m_tip);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
