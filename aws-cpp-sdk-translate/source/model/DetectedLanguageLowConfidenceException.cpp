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

#include <aws/translate/model/DetectedLanguageLowConfidenceException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

DetectedLanguageLowConfidenceException::DetectedLanguageLowConfidenceException() : 
    m_messageHasBeenSet(false),
    m_detectedLanguageCodeHasBeenSet(false)
{
}

DetectedLanguageLowConfidenceException::DetectedLanguageLowConfidenceException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_detectedLanguageCodeHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedLanguageLowConfidenceException& DetectedLanguageLowConfidenceException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetectedLanguageCode"))
  {
    m_detectedLanguageCode = jsonValue.GetString("DetectedLanguageCode");

    m_detectedLanguageCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedLanguageLowConfidenceException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_detectedLanguageCodeHasBeenSet)
  {
   payload.WithString("DetectedLanguageCode", m_detectedLanguageCode);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
