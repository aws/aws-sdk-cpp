/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/EventAccountFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

EventAccountFilter::EventAccountFilter() : 
    m_eventArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false)
{
}

EventAccountFilter::EventAccountFilter(JsonView jsonValue) : 
    m_eventArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false)
{
  *this = jsonValue;
}

EventAccountFilter& EventAccountFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventArn"))
  {
    m_eventArn = jsonValue.GetString("eventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EventAccountFilter::Jsonize() const
{
  JsonValue payload;

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("eventArn", m_eventArn);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
