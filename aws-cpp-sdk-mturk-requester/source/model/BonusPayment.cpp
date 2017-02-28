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
#include <aws/mturk-requester/model/BonusPayment.h>
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

BonusPayment::BonusPayment() : 
    m_workerIdHasBeenSet(false),
    m_bonusAmountHasBeenSet(false),
    m_assignmentIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_grantTimeHasBeenSet(false)
{
}

BonusPayment::BonusPayment(const JsonValue& jsonValue) : 
    m_workerIdHasBeenSet(false),
    m_bonusAmountHasBeenSet(false),
    m_assignmentIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_grantTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BonusPayment& BonusPayment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BonusAmount"))
  {
    m_bonusAmount = jsonValue.GetString("BonusAmount");

    m_bonusAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignmentId"))
  {
    m_assignmentId = jsonValue.GetString("AssignmentId");

    m_assignmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantTime"))
  {
    m_grantTime = jsonValue.GetDouble("GrantTime");

    m_grantTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BonusPayment::Jsonize() const
{
  JsonValue payload;

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_bonusAmountHasBeenSet)
  {
   payload.WithString("BonusAmount", m_bonusAmount);

  }

  if(m_assignmentIdHasBeenSet)
  {
   payload.WithString("AssignmentId", m_assignmentId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_grantTimeHasBeenSet)
  {
   payload.WithDouble("GrantTime", m_grantTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws