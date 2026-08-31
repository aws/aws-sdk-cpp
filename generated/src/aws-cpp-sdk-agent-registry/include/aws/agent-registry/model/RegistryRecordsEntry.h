/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
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
namespace AgentRegistry {
namespace Model {

/**
 * <p> Binds one registry to the record IDs requested from it.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/RegistryRecordsEntry">AWS
 * API Reference</a></p>
 */
class RegistryRecordsEntry {
 public:
  AWS_AGENTREGISTRY_API RegistryRecordsEntry() = default;
  AWS_AGENTREGISTRY_API RegistryRecordsEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API RegistryRecordsEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The identifier of the registry to retrieve the records from. You can provide
   * either the full Amazon Resource Name (ARN) or the registry ID.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  RegistryRecordsEntry& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The record IDs to retrieve from the registry. You can specify 1 through 100
   * record IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRecordIds() const { return m_recordIds; }
  inline bool RecordIdsHasBeenSet() const { return m_recordIdsHasBeenSet; }
  template <typename RecordIdsT = Aws::Vector<Aws::String>>
  void SetRecordIds(RecordIdsT&& value) {
    m_recordIdsHasBeenSet = true;
    m_recordIds = std::forward<RecordIdsT>(value);
  }
  template <typename RecordIdsT = Aws::Vector<Aws::String>>
  RegistryRecordsEntry& WithRecordIds(RecordIdsT&& value) {
    SetRecordIds(std::forward<RecordIdsT>(value));
    return *this;
  }
  template <typename RecordIdsT = Aws::String>
  RegistryRecordsEntry& AddRecordIds(RecordIdsT&& value) {
    m_recordIdsHasBeenSet = true;
    m_recordIds.emplace_back(std::forward<RecordIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  Aws::Vector<Aws::String> m_recordIds;
  bool m_registryIdHasBeenSet = false;
  bool m_recordIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
