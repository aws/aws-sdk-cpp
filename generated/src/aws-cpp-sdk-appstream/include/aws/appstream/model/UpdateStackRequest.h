/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ApplicationSettings.h>
#include <aws/appstream/model/StreamingExperienceSettings.h>
#include <aws/appstream/model/StorageConnector.h>
#include <aws/appstream/model/StackAttribute.h>
#include <aws/appstream/model/UserSetting.h>
#include <aws/appstream/model/AccessEndpoint.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class UpdateStackRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API UpdateStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStack"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The stack name to display.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The stack name to display.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The stack name to display.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The stack name to display.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The stack name to display.</p>
     */
    inline UpdateStackRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The stack name to display.</p>
     */
    inline UpdateStackRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The stack name to display.</p>
     */
    inline UpdateStackRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to display.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to display.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to display.</p>
     */
    inline UpdateStackRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline UpdateStackRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to display.</p>
     */
    inline UpdateStackRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the stack.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline UpdateStackRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline UpdateStackRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline UpdateStackRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The storage connectors to enable.</p>
     */
    inline const Aws::Vector<StorageConnector>& GetStorageConnectors() const{ return m_storageConnectors; }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline bool StorageConnectorsHasBeenSet() const { return m_storageConnectorsHasBeenSet; }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline void SetStorageConnectors(const Aws::Vector<StorageConnector>& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = value; }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline void SetStorageConnectors(Aws::Vector<StorageConnector>&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = std::move(value); }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& WithStorageConnectors(const Aws::Vector<StorageConnector>& value) { SetStorageConnectors(value); return *this;}

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& WithStorageConnectors(Aws::Vector<StorageConnector>&& value) { SetStorageConnectors(std::move(value)); return *this;}

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& AddStorageConnectors(const StorageConnector& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(value); return *this; }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& AddStorageConnectors(StorageConnector&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(std::move(value)); return *this; }


    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline const Aws::String& GetRedirectURL() const{ return m_redirectURL; }

    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline bool RedirectURLHasBeenSet() const { return m_redirectURLHasBeenSet; }

    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline void SetRedirectURL(const Aws::String& value) { m_redirectURLHasBeenSet = true; m_redirectURL = value; }

    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline void SetRedirectURL(Aws::String&& value) { m_redirectURLHasBeenSet = true; m_redirectURL = std::move(value); }

    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline void SetRedirectURL(const char* value) { m_redirectURLHasBeenSet = true; m_redirectURL.assign(value); }

    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline UpdateStackRequest& WithRedirectURL(const Aws::String& value) { SetRedirectURL(value); return *this;}

    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline UpdateStackRequest& WithRedirectURL(Aws::String&& value) { SetRedirectURL(std::move(value)); return *this;}

    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline UpdateStackRequest& WithRedirectURL(const char* value) { SetRedirectURL(value); return *this;}


    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline const Aws::String& GetFeedbackURL() const{ return m_feedbackURL; }

    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline bool FeedbackURLHasBeenSet() const { return m_feedbackURLHasBeenSet; }

    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline void SetFeedbackURL(const Aws::String& value) { m_feedbackURLHasBeenSet = true; m_feedbackURL = value; }

    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline void SetFeedbackURL(Aws::String&& value) { m_feedbackURLHasBeenSet = true; m_feedbackURL = std::move(value); }

    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline void SetFeedbackURL(const char* value) { m_feedbackURLHasBeenSet = true; m_feedbackURL.assign(value); }

    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline UpdateStackRequest& WithFeedbackURL(const Aws::String& value) { SetFeedbackURL(value); return *this;}

    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline UpdateStackRequest& WithFeedbackURL(Aws::String&& value) { SetFeedbackURL(std::move(value)); return *this;}

    /**
     * <p>The URL that users are redirected to after they choose the Send Feedback
     * link. If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline UpdateStackRequest& WithFeedbackURL(const char* value) { SetFeedbackURL(value); return *this;}


    /**
     * <p>The stack attributes to delete.</p>
     */
    inline const Aws::Vector<StackAttribute>& GetAttributesToDelete() const{ return m_attributesToDelete; }

    /**
     * <p>The stack attributes to delete.</p>
     */
    inline bool AttributesToDeleteHasBeenSet() const { return m_attributesToDeleteHasBeenSet; }

    /**
     * <p>The stack attributes to delete.</p>
     */
    inline void SetAttributesToDelete(const Aws::Vector<StackAttribute>& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = value; }

    /**
     * <p>The stack attributes to delete.</p>
     */
    inline void SetAttributesToDelete(Aws::Vector<StackAttribute>&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete = std::move(value); }

    /**
     * <p>The stack attributes to delete.</p>
     */
    inline UpdateStackRequest& WithAttributesToDelete(const Aws::Vector<StackAttribute>& value) { SetAttributesToDelete(value); return *this;}

    /**
     * <p>The stack attributes to delete.</p>
     */
    inline UpdateStackRequest& WithAttributesToDelete(Aws::Vector<StackAttribute>&& value) { SetAttributesToDelete(std::move(value)); return *this;}

    /**
     * <p>The stack attributes to delete.</p>
     */
    inline UpdateStackRequest& AddAttributesToDelete(const StackAttribute& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(value); return *this; }

    /**
     * <p>The stack attributes to delete.</p>
     */
    inline UpdateStackRequest& AddAttributesToDelete(StackAttribute&& value) { m_attributesToDeleteHasBeenSet = true; m_attributesToDelete.push_back(std::move(value)); return *this; }


    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline const Aws::Vector<UserSetting>& GetUserSettings() const{ return m_userSettings; }

    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }

    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline void SetUserSettings(const Aws::Vector<UserSetting>& value) { m_userSettingsHasBeenSet = true; m_userSettings = value; }

    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline void SetUserSettings(Aws::Vector<UserSetting>&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::move(value); }

    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline UpdateStackRequest& WithUserSettings(const Aws::Vector<UserSetting>& value) { SetUserSettings(value); return *this;}

    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline UpdateStackRequest& WithUserSettings(Aws::Vector<UserSetting>&& value) { SetUserSettings(std::move(value)); return *this;}

    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline UpdateStackRequest& AddUserSettings(const UserSetting& value) { m_userSettingsHasBeenSet = true; m_userSettings.push_back(value); return *this; }

    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled.</p>
     */
    inline UpdateStackRequest& AddUserSettings(UserSetting&& value) { m_userSettingsHasBeenSet = true; m_userSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The persistent application settings for users of a stack. When these settings
     * are enabled, changes that users make to applications and Windows settings are
     * automatically saved after each session and applied to the next session.</p>
     */
    inline const ApplicationSettings& GetApplicationSettings() const{ return m_applicationSettings; }

    /**
     * <p>The persistent application settings for users of a stack. When these settings
     * are enabled, changes that users make to applications and Windows settings are
     * automatically saved after each session and applied to the next session.</p>
     */
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }

    /**
     * <p>The persistent application settings for users of a stack. When these settings
     * are enabled, changes that users make to applications and Windows settings are
     * automatically saved after each session and applied to the next session.</p>
     */
    inline void SetApplicationSettings(const ApplicationSettings& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = value; }

    /**
     * <p>The persistent application settings for users of a stack. When these settings
     * are enabled, changes that users make to applications and Windows settings are
     * automatically saved after each session and applied to the next session.</p>
     */
    inline void SetApplicationSettings(ApplicationSettings&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::move(value); }

    /**
     * <p>The persistent application settings for users of a stack. When these settings
     * are enabled, changes that users make to applications and Windows settings are
     * automatically saved after each session and applied to the next session.</p>
     */
    inline UpdateStackRequest& WithApplicationSettings(const ApplicationSettings& value) { SetApplicationSettings(value); return *this;}

    /**
     * <p>The persistent application settings for users of a stack. When these settings
     * are enabled, changes that users make to applications and Windows settings are
     * automatically saved after each session and applied to the next session.</p>
     */
    inline UpdateStackRequest& WithApplicationSettings(ApplicationSettings&& value) { SetApplicationSettings(std::move(value)); return *this;}


    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const{ return m_accessEndpoints; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline void SetAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = value; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline void SetAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::move(value); }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline UpdateStackRequest& WithAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { SetAccessEndpoints(value); return *this;}

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline UpdateStackRequest& WithAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { SetAccessEndpoints(std::move(value)); return *this;}

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline UpdateStackRequest& AddAccessEndpoints(const AccessEndpoint& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(value); return *this; }

    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline UpdateStackRequest& AddAccessEndpoints(AccessEndpoint&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbedHostDomains() const{ return m_embedHostDomains; }

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline bool EmbedHostDomainsHasBeenSet() const { return m_embedHostDomainsHasBeenSet; }

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline void SetEmbedHostDomains(const Aws::Vector<Aws::String>& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains = value; }

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline void SetEmbedHostDomains(Aws::Vector<Aws::String>&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains = std::move(value); }

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline UpdateStackRequest& WithEmbedHostDomains(const Aws::Vector<Aws::String>& value) { SetEmbedHostDomains(value); return *this;}

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline UpdateStackRequest& WithEmbedHostDomains(Aws::Vector<Aws::String>&& value) { SetEmbedHostDomains(std::move(value)); return *this;}

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline UpdateStackRequest& AddEmbedHostDomains(const Aws::String& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.push_back(value); return *this; }

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline UpdateStackRequest& AddEmbedHostDomains(Aws::String&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.push_back(std::move(value)); return *this; }

    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline UpdateStackRequest& AddEmbedHostDomains(const char* value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.push_back(value); return *this; }


    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline const StreamingExperienceSettings& GetStreamingExperienceSettings() const{ return m_streamingExperienceSettings; }

    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline bool StreamingExperienceSettingsHasBeenSet() const { return m_streamingExperienceSettingsHasBeenSet; }

    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline void SetStreamingExperienceSettings(const StreamingExperienceSettings& value) { m_streamingExperienceSettingsHasBeenSet = true; m_streamingExperienceSettings = value; }

    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline void SetStreamingExperienceSettings(StreamingExperienceSettings&& value) { m_streamingExperienceSettingsHasBeenSet = true; m_streamingExperienceSettings = std::move(value); }

    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline UpdateStackRequest& WithStreamingExperienceSettings(const StreamingExperienceSettings& value) { SetStreamingExperienceSettings(value); return *this;}

    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline UpdateStackRequest& WithStreamingExperienceSettings(StreamingExperienceSettings&& value) { SetStreamingExperienceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<StorageConnector> m_storageConnectors;
    bool m_storageConnectorsHasBeenSet = false;

    Aws::String m_redirectURL;
    bool m_redirectURLHasBeenSet = false;

    Aws::String m_feedbackURL;
    bool m_feedbackURLHasBeenSet = false;

    Aws::Vector<StackAttribute> m_attributesToDelete;
    bool m_attributesToDeleteHasBeenSet = false;

    Aws::Vector<UserSetting> m_userSettings;
    bool m_userSettingsHasBeenSet = false;

    ApplicationSettings m_applicationSettings;
    bool m_applicationSettingsHasBeenSet = false;

    Aws::Vector<AccessEndpoint> m_accessEndpoints;
    bool m_accessEndpointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_embedHostDomains;
    bool m_embedHostDomainsHasBeenSet = false;

    StreamingExperienceSettings m_streamingExperienceSettings;
    bool m_streamingExperienceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
