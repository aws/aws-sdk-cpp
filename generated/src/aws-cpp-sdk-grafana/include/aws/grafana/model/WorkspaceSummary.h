/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AuthenticationSummary.h>
#include <aws/grafana/model/LicenseType.h>
#include <aws/grafana/model/NotificationDestinationType.h>
#include <aws/grafana/model/WorkspaceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure that contains some information about one workspace in the
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/WorkspaceSummary">AWS
 * API Reference</a></p>
 */
class WorkspaceSummary {
 public:
  AWS_MANAGEDGRAFANA_API WorkspaceSummary() = default;
  AWS_MANAGEDGRAFANA_API WorkspaceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API WorkspaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date that the workspace was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::Utils::DateTime>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::Utils::DateTime>
  WorkspaceSummary& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-entered description of the workspace.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  WorkspaceSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  WorkspaceSummary& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Grafana version that the workspace is running.</p>
   */
  inline const Aws::String& GetGrafanaVersion() const { return m_grafanaVersion; }
  inline bool GrafanaVersionHasBeenSet() const { return m_grafanaVersionHasBeenSet; }
  template <typename GrafanaVersionT = Aws::String>
  void SetGrafanaVersion(GrafanaVersionT&& value) {
    m_grafanaVersionHasBeenSet = true;
    m_grafanaVersion = std::forward<GrafanaVersionT>(value);
  }
  template <typename GrafanaVersionT = Aws::String>
  WorkspaceSummary& WithGrafanaVersion(GrafanaVersionT&& value) {
    SetGrafanaVersion(std::forward<GrafanaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the workspace.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  WorkspaceSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The most recent date that the workspace was modified.</p>
   */
  inline const Aws::Utils::DateTime& GetModified() const { return m_modified; }
  inline bool ModifiedHasBeenSet() const { return m_modifiedHasBeenSet; }
  template <typename ModifiedT = Aws::Utils::DateTime>
  void SetModified(ModifiedT&& value) {
    m_modifiedHasBeenSet = true;
    m_modified = std::forward<ModifiedT>(value);
  }
  template <typename ModifiedT = Aws::Utils::DateTime>
  WorkspaceSummary& WithModified(ModifiedT&& value) {
    SetModified(std::forward<ModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  WorkspaceSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
   * automatically create IAM roles and permissions for, which allows Amazon Managed
   * Grafana to use these channels.</p>
   */
  inline const Aws::Vector<NotificationDestinationType>& GetNotificationDestinations() const { return m_notificationDestinations; }
  inline bool NotificationDestinationsHasBeenSet() const { return m_notificationDestinationsHasBeenSet; }
  template <typename NotificationDestinationsT = Aws::Vector<NotificationDestinationType>>
  void SetNotificationDestinations(NotificationDestinationsT&& value) {
    m_notificationDestinationsHasBeenSet = true;
    m_notificationDestinations = std::forward<NotificationDestinationsT>(value);
  }
  template <typename NotificationDestinationsT = Aws::Vector<NotificationDestinationType>>
  WorkspaceSummary& WithNotificationDestinations(NotificationDestinationsT&& value) {
    SetNotificationDestinations(std::forward<NotificationDestinationsT>(value));
    return *this;
  }
  inline WorkspaceSummary& AddNotificationDestinations(NotificationDestinationType value) {
    m_notificationDestinationsHasBeenSet = true;
    m_notificationDestinations.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the workspace.</p>
   */
  inline WorkspaceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WorkspaceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline WorkspaceSummary& WithStatus(WorkspaceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure containing information about the authentication methods used in
   * the workspace.</p>
   */
  inline const AuthenticationSummary& GetAuthentication() const { return m_authentication; }
  inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
  template <typename AuthenticationT = AuthenticationSummary>
  void SetAuthentication(AuthenticationT&& value) {
    m_authenticationHasBeenSet = true;
    m_authentication = std::forward<AuthenticationT>(value);
  }
  template <typename AuthenticationT = AuthenticationSummary>
  WorkspaceSummary& WithAuthentication(AuthenticationT&& value) {
    SetAuthentication(std::forward<AuthenticationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of tags associated with the workspace.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  WorkspaceSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  WorkspaceSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this workspace has a full Grafana Enterprise license.</p>
   *  <p>Amazon Managed Grafana workspaces no longer support Grafana Enterprise
   * free trials.</p>
   */
  inline LicenseType GetLicenseType() const { return m_licenseType; }
  inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
  inline void SetLicenseType(LicenseType value) {
    m_licenseTypeHasBeenSet = true;
    m_licenseType = value;
  }
  inline WorkspaceSummary& WithLicenseType(LicenseType value) {
    SetLicenseType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that ties this workspace to a Grafana Labs account. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html#AMG-workspace-register-enterprise">Link
   * your account with Grafana Labs</a>.</p>
   */
  inline const Aws::String& GetGrafanaToken() const { return m_grafanaToken; }
  inline bool GrafanaTokenHasBeenSet() const { return m_grafanaTokenHasBeenSet; }
  template <typename GrafanaTokenT = Aws::String>
  void SetGrafanaToken(GrafanaTokenT&& value) {
    m_grafanaTokenHasBeenSet = true;
    m_grafanaToken = std::forward<GrafanaTokenT>(value);
  }
  template <typename GrafanaTokenT = Aws::String>
  WorkspaceSummary& WithGrafanaToken(GrafanaTokenT&& value) {
    SetGrafanaToken(std::forward<GrafanaTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_created{};

  Aws::String m_description;

  Aws::String m_endpoint;

  Aws::String m_grafanaVersion;

  Aws::String m_id;

  Aws::Utils::DateTime m_modified{};

  Aws::String m_name;

  Aws::Vector<NotificationDestinationType> m_notificationDestinations;

  WorkspaceStatus m_status{WorkspaceStatus::NOT_SET};

  AuthenticationSummary m_authentication;

  Aws::Map<Aws::String, Aws::String> m_tags;

  LicenseType m_licenseType{LicenseType::NOT_SET};

  Aws::String m_grafanaToken;
  bool m_createdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_grafanaVersionHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_modifiedHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_notificationDestinationsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_authenticationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_licenseTypeHasBeenSet = false;
  bool m_grafanaTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
