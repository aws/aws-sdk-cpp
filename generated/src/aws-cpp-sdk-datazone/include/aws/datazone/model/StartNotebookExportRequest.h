/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FileFormat.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class StartNotebookExportRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API StartNotebookExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartNotebookExport"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain in which to
   * export the notebook.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  StartNotebookExportRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the notebook to export.</p>
   */
  inline const Aws::String& GetNotebookIdentifier() const { return m_notebookIdentifier; }
  inline bool NotebookIdentifierHasBeenSet() const { return m_notebookIdentifierHasBeenSet; }
  template <typename NotebookIdentifierT = Aws::String>
  void SetNotebookIdentifier(NotebookIdentifierT&& value) {
    m_notebookIdentifierHasBeenSet = true;
    m_notebookIdentifier = std::forward<NotebookIdentifierT>(value);
  }
  template <typename NotebookIdentifierT = Aws::String>
  StartNotebookExportRequest& WithNotebookIdentifier(NotebookIdentifierT&& value) {
    SetNotebookIdentifier(std::forward<NotebookIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the notebook.</p>
   */
  inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
  inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
  template <typename OwningProjectIdentifierT = Aws::String>
  void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    m_owningProjectIdentifierHasBeenSet = true;
    m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value);
  }
  template <typename OwningProjectIdentifierT = Aws::String>
  StartNotebookExportRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file format for the notebook export. Valid values are <code>PDF</code>
   * and <code>IPYNB</code>.</p>
   */
  inline FileFormat GetFileFormat() const { return m_fileFormat; }
  inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
  inline void SetFileFormat(FileFormat value) {
    m_fileFormatHasBeenSet = true;
    m_fileFormat = value;
  }
  inline StartNotebookExportRequest& WithFileFormat(FileFormat value) {
    SetFileFormat(value);
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
  StartNotebookExportRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::String m_notebookIdentifier;

  Aws::String m_owningProjectIdentifier;

  FileFormat m_fileFormat{FileFormat::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdentifierHasBeenSet = false;
  bool m_notebookIdentifierHasBeenSet = false;
  bool m_owningProjectIdentifierHasBeenSet = false;
  bool m_fileFormatHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
