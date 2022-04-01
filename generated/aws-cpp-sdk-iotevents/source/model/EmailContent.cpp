/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/EmailContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

EmailContent::EmailContent() : 
    m_subjectHasBeenSet(false),
    m_additionalMessageHasBeenSet(false)
{
}

EmailContent::EmailContent(JsonView jsonValue) : 
    m_subjectHasBeenSet(false),
    m_additionalMessageHasBeenSet(false)
{
  *this = jsonValue;
}

EmailContent& EmailContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetString("subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalMessage"))
  {
    m_additionalMessage = jsonValue.GetString("additionalMessage");

    m_additionalMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailContent::Jsonize() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

  }

  if(m_additionalMessageHasBeenSet)
  {
   payload.WithString("additionalMessage", m_additionalMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
