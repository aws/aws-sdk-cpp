/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentRunNotification.h>
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

AssessmentRunNotification::AssessmentRunNotification() : 
    m_dateHasBeenSet(false),
    m_event(InspectorEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_error(false),
    m_errorHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsPublishStatusCode(AssessmentRunNotificationSnsStatusCode::NOT_SET),
    m_snsPublishStatusCodeHasBeenSet(false)
{
}

AssessmentRunNotification::AssessmentRunNotification(JsonView jsonValue) : 
    m_dateHasBeenSet(false),
    m_event(InspectorEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_error(false),
    m_errorHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsPublishStatusCode(AssessmentRunNotificationSnsStatusCode::NOT_SET),
    m_snsPublishStatusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentRunNotification& AssessmentRunNotification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetDouble("date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("event"))
  {
    m_event = InspectorEventMapper::GetInspectorEventForName(jsonValue.GetString("event"));

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetBool("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("snsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snsPublishStatusCode"))
  {
    m_snsPublishStatusCode = AssessmentRunNotificationSnsStatusCodeMapper::GetAssessmentRunNotificationSnsStatusCodeForName(jsonValue.GetString("snsPublishStatusCode"));

    m_snsPublishStatusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentRunNotification::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("date", m_date.SecondsWithMSPrecision());
  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", InspectorEventMapper::GetNameForInspectorEvent(m_event));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithBool("error", m_error);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("snsTopicArn", m_snsTopicArn);

  }

  if(m_snsPublishStatusCodeHasBeenSet)
  {
   payload.WithString("snsPublishStatusCode", AssessmentRunNotificationSnsStatusCodeMapper::GetNameForAssessmentRunNotificationSnsStatusCode(m_snsPublishStatusCode));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
