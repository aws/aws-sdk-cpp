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

#include <aws/elasticmapreduce/model/CancelStepsInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

CancelStepsInfo::CancelStepsInfo() : 
    m_stepIdHasBeenSet(false),
    m_status(CancelStepsRequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CancelStepsInfo::CancelStepsInfo(const JsonValue& jsonValue) : 
    m_stepIdHasBeenSet(false),
    m_status(CancelStepsRequestStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

CancelStepsInfo& CancelStepsInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StepId"))
  {
    m_stepId = jsonValue.GetString("StepId");

    m_stepIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CancelStepsRequestStatusMapper::GetCancelStepsRequestStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CancelStepsInfo::Jsonize() const
{
  JsonValue payload;

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("StepId", m_stepId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CancelStepsRequestStatusMapper::GetNameForCancelStepsRequestStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws