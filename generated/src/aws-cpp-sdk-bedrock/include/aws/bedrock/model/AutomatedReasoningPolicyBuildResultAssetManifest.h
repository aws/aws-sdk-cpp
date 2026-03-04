/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssetManifestEntry.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>A catalog of all artifacts produced by a build workflow, providing a
 * comprehensive list of available assets including their types and
 * identifiers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildResultAssetManifest">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyBuildResultAssetManifest {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyBuildResultAssetManifest() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyBuildResultAssetManifest(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyBuildResultAssetManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of asset entries in the manifest, each describing an available
   * artifact that can be retrieved.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyBuildResultAssetManifestEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<AutomatedReasoningPolicyBuildResultAssetManifestEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<AutomatedReasoningPolicyBuildResultAssetManifestEntry>>
  AutomatedReasoningPolicyBuildResultAssetManifest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = AutomatedReasoningPolicyBuildResultAssetManifestEntry>
  AutomatedReasoningPolicyBuildResultAssetManifest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomatedReasoningPolicyBuildResultAssetManifestEntry> m_entries;
  bool m_entriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
