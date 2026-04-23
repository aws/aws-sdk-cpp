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
   * Google Cloud Messaging channel definition<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/GCMChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API GCMChannelResponse
  {
  public:
    GCMChannelResponse();
    GCMChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    GCMChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID of the application to which the channel applies.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application to which the channel applies.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The ID of the application to which the channel applies.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application to which the channel applies.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application to which the channel applies.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application to which the channel applies.
     */
    inline GCMChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application to which the channel applies.
     */
    inline GCMChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application to which the channel applies.
     */
    inline GCMChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * When was this segment created
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * When was this segment created
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * When was this segment created
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * When was this segment created
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * When was this segment created
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * When was this segment created
     */
    inline GCMChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * When was this segment created
     */
    inline GCMChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * When was this segment created
     */
    inline GCMChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * The GCM API key from Google.
     */
    inline const Aws::String& GetCredential() const{ return m_credential; }

    /**
     * The GCM API key from Google.
     */
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }

    /**
     * The GCM API key from Google.
     */
    inline void SetCredential(const Aws::String& value) { m_credentialHasBeenSet = true; m_credential = value; }

    /**
     * The GCM API key from Google.
     */
    inline void SetCredential(Aws::String&& value) { m_credentialHasBeenSet = true; m_credential = std::move(value); }

    /**
     * The GCM API key from Google.
     */
    inline void SetCredential(const char* value) { m_credentialHasBeenSet = true; m_credential.assign(value); }

    /**
     * The GCM API key from Google.
     */
    inline GCMChannelResponse& WithCredential(const Aws::String& value) { SetCredential(value); return *this;}

    /**
     * The GCM API key from Google.
     */
    inline GCMChannelResponse& WithCredential(Aws::String&& value) { SetCredential(std::move(value)); return *this;}

    /**
     * The GCM API key from Google.
     */
    inline GCMChannelResponse& WithCredential(const char* value) { SetCredential(value); return *this;}


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
    inline GCMChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline GCMChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}


    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline GCMChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline GCMChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Channel ID. Not used. Present only for backwards compatibility.
     */
    inline GCMChannelResponse& WithId(const char* value) { SetId(value); return *this;}


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
    inline GCMChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


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
    inline GCMChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * Who last updated this entry
     */
    inline GCMChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * Who last updated this entry
     */
    inline GCMChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


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
    inline GCMChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * Last date this was updated
     */
    inline GCMChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * Last date this was updated
     */
    inline GCMChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * The platform type. Will be GCM
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * The platform type. Will be GCM
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * The platform type. Will be GCM
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * The platform type. Will be GCM
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * The platform type. Will be GCM
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * The platform type. Will be GCM
     */
    inline GCMChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * The platform type. Will be GCM
     */
    inline GCMChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * The platform type. Will be GCM
     */
    inline GCMChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}


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
    inline GCMChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_credential;
    bool m_credentialHasBeenSet;

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

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
