/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/S3Object.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Blueprint Optimization Output configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/BlueprintOptimizationOutputConfiguration">AWS
 * API Reference</a></p>
 */
class BlueprintOptimizationOutputConfiguration {
 public:
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationOutputConfiguration() = default;
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>S3 object.</p>
   */
  inline const S3Object& GetS3Object() const { return m_s3Object; }
  inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
  template <typename S3ObjectT = S3Object>
  void SetS3Object(S3ObjectT&& value) {
    m_s3ObjectHasBeenSet = true;
    m_s3Object = std::forward<S3ObjectT>(value);
  }
  template <typename S3ObjectT = S3Object>
  BlueprintOptimizationOutputConfiguration& WithS3Object(S3ObjectT&& value) {
    SetS3Object(std::forward<S3ObjectT>(value));
    return *this;
  }
  ///@}
 private:
  S3Object m_s3Object;
  bool m_s3ObjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
