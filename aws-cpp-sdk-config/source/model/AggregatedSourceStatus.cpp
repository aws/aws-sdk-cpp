﻿/*
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

#include <aws/config/model/AggregatedSourceStatus.h>
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

AggregatedSourceStatus::AggregatedSourceStatus() : 
    m_sourceIdHasBeenSet(false),
    m_sourceType(AggregatedSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_lastUpdateStatus(AggregatedSourceStatusType::NOT_SET),
    m_lastUpdateStatusHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_lastErrorCodeHasBeenSet(false),
    m_lastErrorMessageHasBeenSet(false)
{
}

AggregatedSourceStatus::AggregatedSourceStatus(JsonView jsonValue) : 
    m_sourceIdHasBeenSet(false),
    m_sourceType(AggregatedSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_lastUpdateStatus(AggregatedSourceStatusType::NOT_SET),
    m_lastUpdateStatusHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_lastErrorCodeHasBeenSet(false),
    m_lastErrorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AggregatedSourceStatus& AggregatedSourceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceId"))
  {
    m_sourceId = jsonValue.GetString("SourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = AggregatedSourceTypeMapper::GetAggregatedSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = AggregatedSourceStatusTypeMapper::GetAggregatedSourceStatusTypeForName(jsonValue.GetString("LastUpdateStatus"));

    m_lastUpdateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastErrorCode"))
  {
    m_lastErrorCode = jsonValue.GetString("LastErrorCode");

    m_lastErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastErrorMessage"))
  {
    m_lastErrorMessage = jsonValue.GetString("LastErrorMessage");

    m_lastErrorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregatedSourceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("SourceId", m_sourceId);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", AggregatedSourceTypeMapper::GetNameForAggregatedSourceType(m_sourceType));
  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  if(m_lastUpdateStatusHasBeenSet)
  {
   payload.WithString("LastUpdateStatus", AggregatedSourceStatusTypeMapper::GetNameForAggregatedSourceStatusType(m_lastUpdateStatus));
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_lastErrorCodeHasBeenSet)
  {
   payload.WithString("LastErrorCode", m_lastErrorCode);

  }

  if(m_lastErrorMessageHasBeenSet)
  {
   payload.WithString("LastErrorMessage", m_lastErrorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
