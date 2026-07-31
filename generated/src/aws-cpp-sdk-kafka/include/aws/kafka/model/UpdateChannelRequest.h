/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/IcebergDestinationUpdate.h>
#include <aws/kafka/model/S3DestinationUpdate.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 * <p>Updates an existing channel's destination configuration. You must update the
 * same destination type the channel was created with; the destination type cannot
 * be changed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateChannelRequest">AWS
 * API Reference</a></p>
 */
class UpdateChannelRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API UpdateChannelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies the channel.</p>
   */
  inline const Aws::String& GetChannelArn() const { return m_channelArn; }
  inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
  template <typename ChannelArnT = Aws::String>
  void SetChannelArn(ChannelArnT&& value) {
    m_channelArnHasBeenSet = true;
    m_channelArn = std::forward<ChannelArnT>(value);
  }
  template <typename ChannelArnT = Aws::String>
  UpdateChannelRequest& WithChannelArn(ChannelArnT&& value) {
    SetChannelArn(std::forward<ChannelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies the cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  UpdateChannelRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updates fields on an Apache Iceberg destination. Use only when the channel
   * was created with an Iceberg destination.</p>
   */
  inline const IcebergDestinationUpdate& GetIcebergDestinationUpdate() const { return m_icebergDestinationUpdate; }
  inline bool IcebergDestinationUpdateHasBeenSet() const { return m_icebergDestinationUpdateHasBeenSet; }
  template <typename IcebergDestinationUpdateT = IcebergDestinationUpdate>
  void SetIcebergDestinationUpdate(IcebergDestinationUpdateT&& value) {
    m_icebergDestinationUpdateHasBeenSet = true;
    m_icebergDestinationUpdate = std::forward<IcebergDestinationUpdateT>(value);
  }
  template <typename IcebergDestinationUpdateT = IcebergDestinationUpdate>
  UpdateChannelRequest& WithIcebergDestinationUpdate(IcebergDestinationUpdateT&& value) {
    SetIcebergDestinationUpdate(std::forward<IcebergDestinationUpdateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updates fields on an Amazon S3 destination. Use only when the channel was
   * created with an Amazon S3 destination.</p>
   */
  inline const S3DestinationUpdate& GetS3DestinationUpdate() const { return m_s3DestinationUpdate; }
  inline bool S3DestinationUpdateHasBeenSet() const { return m_s3DestinationUpdateHasBeenSet; }
  template <typename S3DestinationUpdateT = S3DestinationUpdate>
  void SetS3DestinationUpdate(S3DestinationUpdateT&& value) {
    m_s3DestinationUpdateHasBeenSet = true;
    m_s3DestinationUpdate = std::forward<S3DestinationUpdateT>(value);
  }
  template <typename S3DestinationUpdateT = S3DestinationUpdate>
  UpdateChannelRequest& WithS3DestinationUpdate(S3DestinationUpdateT&& value) {
    SetS3DestinationUpdate(std::forward<S3DestinationUpdateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelArn;

  Aws::String m_clusterArn;

  IcebergDestinationUpdate m_icebergDestinationUpdate;

  S3DestinationUpdate m_s3DestinationUpdate;
  bool m_channelArnHasBeenSet = false;
  bool m_clusterArnHasBeenSet = false;
  bool m_icebergDestinationUpdateHasBeenSet = false;
  bool m_s3DestinationUpdateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
