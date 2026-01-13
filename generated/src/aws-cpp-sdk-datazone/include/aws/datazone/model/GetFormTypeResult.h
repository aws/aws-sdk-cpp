/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FormTypeStatus.h>
#include <aws/datazone/model/Import.h>
#include <aws/datazone/model/Model.h>

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
class GetFormTypeResult {
 public:
  AWS_DATAZONE_API GetFormTypeResult() = default;
  AWS_DATAZONE_API GetFormTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API GetFormTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the Amazon DataZone domain in which this metadata form type
   * exists.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  GetFormTypeResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the metadata form type.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetFormTypeResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the metadata form type.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  GetFormTypeResult& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model of the metadata form type.</p>
   */
  inline const Model& GetModel() const { return m_model; }
  template <typename ModelT = Model>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = Model>
  GetFormTypeResult& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project that owns this metadata form type.</p>
   */
  inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
  template <typename OwningProjectIdT = Aws::String>
  void SetOwningProjectId(OwningProjectIdT&& value) {
    m_owningProjectIdHasBeenSet = true;
    m_owningProjectId = std::forward<OwningProjectIdT>(value);
  }
  template <typename OwningProjectIdT = Aws::String>
  GetFormTypeResult& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon DataZone domain in which the metadata form type was
   * originally created.</p>
   */
  inline const Aws::String& GetOriginDomainId() const { return m_originDomainId; }
  template <typename OriginDomainIdT = Aws::String>
  void SetOriginDomainId(OriginDomainIdT&& value) {
    m_originDomainIdHasBeenSet = true;
    m_originDomainId = std::forward<OriginDomainIdT>(value);
  }
  template <typename OriginDomainIdT = Aws::String>
  GetFormTypeResult& WithOriginDomainId(OriginDomainIdT&& value) {
    SetOriginDomainId(std::forward<OriginDomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project in which this metadata form type was originally
   * created.</p>
   */
  inline const Aws::String& GetOriginProjectId() const { return m_originProjectId; }
  template <typename OriginProjectIdT = Aws::String>
  void SetOriginProjectId(OriginProjectIdT&& value) {
    m_originProjectIdHasBeenSet = true;
    m_originProjectId = std::forward<OriginProjectIdT>(value);
  }
  template <typename OriginProjectIdT = Aws::String>
  GetFormTypeResult& WithOriginProjectId(OriginProjectIdT&& value) {
    SetOriginProjectId(std::forward<OriginProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the metadata form type.</p>
   */
  inline FormTypeStatus GetStatus() const { return m_status; }
  inline void SetStatus(FormTypeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetFormTypeResult& WithStatus(FormTypeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when this metadata form type was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetFormTypeResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon DataZone user who created this metadata form type.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetFormTypeResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the metadata form type.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetFormTypeResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The imports of the metadata form type.</p>
   */
  inline const Aws::Vector<Import>& GetImports() const { return m_imports; }
  template <typename ImportsT = Aws::Vector<Import>>
  void SetImports(ImportsT&& value) {
    m_importsHasBeenSet = true;
    m_imports = std::forward<ImportsT>(value);
  }
  template <typename ImportsT = Aws::Vector<Import>>
  GetFormTypeResult& WithImports(ImportsT&& value) {
    SetImports(std::forward<ImportsT>(value));
    return *this;
  }
  template <typename ImportsT = Import>
  GetFormTypeResult& AddImports(ImportsT&& value) {
    m_importsHasBeenSet = true;
    m_imports.emplace_back(std::forward<ImportsT>(value));
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
  GetFormTypeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_name;

  Aws::String m_revision;

  Model m_model;

  Aws::String m_owningProjectId;

  Aws::String m_originDomainId;

  Aws::String m_originProjectId;

  FormTypeStatus m_status{FormTypeStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::String m_description;

  Aws::Vector<Import> m_imports;

  Aws::String m_requestId;
  bool m_domainIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_originDomainIdHasBeenSet = false;
  bool m_originProjectIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_importsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
