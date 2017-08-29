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

#include <aws/inspector/model/AssessmentRunStateChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AssessmentRunStateChange::AssessmentRunStateChange() : 
    m_stateChangedAtHasBeenSet(false),
    m_state(AssessmentRunState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

AssessmentRunStateChange::AssessmentRunStateChange(const JsonValue& jsonValue) : 
    m_stateChangedAtHasBeenSet(false),
    m_state(AssessmentRunState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentRunStateChange& AssessmentRunStateChange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("stateChangedAt"))
  {
    m_stateChangedAt = jsonValue.GetDouble("stateChangedAt");

    m_stateChangedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = AssessmentRunStateMapper::GetAssessmentRunStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentRunStateChange::Jsonize() const
{
  JsonValue payload;

  if(m_stateChangedAtHasBeenSet)
  {
   payload.WithDouble("stateChangedAt", m_stateChangedAt.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AssessmentRunStateMapper::GetNameForAssessmentRunState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
