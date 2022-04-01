/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/TransitionState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

TransitionState::TransitionState() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lastChangedByHasBeenSet(false),
    m_lastChangedAtHasBeenSet(false),
    m_disabledReasonHasBeenSet(false)
{
}

TransitionState::TransitionState(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lastChangedByHasBeenSet(false),
    m_lastChangedAtHasBeenSet(false),
    m_disabledReasonHasBeenSet(false)
{
  *this = jsonValue;
}

TransitionState& TransitionState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastChangedBy"))
  {
    m_lastChangedBy = jsonValue.GetString("lastChangedBy");

    m_lastChangedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastChangedAt"))
  {
    m_lastChangedAt = jsonValue.GetDouble("lastChangedAt");

    m_lastChangedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disabledReason"))
  {
    m_disabledReason = jsonValue.GetString("disabledReason");

    m_disabledReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue TransitionState::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_lastChangedByHasBeenSet)
  {
   payload.WithString("lastChangedBy", m_lastChangedBy);

  }

  if(m_lastChangedAtHasBeenSet)
  {
   payload.WithDouble("lastChangedAt", m_lastChangedAt.SecondsWithMSPrecision());
  }

  if(m_disabledReasonHasBeenSet)
  {
   payload.WithString("disabledReason", m_disabledReason);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
