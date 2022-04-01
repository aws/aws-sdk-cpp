/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/InboundCrossClusterSearchConnectionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

InboundCrossClusterSearchConnectionStatus::InboundCrossClusterSearchConnectionStatus() : 
    m_statusCode(InboundCrossClusterSearchConnectionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InboundCrossClusterSearchConnectionStatus::InboundCrossClusterSearchConnectionStatus(JsonView jsonValue) : 
    m_statusCode(InboundCrossClusterSearchConnectionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InboundCrossClusterSearchConnectionStatus& InboundCrossClusterSearchConnectionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = InboundCrossClusterSearchConnectionStatusCodeMapper::GetInboundCrossClusterSearchConnectionStatusCodeForName(jsonValue.GetString("StatusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InboundCrossClusterSearchConnectionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", InboundCrossClusterSearchConnectionStatusCodeMapper::GetNameForInboundCrossClusterSearchConnectionStatusCode(m_statusCode));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
