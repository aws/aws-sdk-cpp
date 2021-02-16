/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundCallerConfig.h>
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

OutboundCallerConfig::OutboundCallerConfig() : 
    m_outboundCallerIdNameHasBeenSet(false),
    m_outboundCallerIdNumberIdHasBeenSet(false),
    m_outboundFlowIdHasBeenSet(false)
{
}

OutboundCallerConfig::OutboundCallerConfig(JsonView jsonValue) : 
    m_outboundCallerIdNameHasBeenSet(false),
    m_outboundCallerIdNumberIdHasBeenSet(false),
    m_outboundFlowIdHasBeenSet(false)
{
  *this = jsonValue;
}

OutboundCallerConfig& OutboundCallerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutboundCallerIdName"))
  {
    m_outboundCallerIdName = jsonValue.GetString("OutboundCallerIdName");

    m_outboundCallerIdNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundCallerIdNumberId"))
  {
    m_outboundCallerIdNumberId = jsonValue.GetString("OutboundCallerIdNumberId");

    m_outboundCallerIdNumberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundFlowId"))
  {
    m_outboundFlowId = jsonValue.GetString("OutboundFlowId");

    m_outboundFlowIdHasBeenSet = true;
  }

  return *this;
}

JsonValue OutboundCallerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_outboundCallerIdNameHasBeenSet)
  {
   payload.WithString("OutboundCallerIdName", m_outboundCallerIdName);

  }

  if(m_outboundCallerIdNumberIdHasBeenSet)
  {
   payload.WithString("OutboundCallerIdNumberId", m_outboundCallerIdNumberId);

  }

  if(m_outboundFlowIdHasBeenSet)
  {
   payload.WithString("OutboundFlowId", m_outboundFlowId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
