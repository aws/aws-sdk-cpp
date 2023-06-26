/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/BadRequestException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

BadRequestException::BadRequestException() : 
    m_messageHasBeenSet(false),
    m_reason(BadRequestReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

BadRequestException::BadRequestException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(BadRequestReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_detailHasBeenSet(false)
{
  *this = jsonValue;
}

BadRequestException& BadRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = BadRequestReasonMapper::GetBadRequestReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("detail"))
  {
    m_detail = jsonValue.GetObject("detail");

    m_detailHasBeenSet = true;
  }

  return *this;
}

JsonValue BadRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", BadRequestReasonMapper::GetNameForBadRequestReason(m_reason));
  }

  if(m_detailHasBeenSet)
  {
   payload.WithObject("detail", m_detail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
