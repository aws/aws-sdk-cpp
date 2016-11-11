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
#include <aws/machinelearning/model/RealtimeEndpointInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

RealtimeEndpointInfo::RealtimeEndpointInfo() : 
    m_peakRequestsPerSecond(0),
    m_peakRequestsPerSecondHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_endpointStatus(RealtimeEndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false)
{
}

RealtimeEndpointInfo::RealtimeEndpointInfo(const JsonValue& jsonValue) : 
    m_peakRequestsPerSecond(0),
    m_peakRequestsPerSecondHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_endpointStatus(RealtimeEndpointStatus::NOT_SET),
    m_endpointStatusHasBeenSet(false)
{
  *this = jsonValue;
}

RealtimeEndpointInfo& RealtimeEndpointInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PeakRequestsPerSecond"))
  {
    m_peakRequestsPerSecond = jsonValue.GetInteger("PeakRequestsPerSecond");

    m_peakRequestsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointUrl"))
  {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");

    m_endpointUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointStatus"))
  {
    m_endpointStatus = RealtimeEndpointStatusMapper::GetRealtimeEndpointStatusForName(jsonValue.GetString("EndpointStatus"));

    m_endpointStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue RealtimeEndpointInfo::Jsonize() const
{
  JsonValue payload;

  if(m_peakRequestsPerSecondHasBeenSet)
  {
   payload.WithInteger("PeakRequestsPerSecond", m_peakRequestsPerSecond);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_endpointUrlHasBeenSet)
  {
   payload.WithString("EndpointUrl", m_endpointUrl);

  }

  if(m_endpointStatusHasBeenSet)
  {
   payload.WithString("EndpointStatus", RealtimeEndpointStatusMapper::GetNameForRealtimeEndpointStatus(m_endpointStatus));
  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws