/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_distribution(Distribution::NOT_SET),
    m_distributionHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false)
{
}

SubscriptionFilter::SubscriptionFilter(JsonView jsonValue) : 
    m_filterNameHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_filterPatternHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_distribution(Distribution::NOT_SET),
    m_distributionHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionFilter& SubscriptionFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("distribution"))
  {
    m_distribution = DistributionMapper::GetDistributionForName(jsonValue.GetString("distribution"));

    m_distributionHasBeenSet = true;
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

  if(m_distributionHasBeenSet)
  {
   payload.WithString("distribution", DistributionMapper::GetNameForDistribution(m_distribution));
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
