/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PendingAggregationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

PendingAggregationRequest::PendingAggregationRequest() : 
    m_requesterAccountIdHasBeenSet(false),
    m_requesterAwsRegionHasBeenSet(false)
{
}

PendingAggregationRequest::PendingAggregationRequest(JsonView jsonValue) : 
    m_requesterAccountIdHasBeenSet(false),
    m_requesterAwsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

PendingAggregationRequest& PendingAggregationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequesterAccountId"))
  {
    m_requesterAccountId = jsonValue.GetString("RequesterAccountId");

    m_requesterAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequesterAwsRegion"))
  {
    m_requesterAwsRegion = jsonValue.GetString("RequesterAwsRegion");

    m_requesterAwsRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingAggregationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requesterAccountIdHasBeenSet)
  {
   payload.WithString("RequesterAccountId", m_requesterAccountId);

  }

  if(m_requesterAwsRegionHasBeenSet)
  {
   payload.WithString("RequesterAwsRegion", m_requesterAwsRegion);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
