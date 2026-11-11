/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/S3PrefixLocation.h>
#include <aws/kinesisanalyticsv2/model/SourceApplicationDescription.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 * <p>Describes the source of an enhanced snapshot. For a snapshot that was created
 * from an application, <code>SourceApplicationDescription</code> is present. For
 * an imported snapshot, <code>S3PrefixLocation</code> is present.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotSourceDescription">AWS
 * API Reference</a></p>
 */
class SnapshotSourceDescription {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotSourceDescription() = default;
  AWS_KINESISANALYTICSV2_API SnapshotSourceDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location that the snapshot was imported from. This field is
   * present only if <code>SnapshotInitiatorOperation</code> is
   * <code>ImportSnapshot</code>.</p>
   */
  inline const S3PrefixLocation& GetS3PrefixLocation() const { return m_s3PrefixLocation; }
  inline bool S3PrefixLocationHasBeenSet() const { return m_s3PrefixLocationHasBeenSet; }
  template <typename S3PrefixLocationT = S3PrefixLocation>
  void SetS3PrefixLocation(S3PrefixLocationT&& value) {
    m_s3PrefixLocationHasBeenSet = true;
    m_s3PrefixLocation = std::forward<S3PrefixLocationT>(value);
  }
  template <typename S3PrefixLocationT = S3PrefixLocation>
  SnapshotSourceDescription& WithS3PrefixLocation(S3PrefixLocationT&& value) {
    SetS3PrefixLocation(std::forward<S3PrefixLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the application that the snapshot was created from. This field is
   * not present for imported snapshots.</p>
   */
  inline const SourceApplicationDescription& GetSourceApplicationDescription() const { return m_sourceApplicationDescription; }
  inline bool SourceApplicationDescriptionHasBeenSet() const { return m_sourceApplicationDescriptionHasBeenSet; }
  template <typename SourceApplicationDescriptionT = SourceApplicationDescription>
  void SetSourceApplicationDescription(SourceApplicationDescriptionT&& value) {
    m_sourceApplicationDescriptionHasBeenSet = true;
    m_sourceApplicationDescription = std::forward<SourceApplicationDescriptionT>(value);
  }
  template <typename SourceApplicationDescriptionT = SourceApplicationDescription>
  SnapshotSourceDescription& WithSourceApplicationDescription(SourceApplicationDescriptionT&& value) {
    SetSourceApplicationDescription(std::forward<SourceApplicationDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  S3PrefixLocation m_s3PrefixLocation;

  SourceApplicationDescription m_sourceApplicationDescription;
  bool m_s3PrefixLocationHasBeenSet = false;
  bool m_sourceApplicationDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
