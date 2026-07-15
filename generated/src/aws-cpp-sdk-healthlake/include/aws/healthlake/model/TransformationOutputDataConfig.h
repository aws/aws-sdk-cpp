/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/DataTransformationS3Configuration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>The Amazon S3 output location and encryption configuration for a
 * transformation job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TransformationOutputDataConfig">AWS
 * API Reference</a></p>
 */
class TransformationOutputDataConfig {
 public:
  AWS_HEALTHLAKE_API TransformationOutputDataConfig() = default;
  AWS_HEALTHLAKE_API TransformationOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API TransformationOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 output location and AWS Key Management Service (AWS KMS)
   * encryption configuration.</p>
   */
  inline const DataTransformationS3Configuration& GetS3Configuration() const { return m_s3Configuration; }
  inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
  template <typename S3ConfigurationT = DataTransformationS3Configuration>
  void SetS3Configuration(S3ConfigurationT&& value) {
    m_s3ConfigurationHasBeenSet = true;
    m_s3Configuration = std::forward<S3ConfigurationT>(value);
  }
  template <typename S3ConfigurationT = DataTransformationS3Configuration>
  TransformationOutputDataConfig& WithS3Configuration(S3ConfigurationT&& value) {
    SetS3Configuration(std::forward<S3ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  DataTransformationS3Configuration m_s3Configuration;
  bool m_s3ConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
