/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ChannelDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

ChannelDescription::ChannelDescription(JsonView jsonValue) { *this = jsonValue; }

ChannelDescription& ChannelDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChannelName")) {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelARN")) {
    m_channelARN = jsonValue.GetString("ChannelARN");
    m_channelARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelId")) {
    m_channelId = jsonValue.GetString("ChannelId");
    m_channelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelStatus")) {
    m_channelStatus = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("ChannelStatus"));
    m_channelStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelStatusReason")) {
    m_channelStatusReason = jsonValue.GetString("ChannelStatusReason");
    m_channelStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelCreationTimestamp")) {
    m_channelCreationTimestamp = jsonValue.GetDouble("ChannelCreationTimestamp");
    m_channelCreationTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceExecutionRoleARN")) {
    m_serviceExecutionRoleARN = jsonValue.GetString("ServiceExecutionRoleARN");
    m_serviceExecutionRoleARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamConfigurationList")) {
    Aws::Utils::Array<JsonView> streamConfigurationListJsonList = jsonValue.GetArray("StreamConfigurationList");
    for (unsigned streamConfigurationListIndex = 0; streamConfigurationListIndex < streamConfigurationListJsonList.GetLength();
         ++streamConfigurationListIndex) {
      m_streamConfigurationList.push_back(streamConfigurationListJsonList[streamConfigurationListIndex].AsObject());
    }
    m_streamConfigurationListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3DestinationConfiguration")) {
    m_s3DestinationConfiguration = jsonValue.GetObject("S3DestinationConfiguration");
    m_s3DestinationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3TablesDestinationConfiguration")) {
    m_s3TablesDestinationConfiguration = jsonValue.GetObject("S3TablesDestinationConfiguration");
    m_s3TablesDestinationConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LoggingConfiguration")) {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");
    m_loggingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelDescription::Jsonize() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("ChannelName", m_channelName);
  }

  if (m_channelARNHasBeenSet) {
    payload.WithString("ChannelARN", m_channelARN);
  }

  if (m_channelIdHasBeenSet) {
    payload.WithString("ChannelId", m_channelId);
  }

  if (m_channelStatusHasBeenSet) {
    payload.WithString("ChannelStatus", ChannelStatusMapper::GetNameForChannelStatus(m_channelStatus));
  }

  if (m_channelStatusReasonHasBeenSet) {
    payload.WithString("ChannelStatusReason", m_channelStatusReason);
  }

  if (m_channelCreationTimestampHasBeenSet) {
    payload.WithDouble("ChannelCreationTimestamp", m_channelCreationTimestamp.SecondsWithMSPrecision());
  }

  if (m_serviceExecutionRoleARNHasBeenSet) {
    payload.WithString("ServiceExecutionRoleARN", m_serviceExecutionRoleARN);
  }

  if (m_streamConfigurationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> streamConfigurationListJsonList(m_streamConfigurationList.size());
    for (unsigned streamConfigurationListIndex = 0; streamConfigurationListIndex < streamConfigurationListJsonList.GetLength();
         ++streamConfigurationListIndex) {
      streamConfigurationListJsonList[streamConfigurationListIndex].AsObject(
          m_streamConfigurationList[streamConfigurationListIndex].Jsonize());
    }
    payload.WithArray("StreamConfigurationList", std::move(streamConfigurationListJsonList));
  }

  if (m_s3DestinationConfigurationHasBeenSet) {
    payload.WithObject("S3DestinationConfiguration", m_s3DestinationConfiguration.Jsonize());
  }

  if (m_s3TablesDestinationConfigurationHasBeenSet) {
    payload.WithObject("S3TablesDestinationConfiguration", m_s3TablesDestinationConfiguration.Jsonize());
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_loggingConfigurationHasBeenSet) {
    payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
