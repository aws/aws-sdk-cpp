/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/S3AccessPointSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>The data source configuration for a mount. Specify exactly one of the
 * following.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/MountSource">AWS
 * API Reference</a></p>
 */
class MountSource {
 public:
  AWS_IOTSITEWISE_API MountSource() = default;
  AWS_IOTSITEWISE_API MountSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API MountSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a mount that reads from an Amazon S3 access point.</p>
   */
  inline const S3AccessPointSource& GetS3AccessPoint() const { return m_s3AccessPoint; }
  inline bool S3AccessPointHasBeenSet() const { return m_s3AccessPointHasBeenSet; }
  template <typename S3AccessPointT = S3AccessPointSource>
  void SetS3AccessPoint(S3AccessPointT&& value) {
    m_s3AccessPointHasBeenSet = true;
    m_s3AccessPoint = std::forward<S3AccessPointT>(value);
  }
  template <typename S3AccessPointT = S3AccessPointSource>
  MountSource& WithS3AccessPoint(S3AccessPointT&& value) {
    SetS3AccessPoint(std::forward<S3AccessPointT>(value));
    return *this;
  }
  ///@}
 private:
  S3AccessPointSource m_s3AccessPoint;
  bool m_s3AccessPointHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
