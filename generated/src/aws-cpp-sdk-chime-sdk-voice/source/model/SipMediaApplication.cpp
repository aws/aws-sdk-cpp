﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SipMediaApplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

SipMediaApplication::SipMediaApplication(JsonView jsonValue)
{
  *this = jsonValue;
}

SipMediaApplication& SipMediaApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SipMediaApplicationId"))
  {
    m_sipMediaApplicationId = jsonValue.GetString("SipMediaApplicationId");
    m_sipMediaApplicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");
    m_awsRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("Endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");
    m_updatedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SipMediaApplicationArn"))
  {
    m_sipMediaApplicationArn = jsonValue.GetString("SipMediaApplicationArn");
    m_sipMediaApplicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SipMediaApplication::Jsonize() const
{
  JsonValue payload;

  if(m_sipMediaApplicationIdHasBeenSet)
  {
   payload.WithString("SipMediaApplicationId", m_sipMediaApplicationId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_endpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
   }
   payload.WithArray("Endpoints", std::move(endpointsJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sipMediaApplicationArnHasBeenSet)
  {
   payload.WithString("SipMediaApplicationArn", m_sipMediaApplicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
