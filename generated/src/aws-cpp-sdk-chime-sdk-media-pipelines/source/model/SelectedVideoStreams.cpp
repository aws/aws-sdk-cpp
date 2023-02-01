/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/SelectedVideoStreams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

SelectedVideoStreams::SelectedVideoStreams() : 
    m_attendeeIdsHasBeenSet(false),
    m_externalUserIdsHasBeenSet(false)
{
}

SelectedVideoStreams::SelectedVideoStreams(JsonView jsonValue) : 
    m_attendeeIdsHasBeenSet(false),
    m_externalUserIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SelectedVideoStreams& SelectedVideoStreams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttendeeIds"))
  {
    Aws::Utils::Array<JsonView> attendeeIdsJsonList = jsonValue.GetArray("AttendeeIds");
    for(unsigned attendeeIdsIndex = 0; attendeeIdsIndex < attendeeIdsJsonList.GetLength(); ++attendeeIdsIndex)
    {
      m_attendeeIds.push_back(attendeeIdsJsonList[attendeeIdsIndex].AsString());
    }
    m_attendeeIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalUserIds"))
  {
    Aws::Utils::Array<JsonView> externalUserIdsJsonList = jsonValue.GetArray("ExternalUserIds");
    for(unsigned externalUserIdsIndex = 0; externalUserIdsIndex < externalUserIdsJsonList.GetLength(); ++externalUserIdsIndex)
    {
      m_externalUserIds.push_back(externalUserIdsJsonList[externalUserIdsIndex].AsString());
    }
    m_externalUserIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectedVideoStreams::Jsonize() const
{
  JsonValue payload;

  if(m_attendeeIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attendeeIdsJsonList(m_attendeeIds.size());
   for(unsigned attendeeIdsIndex = 0; attendeeIdsIndex < attendeeIdsJsonList.GetLength(); ++attendeeIdsIndex)
   {
     attendeeIdsJsonList[attendeeIdsIndex].AsString(m_attendeeIds[attendeeIdsIndex]);
   }
   payload.WithArray("AttendeeIds", std::move(attendeeIdsJsonList));

  }

  if(m_externalUserIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> externalUserIdsJsonList(m_externalUserIds.size());
   for(unsigned externalUserIdsIndex = 0; externalUserIdsIndex < externalUserIdsJsonList.GetLength(); ++externalUserIdsIndex)
   {
     externalUserIdsJsonList[externalUserIdsIndex].AsString(m_externalUserIds[externalUserIdsIndex]);
   }
   payload.WithArray("ExternalUserIds", std::move(externalUserIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
