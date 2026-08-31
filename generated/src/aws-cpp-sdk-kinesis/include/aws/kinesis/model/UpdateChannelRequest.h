/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ChannelLoggingUpdateInput.h>
#include <aws/kinesis/model/S3DestinationUpdateInput.h>
#include <aws/kinesis/model/S3TablesDestinationUpdateInput.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class UpdateChannelRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API UpdateChannelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the channel to update.</p>
   */
  inline const Aws::String& GetChannelARN() const { return m_channelARN; }
  inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
  template <typename ChannelARNT = Aws::String>
  void SetChannelARN(ChannelARNT&& value) {
    m_channelARNHasBeenSet = true;
    m_channelARN = std::forward<ChannelARNT>(value);
  }
  template <typename ChannelARNT = Aws::String>
  UpdateChannelRequest& WithChannelARN(ChannelARNT&& value) {
    SetChannelARN(std::forward<ChannelARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration for a general purpose Amazon S3 destination. Only
   * <code>DataFreshnessInSeconds</code> can be updated.</p>
   */
  inline const S3DestinationUpdateInput& GetS3DestinationConfiguration() const { return m_s3DestinationConfiguration; }
  inline bool S3DestinationConfigurationHasBeenSet() const { return m_s3DestinationConfigurationHasBeenSet; }
  template <typename S3DestinationConfigurationT = S3DestinationUpdateInput>
  void SetS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    m_s3DestinationConfigurationHasBeenSet = true;
    m_s3DestinationConfiguration = std::forward<S3DestinationConfigurationT>(value);
  }
  template <typename S3DestinationConfigurationT = S3DestinationUpdateInput>
  UpdateChannelRequest& WithS3DestinationConfiguration(S3DestinationConfigurationT&& value) {
    SetS3DestinationConfiguration(std::forward<S3DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration for a streaming table destination. Only
   * <code>DataFreshnessInSeconds</code> can be updated.</p>
   */
  inline const S3TablesDestinationUpdateInput& GetS3TablesDestinationConfiguration() const { return m_s3TablesDestinationConfiguration; }
  inline bool S3TablesDestinationConfigurationHasBeenSet() const { return m_s3TablesDestinationConfigurationHasBeenSet; }
  template <typename S3TablesDestinationConfigurationT = S3TablesDestinationUpdateInput>
  void SetS3TablesDestinationConfiguration(S3TablesDestinationConfigurationT&& value) {
    m_s3TablesDestinationConfigurationHasBeenSet = true;
    m_s3TablesDestinationConfiguration = std::forward<S3TablesDestinationConfigurationT>(value);
  }
  template <typename S3TablesDestinationConfigurationT = S3TablesDestinationUpdateInput>
  UpdateChannelRequest& WithS3TablesDestinationConfiguration(S3TablesDestinationConfigurationT&& value) {
    SetS3TablesDestinationConfiguration(std::forward<S3TablesDestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated Amazon CloudWatch Logs configuration for the channel.</p>
   */
  inline const ChannelLoggingUpdateInput& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
  template <typename LoggingConfigurationT = ChannelLoggingUpdateInput>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = ChannelLoggingUpdateInput>
  UpdateChannelRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelARN;

  S3DestinationUpdateInput m_s3DestinationConfiguration;

  S3TablesDestinationUpdateInput m_s3TablesDestinationConfiguration;

  ChannelLoggingUpdateInput m_loggingConfiguration;
  bool m_channelARNHasBeenSet = false;
  bool m_s3DestinationConfigurationHasBeenSet = false;
  bool m_s3TablesDestinationConfigurationHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
