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
#include <aws/datazone/model/NotebookExportError.h>
#include <aws/datazone/model/NotebookExportStatus.h>
#include <aws/datazone/model/OutputLocation.h>

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
class GetNotebookExportResult {
 public:
  AWS_DATAZONE_API GetNotebookExportResult() = default;
  AWS_DATAZONE_API GetNotebookExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API GetNotebookExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  GetNotebookExportResult& WithId(IdT&& value) {
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
  GetNotebookExportResult& WithDomainId(DomainIdT&& value) {
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
  GetNotebookExportResult& WithOwningProjectId(OwningProjectIdT&& value) {
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
  GetNotebookExportResult& WithNotebookId(NotebookIdT&& value) {
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
  inline GetNotebookExportResult& WithFileFormat(FileFormat value) {
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
  inline GetNotebookExportResult& WithStatus(NotebookExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output location of the exported notebook in Amazon Simple Storage
   * Service.</p>
   */
  inline const OutputLocation& GetOutputLocation() const { return m_outputLocation; }
  template <typename OutputLocationT = OutputLocation>
  void SetOutputLocation(OutputLocationT&& value) {
    m_outputLocationHasBeenSet = true;
    m_outputLocation = std::forward<OutputLocationT>(value);
  }
  template <typename OutputLocationT = OutputLocation>
  GetNotebookExportResult& WithOutputLocation(OutputLocationT&& value) {
    SetOutputLocation(std::forward<OutputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error details if the notebook export failed.</p>
   */
  inline const NotebookExportError& GetError() const { return m_error; }
  template <typename ErrorT = NotebookExportError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = NotebookExportError>
  GetNotebookExportResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook export completed.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  GetNotebookExportResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
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
  GetNotebookExportResult& WithCreatedAt(CreatedAtT&& value) {
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
  GetNotebookExportResult& WithCreatedBy(CreatedByT&& value) {
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
  GetNotebookExportResult& WithRequestId(RequestIdT&& value) {
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

  OutputLocation m_outputLocation;

  NotebookExportError m_error;

  Aws::Utils::DateTime m_completedAt{};

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
  bool m_outputLocationHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
