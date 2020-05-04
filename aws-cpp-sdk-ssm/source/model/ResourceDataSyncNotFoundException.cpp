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

#include <aws/ssm/model/ResourceDataSyncNotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncNotFoundException::ResourceDataSyncNotFoundException() : 
    m_syncNameHasBeenSet(false),
    m_syncTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ResourceDataSyncNotFoundException::ResourceDataSyncNotFoundException(JsonView jsonValue) : 
    m_syncNameHasBeenSet(false),
    m_syncTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncNotFoundException& ResourceDataSyncNotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SyncName"))
  {
    m_syncName = jsonValue.GetString("SyncName");

    m_syncNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncType"))
  {
    m_syncType = jsonValue.GetString("SyncType");

    m_syncTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncNotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", m_syncType);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
