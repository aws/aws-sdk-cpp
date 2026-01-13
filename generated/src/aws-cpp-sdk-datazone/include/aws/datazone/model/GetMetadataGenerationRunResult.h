/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/MetadataGenerationRunStatus.h>
#include <aws/datazone/model/MetadataGenerationRunTarget.h>
#include <aws/datazone/model/MetadataGenerationRunType.h>
#include <aws/datazone/model/MetadataGenerationRunTypeStat.h>

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
class GetMetadataGenerationRunResult {
 public:
  AWS_DATAZONE_API GetMetadataGenerationRunResult() = default;
  AWS_DATAZONE_API GetMetadataGenerationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API GetMetadataGenerationRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the Amazon DataZone domain the metadata generation run of which you
   * want to get.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  GetMetadataGenerationRunResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the metadata generation run.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetMetadataGenerationRunResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asset for which you're generating metadata.</p>
   */
  inline const MetadataGenerationRunTarget& GetTarget() const { return m_target; }
  template <typename TargetT = MetadataGenerationRunTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = MetadataGenerationRunTarget>
  GetMetadataGenerationRunResult& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the metadata generation run.</p>
   */
  inline MetadataGenerationRunStatus GetStatus() const { return m_status; }
  inline void SetStatus(MetadataGenerationRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetMetadataGenerationRunResult& WithStatus(MetadataGenerationRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of the metadata generation run.</p>
   */
  inline const Aws::Vector<MetadataGenerationRunType>& GetTypes() const { return m_types; }
  template <typename TypesT = Aws::Vector<MetadataGenerationRunType>>
  void SetTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types = std::forward<TypesT>(value);
  }
  template <typename TypesT = Aws::Vector<MetadataGenerationRunType>>
  GetMetadataGenerationRunResult& WithTypes(TypesT&& value) {
    SetTypes(std::forward<TypesT>(value));
    return *this;
  }
  inline GetMetadataGenerationRunResult& AddTypes(MetadataGenerationRunType value) {
    m_typesHasBeenSet = true;
    m_types.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the metadata generation run was start.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetMetadataGenerationRunResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon DataZone user who started the metadata generation run.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetMetadataGenerationRunResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project that owns the assets for which you're running metadata
   * generation.</p>
   */
  inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
  template <typename OwningProjectIdT = Aws::String>
  void SetOwningProjectId(OwningProjectIdT&& value) {
    m_owningProjectIdHasBeenSet = true;
    m_owningProjectId = std::forward<OwningProjectIdT>(value);
  }
  template <typename OwningProjectIdT = Aws::String>
  GetMetadataGenerationRunResult& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type stats included in the metadata generation run output details.</p>
   */
  inline const Aws::Vector<MetadataGenerationRunTypeStat>& GetTypeStats() const { return m_typeStats; }
  template <typename TypeStatsT = Aws::Vector<MetadataGenerationRunTypeStat>>
  void SetTypeStats(TypeStatsT&& value) {
    m_typeStatsHasBeenSet = true;
    m_typeStats = std::forward<TypeStatsT>(value);
  }
  template <typename TypeStatsT = Aws::Vector<MetadataGenerationRunTypeStat>>
  GetMetadataGenerationRunResult& WithTypeStats(TypeStatsT&& value) {
    SetTypeStats(std::forward<TypeStatsT>(value));
    return *this;
  }
  template <typename TypeStatsT = MetadataGenerationRunTypeStat>
  GetMetadataGenerationRunResult& AddTypeStats(TypeStatsT&& value) {
    m_typeStatsHasBeenSet = true;
    m_typeStats.emplace_back(std::forward<TypeStatsT>(value));
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
  GetMetadataGenerationRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_id;

  MetadataGenerationRunTarget m_target;

  MetadataGenerationRunStatus m_status{MetadataGenerationRunStatus::NOT_SET};

  Aws::Vector<MetadataGenerationRunType> m_types;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::String m_owningProjectId;

  Aws::Vector<MetadataGenerationRunTypeStat> m_typeStats;

  Aws::String m_requestId;
  bool m_domainIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_targetHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_typesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_typeStatsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
