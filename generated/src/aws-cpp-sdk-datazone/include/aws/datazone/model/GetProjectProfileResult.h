/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/EnvironmentConfiguration.h>
#include <aws/datazone/model/ResourceTagParameter.h>
#include <aws/datazone/model/Status.h>

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
class GetProjectProfileResult {
 public:
  AWS_DATAZONE_API GetProjectProfileResult() = default;
  AWS_DATAZONE_API GetProjectProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API GetProjectProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the domain of the project profile.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  GetProjectProfileResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project profile.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetProjectProfileResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the project profile.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetProjectProfileResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the project profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetProjectProfileResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the project profile.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetProjectProfileResult& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource tags of the project profile.</p>
   */
  inline const Aws::Vector<ResourceTagParameter>& GetProjectResourceTags() const { return m_projectResourceTags; }
  template <typename ProjectResourceTagsT = Aws::Vector<ResourceTagParameter>>
  void SetProjectResourceTags(ProjectResourceTagsT&& value) {
    m_projectResourceTagsHasBeenSet = true;
    m_projectResourceTags = std::forward<ProjectResourceTagsT>(value);
  }
  template <typename ProjectResourceTagsT = Aws::Vector<ResourceTagParameter>>
  GetProjectProfileResult& WithProjectResourceTags(ProjectResourceTagsT&& value) {
    SetProjectResourceTags(std::forward<ProjectResourceTagsT>(value));
    return *this;
  }
  template <typename ProjectResourceTagsT = ResourceTagParameter>
  GetProjectProfileResult& AddProjectResourceTags(ProjectResourceTagsT&& value) {
    m_projectResourceTagsHasBeenSet = true;
    m_projectResourceTags.emplace_back(std::forward<ProjectResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether custom project resource tags are supported.</p>
   */
  inline bool GetAllowCustomProjectResourceTags() const { return m_allowCustomProjectResourceTags; }
  inline void SetAllowCustomProjectResourceTags(bool value) {
    m_allowCustomProjectResourceTagsHasBeenSet = true;
    m_allowCustomProjectResourceTags = value;
  }
  inline GetProjectProfileResult& WithAllowCustomProjectResourceTags(bool value) {
    SetAllowCustomProjectResourceTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Field viewable through the UI that provides a project user with the allowed
   * resource tag specifications.</p>
   */
  inline const Aws::String& GetProjectResourceTagsDescription() const { return m_projectResourceTagsDescription; }
  template <typename ProjectResourceTagsDescriptionT = Aws::String>
  void SetProjectResourceTagsDescription(ProjectResourceTagsDescriptionT&& value) {
    m_projectResourceTagsDescriptionHasBeenSet = true;
    m_projectResourceTagsDescription = std::forward<ProjectResourceTagsDescriptionT>(value);
  }
  template <typename ProjectResourceTagsDescriptionT = Aws::String>
  GetProjectProfileResult& WithProjectResourceTagsDescription(ProjectResourceTagsDescriptionT&& value) {
    SetProjectResourceTagsDescription(std::forward<ProjectResourceTagsDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment configurations of the project profile.</p>
   */
  inline const Aws::Vector<EnvironmentConfiguration>& GetEnvironmentConfigurations() const { return m_environmentConfigurations; }
  template <typename EnvironmentConfigurationsT = Aws::Vector<EnvironmentConfiguration>>
  void SetEnvironmentConfigurations(EnvironmentConfigurationsT&& value) {
    m_environmentConfigurationsHasBeenSet = true;
    m_environmentConfigurations = std::forward<EnvironmentConfigurationsT>(value);
  }
  template <typename EnvironmentConfigurationsT = Aws::Vector<EnvironmentConfiguration>>
  GetProjectProfileResult& WithEnvironmentConfigurations(EnvironmentConfigurationsT&& value) {
    SetEnvironmentConfigurations(std::forward<EnvironmentConfigurationsT>(value));
    return *this;
  }
  template <typename EnvironmentConfigurationsT = EnvironmentConfiguration>
  GetProjectProfileResult& AddEnvironmentConfigurations(EnvironmentConfigurationsT&& value) {
    m_environmentConfigurationsHasBeenSet = true;
    m_environmentConfigurations.emplace_back(std::forward<EnvironmentConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user who created the project profile.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetProjectProfileResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the project profile was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetProjectProfileResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when project profile was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  GetProjectProfileResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the domain unit of the project profile.</p>
   */
  inline const Aws::String& GetDomainUnitId() const { return m_domainUnitId; }
  template <typename DomainUnitIdT = Aws::String>
  void SetDomainUnitId(DomainUnitIdT&& value) {
    m_domainUnitIdHasBeenSet = true;
    m_domainUnitId = std::forward<DomainUnitIdT>(value);
  }
  template <typename DomainUnitIdT = Aws::String>
  GetProjectProfileResult& WithDomainUnitId(DomainUnitIdT&& value) {
    SetDomainUnitId(std::forward<DomainUnitIdT>(value));
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
  GetProjectProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_description;

  Status m_status{Status::NOT_SET};

  Aws::Vector<ResourceTagParameter> m_projectResourceTags;

  bool m_allowCustomProjectResourceTags{false};

  Aws::String m_projectResourceTagsDescription;

  Aws::Vector<EnvironmentConfiguration> m_environmentConfigurations;

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::String m_domainUnitId;

  Aws::String m_requestId;
  bool m_domainIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_projectResourceTagsHasBeenSet = false;
  bool m_allowCustomProjectResourceTagsHasBeenSet = false;
  bool m_projectResourceTagsDescriptionHasBeenSet = false;
  bool m_environmentConfigurationsHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_domainUnitIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
