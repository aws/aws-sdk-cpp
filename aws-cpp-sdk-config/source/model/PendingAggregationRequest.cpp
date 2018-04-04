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

PendingAggregationRequest::PendingAggregationRequest(const JsonValue& jsonValue) : 
    m_requesterAccountIdHasBeenSet(false),
    m_requesterAwsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

PendingAggregationRequest& PendingAggregationRequest::operator =(const JsonValue& jsonValue)
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
