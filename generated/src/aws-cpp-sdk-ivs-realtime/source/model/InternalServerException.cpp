/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/InternalServerException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

InternalServerException::InternalServerException() : 
    m_accessControlAllowOriginHasBeenSet(false),
    m_accessControlExposeHeadersHasBeenSet(false),
    m_cacheControlHasBeenSet(false),
    m_contentSecurityPolicyHasBeenSet(false),
    m_strictTransportSecurityHasBeenSet(false),
    m_xContentTypeOptionsHasBeenSet(false),
    m_xFrameOptionsHasBeenSet(false),
    m_xAmznErrorTypeHasBeenSet(false),
    m_exceptionMessageHasBeenSet(false)
{
}

InternalServerException::InternalServerException(JsonView jsonValue)
  : InternalServerException()
{
  *this = jsonValue;
}

InternalServerException& InternalServerException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exceptionMessage"))
  {
    m_exceptionMessage = jsonValue.GetString("exceptionMessage");

    m_exceptionMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue InternalServerException::Jsonize() const
{
  JsonValue payload;

  if(m_exceptionMessageHasBeenSet)
  {
   payload.WithString("exceptionMessage", m_exceptionMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
