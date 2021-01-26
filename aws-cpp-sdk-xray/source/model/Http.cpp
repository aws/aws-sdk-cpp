/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/Http.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

Http::Http() : 
    m_httpURLHasBeenSet(false),
    m_httpStatus(0),
    m_httpStatusHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_clientIpHasBeenSet(false)
{
}

Http::Http(JsonView jsonValue) : 
    m_httpURLHasBeenSet(false),
    m_httpStatus(0),
    m_httpStatusHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_clientIpHasBeenSet(false)
{
  *this = jsonValue;
}

Http& Http::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpURL"))
  {
    m_httpURL = jsonValue.GetString("HttpURL");

    m_httpURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpStatus"))
  {
    m_httpStatus = jsonValue.GetInteger("HttpStatus");

    m_httpStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpMethod"))
  {
    m_httpMethod = jsonValue.GetString("HttpMethod");

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserAgent"))
  {
    m_userAgent = jsonValue.GetString("UserAgent");

    m_userAgentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientIp"))
  {
    m_clientIp = jsonValue.GetString("ClientIp");

    m_clientIpHasBeenSet = true;
  }

  return *this;
}

JsonValue Http::Jsonize() const
{
  JsonValue payload;

  if(m_httpURLHasBeenSet)
  {
   payload.WithString("HttpURL", m_httpURL);

  }

  if(m_httpStatusHasBeenSet)
  {
   payload.WithInteger("HttpStatus", m_httpStatus);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("HttpMethod", m_httpMethod);

  }

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("UserAgent", m_userAgent);

  }

  if(m_clientIpHasBeenSet)
  {
   payload.WithString("ClientIp", m_clientIp);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
