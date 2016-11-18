/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

TransitionState::TransitionState(const JsonValue& jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_lastChangedByHasBeenSet(false),
    m_lastChangedAtHasBeenSet(false),
    m_disabledReasonHasBeenSet(false)
{
  *this = jsonValue;
}

TransitionState& TransitionState::operator =(const JsonValue& jsonValue)
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