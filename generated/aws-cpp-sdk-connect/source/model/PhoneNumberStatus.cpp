/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

PhoneNumberStatus::PhoneNumberStatus() : 
    m_status(PhoneNumberWorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

PhoneNumberStatus::PhoneNumberStatus(JsonView jsonValue) : 
    m_status(PhoneNumberWorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

PhoneNumberStatus& PhoneNumberStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PhoneNumberWorkflowStatusMapper::GetPhoneNumberWorkflowStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue PhoneNumberStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PhoneNumberWorkflowStatusMapper::GetNameForPhoneNumberWorkflowStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
