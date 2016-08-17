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
#include <aws/logs/model/SubscriptionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

SubscriptionFilter::SubscriptionFilter() : 
    m_filterNameHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false)
{
}

SubscriptionFilter::SubscriptionFilter(const JsonValue& jsonValue) : 
    m_filterNameHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionFilter& SubscriptionFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("filterName"))
  {
    m_filterName = jsonValue.GetString("filterName");

    m_filterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterPattern"))
  {
    m_filterPattern = jsonValue.GetString("filterPattern");

    m_filterPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationArn"))
  {
    m_destinationArn = jsonValue.GetString("destinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetInt64("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscriptionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterNameHasBeenSet)
  {
   payload.WithString("filterName", m_filterName);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_filterPatternHasBeenSet)
  {
   payload.WithString("filterPattern", m_filterPattern);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("creationTime", m_creationTime);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws