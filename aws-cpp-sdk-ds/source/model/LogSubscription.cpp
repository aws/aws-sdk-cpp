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
