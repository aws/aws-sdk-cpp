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
   * <p>Provides information about the status and settings of the Baidu (Baidu Cloud
   * Push) channel for an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/BaiduChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API BaiduChannelResponse
  {
  public:
    BaiduChannelResponse();
    BaiduChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    BaiduChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline BaiduChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline BaiduChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the Baidu channel applies
     * to.</p>
     */
    inline BaiduChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline BaiduChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline BaiduChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date and time when the Baidu channel was enabled.</p>
     */
    inline BaiduChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline const Aws::String& GetCredential() const{ return m_credential; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetCredential(const Aws::String& value) { m_credentialHasBeenSet = true; m_credential = value; }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetCredential(Aws::String&& value) { m_credentialHasBeenSet = true; m_credential = std::move(value); }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline void SetCredential(const char* value) { m_credentialHasBeenSet = true; m_credential.assign(value); }

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelResponse& WithCredential(const Aws::String& value) { SetCredential(value); return *this;}

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelResponse& WithCredential(Aws::String&& value) { SetCredential(std::move(value)); return *this;}

    /**
     * <p>The API key that you received from the Baidu Cloud Push service to
     * communicate with the service.</p>
     */
    inline BaiduChannelResponse& WithCredential(const char* value) { SetCredential(value); return *this;}


    /**
     * <p>Specifies whether the Baidu channel is enabled for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the Baidu channel is enabled for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the Baidu channel is enabled for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the Baidu channel is enabled for the application.</p>
     */
    inline BaiduChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline bool GetHasCredential() const{ return m_hasCredential; }

    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline bool HasCredentialHasBeenSet() const { return m_hasCredentialHasBeenSet; }

    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline void SetHasCredential(bool value) { m_hasCredentialHasBeenSet = true; m_hasCredential = value; }

    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline BaiduChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}


    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline BaiduChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline BaiduChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) An identifier for the Baidu channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline BaiduChannelResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies whether the Baidu channel is archived.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Specifies whether the Baidu channel is archived.</p>
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * <p>Specifies whether the Baidu channel is archived.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * <p>Specifies whether the Baidu channel is archived.</p>
     */
    inline BaiduChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline BaiduChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline BaiduChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The user who last modified the Baidu channel.</p>
     */
    inline BaiduChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline BaiduChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline BaiduChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date and time when the Baidu channel was last modified.</p>
     */
    inline BaiduChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline BaiduChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline BaiduChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The type of messaging or notification platform for the channel. For the Baidu
     * channel, this value is BAIDU.</p>
     */
    inline BaiduChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The current version of the Baidu channel.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The current version of the Baidu channel.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The current version of the Baidu channel.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The current version of the Baidu channel.</p>
     */
    inline BaiduChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}

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
