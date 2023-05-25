/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/ServiceUnavailableException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

ServiceUnavailableException::ServiceUnavailableException() : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_retryAfterSecondsHasBeenSet(false)
{
}

ServiceUnavailableException::ServiceUnavailableException(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_retryAfterSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceUnavailableException& ServiceUnavailableException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceUnavailableException::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
