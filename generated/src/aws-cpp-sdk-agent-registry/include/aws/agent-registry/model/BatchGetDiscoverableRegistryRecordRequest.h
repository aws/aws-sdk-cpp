/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryRequest.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/RegistryRecordsEntry.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AgentRegistry {
namespace Model {

/**
 */
class BatchGetDiscoverableRegistryRecordRequest : public AgentRegistryRequest {
 public:
  AWS_AGENTREGISTRY_API BatchGetDiscoverableRegistryRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetDiscoverableRegistryRecord"; }

  AWS_AGENTREGISTRY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The registry-scoped groups of record IDs to retrieve. Currently, you can
   * specify exactly one entry.</p>
   */
  inline const Aws::Vector<RegistryRecordsEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<RegistryRecordsEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<RegistryRecordsEntry>>
  BatchGetDiscoverableRegistryRecordRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = RegistryRecordsEntry>
  BatchGetDiscoverableRegistryRecordRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RegistryRecordsEntry> m_entries;
  bool m_entriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
