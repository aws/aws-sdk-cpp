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
#include <aws/mturk-requester/model/QualificationRequest.h>
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

QualificationRequest::QualificationRequest() : 
    m_qualificationRequestIdHasBeenSet(false),
    m_qualificationTypeIdHasBeenSet(false),
    m_workerIdHasBeenSet(false),
    m_testHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_submitTimeHasBeenSet(false)
{
}

QualificationRequest::QualificationRequest(const JsonValue& jsonValue) : 
    m_qualificationRequestIdHasBeenSet(false),
    m_qualificationTypeIdHasBeenSet(false),
    m_workerIdHasBeenSet(false),
    m_testHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_submitTimeHasBeenSet(false)
{
  *this = jsonValue;
}

QualificationRequest& QualificationRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("QualificationRequestId"))
  {
    m_qualificationRequestId = jsonValue.GetString("QualificationRequestId");

    m_qualificationRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QualificationTypeId"))
  {
    m_qualificationTypeId = jsonValue.GetString("QualificationTypeId");

    m_qualificationTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Test"))
  {
    m_test = jsonValue.GetString("Test");

    m_testHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Answer"))
  {
    m_answer = jsonValue.GetString("Answer");

    m_answerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTime"))
  {
    m_submitTime = jsonValue.GetDouble("SubmitTime");

    m_submitTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue QualificationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_qualificationRequestIdHasBeenSet)
  {
   payload.WithString("QualificationRequestId", m_qualificationRequestId);

  }

  if(m_qualificationTypeIdHasBeenSet)
  {
   payload.WithString("QualificationTypeId", m_qualificationTypeId);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_testHasBeenSet)
  {
   payload.WithString("Test", m_test);

  }

  if(m_answerHasBeenSet)
  {
   payload.WithString("Answer", m_answer);

  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("SubmitTime", m_submitTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws