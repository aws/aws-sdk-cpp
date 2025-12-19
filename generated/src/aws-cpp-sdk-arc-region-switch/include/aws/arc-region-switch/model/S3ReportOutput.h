/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>Information about a report delivered to Amazon S3.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/S3ReportOutput">AWS
 * API Reference</a></p>
 */
class S3ReportOutput {
 public:
  AWS_ARCREGIONSWITCH_API S3ReportOutput() = default;
  AWS_ARCREGIONSWITCH_API S3ReportOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API S3ReportOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 object key where the generated report is stored.</p>
   */
  inline const Aws::String& GetS3ObjectKey() const { return m_s3ObjectKey; }
  inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }
  template <typename S3ObjectKeyT = Aws::String>
  void SetS3ObjectKey(S3ObjectKeyT&& value) {
    m_s3ObjectKeyHasBeenSet = true;
    m_s3ObjectKey = std::forward<S3ObjectKeyT>(value);
  }
  template <typename S3ObjectKeyT = Aws::String>
  S3ReportOutput& WithS3ObjectKey(S3ObjectKeyT&& value) {
    SetS3ObjectKey(std::forward<S3ObjectKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3ObjectKey;
  bool m_s3ObjectKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
