/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/RecordType.h>
#include <aws/agent-registry/model/RegistryRecordStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p> Summary information about a discoverable registry record returned by <code>
 * ListDiscoverableRegistryRecords</code>. This summary does not include
 * descriptors.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-2025-12-01/DiscoverableRegistryRecordSummary">AWS
 * API Reference</a></p>
 */
class DiscoverableRegistryRecordSummary {
 public:
  AWS_AGENTREGISTRY_API DiscoverableRegistryRecordSummary() = default;
  AWS_AGENTREGISTRY_API DiscoverableRegistryRecordSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API DiscoverableRegistryRecordSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
  inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }
  template <typename RegistryArnT = Aws::String>
  void SetRegistryArn(RegistryArnT&& value) {
    m_registryArnHasBeenSet = true;
    m_registryArn = std::forward<RegistryArnT>(value);
  }
  template <typename RegistryArnT = Aws::String>
  DiscoverableRegistryRecordSummary& WithRegistryArn(RegistryArnT&& value) {
    SetRegistryArn(std::forward<RegistryArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRecordArn() const { return m_recordArn; }
  inline bool RecordArnHasBeenSet() const { return m_recordArnHasBeenSet; }
  template <typename RecordArnT = Aws::String>
  void SetRecordArn(RecordArnT&& value) {
    m_recordArnHasBeenSet = true;
    m_recordArn = std::forward<RecordArnT>(value);
  }
  template <typename RecordArnT = Aws::String>
  DiscoverableRegistryRecordSummary& WithRecordArn(RecordArnT&& value) {
    SetRecordArn(std::forward<RecordArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  DiscoverableRegistryRecordSummary& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DiscoverableRegistryRecordSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DiscoverableRegistryRecordSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  DiscoverableRegistryRecordSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline RecordType GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  inline void SetRecordType(RecordType value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = value;
  }
  inline DiscoverableRegistryRecordSummary& WithRecordType(RecordType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRecordVersion() const { return m_recordVersion; }
  inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }
  template <typename RecordVersionT = Aws::String>
  void SetRecordVersion(RecordVersionT&& value) {
    m_recordVersionHasBeenSet = true;
    m_recordVersion = std::forward<RecordVersionT>(value);
  }
  template <typename RecordVersionT = Aws::String>
  DiscoverableRegistryRecordSummary& WithRecordVersion(RecordVersionT&& value) {
    SetRecordVersion(std::forward<RecordVersionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline RegistryRecordStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RegistryRecordStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DiscoverableRegistryRecordSummary& WithStatus(RegistryRecordStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DiscoverableRegistryRecordSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DiscoverableRegistryRecordSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryArn;

  Aws::String m_recordArn;

  Aws::String m_recordId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_displayName;

  RecordType m_recordType{RecordType::NOT_SET};

  Aws::String m_recordVersion;

  RegistryRecordStatus m_status{RegistryRecordStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_registryArnHasBeenSet = false;
  bool m_recordArnHasBeenSet = false;
  bool m_recordIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_recordVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
