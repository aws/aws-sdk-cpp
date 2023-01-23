/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentStatusReference.h>
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

AgentStatusReference::AgentStatusReference() : 
    m_statusStartTimestampHasBeenSet(false),
    m_statusArnHasBeenSet(false),
    m_statusNameHasBeenSet(false)
{
}

AgentStatusReference::AgentStatusReference(JsonView jsonValue) : 
    m_statusStartTimestampHasBeenSet(false),
    m_statusArnHasBeenSet(false),
    m_statusNameHasBeenSet(false)
{
  *this = jsonValue;
}

AgentStatusReference& AgentStatusReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusStartTimestamp"))
  {
    m_statusStartTimestamp = jsonValue.GetDouble("StatusStartTimestamp");

    m_statusStartTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusArn"))
  {
    m_statusArn = jsonValue.GetString("StatusArn");

    m_statusArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusName"))
  {
    m_statusName = jsonValue.GetString("StatusName");

    m_statusNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentStatusReference::Jsonize() const
{
  JsonValue payload;

  if(m_statusStartTimestampHasBeenSet)
  {
   payload.WithDouble("StatusStartTimestamp", m_statusStartTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusArnHasBeenSet)
  {
   payload.WithString("StatusArn", m_statusArn);

  }

  if(m_statusNameHasBeenSet)
  {
   payload.WithString("StatusName", m_statusName);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
