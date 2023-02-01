/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/InvalidRequestException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

InvalidRequestException::InvalidRequestException() : 
    m_messageHasBeenSet(false),
    m_reason(InvalidRequestReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

InvalidRequestException::InvalidRequestException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(InvalidRequestReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_detailHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidRequestException& InvalidRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = InvalidRequestReasonMapper::GetInvalidRequestReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Detail"))
  {
    m_detail = jsonValue.GetObject("Detail");

    m_detailHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", InvalidRequestReasonMapper::GetNameForInvalidRequestReason(m_reason));
  }

  if(m_detailHasBeenSet)
  {
   payload.WithObject("Detail", m_detail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
