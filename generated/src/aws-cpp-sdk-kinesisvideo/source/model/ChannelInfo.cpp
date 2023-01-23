/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ChannelInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

ChannelInfo::ChannelInfo() : 
    m_channelNameHasBeenSet(false),
    m_channelARNHasBeenSet(false),
    m_channelType(ChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_channelStatus(Status::NOT_SET),
    m_channelStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_singleMasterConfigurationHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

ChannelInfo::ChannelInfo(JsonView jsonValue) : 
    m_channelNameHasBeenSet(false),
    m_channelARNHasBeenSet(false),
    m_channelType(ChannelType::NOT_SET),
    m_channelTypeHasBeenSet(false),
    m_channelStatus(Status::NOT_SET),
    m_channelStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_singleMasterConfigurationHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelInfo& ChannelInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelARN"))
  {
    m_channelARN = jsonValue.GetString("ChannelARN");

    m_channelARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelType"))
  {
    m_channelType = ChannelTypeMapper::GetChannelTypeForName(jsonValue.GetString("ChannelType"));

    m_channelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelStatus"))
  {
    m_channelStatus = StatusMapper::GetStatusForName(jsonValue.GetString("ChannelStatus"));

    m_channelStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SingleMasterConfiguration"))
  {
    m_singleMasterConfiguration = jsonValue.GetObject("SingleMasterConfiguration");

    m_singleMasterConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelInfo::Jsonize() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_channelARNHasBeenSet)
  {
   payload.WithString("ChannelARN", m_channelARN);

  }

  if(m_channelTypeHasBeenSet)
  {
   payload.WithString("ChannelType", ChannelTypeMapper::GetNameForChannelType(m_channelType));
  }

  if(m_channelStatusHasBeenSet)
  {
   payload.WithString("ChannelStatus", StatusMapper::GetNameForStatus(m_channelStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_singleMasterConfigurationHasBeenSet)
  {
   payload.WithObject("SingleMasterConfiguration", m_singleMasterConfiguration.Jsonize());

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
