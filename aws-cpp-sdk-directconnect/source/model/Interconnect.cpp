﻿/*
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
#include <aws/directconnect/model/Interconnect.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

Interconnect::Interconnect() : 
    m_interconnectIdHasBeenSet(false),
    m_interconnectNameHasBeenSet(false),
    m_interconnectState(InterconnectState::NOT_SET),
    m_interconnectStateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_loaIssueTimeHasBeenSet(false)
{
}

Interconnect::Interconnect(const JsonValue& jsonValue) : 
    m_interconnectIdHasBeenSet(false),
    m_interconnectNameHasBeenSet(false),
    m_interconnectState(InterconnectState::NOT_SET),
    m_interconnectStateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_loaIssueTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Interconnect& Interconnect::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("interconnectId"))
  {
    m_interconnectId = jsonValue.GetString("interconnectId");

    m_interconnectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interconnectName"))
  {
    m_interconnectName = jsonValue.GetString("interconnectName");

    m_interconnectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interconnectState"))
  {
    m_interconnectState = InterconnectStateMapper::GetInterconnectStateForName(jsonValue.GetString("interconnectState"));

    m_interconnectStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bandwidth"))
  {
    m_bandwidth = jsonValue.GetString("bandwidth");

    m_bandwidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loaIssueTime"))
  {
    m_loaIssueTime = jsonValue.GetDouble("loaIssueTime");

    m_loaIssueTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Interconnect::Jsonize() const
{
  JsonValue payload;

  if(m_interconnectIdHasBeenSet)
  {
   payload.WithString("interconnectId", m_interconnectId);

  }

  if(m_interconnectNameHasBeenSet)
  {
   payload.WithString("interconnectName", m_interconnectName);

  }

  if(m_interconnectStateHasBeenSet)
  {
   payload.WithString("interconnectState", InterconnectStateMapper::GetNameForInterconnectState(m_interconnectState));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_bandwidthHasBeenSet)
  {
   payload.WithString("bandwidth", m_bandwidth);

  }

  if(m_loaIssueTimeHasBeenSet)
  {
   payload.WithDouble("loaIssueTime", m_loaIssueTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws