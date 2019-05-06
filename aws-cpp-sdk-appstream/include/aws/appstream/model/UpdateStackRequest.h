/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ApplicationSettings.h>
#include <aws/appstream/model/StorageConnector.h>
#include <aws/appstream/model/StackAttribute.h>
#include <aws/appstream/model/UserSetting.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API UpdateStackRequest : public AppStreamRequest
  {
  public:
    UpdateStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStack"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<StorageConnector> m_storageConnectors;
    bool m_storageConnectorsHasBeenSet;

    Aws::String m_redirectURL;
    bool m_redirectURLHasBeenSet;

    Aws::String m_feedbackURL;
    bool m_feedbackURLHasBeenSet;

    Aws::Vector<StackAttribute> m_attributesToDelete;
    bool m_attributesToDeleteHasBeenSet;

    Aws::Vector<UserSetting> m_userSettings;
    bool m_userSettingsHasBeenSet;

    ApplicationSettings m_applicationSettings;
    bool m_applicationSettingsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
