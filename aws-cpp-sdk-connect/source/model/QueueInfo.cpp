/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QueueInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

QueueInfo::QueueInfo() : 
    m_idHasBeenSet(false),
    m_enqueueTimestampHasBeenSet(false)
{
}

QueueInfo::QueueInfo(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_enqueueTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

QueueInfo& QueueInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnqueueTimestamp"))
  {
    m_enqueueTimestamp = jsonValue.GetDouble("EnqueueTimestamp");

    m_enqueueTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_enqueueTimestampHasBeenSet)
  {
   payload.WithDouble("EnqueueTimestamp", m_enqueueTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
