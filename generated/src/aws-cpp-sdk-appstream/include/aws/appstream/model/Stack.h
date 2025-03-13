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
    AWS_APPSTREAM_API Stack() = default;
    AWS_APPSTREAM_API Stack(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Stack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the stack.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Stack& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Stack& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to display.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Stack& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack name to display.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Stack& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Stack& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage connectors to enable.</p>
     */
    inline const Aws::Vector<StorageConnector>& GetStorageConnectors() const { return m_storageConnectors; }
    inline bool StorageConnectorsHasBeenSet() const { return m_storageConnectorsHasBeenSet; }
    template<typename StorageConnectorsT = Aws::Vector<StorageConnector>>
    void SetStorageConnectors(StorageConnectorsT&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = std::forward<StorageConnectorsT>(value); }
    template<typename StorageConnectorsT = Aws::Vector<StorageConnector>>
    Stack& WithStorageConnectors(StorageConnectorsT&& value) { SetStorageConnectors(std::forward<StorageConnectorsT>(value)); return *this;}
    template<typename StorageConnectorsT = StorageConnector>
    Stack& AddStorageConnectors(StorageConnectorsT&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.emplace_back(std::forward<StorageConnectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URL that users are redirected to after their streaming session ends.</p>
     */
    inline const Aws::String& GetRedirectURL() const { return m_redirectURL; }
    inline bool RedirectURLHasBeenSet() const { return m_redirectURLHasBeenSet; }
    template<typename RedirectURLT = Aws::String>
    void SetRedirectURL(RedirectURLT&& value) { m_redirectURLHasBeenSet = true; m_redirectURL = std::forward<RedirectURLT>(value); }
    template<typename RedirectURLT = Aws::String>
    Stack& WithRedirectURL(RedirectURLT&& value) { SetRedirectURL(std::forward<RedirectURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that users are redirected to after they click the Send Feedback link.
     * If no URL is specified, no Send Feedback link is displayed.</p>
     */
    inline const Aws::String& GetFeedbackURL() const { return m_feedbackURL; }
    inline bool FeedbackURLHasBeenSet() const { return m_feedbackURLHasBeenSet; }
    template<typename FeedbackURLT = Aws::String>
    void SetFeedbackURL(FeedbackURLT&& value) { m_feedbackURLHasBeenSet = true; m_feedbackURL = std::forward<FeedbackURLT>(value); }
    template<typename FeedbackURLT = Aws::String>
    Stack& WithFeedbackURL(FeedbackURLT&& value) { SetFeedbackURL(std::forward<FeedbackURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors for the stack.</p>
     */
    inline const Aws::Vector<StackError>& GetStackErrors() const { return m_stackErrors; }
    inline bool StackErrorsHasBeenSet() const { return m_stackErrorsHasBeenSet; }
    template<typename StackErrorsT = Aws::Vector<StackError>>
    void SetStackErrors(StackErrorsT&& value) { m_stackErrorsHasBeenSet = true; m_stackErrors = std::forward<StackErrorsT>(value); }
    template<typename StackErrorsT = Aws::Vector<StackError>>
    Stack& WithStackErrors(StackErrorsT&& value) { SetStackErrors(std::forward<StackErrorsT>(value)); return *this;}
    template<typename StackErrorsT = StackError>
    Stack& AddStackErrors(StackErrorsT&& value) { m_stackErrorsHasBeenSet = true; m_stackErrors.emplace_back(std::forward<StackErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default these actions are enabled.</p>
     */
    inline const Aws::Vector<UserSetting>& GetUserSettings() const { return m_userSettings; }
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }
    template<typename UserSettingsT = Aws::Vector<UserSetting>>
    void SetUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::forward<UserSettingsT>(value); }
    template<typename UserSettingsT = Aws::Vector<UserSetting>>
    Stack& WithUserSettings(UserSettingsT&& value) { SetUserSettings(std::forward<UserSettingsT>(value)); return *this;}
    template<typename UserSettingsT = UserSetting>
    Stack& AddUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings.emplace_back(std::forward<UserSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The persistent application settings for users of the stack.</p>
     */
    inline const ApplicationSettingsResponse& GetApplicationSettings() const { return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    template<typename ApplicationSettingsT = ApplicationSettingsResponse>
    void SetApplicationSettings(ApplicationSettingsT&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::forward<ApplicationSettingsT>(value); }
    template<typename ApplicationSettingsT = ApplicationSettingsResponse>
    Stack& WithApplicationSettings(ApplicationSettingsT&& value) { SetApplicationSettings(std::forward<ApplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of virtual private cloud (VPC) interface endpoint objects. Users of
     * the stack can connect to AppStream 2.0 only through the specified endpoints.
     * </p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const { return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    void SetAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::forward<AccessEndpointsT>(value); }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    Stack& WithAccessEndpoints(AccessEndpointsT&& value) { SetAccessEndpoints(std::forward<AccessEndpointsT>(value)); return *this;}
    template<typename AccessEndpointsT = AccessEndpoint>
    Stack& AddAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.emplace_back(std::forward<AccessEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbedHostDomains() const { return m_embedHostDomains; }
    inline bool EmbedHostDomainsHasBeenSet() const { return m_embedHostDomainsHasBeenSet; }
    template<typename EmbedHostDomainsT = Aws::Vector<Aws::String>>
    void SetEmbedHostDomains(EmbedHostDomainsT&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains = std::forward<EmbedHostDomainsT>(value); }
    template<typename EmbedHostDomainsT = Aws::Vector<Aws::String>>
    Stack& WithEmbedHostDomains(EmbedHostDomainsT&& value) { SetEmbedHostDomains(std::forward<EmbedHostDomainsT>(value)); return *this;}
    template<typename EmbedHostDomainsT = Aws::String>
    Stack& AddEmbedHostDomains(EmbedHostDomainsT&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.emplace_back(std::forward<EmbedHostDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
     * Currently, UDP is only supported in the Windows native client.</p>
     */
    inline const StreamingExperienceSettings& GetStreamingExperienceSettings() const { return m_streamingExperienceSettings; }
    inline bool StreamingExperienceSettingsHasBeenSet() const { return m_streamingExperienceSettingsHasBeenSet; }
    template<typename StreamingExperienceSettingsT = StreamingExperienceSettings>
    void SetStreamingExperienceSettings(StreamingExperienceSettingsT&& value) { m_streamingExperienceSettingsHasBeenSet = true; m_streamingExperienceSettings = std::forward<StreamingExperienceSettingsT>(value); }
    template<typename StreamingExperienceSettingsT = StreamingExperienceSettings>
    Stack& WithStreamingExperienceSettings(StreamingExperienceSettingsT&& value) { SetStreamingExperienceSettings(std::forward<StreamingExperienceSettingsT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTime{};
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
