/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/synthetics/model/CanaryRunStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryRunStatus::CanaryRunStatus() : 
    m_state(CanaryRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonCode(CanaryRunStateReasonCode::NOT_SET),
    m_stateReasonCodeHasBeenSet(false)
{
}

CanaryRunStatus::CanaryRunStatus(JsonView jsonValue) : 
    m_state(CanaryRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonCode(CanaryRunStateReasonCode::NOT_SET),
    m_stateReasonCodeHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryRunStatus& CanaryRunStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = CanaryRunStateMapper::GetCanaryRunStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReasonCode"))
  {
    m_stateReasonCode = CanaryRunStateReasonCodeMapper::GetCanaryRunStateReasonCodeForName(jsonValue.GetString("StateReasonCode"));

    m_stateReasonCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryRunStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CanaryRunStateMapper::GetNameForCanaryRunState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_stateReasonCodeHasBeenSet)
  {
   payload.WithString("StateReasonCode", CanaryRunStateReasonCodeMapper::GetNameForCanaryRunStateReasonCode(m_stateReasonCode));
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
