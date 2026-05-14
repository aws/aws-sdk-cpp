/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/NotebookStatus.h>
#include <aws/datazone/model/SourceLocation.h>

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
class StartNotebookImportResult {
 public:
  AWS_DATAZONE_API StartNotebookImportResult() = default;
  AWS_DATAZONE_API StartNotebookImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API StartNotebookImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the imported notebook.</p>
   */
  inline const Aws::String& GetNotebookId() const { return m_notebookId; }
  template <typename NotebookIdT = Aws::String>
  void SetNotebookId(NotebookIdT&& value) {
    m_notebookIdHasBeenSet = true;
    m_notebookId = std::forward<NotebookIdT>(value);
  }
  template <typename NotebookIdT = Aws::String>
  StartNotebookImportResult& WithNotebookId(NotebookIdT&& value) {
    SetNotebookId(std::forward<NotebookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the notebook import.</p>
   */
  inline NotebookStatus GetStatus() const { return m_status; }
  inline void SetStatus(NotebookStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartNotebookImportResult& WithStatus(NotebookStatus value) {
    SetStatus(value);
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
  StartNotebookImportResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the imported notebook.</p>
   */
  inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
  template <typename OwningProjectIdT = Aws::String>
  void SetOwningProjectId(OwningProjectIdT&& value) {
    m_owningProjectIdHasBeenSet = true;
    m_owningProjectId = std::forward<OwningProjectIdT>(value);
  }
  template <typename OwningProjectIdT = Aws::String>
  StartNotebookImportResult& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the imported notebook.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartNotebookImportResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the imported notebook.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StartNotebookImportResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source location from which the notebook was imported.</p>
   */
  inline const SourceLocation& GetSourceLocation() const { return m_sourceLocation; }
  template <typename SourceLocationT = SourceLocation>
  void SetSourceLocation(SourceLocationT&& value) {
    m_sourceLocationHasBeenSet = true;
    m_sourceLocation = std::forward<SourceLocationT>(value);
  }
  template <typename SourceLocationT = SourceLocation>
  StartNotebookImportResult& WithSourceLocation(SourceLocationT&& value) {
    SetSourceLocation(std::forward<SourceLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook import was started.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StartNotebookImportResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who started the notebook import.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  StartNotebookImportResult& WithCreatedBy(CreatedByT&& value) {
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
  StartNotebookImportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_notebookId;

  NotebookStatus m_status{NotebookStatus::NOT_SET};

  Aws::String m_domainId;

  Aws::String m_owningProjectId;

  Aws::String m_name;

  Aws::String m_description;

  SourceLocation m_sourceLocation;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_notebookIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sourceLocationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
