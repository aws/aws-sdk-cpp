/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Session.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Session::Session() : 
    m_sessionIdHasBeenSet(false),
    m_streamUrlHasBeenSet(false),
    m_tokenValueHasBeenSet(false)
{
}

Session::Session(JsonView jsonValue) : 
    m_sessionIdHasBeenSet(false),
    m_streamUrlHasBeenSet(false),
    m_tokenValueHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamUrl"))
  {
    m_streamUrl = jsonValue.GetString("streamUrl");

    m_streamUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenValue"))
  {
    m_tokenValue = jsonValue.GetString("tokenValue");

    m_tokenValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Session::Jsonize() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_streamUrlHasBeenSet)
  {
   payload.WithString("streamUrl", m_streamUrl);

  }

  if(m_tokenValueHasBeenSet)
  {
   payload.WithString("tokenValue", m_tokenValue);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
