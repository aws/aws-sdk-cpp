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
#include <aws/email/model/NotificationType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Bounce_HASH = HashingUtils::HashString("Bounce");
static const int Complaint_HASH = HashingUtils::HashString("Complaint");
static const int Delivery_HASH = HashingUtils::HashString("Delivery");

namespace Aws
{
namespace SES
{
namespace Model
{
namespace NotificationTypeMapper
{


NotificationType GetNotificationTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Bounce_HASH)
  {
     return NotificationType::Bounce;
  }
  else if (hashCode == Complaint_HASH)
  {
     return NotificationType::Complaint;
  }
  else if (hashCode == Delivery_HASH)
  {
     return NotificationType::Delivery;
  }
  return NotificationType::NOT_SET;
}

Aws::String GetNameForNotificationType(NotificationType enumValue)
{
  switch(value)
  {
  case NotificationType::Bounce:
    return "Bounce";
  case NotificationType::Complaint:
    return "Complaint";
  case NotificationType::Delivery:
    return "Delivery";
  default:
    return "";
  }
}

} // namespace NotificationTypeMapper
} // namespace Model
} // namespace SES
} // namespace Aws
