/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GitMetadata.h>
#include <aws/datazone/model/SourceLocation.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class StartNotebookSyncRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API StartNotebookSyncRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartNotebookSync"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain in which to sync
   * the notebook.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  StartNotebookSyncRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that will own the synced notebook.</p>
   */
  inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
  inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
  template <typename OwningProjectIdentifierT = Aws::String>
  void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    m_owningProjectIdentifierHasBeenSet = true;
    m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value);
  }
  template <typename OwningProjectIdentifierT = Aws::String>
  StartNotebookSyncRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source location of the notebook to sync. This specifies the Amazon Simple
   * Storage Service URI of the notebook file.</p>
   */
  inline const SourceLocation& GetSourceLocation() const { return m_sourceLocation; }
  inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
  template <typename SourceLocationT = SourceLocation>
  void SetSourceLocation(SourceLocationT&& value) {
    m_sourceLocationHasBeenSet = true;
    m_sourceLocation = std::forward<SourceLocationT>(value);
  }
  template <typename SourceLocationT = SourceLocation>
  StartNotebookSyncRequest& WithSourceLocation(SourceLocationT&& value) {
    SetSourceLocation(std::forward<SourceLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Git metadata for the notebook sync, including repository, branch, and
   * commit information.</p>
   */
  inline const GitMetadata& GetGitMetadata() const { return m_gitMetadata; }
  inline bool GitMetadataHasBeenSet() const { return m_gitMetadataHasBeenSet; }
  template <typename GitMetadataT = GitMetadata>
  void SetGitMetadata(GitMetadataT&& value) {
    m_gitMetadataHasBeenSet = true;
    m_gitMetadata = std::forward<GitMetadataT>(value);
  }
  template <typename GitMetadataT = GitMetadata>
  StartNotebookSyncRequest& WithGitMetadata(GitMetadataT&& value) {
    SetGitMetadata(std::forward<GitMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of an existing notebook to sync. If not specified, a new
   * notebook is created.</p>
   */
  inline const Aws::String& GetNotebookId() const { return m_notebookId; }
  inline bool NotebookIdHasBeenSet() const { return m_notebookIdHasBeenSet; }
  template <typename NotebookIdT = Aws::String>
  void SetNotebookId(NotebookIdT&& value) {
    m_notebookIdHasBeenSet = true;
    m_notebookId = std::forward<NotebookIdT>(value);
  }
  template <typename NotebookIdT = Aws::String>
  StartNotebookSyncRequest& WithNotebookId(NotebookIdT&& value) {
    SetNotebookId(std::forward<NotebookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the notebook. The name must be between 1 and 256 characters.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartNotebookSyncRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the notebook.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StartNotebookSyncRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
   * This field is automatically populated if not provided.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartNotebookSyncRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::String m_owningProjectIdentifier;

  SourceLocation m_sourceLocation;

  GitMetadata m_gitMetadata;

  Aws::String m_notebookId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdentifierHasBeenSet = false;
  bool m_owningProjectIdentifierHasBeenSet = false;
  bool m_sourceLocationHasBeenSet = false;
  bool m_gitMetadataHasBeenSet = false;
  bool m_notebookIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
