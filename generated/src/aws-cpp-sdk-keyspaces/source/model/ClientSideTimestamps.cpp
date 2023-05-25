/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ClientSideTimestamps.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

ClientSideTimestamps::ClientSideTimestamps() : 
    m_status(ClientSideTimestampsStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ClientSideTimestamps::ClientSideTimestamps(JsonView jsonValue) : 
    m_status(ClientSideTimestampsStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ClientSideTimestamps& ClientSideTimestamps::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ClientSideTimestampsStatusMapper::GetClientSideTimestampsStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientSideTimestamps::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ClientSideTimestampsStatusMapper::GetNameForClientSideTimestampsStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
