/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/CellInformation.h>
#include <aws/datazone/model/EnvironmentConfig.h>
#include <aws/datazone/model/GitMetadata.h>
#include <aws/datazone/model/NotebookError.h>
#include <aws/datazone/model/NotebookStatus.h>

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
class CreateNotebookResult {
 public:
  AWS_DATAZONE_API CreateNotebookResult() = default;
  AWS_DATAZONE_API CreateNotebookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API CreateNotebookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the notebook.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateNotebookResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the notebook.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateNotebookResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  CreateNotebookResult& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
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
  CreateNotebookResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordered list of cells in the notebook.</p>
   */
  inline const Aws::Vector<CellInformation>& GetCellOrder() const { return m_cellOrder; }
  template <typename CellOrderT = Aws::Vector<CellInformation>>
  void SetCellOrder(CellOrderT&& value) {
    m_cellOrderHasBeenSet = true;
    m_cellOrder = std::forward<CellOrderT>(value);
  }
  template <typename CellOrderT = Aws::Vector<CellInformation>>
  CreateNotebookResult& WithCellOrder(CellOrderT&& value) {
    SetCellOrder(std::forward<CellOrderT>(value));
    return *this;
  }
  template <typename CellOrderT = CellInformation>
  CreateNotebookResult& AddCellOrder(CellOrderT&& value) {
    m_cellOrderHasBeenSet = true;
    m_cellOrder.emplace_back(std::forward<CellOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the notebook.</p>
   */
  inline NotebookStatus GetStatus() const { return m_status; }
  inline void SetStatus(NotebookStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateNotebookResult& WithStatus(NotebookStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the notebook.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateNotebookResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateNotebookResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who created the notebook.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  CreateNotebookResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateNotebookResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who last updated the notebook.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  CreateNotebookResult& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who locked the notebook.</p>
   */
  inline const Aws::String& GetLockedBy() const { return m_lockedBy; }
  template <typename LockedByT = Aws::String>
  void SetLockedBy(LockedByT&& value) {
    m_lockedByHasBeenSet = true;
    m_lockedBy = std::forward<LockedByT>(value);
  }
  template <typename LockedByT = Aws::String>
  CreateNotebookResult& WithLockedBy(LockedByT&& value) {
    SetLockedBy(std::forward<LockedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook was locked.</p>
   */
  inline const Aws::Utils::DateTime& GetLockedAt() const { return m_lockedAt; }
  template <typename LockedAtT = Aws::Utils::DateTime>
  void SetLockedAt(LockedAtT&& value) {
    m_lockedAtHasBeenSet = true;
    m_lockedAt = std::forward<LockedAtT>(value);
  }
  template <typename LockedAtT = Aws::Utils::DateTime>
  CreateNotebookResult& WithLockedAt(LockedAtT&& value) {
    SetLockedAt(std::forward<LockedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook lock expires.</p>
   */
  inline const Aws::Utils::DateTime& GetLockExpiresAt() const { return m_lockExpiresAt; }
  template <typename LockExpiresAtT = Aws::Utils::DateTime>
  void SetLockExpiresAt(LockExpiresAtT&& value) {
    m_lockExpiresAtHasBeenSet = true;
    m_lockExpiresAt = std::forward<LockExpiresAtT>(value);
  }
  template <typename LockExpiresAtT = Aws::Utils::DateTime>
  CreateNotebookResult& WithLockExpiresAt(LockExpiresAtT&& value) {
    SetLockExpiresAt(std::forward<LockExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the compute associated with the notebook.</p>
   */
  inline const Aws::String& GetComputeId() const { return m_computeId; }
  template <typename ComputeIdT = Aws::String>
  void SetComputeId(ComputeIdT&& value) {
    m_computeIdHasBeenSet = true;
    m_computeId = std::forward<ComputeIdT>(value);
  }
  template <typename ComputeIdT = Aws::String>
  CreateNotebookResult& WithComputeId(ComputeIdT&& value) {
    SetComputeId(std::forward<ComputeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata of the notebook.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  CreateNotebookResult& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  CreateNotebookResult& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sensitive parameters of the notebook.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  CreateNotebookResult& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
  CreateNotebookResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment configuration of the notebook.</p>
   */
  inline const EnvironmentConfig& GetEnvironmentConfiguration() const { return m_environmentConfiguration; }
  template <typename EnvironmentConfigurationT = EnvironmentConfig>
  void SetEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    m_environmentConfigurationHasBeenSet = true;
    m_environmentConfiguration = std::forward<EnvironmentConfigurationT>(value);
  }
  template <typename EnvironmentConfigurationT = EnvironmentConfig>
  CreateNotebookResult& WithEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    SetEnvironmentConfiguration(std::forward<EnvironmentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error details if the notebook creation failed.</p>
   */
  inline const NotebookError& GetError() const { return m_error; }
  template <typename ErrorT = NotebookError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = NotebookError>
  CreateNotebookResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Git metadata associated with the notebook.</p>
   */
  inline const GitMetadata& GetGitMetadata() const { return m_gitMetadata; }
  template <typename GitMetadataT = GitMetadata>
  void SetGitMetadata(GitMetadataT&& value) {
    m_gitMetadataHasBeenSet = true;
    m_gitMetadata = std::forward<GitMetadataT>(value);
  }
  template <typename GitMetadataT = GitMetadata>
  CreateNotebookResult& WithGitMetadata(GitMetadataT&& value) {
    SetGitMetadata(std::forward<GitMetadataT>(value));
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
  CreateNotebookResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_owningProjectId;

  Aws::String m_domainId;

  Aws::Vector<CellInformation> m_cellOrder;

  NotebookStatus m_status{NotebookStatus::NOT_SET};

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;

  Aws::String m_lockedBy;

  Aws::Utils::DateTime m_lockedAt{};

  Aws::Utils::DateTime m_lockExpiresAt{};

  Aws::String m_computeId;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::Map<Aws::String, Aws::String> m_parameters;

  EnvironmentConfig m_environmentConfiguration;

  NotebookError m_error;

  GitMetadata m_gitMetadata;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_cellOrderHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_lockedByHasBeenSet = false;
  bool m_lockedAtHasBeenSet = false;
  bool m_lockExpiresAtHasBeenSet = false;
  bool m_computeIdHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_environmentConfigurationHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_gitMetadataHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
