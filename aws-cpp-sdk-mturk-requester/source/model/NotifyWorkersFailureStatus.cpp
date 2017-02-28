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
#include <aws/mturk-requester/model/NotifyWorkersFailureStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

NotifyWorkersFailureStatus::NotifyWorkersFailureStatus() : 
    m_notifyWorkersFailureCode(NotifyWorkersFailureCode::NOT_SET),
    m_notifyWorkersFailureCodeHasBeenSet(false),
    m_notifyWorkersFailureMessageHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

NotifyWorkersFailureStatus::NotifyWorkersFailureStatus(const JsonValue& jsonValue) : 
    m_notifyWorkersFailureCode(NotifyWorkersFailureCode::NOT_SET),
    m_notifyWorkersFailureCodeHasBeenSet(false),
    m_notifyWorkersFailureMessageHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
  *this = jsonValue;
}

NotifyWorkersFailureStatus& NotifyWorkersFailureStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("NotifyWorkersFailureCode"))
  {
    m_notifyWorkersFailureCode = NotifyWorkersFailureCodeMapper::GetNotifyWorkersFailureCodeForName(jsonValue.GetString("NotifyWorkersFailureCode"));

    m_notifyWorkersFailureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotifyWorkersFailureMessage"))
  {
    m_notifyWorkersFailureMessage = jsonValue.GetString("NotifyWorkersFailureMessage");

    m_notifyWorkersFailureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NotifyWorkersFailureStatus::Jsonize() const
{
  JsonValue payload;

  if(m_notifyWorkersFailureCodeHasBeenSet)
  {
   payload.WithString("NotifyWorkersFailureCode", NotifyWorkersFailureCodeMapper::GetNameForNotifyWorkersFailureCode(m_notifyWorkersFailureCode));
  }

  if(m_notifyWorkersFailureMessageHasBeenSet)
  {
   payload.WithString("NotifyWorkersFailureMessage", m_notifyWorkersFailureMessage);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws