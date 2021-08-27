/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/DebugSession.h>
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

DebugSession::DebugSession() : 
    m_sessionEnabled(false),
    m_sessionEnabledHasBeenSet(false),
    m_sessionTargetHasBeenSet(false)
{
}

DebugSession::DebugSession(JsonView jsonValue) : 
    m_sessionEnabled(false),
    m_sessionEnabledHasBeenSet(false),
    m_sessionTargetHasBeenSet(false)
{
  *this = jsonValue;
}

DebugSession& DebugSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionEnabled"))
  {
    m_sessionEnabled = jsonValue.GetBool("sessionEnabled");

    m_sessionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionTarget"))
  {
    m_sessionTarget = jsonValue.GetString("sessionTarget");

    m_sessionTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue DebugSession::Jsonize() const
{
  JsonValue payload;

  if(m_sessionEnabledHasBeenSet)
  {
   payload.WithBool("sessionEnabled", m_sessionEnabled);

  }

  if(m_sessionTargetHasBeenSet)
  {
   payload.WithString("sessionTarget", m_sessionTarget);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
