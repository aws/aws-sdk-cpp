/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FileFormat.h>
#include <aws/datazone/model/NotebookExportStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class StartNotebookExportResult {
 public:
  AWS_DATAZONE_API StartNotebookExportResult() = default;
  AWS_DATAZONE_API StartNotebookExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API StartNotebookExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the notebook export.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  StartNotebookExportResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  StartNotebookExportResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the notebook.</p>
   */
  inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
  template <typename OwningProjectIdT = Aws::String>
  void SetOwningProjectId(OwningProjectIdT&& value) {
    m_owningProjectIdHasBeenSet = true;
    m_owningProjectId = std::forward<OwningProjectIdT>(value);
  }
  template <typename OwningProjectIdT = Aws::String>
  StartNotebookExportResult& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the notebook.</p>
   */
  inline const Aws::String& GetNotebookId() const { return m_notebookId; }
  template <typename NotebookIdT = Aws::String>
  void SetNotebookId(NotebookIdT&& value) {
    m_notebookIdHasBeenSet = true;
    m_notebookId = std::forward<NotebookIdT>(value);
  }
  template <typename NotebookIdT = Aws::String>
  StartNotebookExportResult& WithNotebookId(NotebookIdT&& value) {
    SetNotebookId(std::forward<NotebookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file format of the notebook export.</p>
   */
  inline FileFormat GetFileFormat() const { return m_fileFormat; }
  inline void SetFileFormat(FileFormat value) {
    m_fileFormatHasBeenSet = true;
    m_fileFormat = value;
  }
  inline StartNotebookExportResult& WithFileFormat(FileFormat value) {
    SetFileFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the notebook export.</p>
   */
  inline NotebookExportStatus GetStatus() const { return m_status; }
  inline void SetStatus(NotebookExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartNotebookExportResult& WithStatus(NotebookExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook export was started.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StartNotebookExportResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who started the notebook export.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  StartNotebookExportResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartNotebookExportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_domainId;

  Aws::String m_owningProjectId;

  Aws::String m_notebookId;

  FileFormat m_fileFormat{FileFormat::NOT_SET};

  NotebookExportStatus m_status{NotebookExportStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_notebookIdHasBeenSet = false;
  bool m_fileFormatHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
