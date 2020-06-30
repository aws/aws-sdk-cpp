/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
