/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExportS3OutputConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains configuration details for analysis log export output.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisLogExportOutputConfiguration">AWS
 * API Reference</a></p>
 */
class AnalysisLogExportOutputConfiguration {
 public:
  AWS_CLEANROOMS_API AnalysisLogExportOutputConfiguration() = default;
  AWS_CLEANROOMS_API AnalysisLogExportOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AnalysisLogExportOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Required configuration for an analysis log export with an <code>s3</code>
   * output type.</p>
   */
  inline const AnalysisLogExportS3OutputConfiguration& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = AnalysisLogExportS3OutputConfiguration>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = AnalysisLogExportS3OutputConfiguration>
  AnalysisLogExportOutputConfiguration& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  AnalysisLogExportS3OutputConfiguration m_s3;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
