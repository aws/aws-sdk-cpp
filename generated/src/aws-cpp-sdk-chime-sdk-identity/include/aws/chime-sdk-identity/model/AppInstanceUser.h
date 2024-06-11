/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-identity/model/ExpirationSettings.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>The details of an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/AppInstanceUser">AWS
   * API Reference</a></p>
   */
  class AppInstanceUser
  {
  public:
    AWS_CHIMESDKIDENTITY_API AppInstanceUser();
    AWS_CHIMESDKIDENTITY_API AppInstanceUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }
    inline AppInstanceUser& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}
    inline AppInstanceUser& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}
    inline AppInstanceUser& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppInstanceUser& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppInstanceUser& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppInstanceUser& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline AppInstanceUser& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline AppInstanceUser& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline AppInstanceUser& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the <code>AppInstanceUser</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline AppInstanceUser& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline AppInstanceUser& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the <code>AppInstanceUser</code> was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline AppInstanceUser& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline AppInstanceUser& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval after which an <code>AppInstanceUser</code> is automatically
     * deleted.</p>
     */
    inline const ExpirationSettings& GetExpirationSettings() const{ return m_expirationSettings; }
    inline bool ExpirationSettingsHasBeenSet() const { return m_expirationSettingsHasBeenSet; }
    inline void SetExpirationSettings(const ExpirationSettings& value) { m_expirationSettingsHasBeenSet = true; m_expirationSettings = value; }
    inline void SetExpirationSettings(ExpirationSettings&& value) { m_expirationSettingsHasBeenSet = true; m_expirationSettings = std::move(value); }
    inline AppInstanceUser& WithExpirationSettings(const ExpirationSettings& value) { SetExpirationSettings(value); return *this;}
    inline AppInstanceUser& WithExpirationSettings(ExpirationSettings&& value) { SetExpirationSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    ExpirationSettings m_expirationSettings;
    bool m_expirationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
