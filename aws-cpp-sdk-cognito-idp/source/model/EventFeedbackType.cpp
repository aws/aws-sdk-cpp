/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

EventFeedbackType::EventFeedbackType(JsonView jsonValue) : 
    m_feedbackValue(FeedbackValueType::NOT_SET),
    m_feedbackValueHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_feedbackDateHasBeenSet(false)
{
  *this = jsonValue;
}

EventFeedbackType& EventFeedbackType::operator =(JsonView jsonValue)
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
