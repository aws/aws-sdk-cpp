/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Represents a single entry in the asset manifest, describing one artifact
 * produced by the build workflow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildResultAssetManifestEntry">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyBuildResultAssetManifestEntry {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyBuildResultAssetManifestEntry() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyBuildResultAssetManifestEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyBuildResultAssetManifestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of asset (e.g., BUILD_LOG, QUALITY_REPORT, POLICY_DEFINITION,
   * GENERATED_TEST_CASES, POLICY_SCENARIOS, FIDELITY_REPORT, ASSET_MANIFEST,
   * SOURCE_DOCUMENT).</p>
   */
  inline AutomatedReasoningPolicyBuildResultAssetType GetAssetType() const { return m_assetType; }
  inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
  inline void SetAssetType(AutomatedReasoningPolicyBuildResultAssetType value) {
    m_assetTypeHasBeenSet = true;
    m_assetType = value;
  }
  inline AutomatedReasoningPolicyBuildResultAssetManifestEntry& WithAssetType(AutomatedReasoningPolicyBuildResultAssetType value) {
    SetAssetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable name for the asset, if applicable. This helps identify
   * specific documents or reports within the workflow results.</p>
   */
  inline const Aws::String& GetAssetName() const { return m_assetName; }
  inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
  template <typename AssetNameT = Aws::String>
  void SetAssetName(AssetNameT&& value) {
    m_assetNameHasBeenSet = true;
    m_assetName = std::forward<AssetNameT>(value);
  }
  template <typename AssetNameT = Aws::String>
  AutomatedReasoningPolicyBuildResultAssetManifestEntry& WithAssetName(AssetNameT&& value) {
    SetAssetName(std::forward<AssetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the asset, if applicable. Use this ID when requesting
   * specific assets through the API.</p>
   */
  inline const Aws::String& GetAssetId() const { return m_assetId; }
  inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
  template <typename AssetIdT = Aws::String>
  void SetAssetId(AssetIdT&& value) {
    m_assetIdHasBeenSet = true;
    m_assetId = std::forward<AssetIdT>(value);
  }
  template <typename AssetIdT = Aws::String>
  AutomatedReasoningPolicyBuildResultAssetManifestEntry& WithAssetId(AssetIdT&& value) {
    SetAssetId(std::forward<AssetIdT>(value));
    return *this;
  }
  ///@}
 private:
  AutomatedReasoningPolicyBuildResultAssetType m_assetType{AutomatedReasoningPolicyBuildResultAssetType::NOT_SET};

  Aws::String m_assetName;

  Aws::String m_assetId;
  bool m_assetTypeHasBeenSet = false;
  bool m_assetNameHasBeenSet = false;
  bool m_assetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
