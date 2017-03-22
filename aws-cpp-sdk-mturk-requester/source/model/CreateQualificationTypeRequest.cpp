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
#include <aws/mturk-requester/model/CreateQualificationTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateQualificationTypeRequest::CreateQualificationTypeRequest() : 
    m_nameHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_qualificationTypeStatus(QualificationTypeStatus::NOT_SET),
    m_qualificationTypeStatusHasBeenSet(false),
    m_retryDelayInSeconds(0),
    m_retryDelayInSecondsHasBeenSet(false),
    m_testHasBeenSet(false),
    m_answerKeyHasBeenSet(false),
    m_testDurationInSeconds(0),
    m_testDurationInSecondsHasBeenSet(false),
    m_autoGranted(false),
    m_autoGrantedHasBeenSet(false),
    m_autoGrantedValue(0),
    m_autoGrantedValueHasBeenSet(false)
{
}

Aws::String CreateQualificationTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_keywordsHasBeenSet)
  {
   payload.WithString("Keywords", m_keywords);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_qualificationTypeStatusHasBeenSet)
  {
   payload.WithString("QualificationTypeStatus", QualificationTypeStatusMapper::GetNameForQualificationTypeStatus(m_qualificationTypeStatus));
  }

  if(m_retryDelayInSecondsHasBeenSet)
  {
   payload.WithInt64("RetryDelayInSeconds", m_retryDelayInSeconds);

  }

  if(m_testHasBeenSet)
  {
   payload.WithString("Test", m_test);

  }

  if(m_answerKeyHasBeenSet)
  {
   payload.WithString("AnswerKey", m_answerKey);

  }

  if(m_testDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("TestDurationInSeconds", m_testDurationInSeconds);

  }

  if(m_autoGrantedHasBeenSet)
  {
   payload.WithBool("AutoGranted", m_autoGranted);

  }

  if(m_autoGrantedValueHasBeenSet)
  {
   payload.WithInteger("AutoGrantedValue", m_autoGrantedValue);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateQualificationTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.CreateQualificationType"));
  return headers;

}




