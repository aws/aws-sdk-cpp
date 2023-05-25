/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QueueQuickConnectConfig.h>
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

QueueQuickConnectConfig::QueueQuickConnectConfig() : 
    m_queueIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false)
{
}

QueueQuickConnectConfig::QueueQuickConnectConfig(JsonView jsonValue) : 
    m_queueIdHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false)
{
  *this = jsonValue;
}

QueueQuickConnectConfig& QueueQuickConnectConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueueId"))
  {
    m_queueId = jsonValue.GetString("QueueId");

    m_queueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactFlowId"))
  {
    m_contactFlowId = jsonValue.GetString("ContactFlowId");

    m_contactFlowIdHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueQuickConnectConfig::Jsonize() const
{
  JsonValue payload;

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("QueueId", m_queueId);

  }

  if(m_contactFlowIdHasBeenSet)
  {
   payload.WithString("ContactFlowId", m_contactFlowId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
