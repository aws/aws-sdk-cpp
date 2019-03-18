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
   * SMS Channel Response.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SMSChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SMSChannelResponse
  {
  public:
    SMSChannelResponse();
    SMSChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    SMSChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline SMSChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline SMSChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID of the application to which the SMS channel belongs.
     */
    inline SMSChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


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
    inline SMSChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline SMSChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * The date that the settings were last updated in ISO 8601 format.
     */
    inline SMSChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


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
    inline SMSChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline SMSChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}


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
    inline SMSChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline SMSChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Channel ID. Not used, only for backwards compatibility.
     */
    inline SMSChannelResponse& WithId(const char* value) { SetId(value); return *this;}


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
    inline SMSChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


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
    inline SMSChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * Who last updated this entry
     */
    inline SMSChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * Who last updated this entry
     */
    inline SMSChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


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
    inline SMSChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * Last date this was updated
     */
    inline SMSChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * Last date this was updated
     */
    inline SMSChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * Platform type. Will be "SMS"
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * Platform type. Will be "SMS"
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * Platform type. Will be "SMS"
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * Platform type. Will be "SMS"
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * Platform type. Will be "SMS"
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * Platform type. Will be "SMS"
     */
    inline SMSChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * Platform type. Will be "SMS"
     */
    inline SMSChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * Platform type. Will be "SMS"
     */
    inline SMSChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * Promotional messages per second that can be sent
     */
    inline int GetPromotionalMessagesPerSecond() const{ return m_promotionalMessagesPerSecond; }

    /**
     * Promotional messages per second that can be sent
     */
    inline bool PromotionalMessagesPerSecondHasBeenSet() const { return m_promotionalMessagesPerSecondHasBeenSet; }

    /**
     * Promotional messages per second that can be sent
     */
    inline void SetPromotionalMessagesPerSecond(int value) { m_promotionalMessagesPerSecondHasBeenSet = true; m_promotionalMessagesPerSecond = value; }

    /**
     * Promotional messages per second that can be sent
     */
    inline SMSChannelResponse& WithPromotionalMessagesPerSecond(int value) { SetPromotionalMessagesPerSecond(value); return *this;}


    /**
     * Sender identifier of your messages.
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * Sender identifier of your messages.
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * Sender identifier of your messages.
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * Sender identifier of your messages.
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * Sender identifier of your messages.
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * Sender identifier of your messages.
     */
    inline SMSChannelResponse& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * Sender identifier of your messages.
     */
    inline SMSChannelResponse& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * Sender identifier of your messages.
     */
    inline SMSChannelResponse& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * The short code registered with the phone provider.
     */
    inline const Aws::String& GetShortCode() const{ return m_shortCode; }

    /**
     * The short code registered with the phone provider.
     */
    inline bool ShortCodeHasBeenSet() const { return m_shortCodeHasBeenSet; }

    /**
     * The short code registered with the phone provider.
     */
    inline void SetShortCode(const Aws::String& value) { m_shortCodeHasBeenSet = true; m_shortCode = value; }

    /**
     * The short code registered with the phone provider.
     */
    inline void SetShortCode(Aws::String&& value) { m_shortCodeHasBeenSet = true; m_shortCode = std::move(value); }

    /**
     * The short code registered with the phone provider.
     */
    inline void SetShortCode(const char* value) { m_shortCodeHasBeenSet = true; m_shortCode.assign(value); }

    /**
     * The short code registered with the phone provider.
     */
    inline SMSChannelResponse& WithShortCode(const Aws::String& value) { SetShortCode(value); return *this;}

    /**
     * The short code registered with the phone provider.
     */
    inline SMSChannelResponse& WithShortCode(Aws::String&& value) { SetShortCode(std::move(value)); return *this;}

    /**
     * The short code registered with the phone provider.
     */
    inline SMSChannelResponse& WithShortCode(const char* value) { SetShortCode(value); return *this;}


    /**
     * Transactional messages per second that can be sent
     */
    inline int GetTransactionalMessagesPerSecond() const{ return m_transactionalMessagesPerSecond; }

    /**
     * Transactional messages per second that can be sent
     */
    inline bool TransactionalMessagesPerSecondHasBeenSet() const { return m_transactionalMessagesPerSecondHasBeenSet; }

    /**
     * Transactional messages per second that can be sent
     */
    inline void SetTransactionalMessagesPerSecond(int value) { m_transactionalMessagesPerSecondHasBeenSet = true; m_transactionalMessagesPerSecond = value; }

    /**
     * Transactional messages per second that can be sent
     */
    inline SMSChannelResponse& WithTransactionalMessagesPerSecond(int value) { SetTransactionalMessagesPerSecond(value); return *this;}


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
    inline SMSChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    bool m_hasCredential;
    bool m_hasCredentialHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    int m_promotionalMessagesPerSecond;
    bool m_promotionalMessagesPerSecondHasBeenSet;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet;

    Aws::String m_shortCode;
    bool m_shortCodeHasBeenSet;

    int m_transactionalMessagesPerSecond;
    bool m_transactionalMessagesPerSecondHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
