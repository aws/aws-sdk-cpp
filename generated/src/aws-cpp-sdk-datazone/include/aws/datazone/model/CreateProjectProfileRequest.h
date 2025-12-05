/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/EnvironmentConfiguration.h>
#include <aws/datazone/model/ResourceTagParameter.h>
#include <aws/datazone/model/Status.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class CreateProjectProfileRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API CreateProjectProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProjectProfile"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies whether custom project resource tags are supported.</p>
   */
  inline bool GetAllowCustomProjectResourceTags() const { return m_allowCustomProjectResourceTags; }
  inline bool AllowCustomProjectResourceTagsHasBeenSet() const { return m_allowCustomProjectResourceTagsHasBeenSet; }
  inline void SetAllowCustomProjectResourceTags(bool value) {
    m_allowCustomProjectResourceTagsHasBeenSet = true;
    m_allowCustomProjectResourceTags = value;
  }
  inline CreateProjectProfileRequest& WithAllowCustomProjectResourceTags(bool value) {
    SetAllowCustomProjectResourceTags(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of a project profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateProjectProfileRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A domain ID of the project profile.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  CreateProjectProfileRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A domain unit ID of the project profile.</p>
   */
  inline const Aws::String& GetDomainUnitIdentifier() const { return m_domainUnitIdentifier; }
  inline bool DomainUnitIdentifierHasBeenSet() const { return m_domainUnitIdentifierHasBeenSet; }
  template <typename DomainUnitIdentifierT = Aws::String>
  void SetDomainUnitIdentifier(DomainUnitIdentifierT&& value) {
    m_domainUnitIdentifierHasBeenSet = true;
    m_domainUnitIdentifier = std::forward<DomainUnitIdentifierT>(value);
  }
  template <typename DomainUnitIdentifierT = Aws::String>
  CreateProjectProfileRequest& WithDomainUnitIdentifier(DomainUnitIdentifierT&& value) {
    SetDomainUnitIdentifier(std::forward<DomainUnitIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment configurations of the project profile.</p>
   */
  inline const Aws::Vector<EnvironmentConfiguration>& GetEnvironmentConfigurations() const { return m_environmentConfigurations; }
  inline bool EnvironmentConfigurationsHasBeenSet() const { return m_environmentConfigurationsHasBeenSet; }
  template <typename EnvironmentConfigurationsT = Aws::Vector<EnvironmentConfiguration>>
  void SetEnvironmentConfigurations(EnvironmentConfigurationsT&& value) {
    m_environmentConfigurationsHasBeenSet = true;
    m_environmentConfigurations = std::forward<EnvironmentConfigurationsT>(value);
  }
  template <typename EnvironmentConfigurationsT = Aws::Vector<EnvironmentConfiguration>>
  CreateProjectProfileRequest& WithEnvironmentConfigurations(EnvironmentConfigurationsT&& value) {
    SetEnvironmentConfigurations(std::forward<EnvironmentConfigurationsT>(value));
    return *this;
  }
  template <typename EnvironmentConfigurationsT = EnvironmentConfiguration>
  CreateProjectProfileRequest& AddEnvironmentConfigurations(EnvironmentConfigurationsT&& value) {
    m_environmentConfigurationsHasBeenSet = true;
    m_environmentConfigurations.emplace_back(std::forward<EnvironmentConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Project profile name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateProjectProfileRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource tags of the project profile.</p>
   */
  inline const Aws::Vector<ResourceTagParameter>& GetProjectResourceTags() const { return m_projectResourceTags; }
  inline bool ProjectResourceTagsHasBeenSet() const { return m_projectResourceTagsHasBeenSet; }
  template <typename ProjectResourceTagsT = Aws::Vector<ResourceTagParameter>>
  void SetProjectResourceTags(ProjectResourceTagsT&& value) {
    m_projectResourceTagsHasBeenSet = true;
    m_projectResourceTags = std::forward<ProjectResourceTagsT>(value);
  }
  template <typename ProjectResourceTagsT = Aws::Vector<ResourceTagParameter>>
  CreateProjectProfileRequest& WithProjectResourceTags(ProjectResourceTagsT&& value) {
    SetProjectResourceTags(std::forward<ProjectResourceTagsT>(value));
    return *this;
  }
  template <typename ProjectResourceTagsT = ResourceTagParameter>
  CreateProjectProfileRequest& AddProjectResourceTags(ProjectResourceTagsT&& value) {
    m_projectResourceTagsHasBeenSet = true;
    m_projectResourceTags.emplace_back(std::forward<ProjectResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Field viewable through the UI that provides a project user with the allowed
   * resource tag specifications.</p>
   */
  inline const Aws::String& GetProjectResourceTagsDescription() const { return m_projectResourceTagsDescription; }
  inline bool ProjectResourceTagsDescriptionHasBeenSet() const { return m_projectResourceTagsDescriptionHasBeenSet; }
  template <typename ProjectResourceTagsDescriptionT = Aws::String>
  void SetProjectResourceTagsDescription(ProjectResourceTagsDescriptionT&& value) {
    m_projectResourceTagsDescriptionHasBeenSet = true;
    m_projectResourceTagsDescription = std::forward<ProjectResourceTagsDescriptionT>(value);
  }
  template <typename ProjectResourceTagsDescriptionT = Aws::String>
  CreateProjectProfileRequest& WithProjectResourceTagsDescription(ProjectResourceTagsDescriptionT&& value) {
    SetProjectResourceTagsDescription(std::forward<ProjectResourceTagsDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Project profile status.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateProjectProfileRequest& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  bool m_allowCustomProjectResourceTags{false};

  Aws::String m_description;

  Aws::String m_domainIdentifier;

  Aws::String m_domainUnitIdentifier;

  Aws::Vector<EnvironmentConfiguration> m_environmentConfigurations;

  Aws::String m_name;

  Aws::Vector<ResourceTagParameter> m_projectResourceTags;

  Aws::String m_projectResourceTagsDescription;

  Status m_status{Status::NOT_SET};
  bool m_allowCustomProjectResourceTagsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_domainIdentifierHasBeenSet = false;
  bool m_domainUnitIdentifierHasBeenSet = false;
  bool m_environmentConfigurationsHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_projectResourceTagsHasBeenSet = false;
  bool m_projectResourceTagsDescriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
