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
