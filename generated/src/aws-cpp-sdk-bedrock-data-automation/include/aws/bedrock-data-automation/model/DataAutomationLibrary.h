/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DataAutomationLibraryStatus.h>
#include <aws/bedrock-data-automation/model/EntityTypeInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Contains the information of a DataAutomationLibrary.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationLibrary">AWS
 * API Reference</a></p>
 */
class DataAutomationLibrary {
 public:
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibrary() = default;
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibrary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API DataAutomationLibrary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetLibraryArn() const { return m_libraryArn; }
  inline bool LibraryArnHasBeenSet() const { return m_libraryArnHasBeenSet; }
  template <typename LibraryArnT = Aws::String>
  void SetLibraryArn(LibraryArnT&& value) {
    m_libraryArnHasBeenSet = true;
    m_libraryArn = std::forward<LibraryArnT>(value);
  }
  template <typename LibraryArnT = Aws::String>
  DataAutomationLibrary& WithLibraryArn(LibraryArnT&& value) {
    SetLibraryArn(std::forward<LibraryArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DataAutomationLibrary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetLibraryName() const { return m_libraryName; }
  inline bool LibraryNameHasBeenSet() const { return m_libraryNameHasBeenSet; }
  template <typename LibraryNameT = Aws::String>
  void SetLibraryName(LibraryNameT&& value) {
    m_libraryNameHasBeenSet = true;
    m_libraryName = std::forward<LibraryNameT>(value);
  }
  template <typename LibraryNameT = Aws::String>
  DataAutomationLibrary& WithLibraryName(LibraryNameT&& value) {
    SetLibraryName(std::forward<LibraryNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetLibraryDescription() const { return m_libraryDescription; }
  inline bool LibraryDescriptionHasBeenSet() const { return m_libraryDescriptionHasBeenSet; }
  template <typename LibraryDescriptionT = Aws::String>
  void SetLibraryDescription(LibraryDescriptionT&& value) {
    m_libraryDescriptionHasBeenSet = true;
    m_libraryDescription = std::forward<LibraryDescriptionT>(value);
  }
  template <typename LibraryDescriptionT = Aws::String>
  DataAutomationLibrary& WithLibraryDescription(LibraryDescriptionT&& value) {
    SetLibraryDescription(std::forward<LibraryDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline DataAutomationLibraryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DataAutomationLibraryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DataAutomationLibrary& WithStatus(DataAutomationLibraryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<EntityTypeInfo>& GetEntityTypes() const { return m_entityTypes; }
  inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
  template <typename EntityTypesT = Aws::Vector<EntityTypeInfo>>
  void SetEntityTypes(EntityTypesT&& value) {
    m_entityTypesHasBeenSet = true;
    m_entityTypes = std::forward<EntityTypesT>(value);
  }
  template <typename EntityTypesT = Aws::Vector<EntityTypeInfo>>
  DataAutomationLibrary& WithEntityTypes(EntityTypesT&& value) {
    SetEntityTypes(std::forward<EntityTypesT>(value));
    return *this;
  }
  template <typename EntityTypesT = EntityTypeInfo>
  DataAutomationLibrary& AddEntityTypes(EntityTypesT&& value) {
    m_entityTypesHasBeenSet = true;
    m_entityTypes.emplace_back(std::forward<EntityTypesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  DataAutomationLibrary& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const { return m_kmsEncryptionContext; }
  inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
  template <typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetKmsEncryptionContext(KmsEncryptionContextT&& value) {
    m_kmsEncryptionContextHasBeenSet = true;
    m_kmsEncryptionContext = std::forward<KmsEncryptionContextT>(value);
  }
  template <typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  DataAutomationLibrary& WithKmsEncryptionContext(KmsEncryptionContextT&& value) {
    SetKmsEncryptionContext(std::forward<KmsEncryptionContextT>(value));
    return *this;
  }
  template <typename KmsEncryptionContextKeyT = Aws::String, typename KmsEncryptionContextValueT = Aws::String>
  DataAutomationLibrary& AddKmsEncryptionContext(KmsEncryptionContextKeyT&& key, KmsEncryptionContextValueT&& value) {
    m_kmsEncryptionContextHasBeenSet = true;
    m_kmsEncryptionContext.emplace(std::forward<KmsEncryptionContextKeyT>(key), std::forward<KmsEncryptionContextValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_libraryArn;

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_libraryName;

  Aws::String m_libraryDescription;

  DataAutomationLibraryStatus m_status{DataAutomationLibraryStatus::NOT_SET};

  Aws::Vector<EntityTypeInfo> m_entityTypes;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;
  bool m_libraryArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_libraryNameHasBeenSet = false;
  bool m_libraryDescriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_entityTypesHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_kmsEncryptionContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
