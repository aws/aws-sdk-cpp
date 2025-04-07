/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/SSMSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

SSMSession::SSMSession(JsonView jsonValue)
{
  *this = jsonValue;
}

SSMSession& SSMSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenValue"))
  {
    m_tokenValue = jsonValue.GetString("tokenValue");
    m_tokenValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamUrl"))
  {
    m_streamUrl = jsonValue.GetString("streamUrl");
    m_streamUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue SSMSession::Jsonize() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_tokenValueHasBeenSet)
  {
   payload.WithString("tokenValue", m_tokenValue);

  }

  if(m_streamUrlHasBeenSet)
  {
   payload.WithString("streamUrl", m_streamUrl);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
