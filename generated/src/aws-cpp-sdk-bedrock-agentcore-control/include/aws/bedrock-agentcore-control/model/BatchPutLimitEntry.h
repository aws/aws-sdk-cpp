/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LimitEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A rate limit definition within a batch put request. If you provide a
 * <code>rateLimitId</code>, the service uses it for upsert matching against
 * existing rate limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/BatchPutLimitEntry">AWS
 * API Reference</a></p>
 */
class BatchPutLimitEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API BatchPutLimitEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API BatchPutLimitEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API BatchPutLimitEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the rate limit. If provided, the service uses it for
   * upsert matching against existing rate limits.</p>
   */
  inline const Aws::String& GetRateLimitId() const { return m_rateLimitId; }
  inline bool RateLimitIdHasBeenSet() const { return m_rateLimitIdHasBeenSet; }
  template <typename RateLimitIdT = Aws::String>
  void SetRateLimitId(RateLimitIdT&& value) {
    m_rateLimitIdHasBeenSet = true;
    m_rateLimitId = std::forward<RateLimitIdT>(value);
  }
  template <typename RateLimitIdT = Aws::String>
  BatchPutLimitEntry& WithRateLimitId(RateLimitIdT&& value) {
    SetRateLimitId(std::forward<RateLimitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional human-readable description for this rate limit. If not provided,
   * the rate limit is created without a description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BatchPutLimitEntry& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordered list of dimension key names that define the scope of this rate
   * limit.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDimensionKeys() const { return m_dimensionKeys; }
  inline bool DimensionKeysHasBeenSet() const { return m_dimensionKeysHasBeenSet; }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  void SetDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys = std::forward<DimensionKeysT>(value);
  }
  template <typename DimensionKeysT = Aws::Vector<Aws::String>>
  BatchPutLimitEntry& WithDimensionKeys(DimensionKeysT&& value) {
    SetDimensionKeys(std::forward<DimensionKeysT>(value));
    return *this;
  }
  template <typename DimensionKeysT = Aws::String>
  BatchPutLimitEntry& AddDimensionKeys(DimensionKeysT&& value) {
    m_dimensionKeysHasBeenSet = true;
    m_dimensionKeys.emplace_back(std::forward<DimensionKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of rule entries that map dimension values to rate
   * configurations.</p>
   */
  inline const Aws::Vector<LimitEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<LimitEntry>>
  BatchPutLimitEntry& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = LimitEntry>
  BatchPutLimitEntry& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rateLimitId;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_dimensionKeys;

  Aws::Vector<LimitEntry> m_entries;
  bool m_rateLimitIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dimensionKeysHasBeenSet = false;
  bool m_entriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
