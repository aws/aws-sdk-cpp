/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SuppressedDestinationAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

SuppressedDestinationAttributes::SuppressedDestinationAttributes() : 
    m_messageIdHasBeenSet(false),
    m_feedbackIdHasBeenSet(false)
{
}

SuppressedDestinationAttributes::SuppressedDestinationAttributes(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_feedbackIdHasBeenSet(false)
{
  *this = jsonValue;
}

SuppressedDestinationAttributes& SuppressedDestinationAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeedbackId"))
  {
    m_feedbackId = jsonValue.GetString("FeedbackId");

    m_feedbackIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SuppressedDestinationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_feedbackIdHasBeenSet)
  {
   payload.WithString("FeedbackId", m_feedbackId);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
