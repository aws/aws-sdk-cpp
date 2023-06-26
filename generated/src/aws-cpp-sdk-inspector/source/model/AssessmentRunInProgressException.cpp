/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentRunInProgressException.h>
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

AssessmentRunInProgressException::AssessmentRunInProgressException() : 
    m_messageHasBeenSet(false),
    m_assessmentRunArnsHasBeenSet(false),
    m_assessmentRunArnsTruncated(false),
    m_assessmentRunArnsTruncatedHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
}

AssessmentRunInProgressException::AssessmentRunInProgressException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_assessmentRunArnsHasBeenSet(false),
    m_assessmentRunArnsTruncated(false),
    m_assessmentRunArnsTruncatedHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentRunInProgressException& AssessmentRunInProgressException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentRunArns"))
  {
    Aws::Utils::Array<JsonView> assessmentRunArnsJsonList = jsonValue.GetArray("assessmentRunArns");
    for(unsigned assessmentRunArnsIndex = 0; assessmentRunArnsIndex < assessmentRunArnsJsonList.GetLength(); ++assessmentRunArnsIndex)
    {
      m_assessmentRunArns.push_back(assessmentRunArnsJsonList[assessmentRunArnsIndex].AsString());
    }
    m_assessmentRunArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentRunArnsTruncated"))
  {
    m_assessmentRunArnsTruncated = jsonValue.GetBool("assessmentRunArnsTruncated");

    m_assessmentRunArnsTruncatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canRetry"))
  {
    m_canRetry = jsonValue.GetBool("canRetry");

    m_canRetryHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentRunInProgressException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_assessmentRunArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assessmentRunArnsJsonList(m_assessmentRunArns.size());
   for(unsigned assessmentRunArnsIndex = 0; assessmentRunArnsIndex < assessmentRunArnsJsonList.GetLength(); ++assessmentRunArnsIndex)
   {
     assessmentRunArnsJsonList[assessmentRunArnsIndex].AsString(m_assessmentRunArns[assessmentRunArnsIndex]);
   }
   payload.WithArray("assessmentRunArns", std::move(assessmentRunArnsJsonList));

  }

  if(m_assessmentRunArnsTruncatedHasBeenSet)
  {
   payload.WithBool("assessmentRunArnsTruncated", m_assessmentRunArnsTruncated);

  }

  if(m_canRetryHasBeenSet)
  {
   payload.WithBool("canRetry", m_canRetry);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
