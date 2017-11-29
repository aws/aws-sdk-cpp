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

#include <aws/appsync/model/ApiKey.h>
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

ApiKey::ApiKey() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false)
{
}

ApiKey::ApiKey(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false)
{
  *this = jsonValue;
}

ApiKey& ApiKey::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expires"))
  {
    m_expires = jsonValue.GetInt64("expires");

    m_expiresHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiKey::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_expiresHasBeenSet)
  {
   payload.WithInt64("expires", m_expires);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
