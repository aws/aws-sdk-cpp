/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/S3ReportOutputConfiguration.h>

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
 * <p>Configuration for report output destinations used in a Region switch
 * plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ReportOutputConfiguration">AWS
 * API Reference</a></p>
 */
class ReportOutputConfiguration {
 public:
  AWS_ARCREGIONSWITCH_API ReportOutputConfiguration() = default;
  AWS_ARCREGIONSWITCH_API ReportOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API ReportOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for delivering reports to an Amazon S3 bucket.</p>
   */
  inline const S3ReportOutputConfiguration& GetS3Configuration() const { return m_s3Configuration; }
  inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
  template <typename S3ConfigurationT = S3ReportOutputConfiguration>
  void SetS3Configuration(S3ConfigurationT&& value) {
    m_s3ConfigurationHasBeenSet = true;
    m_s3Configuration = std::forward<S3ConfigurationT>(value);
  }
  template <typename S3ConfigurationT = S3ReportOutputConfiguration>
  ReportOutputConfiguration& WithS3Configuration(S3ConfigurationT&& value) {
    SetS3Configuration(std::forward<S3ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  S3ReportOutputConfiguration m_s3Configuration;
  bool m_s3ConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
