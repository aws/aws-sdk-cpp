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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Email Channel Response.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EmailChannelResponse
  {
  public:
    EmailChannelResponse();
    EmailChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    EmailChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline EmailChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline EmailChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID of the application to which the email channel belongs.
     */
    inline EmailChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline EmailChannelResponse& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline EmailChannelResponse& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline EmailChannelResponse& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}


    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline EmailChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline EmailChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline EmailChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * If the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline EmailChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * The email address used to send emails from.
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * The email address used to send emails from.
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * The email address used to send emails from.
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * The email address used to send emails from.
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * The email address used to send emails from.
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * The email address used to send emails from.
     */
    inline EmailChannelResponse& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * The email address used to send emails from.
     */
    inline EmailChannelResponse& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * The email address used to send emails from.
     */
    inline EmailChannelResponse& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * Not used. Retained for backwards compatibility.
     */
    inline bool GetHasCredential() const{ return m_hasCredential; }

    /**
     * Not used. Retained for backwards compatibility.
     */
    inline bool HasCredentialHasBeenSet() const { return m_hasCredentialHasBeenSet; }

    /**
     * Not used. Retained for backwards compatibility.
     */
    inline void SetHasCredential(bool value) { m_hasCredentialHasBeenSet = true; m_hasCredential = value; }

    /**
     * Not used. Retained for backwards compatibility.
     */
    inline EmailChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}


    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline EmailChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline EmailChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline EmailChannelResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The ARN of an identity verified with SES.
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * The ARN of an identity verified with SES.
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * The ARN of an identity verified with SES.
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * The ARN of an identity verified with SES.
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * The ARN of an identity verified with SES.
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * The ARN of an identity verified with SES.
     */
    inline EmailChannelResponse& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * The ARN of an identity verified with SES.
     */
    inline EmailChannelResponse& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * The ARN of an identity verified with SES.
     */
    inline EmailChannelResponse& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * Is this channel archived
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * Is this channel archived
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * Is this channel archived
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * Is this channel archived
     */
    inline EmailChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * Who last updated this entry
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * Who last updated this entry
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * Who last updated this entry
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * Who last updated this entry
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * Who last updated this entry
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * Who last updated this entry
     */
    inline EmailChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * Who last updated this entry
     */
    inline EmailChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * Who last updated this entry
     */
    inline EmailChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * Last date this was updated
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * Last date this was updated
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * Last date this was updated
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * Last date this was updated
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * Last date this was updated
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * Last date this was updated
     */
    inline EmailChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * Last date this was updated
     */
    inline EmailChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * Last date this was updated
     */
    inline EmailChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * Messages per second that can be sent
     */
    inline int GetMessagesPerSecond() const{ return m_messagesPerSecond; }

    /**
     * Messages per second that can be sent
     */
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }

    /**
     * Messages per second that can be sent
     */
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }

    /**
     * Messages per second that can be sent
     */
    inline EmailChannelResponse& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}


    /**
     * Platform type. Will be "EMAIL"
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * Platform type. Will be "EMAIL"
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * Platform type. Will be "EMAIL"
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * Platform type. Will be "EMAIL"
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * Platform type. Will be "EMAIL"
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * Platform type. Will be "EMAIL"
     */
    inline EmailChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * Platform type. Will be "EMAIL"
     */
    inline EmailChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * Platform type. Will be "EMAIL"
     */
    inline EmailChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline EmailChannelResponse& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline EmailChannelResponse& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline EmailChannelResponse& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * Version of channel
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * Version of channel
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * Version of channel
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * Version of channel
     */
    inline EmailChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_configurationSet;
    bool m_configurationSetHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet;

    bool m_hasCredential;
    bool m_hasCredentialHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_identity;
    bool m_identityHasBeenSet;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    int m_messagesPerSecond;
    bool m_messagesPerSecondHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
