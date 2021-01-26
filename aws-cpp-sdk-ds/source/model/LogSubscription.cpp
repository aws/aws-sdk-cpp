/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/LogSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

LogSubscription::LogSubscription() : 
    m_directoryIdHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_subscriptionCreatedDateTimeHasBeenSet(false)
{
}

LogSubscription::LogSubscription(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_subscriptionCreatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LogSubscription& LogSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogGroupName"))
  {
    m_logGroupName = jsonValue.GetString("LogGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubscriptionCreatedDateTime"))
  {
    m_subscriptionCreatedDateTime = jsonValue.GetDouble("SubscriptionCreatedDateTime");

    m_subscriptionCreatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LogSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("LogGroupName", m_logGroupName);

  }

  if(m_subscriptionCreatedDateTimeHasBeenSet)
  {
   payload.WithDouble("SubscriptionCreatedDateTime", m_subscriptionCreatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
