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

#include <aws/pinpoint/model/SegmentImportResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SegmentImportResource::SegmentImportResource() : 
    m_channelCountsHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

SegmentImportResource::SegmentImportResource(const JsonValue& jsonValue) : 
    m_channelCountsHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3UrlHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentImportResource& SegmentImportResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ChannelCounts"))
  {
    Aws::Map<Aws::String, JsonValue> channelCountsJsonMap = jsonValue.GetObject("ChannelCounts").GetAllObjects();
    for(auto& channelCountsItem : channelCountsJsonMap)
    {
      m_channelCounts[channelCountsItem.first] = channelCountsItem.second.AsInteger();
    }
    m_channelCountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Url"))
  {
    m_s3Url = jsonValue.GetString("S3Url");

    m_s3UrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentImportResource::Jsonize() const
{
  JsonValue payload;

  if(m_channelCountsHasBeenSet)
  {
   JsonValue channelCountsJsonMap;
   for(auto& channelCountsItem : m_channelCounts)
   {
     channelCountsJsonMap.WithInteger(channelCountsItem.first, channelCountsItem.second);
   }
   payload.WithObject("ChannelCounts", std::move(channelCountsJsonMap));

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_s3UrlHasBeenSet)
  {
   payload.WithString("S3Url", m_s3Url);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
