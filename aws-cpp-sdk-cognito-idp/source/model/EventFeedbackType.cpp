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

#include <aws/cognito-idp/model/EventFeedbackType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

EventFeedbackType::EventFeedbackType() : 
    m_feedbackValue(FeedbackValueType::NOT_SET),
    m_feedbackValueHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_feedbackDateHasBeenSet(false)
{
}

EventFeedbackType::EventFeedbackType(const JsonValue& jsonValue) : 
    m_feedbackValue(FeedbackValueType::NOT_SET),
    m_feedbackValueHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_feedbackDateHasBeenSet(false)
{
  *this = jsonValue;
}

EventFeedbackType& EventFeedbackType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FeedbackValue"))
  {
    m_feedbackValue = FeedbackValueTypeMapper::GetFeedbackValueTypeForName(jsonValue.GetString("FeedbackValue"));

    m_feedbackValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Provider"))
  {
    m_provider = jsonValue.GetString("Provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeedbackDate"))
  {
    m_feedbackDate = jsonValue.GetDouble("FeedbackDate");

    m_feedbackDateHasBeenSet = true;
  }

  return *this;
}

JsonValue EventFeedbackType::Jsonize() const
{
  JsonValue payload;

  if(m_feedbackValueHasBeenSet)
  {
   payload.WithString("FeedbackValue", FeedbackValueTypeMapper::GetNameForFeedbackValueType(m_feedbackValue));
  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", m_provider);

  }

  if(m_feedbackDateHasBeenSet)
  {
   payload.WithDouble("FeedbackDate", m_feedbackDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
