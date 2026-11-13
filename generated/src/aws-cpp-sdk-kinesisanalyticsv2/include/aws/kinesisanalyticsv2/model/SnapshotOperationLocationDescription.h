/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotOperationS3PrefixLocation.h>
#include <aws/kinesisanalyticsv2/model/StorageLocationType.h>

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
 * <p>Describes the location of snapshot data for a snapshot
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotOperationLocationDescription">AWS
 * API Reference</a></p>
 */
class SnapshotOperationLocationDescription {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotOperationLocationDescription() = default;
  AWS_KINESISANALYTICSV2_API SnapshotOperationLocationDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotOperationLocationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the location. The only supported value is <code>S3</code>.</p>
   */
  inline StorageLocationType GetLocationType() const { return m_locationType; }
  inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }
  inline void SetLocationType(StorageLocationType value) {
    m_locationTypeHasBeenSet = true;
    m_locationType = value;
  }
  inline SnapshotOperationLocationDescription& WithLocationType(StorageLocationType value) {
    SetLocationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the Amazon S3 bucket and key prefix of the location.</p>
   */
  inline const SnapshotOperationS3PrefixLocation& GetS3PrefixLocation() const { return m_s3PrefixLocation; }
  inline bool S3PrefixLocationHasBeenSet() const { return m_s3PrefixLocationHasBeenSet; }
  template <typename S3PrefixLocationT = SnapshotOperationS3PrefixLocation>
  void SetS3PrefixLocation(S3PrefixLocationT&& value) {
    m_s3PrefixLocationHasBeenSet = true;
    m_s3PrefixLocation = std::forward<S3PrefixLocationT>(value);
  }
  template <typename S3PrefixLocationT = SnapshotOperationS3PrefixLocation>
  SnapshotOperationLocationDescription& WithS3PrefixLocation(S3PrefixLocationT&& value) {
    SetS3PrefixLocation(std::forward<S3PrefixLocationT>(value));
    return *this;
  }
  ///@}
 private:
  StorageLocationType m_locationType{StorageLocationType::NOT_SET};

  SnapshotOperationS3PrefixLocation m_s3PrefixLocation;
  bool m_locationTypeHasBeenSet = false;
  bool m_s3PrefixLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
