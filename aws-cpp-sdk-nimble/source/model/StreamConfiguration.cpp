/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StreamConfiguration::StreamConfiguration() : 
    m_clipboardMode(StreamingClipboardMode::NOT_SET),
    m_clipboardModeHasBeenSet(false),
    m_ec2InstanceTypesHasBeenSet(false),
    m_maxSessionLengthInMinutes(0),
    m_maxSessionLengthInMinutesHasBeenSet(false),
    m_maxStoppedSessionLengthInMinutes(0),
    m_maxStoppedSessionLengthInMinutesHasBeenSet(false),
    m_sessionStorageHasBeenSet(false),
    m_streamingImageIdsHasBeenSet(false)
{
}

StreamConfiguration::StreamConfiguration(JsonView jsonValue) : 
    m_clipboardMode(StreamingClipboardMode::NOT_SET),
    m_clipboardModeHasBeenSet(false),
    m_ec2InstanceTypesHasBeenSet(false),
    m_maxSessionLengthInMinutes(0),
    m_maxSessionLengthInMinutesHasBeenSet(false),
    m_maxStoppedSessionLengthInMinutes(0),
    m_maxStoppedSessionLengthInMinutesHasBeenSet(false),
    m_sessionStorageHasBeenSet(false),
    m_streamingImageIdsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamConfiguration& StreamConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clipboardMode"))
  {
    m_clipboardMode = StreamingClipboardModeMapper::GetStreamingClipboardModeForName(jsonValue.GetString("clipboardMode"));

    m_clipboardModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceTypes"))
  {
    Aws::Utils::Array<JsonView> ec2InstanceTypesJsonList = jsonValue.GetArray("ec2InstanceTypes");
    for(unsigned ec2InstanceTypesIndex = 0; ec2InstanceTypesIndex < ec2InstanceTypesJsonList.GetLength(); ++ec2InstanceTypesIndex)
    {
      m_ec2InstanceTypes.push_back(StreamingInstanceTypeMapper::GetStreamingInstanceTypeForName(ec2InstanceTypesJsonList[ec2InstanceTypesIndex].AsString()));
    }
    m_ec2InstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSessionLengthInMinutes"))
  {
    m_maxSessionLengthInMinutes = jsonValue.GetInteger("maxSessionLengthInMinutes");

    m_maxSessionLengthInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxStoppedSessionLengthInMinutes"))
  {
    m_maxStoppedSessionLengthInMinutes = jsonValue.GetInteger("maxStoppedSessionLengthInMinutes");

    m_maxStoppedSessionLengthInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionStorage"))
  {
    m_sessionStorage = jsonValue.GetObject("sessionStorage");

    m_sessionStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamingImageIds"))
  {
    Aws::Utils::Array<JsonView> streamingImageIdsJsonList = jsonValue.GetArray("streamingImageIds");
    for(unsigned streamingImageIdsIndex = 0; streamingImageIdsIndex < streamingImageIdsJsonList.GetLength(); ++streamingImageIdsIndex)
    {
      m_streamingImageIds.push_back(streamingImageIdsJsonList[streamingImageIdsIndex].AsString());
    }
    m_streamingImageIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_clipboardModeHasBeenSet)
  {
   payload.WithString("clipboardMode", StreamingClipboardModeMapper::GetNameForStreamingClipboardMode(m_clipboardMode));
  }

  if(m_ec2InstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2InstanceTypesJsonList(m_ec2InstanceTypes.size());
   for(unsigned ec2InstanceTypesIndex = 0; ec2InstanceTypesIndex < ec2InstanceTypesJsonList.GetLength(); ++ec2InstanceTypesIndex)
   {
     ec2InstanceTypesJsonList[ec2InstanceTypesIndex].AsString(StreamingInstanceTypeMapper::GetNameForStreamingInstanceType(m_ec2InstanceTypes[ec2InstanceTypesIndex]));
   }
   payload.WithArray("ec2InstanceTypes", std::move(ec2InstanceTypesJsonList));

  }

  if(m_maxSessionLengthInMinutesHasBeenSet)
  {
   payload.WithInteger("maxSessionLengthInMinutes", m_maxSessionLengthInMinutes);

  }

  if(m_maxStoppedSessionLengthInMinutesHasBeenSet)
  {
   payload.WithInteger("maxStoppedSessionLengthInMinutes", m_maxStoppedSessionLengthInMinutes);

  }

  if(m_sessionStorageHasBeenSet)
  {
   payload.WithObject("sessionStorage", m_sessionStorage.Jsonize());

  }

  if(m_streamingImageIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> streamingImageIdsJsonList(m_streamingImageIds.size());
   for(unsigned streamingImageIdsIndex = 0; streamingImageIdsIndex < streamingImageIdsJsonList.GetLength(); ++streamingImageIdsIndex)
   {
     streamingImageIdsJsonList[streamingImageIdsIndex].AsString(m_streamingImageIds[streamingImageIdsIndex]);
   }
   payload.WithArray("streamingImageIds", std::move(streamingImageIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
