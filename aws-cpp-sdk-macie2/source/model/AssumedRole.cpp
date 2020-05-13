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

#include <aws/macie2/model/AssumedRole.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

AssumedRole::AssumedRole() : 
    m_accessKeyIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

AssumedRole::AssumedRole(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
  *this = jsonValue;
}

AssumedRole& AssumedRole::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionContext"))
  {
    m_sessionContext = jsonValue.GetObject("sessionContext");

    m_sessionContextHasBeenSet = true;
  }

  return *this;
}

JsonValue AssumedRole::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  if(m_sessionContextHasBeenSet)
  {
   payload.WithObject("sessionContext", m_sessionContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
