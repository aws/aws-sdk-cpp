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
 * <p>Blueprint Recommendation Sample</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/BlueprintOptimizationSample">AWS
 * API Reference</a></p>
 */
class BlueprintOptimizationSample {
 public:
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationSample() = default;
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationSample(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API BlueprintOptimizationSample& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>S3 Object of the asset</p>
   */
  inline const S3Object& GetAssetS3Object() const { return m_assetS3Object; }
  inline bool AssetS3ObjectHasBeenSet() const { return m_assetS3ObjectHasBeenSet; }
  template <typename AssetS3ObjectT = S3Object>
  void SetAssetS3Object(AssetS3ObjectT&& value) {
    m_assetS3ObjectHasBeenSet = true;
    m_assetS3Object = std::forward<AssetS3ObjectT>(value);
  }
  template <typename AssetS3ObjectT = S3Object>
  BlueprintOptimizationSample& WithAssetS3Object(AssetS3ObjectT&& value) {
    SetAssetS3Object(std::forward<AssetS3ObjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ground truth for the Blueprint and Asset combination</p>
   */
  inline const S3Object& GetGroundTruthS3Object() const { return m_groundTruthS3Object; }
  inline bool GroundTruthS3ObjectHasBeenSet() const { return m_groundTruthS3ObjectHasBeenSet; }
  template <typename GroundTruthS3ObjectT = S3Object>
  void SetGroundTruthS3Object(GroundTruthS3ObjectT&& value) {
    m_groundTruthS3ObjectHasBeenSet = true;
    m_groundTruthS3Object = std::forward<GroundTruthS3ObjectT>(value);
  }
  template <typename GroundTruthS3ObjectT = S3Object>
  BlueprintOptimizationSample& WithGroundTruthS3Object(GroundTruthS3ObjectT&& value) {
    SetGroundTruthS3Object(std::forward<GroundTruthS3ObjectT>(value));
    return *this;
  }
  ///@}
 private:
  S3Object m_assetS3Object;

  S3Object m_groundTruthS3Object;
  bool m_assetS3ObjectHasBeenSet = false;
  bool m_groundTruthS3ObjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
