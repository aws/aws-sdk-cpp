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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appstream/model/StreamingExperienceSettings.h>
#include <aws/appstream/model/StorageConnector.h>
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
  class CreateStackRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateStackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStack"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStackRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateStackRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateStackRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
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
    CreateStackRequest& WithStorageConnectors(StorageConnectorsT&& value) { SetStorageConnectors(std::forward<StorageConnectorsT>(value)); return *this;}
    template<typename StorageConnectorsT = StorageConnector>
    CreateStackRequest& AddStorageConnectors(StorageConnectorsT&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.emplace_back(std::forward<StorageConnectorsT>(value)); return *this; }
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
    CreateStackRequest& WithRedirectURL(RedirectURLT&& value) { SetRedirectURL(std::forward<RedirectURLT>(value)); return *this;}
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
    CreateStackRequest& WithFeedbackURL(FeedbackURLT&& value) { SetFeedbackURL(std::forward<FeedbackURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions that are enabled or disabled for users during their streaming
     * sessions. By default, these actions are enabled. </p>
     */
    inline const Aws::Vector<UserSetting>& GetUserSettings() const { return m_userSettings; }
    inline bool UserSettingsHasBeenSet() const { return m_userSettingsHasBeenSet; }
    template<typename UserSettingsT = Aws::Vector<UserSetting>>
    void SetUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::forward<UserSettingsT>(value); }
    template<typename UserSettingsT = Aws::Vector<UserSetting>>
    CreateStackRequest& WithUserSettings(UserSettingsT&& value) { SetUserSettings(std::forward<UserSettingsT>(value)); return *this;}
    template<typename UserSettingsT = UserSetting>
    CreateStackRequest& AddUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings.emplace_back(std::forward<UserSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The persistent application settings for users of a stack. When these settings
     * are enabled, changes that users make to applications and Windows settings are
     * automatically saved after each session and applied to the next session.</p>
     */
    inline const ApplicationSettings& GetApplicationSettings() const { return m_applicationSettings; }
    inline bool ApplicationSettingsHasBeenSet() const { return m_applicationSettingsHasBeenSet; }
    template<typename ApplicationSettingsT = ApplicationSettings>
    void SetApplicationSettings(ApplicationSettingsT&& value) { m_applicationSettingsHasBeenSet = true; m_applicationSettings = std::forward<ApplicationSettingsT>(value); }
    template<typename ApplicationSettingsT = ApplicationSettings>
    CreateStackRequest& WithApplicationSettings(ApplicationSettingsT&& value) { SetApplicationSettings(std::forward<ApplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the stack. A tag is a key-value pair, and the
     * value is optional. For example, Environment=Test. If you do not specify a value,
     * Environment=. </p> <p>If you do not specify a value, the value is set to an
     * empty string.</p> <p>Generally allowed characters are: letters, numbers, and
     * spaces representable in UTF-8, and the following special characters: </p> <p>_ .
     * : / = + \ - @</p> <p>For more information about tags, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging
     * Your Resources</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateStackRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateStackRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of interface VPC endpoint (interface endpoint) objects. Users of the
     * stack can connect to AppStream 2.0 only through the specified endpoints.</p>
     */
    inline const Aws::Vector<AccessEndpoint>& GetAccessEndpoints() const { return m_accessEndpoints; }
    inline bool AccessEndpointsHasBeenSet() const { return m_accessEndpointsHasBeenSet; }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    void SetAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints = std::forward<AccessEndpointsT>(value); }
    template<typename AccessEndpointsT = Aws::Vector<AccessEndpoint>>
    CreateStackRequest& WithAccessEndpoints(AccessEndpointsT&& value) { SetAccessEndpoints(std::forward<AccessEndpointsT>(value)); return *this;}
    template<typename AccessEndpointsT = AccessEndpoint>
    CreateStackRequest& AddAccessEndpoints(AccessEndpointsT&& value) { m_accessEndpointsHasBeenSet = true; m_accessEndpoints.emplace_back(std::forward<AccessEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domains where AppStream 2.0 streaming sessions can be embedded in an
     * iframe. You must approve the domains that you want to host embedded AppStream
     * 2.0 streaming sessions. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbedHostDomains() const { return m_embedHostDomains; }
    inline bool EmbedHostDomainsHasBeenSet() const { return m_embedHostDomainsHasBeenSet; }
    template<typename EmbedHostDomainsT = Aws::Vector<Aws::String>>
    void SetEmbedHostDomains(EmbedHostDomainsT&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains = std::forward<EmbedHostDomainsT>(value); }
    template<typename EmbedHostDomainsT = Aws::Vector<Aws::String>>
    CreateStackRequest& WithEmbedHostDomains(EmbedHostDomainsT&& value) { SetEmbedHostDomains(std::forward<EmbedHostDomainsT>(value)); return *this;}
    template<typename EmbedHostDomainsT = Aws::String>
    CreateStackRequest& AddEmbedHostDomains(EmbedHostDomainsT&& value) { m_embedHostDomainsHasBeenSet = true; m_embedHostDomains.emplace_back(std::forward<EmbedHostDomainsT>(value)); return *this; }
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
    CreateStackRequest& WithStreamingExperienceSettings(StreamingExperienceSettingsT&& value) { SetStreamingExperienceSettings(std::forward<StreamingExperienceSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<StorageConnector> m_storageConnectors;
    bool m_storageConnectorsHasBeenSet = false;

    Aws::String m_redirectURL;
    bool m_redirectURLHasBeenSet = false;

    Aws::String m_feedbackURL;
    bool m_feedbackURLHasBeenSet = false;

    Aws::Vector<UserSetting> m_userSettings;
    bool m_userSettingsHasBeenSet = false;

    ApplicationSettings m_applicationSettings;
    bool m_applicationSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

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
