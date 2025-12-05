/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/StreamStorageConfiguration.h>

#include <utility>

namespace Aws {
namespace KinesisVideo {
namespace Model {

/**
 */
class UpdateStreamStorageConfigurationRequest : public KinesisVideoRequest {
 public:
  AWS_KINESISVIDEO_API UpdateStreamStorageConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamStorageConfiguration"; }

  AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the stream for which you want to update the storage
   * configuration.</p>
   */
  inline const Aws::String& GetStreamName() const { return m_streamName; }
  inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
  template <typename StreamNameT = Aws::String>
  void SetStreamName(StreamNameT&& value) {
    m_streamNameHasBeenSet = true;
    m_streamName = std::forward<StreamNameT>(value);
  }
  template <typename StreamNameT = Aws::String>
  UpdateStreamStorageConfigurationRequest& WithStreamName(StreamNameT&& value) {
    SetStreamName(std::forward<StreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the stream for which you want to update the
   * storage configuration.</p>
   */
  inline const Aws::String& GetStreamARN() const { return m_streamARN; }
  inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
  template <typename StreamARNT = Aws::String>
  void SetStreamARN(StreamARNT&& value) {
    m_streamARNHasBeenSet = true;
    m_streamARN = std::forward<StreamARNT>(value);
  }
  template <typename StreamARNT = Aws::String>
  UpdateStreamStorageConfigurationRequest& WithStreamARN(StreamARNT&& value) {
    SetStreamARN(std::forward<StreamARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the stream whose storage configuration you want to change. To
   * get the version, call either the <code>DescribeStream</code> or the
   * <code>ListStreams</code> API.</p>
   */
  inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
  inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
  template <typename CurrentVersionT = Aws::String>
  void SetCurrentVersion(CurrentVersionT&& value) {
    m_currentVersionHasBeenSet = true;
    m_currentVersion = std::forward<CurrentVersionT>(value);
  }
  template <typename CurrentVersionT = Aws::String>
  UpdateStreamStorageConfigurationRequest& WithCurrentVersion(CurrentVersionT&& value) {
    SetCurrentVersion(std::forward<CurrentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new storage configuration for the stream. This includes the default
   * storage tier that determines how stream data is stored and accessed.</p>
   * <p>Different storage tiers offer varying levels of performance and cost
   * optimization to match your specific use case requirements.</p>
   */
  inline const StreamStorageConfiguration& GetStreamStorageConfiguration() const { return m_streamStorageConfiguration; }
  inline bool StreamStorageConfigurationHasBeenSet() const { return m_streamStorageConfigurationHasBeenSet; }
  template <typename StreamStorageConfigurationT = StreamStorageConfiguration>
  void SetStreamStorageConfiguration(StreamStorageConfigurationT&& value) {
    m_streamStorageConfigurationHasBeenSet = true;
    m_streamStorageConfiguration = std::forward<StreamStorageConfigurationT>(value);
  }
  template <typename StreamStorageConfigurationT = StreamStorageConfiguration>
  UpdateStreamStorageConfigurationRequest& WithStreamStorageConfiguration(StreamStorageConfigurationT&& value) {
    SetStreamStorageConfiguration(std::forward<StreamStorageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_streamName;

  Aws::String m_streamARN;

  Aws::String m_currentVersion;

  StreamStorageConfiguration m_streamStorageConfiguration;
  bool m_streamNameHasBeenSet = false;
  bool m_streamARNHasBeenSet = false;
  bool m_currentVersionHasBeenSet = false;
  bool m_streamStorageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
