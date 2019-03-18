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
   * Apple Distribution Push Notification Service channel definition.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/APNSChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API APNSChannelResponse
  {
  public:
    APNSChannelResponse();
    APNSChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    APNSChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID of the application that the channel applies to.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application that the channel applies to.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The ID of the application that the channel applies to.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application that the channel applies to.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application that the channel applies to.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application that the channel applies to.
     */
    inline APNSChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application that the channel applies to.
     */
    inline APNSChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application that the channel applies to.
     */
    inline APNSChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The date and time when this channel was created.
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * The date and time when this channel was created.
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * The date and time when this channel was created.
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * The date and time when this channel was created.
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * The date and time when this channel was created.
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * The date and time when this channel was created.
     */
    inline APNSChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * The date and time when this channel was created.
     */
    inline APNSChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * The date and time when this channel was created.
     */
    inline APNSChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * The default authentication method used for APNs.
     */
    inline const Aws::String& GetDefaultAuthenticationMethod() const{ return m_defaultAuthenticationMethod; }

    /**
     * The default authentication method used for APNs.
     */
    inline bool DefaultAuthenticationMethodHasBeenSet() const { return m_defaultAuthenticationMethodHasBeenSet; }

    /**
     * The default authentication method used for APNs.
     */
    inline void SetDefaultAuthenticationMethod(const Aws::String& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = value; }

    /**
     * The default authentication method used for APNs.
     */
    inline void SetDefaultAuthenticationMethod(Aws::String&& value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod = std::move(value); }

    /**
     * The default authentication method used for APNs.
     */
    inline void SetDefaultAuthenticationMethod(const char* value) { m_defaultAuthenticationMethodHasBeenSet = true; m_defaultAuthenticationMethod.assign(value); }

    /**
     * The default authentication method used for APNs.
     */
    inline APNSChannelResponse& WithDefaultAuthenticationMethod(const Aws::String& value) { SetDefaultAuthenticationMethod(value); return *this;}

    /**
     * The default authentication method used for APNs.
     */
    inline APNSChannelResponse& WithDefaultAuthenticationMethod(Aws::String&& value) { SetDefaultAuthenticationMethod(std::move(value)); return *this;}

    /**
     * The default authentication method used for APNs.
     */
    inline APNSChannelResponse& WithDefaultAuthenticationMethod(const char* value) { SetDefaultAuthenticationMethod(value); return *this;}


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
    inline APNSChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline APNSChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}


    /**
     * Indicates whether the channel is configured with a key for APNs token
     * authentication. Provide a token key by setting the TokenKey attribute.
     */
    inline bool GetHasTokenKey() const{ return m_hasTokenKey; }

    /**
     * Indicates whether the channel is configured with a key for APNs token
     * authentication. Provide a token key by setting the TokenKey attribute.
     */
    inline bool HasTokenKeyHasBeenSet() const { return m_hasTokenKeyHasBeenSet; }

    /**
     * Indicates whether the channel is configured with a key for APNs token
     * authentication. Provide a token key by setting the TokenKey attribute.
     */
    inline void SetHasTokenKey(bool value) { m_hasTokenKeyHasBeenSet = true; m_hasTokenKey = value; }

    /**
     * Indicates whether the channel is configured with a key for APNs token
     * authentication. Provide a token key by setting the TokenKey attribute.
     */
    inline APNSChannelResponse& WithHasTokenKey(bool value) { SetHasTokenKey(value); return *this;}


    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline APNSChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline APNSChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * (Deprecated) An identifier for the channel. Retained for backwards
     * compatibility.
     */
    inline APNSChannelResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Indicates whether or not the channel is archived.
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * Indicates whether or not the channel is archived.
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * Indicates whether or not the channel is archived.
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * Indicates whether or not the channel is archived.
     */
    inline APNSChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * The user who last updated this channel.
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * The user who last updated this channel.
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * The user who last updated this channel.
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * The user who last updated this channel.
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * The user who last updated this channel.
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * The user who last updated this channel.
     */
    inline APNSChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * The user who last updated this channel.
     */
    inline APNSChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * The user who last updated this channel.
     */
    inline APNSChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * The date and time when this channel was last modified.
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * The date and time when this channel was last modified.
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * The date and time when this channel was last modified.
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * The date and time when this channel was last modified.
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * The date and time when this channel was last modified.
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * The date and time when this channel was last modified.
     */
    inline APNSChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * The date and time when this channel was last modified.
     */
    inline APNSChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * The date and time when this channel was last modified.
     */
    inline APNSChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline APNSChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline APNSChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * The platform type. For this channel, the value is always "ADM."
     */
    inline APNSChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * The channel version.
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * The channel version.
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * The channel version.
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * The channel version.
     */
    inline APNSChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_defaultAuthenticationMethod;
    bool m_defaultAuthenticationMethodHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    bool m_hasCredential;
    bool m_hasCredentialHasBeenSet;

    bool m_hasTokenKey;
    bool m_hasTokenKeyHasBeenSet;

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

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
