/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AuthenticationSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/WorkspaceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/grafana/model/NotificationDestinationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure that contains some information about one workspace in the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/WorkspaceSummary">AWS
   * API Reference</a></p>
   */
  class WorkspaceSummary
  {
  public:
    AWS_MANAGEDGRAFANA_API WorkspaceSummary();
    AWS_MANAGEDGRAFANA_API WorkspaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API WorkspaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline const AuthenticationSummary& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline void SetAuthentication(const AuthenticationSummary& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline void SetAuthentication(AuthenticationSummary&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline WorkspaceSummary& WithAuthentication(const AuthenticationSummary& value) { SetAuthentication(value); return *this;}

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline WorkspaceSummary& WithAuthentication(AuthenticationSummary&& value) { SetAuthentication(std::move(value)); return *this;}


    /**
     * <p>The date that the workspace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date that the workspace was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The date that the workspace was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The date that the workspace was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The date that the workspace was created.</p>
     */
    inline WorkspaceSummary& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date that the workspace was created.</p>
     */
    inline WorkspaceSummary& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline WorkspaceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline WorkspaceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The customer-entered description of the workspace.</p>
     */
    inline WorkspaceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline WorkspaceSummary& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline WorkspaceSummary& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL endpoint to use to access the Grafana console in the workspace.</p>
     */
    inline WorkspaceSummary& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline const Aws::String& GetGrafanaVersion() const{ return m_grafanaVersion; }

    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline bool GrafanaVersionHasBeenSet() const { return m_grafanaVersionHasBeenSet; }

    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline void SetGrafanaVersion(const Aws::String& value) { m_grafanaVersionHasBeenSet = true; m_grafanaVersion = value; }

    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline void SetGrafanaVersion(Aws::String&& value) { m_grafanaVersionHasBeenSet = true; m_grafanaVersion = std::move(value); }

    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline void SetGrafanaVersion(const char* value) { m_grafanaVersionHasBeenSet = true; m_grafanaVersion.assign(value); }

    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline WorkspaceSummary& WithGrafanaVersion(const Aws::String& value) { SetGrafanaVersion(value); return *this;}

    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline WorkspaceSummary& WithGrafanaVersion(Aws::String&& value) { SetGrafanaVersion(std::move(value)); return *this;}

    /**
     * <p>The Grafana version that the workspace is running.</p>
     */
    inline WorkspaceSummary& WithGrafanaVersion(const char* value) { SetGrafanaVersion(value); return *this;}


    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline WorkspaceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline WorkspaceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the workspace.</p>
     */
    inline WorkspaceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The most recent date that the workspace was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModified() const{ return m_modified; }

    /**
     * <p>The most recent date that the workspace was modified.</p>
     */
    inline bool ModifiedHasBeenSet() const { return m_modifiedHasBeenSet; }

    /**
     * <p>The most recent date that the workspace was modified.</p>
     */
    inline void SetModified(const Aws::Utils::DateTime& value) { m_modifiedHasBeenSet = true; m_modified = value; }

    /**
     * <p>The most recent date that the workspace was modified.</p>
     */
    inline void SetModified(Aws::Utils::DateTime&& value) { m_modifiedHasBeenSet = true; m_modified = std::move(value); }

    /**
     * <p>The most recent date that the workspace was modified.</p>
     */
    inline WorkspaceSummary& WithModified(const Aws::Utils::DateTime& value) { SetModified(value); return *this;}

    /**
     * <p>The most recent date that the workspace was modified.</p>
     */
    inline WorkspaceSummary& WithModified(Aws::Utils::DateTime&& value) { SetModified(std::move(value)); return *this;}


    /**
     * <p>The name of the workspace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workspace.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workspace.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workspace.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workspace.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workspace.</p>
     */
    inline WorkspaceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workspace.</p>
     */
    inline WorkspaceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workspace.</p>
     */
    inline WorkspaceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline const Aws::Vector<NotificationDestinationType>& GetNotificationDestinations() const{ return m_notificationDestinations; }

    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline bool NotificationDestinationsHasBeenSet() const { return m_notificationDestinationsHasBeenSet; }

    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline void SetNotificationDestinations(const Aws::Vector<NotificationDestinationType>& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations = value; }

    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline void SetNotificationDestinations(Aws::Vector<NotificationDestinationType>&& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations = std::move(value); }

    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline WorkspaceSummary& WithNotificationDestinations(const Aws::Vector<NotificationDestinationType>& value) { SetNotificationDestinations(value); return *this;}

    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline WorkspaceSummary& WithNotificationDestinations(Aws::Vector<NotificationDestinationType>&& value) { SetNotificationDestinations(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline WorkspaceSummary& AddNotificationDestinations(const NotificationDestinationType& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, which allows Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline WorkspaceSummary& AddNotificationDestinations(NotificationDestinationType&& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations.push_back(std::move(value)); return *this; }


    /**
     * <p>The current status of the workspace.</p>
     */
    inline const WorkspaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline void SetStatus(const WorkspaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline void SetStatus(WorkspaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the workspace.</p>
     */
    inline WorkspaceSummary& WithStatus(const WorkspaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the workspace.</p>
     */
    inline WorkspaceSummary& WithStatus(WorkspaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline WorkspaceSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AuthenticationSummary m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_grafanaVersion;
    bool m_grafanaVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_modified;
    bool m_modifiedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NotificationDestinationType> m_notificationDestinations;
    bool m_notificationDestinationsHasBeenSet = false;

    WorkspaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
