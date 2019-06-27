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
   * <p>Provides information about the general settings and status of a channel for
   * an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ChannelResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ChannelResponse
  {
  public:
    ChannelResponse();
    ChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    ChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline ChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline ChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application.</p>
     */
    inline ChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline ChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline ChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was enabled.</p>
     */
    inline ChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>Specifies whether the channel is enabled for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the channel is enabled for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the channel is enabled for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the channel is enabled for the application.</p>
     */
    inline ChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline ChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}


    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline ChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline ChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) An identifier for the channel. This property is retained only
     * for backward compatibility.</p>
     */
    inline ChannelResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies whether the channel is archived.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Specifies whether the channel is archived.</p>
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * <p>Specifies whether the channel is archived.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * <p>Specifies whether the channel is archived.</p>
     */
    inline ChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>The user who last modified the channel.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The user who last modified the channel.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The user who last modified the channel.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The user who last modified the channel.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The user who last modified the channel.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The user who last modified the channel.</p>
     */
    inline ChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The user who last modified the channel.</p>
     */
    inline ChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The user who last modified the channel.</p>
     */
    inline ChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline ChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline ChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the channel was last
     * modified.</p>
     */
    inline ChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The current version of the channel.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The current version of the channel.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The current version of the channel.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The current version of the channel.</p>
     */
    inline ChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}

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

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
