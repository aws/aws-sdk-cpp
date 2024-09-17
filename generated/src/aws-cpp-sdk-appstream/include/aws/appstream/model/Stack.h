/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ApplicationSettingsResponse.h>
#include <aws/appstream/model/StreamingExperienceSettings.h>
#include <aws/appstream/model/StorageConnector.h>
#include <aws/appstream/model/StackError.h>
#include <aws/appstream/model/UserSetting.h>
#include <aws/appstream/model/AccessEndpoint.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/Stack">AWS API
   * Reference</a></p>
   */
  class Stack
  {
  public:
    AWS_APPSTREAM_API Stack();
    AWS_APPSTREAM_API Stack(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Stack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the stack.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Stack& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Stack& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Stack& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Stack& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Stack& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Stack& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Stack& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Stack& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Stack& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Stack& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Stack& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Stack& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Stack& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Stack& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage connectors to enable.</p>
     */
    inline const Aws::Vector<StorageConnector>& GetStorageConnectors() const{ return m_storageConnectors; }
    inline bool StorageConnectorsHasBeenSet() const { return m_storageConnectorsHasBeenSet; }
    inline void SetStorageConnectors(const Aws::Vector<StorageConnector>& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = value; }
    inline void SetStorageConnectors(Aws::Vector<StorageConnector>&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = std::move(value); }
    inline Stack& WithStorageConnectors(const Aws::Vector<StorageConnector>& value) { SetStorageConnectors(value); return *this;}
    inline Stack& WithStorageConnectors(Aws::Vector<StorageConnector>&& value) { SetStorageConnectors(std::move(value)); return *this;}
    inline Stack& AddStorageConnectors(const StorageConnector& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(value); return *this; }
    inline Stack& AddStorageConnectors(StorageConnector&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline const Aws::String& GetRedirectURL() const{ return m_redirectURL; }
    inline bool RedirectURLHasBeenSet() const { return m_redirectURLHasBeenSet; }
    inline void SetRedirectURL(const Aws::String& value) { m_redirectURLHasBeenSet = true; m_redirectURL = value; }
    inline void SetRedirectURL(Aws::String&& value) { m_redirectURLHasBeenSet = true; m_redirectURL = std::move(value); }
    inline void SetRedirectURL(const char* value) { m_redirectURLHasBeenSet = true; m_redirectURL.assign(value); }
    inline Stack& WithRedirectURL(const Aws::String& value) { SetRedirectURL(value); return *this;}
    inline Stack& WithRedirectURL(Aws::String&& value) { SetRedirectURL(std::move(value)); return *this;}
    inline Stack& WithRedirectURL(const char* value) { SetRedirectURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that users are redirected to after they click the Send Feedback link.
     * If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline const Aws::String& GetFeedbackURL() const{ return m_feedbackURL; }
    inline bool FeedbackURLHasBeenSet() const { return m_feedbackURLHasBeenSet; }
    inline void SetFeedbackURL(const Aws::String& value) { m_feedbackURLHasBeenSet = true; m_feedbackURL = value; }
    inline void SetFeedbackURL(Aws::String&& value) { m_feedbackURLHasBeenSet = true; m_feedbackURL = std::move(value); }
    inline void SetFeedbackURL(const char* value) { m_feedbackURLHasBeenSet = true; m_feedbackURL.assign(value); }
    inline Stack& WithFeedbackURL(const Aws::String& value) { SetFeedbackURL(value); return *this;}
    inline Stack& WithFeedbackURL(Aws::String&& value) { SetFeedbackURL(std::move(value)); return *this;}
    inline Stack& WithFeedbackURL(const char* value) { SetFeedbackURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors for the stack.</p>
     */
    inline const Aws::Vector<StackError>& GetStackErrors() const{ return m_stackErrors; }
    inline bool StackErrorsHasBeenSet() const { return m_stackErrorsHasBeenSet; }
    inline void SetStackErrors(const Aws::Vector<StackError>& value) { m_stackErrorsHasBeenSet = true; m_stackErrors = value; }
    inline void SetStackErrors(Aws::Vector<StackError>&& value) { m_stackErrorsHasBeenSet = true; m_stackErrors = std::move(value); }
    inline Stack& WithStackErrors(const Aws::Vector<StackError>& value) { SetStackErrors(value); return *this;}
    inline Stack& WithStackErrors(Aws::Vector<StackError>&& value) { SetStackErrors(std::move(value)); return *this;}
    inline Stack& AddStackErrors(const StackError& value) { m_stackErrorsHasBeenSet = true; m_stackErrors.push_back(value); return *this; }
    inline Stack& AddStackErrors(StackError&& value) { m_stackErrorsHasBeenSet = true; m_stackErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default these actions are enabled.</p>
     */
    inline const Aws::Vector<UserSetting>& GetUserSettings() const{ return m_userSettings; }
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }
    inline void SetUserSettings(const Aws::Vector<UserSetting>& value) { m_userSettingsHasBeenSet = true; m_userSettings = value; }
    inline void SetUserSettings(Aws::Vector<UserSetting>&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::move(value); }
    inline Stack& WithUserSettings(const Aws::Vector<UserSetting>& value) { SetUserSettings(value); return *this;}
    inline Stack& WithUserSettings(Aws::Vector<UserSetting>&& value) { SetUserSettings(std::move(value)); return *this;}
    inline Stack& AddUserSettings(const UserSetting& value) { m_userSettingsHasBeenSet = true; m_userSettings.push_back(value); return *this; }
    inline Stack& AddUserSettings(UserSetting&& value) { m_userSettingsHasBeenSet = true; m_userSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The persistent application settings for users of the stack.</p>
     */
    inline const ApplicationSettingsResponse& GetApplicationSettings() const{ return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    inline void SetApplicationSettings(const ApplicationSettingsResponse& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = value; }
    inline void SetApplicationSettings(ApplicationSettingsResponse&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::move(value); }
    inline Stack& WithApplicationSettings(const ApplicationSettingsResponse& value) { SetApplicationSettings(value); return *this;}
    inline Stack& WithApplicationSettings(ApplicationSettingsResponse&& value) { SetApplicationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of virtual private cloud (VPC) interface endpoint objects. Users of
     * the stack can connect to AppStream 2.0 only through the specified endpoints.
     * </p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const{ return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    inline void SetAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = value; }
    inline void SetAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::move(value); }
    inline Stack& WithAccessEndpoints(const Aws::Vector<AccessEndpoint>& value) { SetAccessEndpoints(value); return *this;}
    inline Stack& WithAccessEndpoints(Aws::Vector<AccessEndpoint>&& value) { SetAccessEndpoints(std::move(value)); return *this;}
    inline Stack& AddAccessEndpoints(const AccessEndpoint& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(value); return *this; }
    inline Stack& AddAccessEndpoints(AccessEndpoint&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbedHostDomains() const{ return m_embedHostDomains; }
    inline bool EmbedHostDomainsHasBeenSet() const { return m_embedHostDomainsHasBeenSet; }
    inline void SetEmbedHostDomains(const Aws::Vector<Aws::String>& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains = value; }
    inline void SetEmbedHostDomains(Aws::Vector<Aws::String>&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains = std::move(value); }
    inline Stack& WithEmbedHostDomains(const Aws::Vector<Aws::String>& value) { SetEmbedHostDomains(value); return *this;}
    inline Stack& WithEmbedHostDomains(Aws::Vector<Aws::String>&& value) { SetEmbedHostDomains(std::move(value)); return *this;}
    inline Stack& AddEmbedHostDomains(const Aws::String& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.push_back(value); return *this; }
    inline Stack& AddEmbedHostDomains(Aws::String&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.push_back(std::move(value)); return *this; }
    inline Stack& AddEmbedHostDomains(const char* value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline const StreamingExperienceSettings& GetStreamingExperienceSettings() const{ return m_streamingExperienceSettings; }
    inline bool StreamingExperienceSettingsHasBeenSet() const { return m_streamingExperienceSettingsHasBeenSet; }
    inline void SetStreamingExperienceSettings(const StreamingExperienceSettings& value) { m_streamingExperienceSettingsHasBeenSet = true; m_streamingExperienceSettings = value; }
    inline void SetStreamingExperienceSettings(StreamingExperienceSettings&& value) { m_streamingExperienceSettingsHasBeenSet = true; m_streamingExperienceSettings = std::move(value); }
    inline Stack& WithStreamingExperienceSettings(const StreamingExperienceSettings& value) { SetStreamingExperienceSettings(value); return *this;}
    inline Stack& WithStreamingExperienceSettings(StreamingExperienceSettings&& value) { SetStreamingExperienceSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<StorageConnector> m_storageConnectors;
    bool m_storageConnectorsHasBeenSet = false;

    Aws::String m_redirectURL;
    bool m_redirectURLHasBeenSet = false;

    Aws::String m_feedbackURL;
    bool m_feedbackURLHasBeenSet = false;

    Aws::Vector<StackError> m_stackErrors;
    bool m_stackErrorsHasBeenSet = false;

    Aws::Vector<UserSetting> m_userSettings;
    bool m_userSettingsHasBeenSet = false;

    ApplicationSettingsResponse m_applicationSettings;
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
