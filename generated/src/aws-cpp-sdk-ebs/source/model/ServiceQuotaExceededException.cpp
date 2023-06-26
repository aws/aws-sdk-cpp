/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ServiceQuotaExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EBS
{
namespace Model
{

ServiceQuotaExceededException::ServiceQuotaExceededException() : 
    m_messageHasBeenSet(false),
    m_reason(ServiceQuotaExceededExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ServiceQuotaExceededException::ServiceQuotaExceededException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(ServiceQuotaExceededExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceQuotaExceededException& ServiceQuotaExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ServiceQuotaExceededExceptionReasonMapper::GetServiceQuotaExceededExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceQuotaExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ServiceQuotaExceededExceptionReasonMapper::GetNameForServiceQuotaExceededExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace EBS
} // namespace Aws
