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
   * <p>Provides information about the status and settings of the email channel for
   * an application.</p><p><h3>See Also:</h3>   <a
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
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline EmailChannelResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline EmailChannelResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the email channel applies
     * to.</p>
     */
    inline EmailChannelResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }

    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }

    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }

    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline EmailChannelResponse& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline EmailChannelResponse& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}

    /**
     * <p>The configuration set that's applied to email that's sent through the channel
     * by using the <a href="emailAPIreference.html">Amazon Pinpoint Email API</a>.</p>
     */
    inline EmailChannelResponse& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline EmailChannelResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline EmailChannelResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was
     * enabled.</p>
     */
    inline EmailChannelResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>Specifies whether the email channel is enabled for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the email channel is enabled for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether the email channel is enabled for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the email channel is enabled for the application.</p>
     */
    inline EmailChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline EmailChannelResponse& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline EmailChannelResponse& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * <p>The verified email address that you send email from when you send email
     * through the channel.</p>
     */
    inline EmailChannelResponse& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


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
    inline EmailChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}


    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline EmailChannelResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline EmailChannelResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) An identifier for the email channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline EmailChannelResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline EmailChannelResponse& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline EmailChannelResponse& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you use when you send email through the
     * channel.</p>
     */
    inline EmailChannelResponse& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * <p>Specifies whether the email channel is archived.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Specifies whether the email channel is archived.</p>
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * <p>Specifies whether the email channel is archived.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * <p>Specifies whether the email channel is archived.</p>
     */
    inline EmailChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline EmailChannelResponse& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline EmailChannelResponse& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * <p>The user who last modified the email channel.</p>
     */
    inline EmailChannelResponse& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline EmailChannelResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline EmailChannelResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the email channel was last
     * modified.</p>
     */
    inline EmailChannelResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The maximum number of emails that you can send through the channel each
     * second.</p>
     */
    inline int GetMessagesPerSecond() const{ return m_messagesPerSecond; }

    /**
     * <p>The maximum number of emails that you can send through the channel each
     * second.</p>
     */
    inline bool MessagesPerSecondHasBeenSet() const { return m_messagesPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of emails that you can send through the channel each
     * second.</p>
     */
    inline void SetMessagesPerSecond(int value) { m_messagesPerSecondHasBeenSet = true; m_messagesPerSecond = value; }

    /**
     * <p>The maximum number of emails that you can send through the channel each
     * second.</p>
     */
    inline EmailChannelResponse& WithMessagesPerSecond(int value) { SetMessagesPerSecond(value); return *this;}


    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline EmailChannelResponse& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline EmailChannelResponse& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The type of messaging or notification platform for the channel. For the email
     * channel, this value is EMAIL.</p>
     */
    inline EmailChannelResponse& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline EmailChannelResponse& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline EmailChannelResponse& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Pinpoint uses to submit email-related event data for the channel.</p>
     */
    inline EmailChannelResponse& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The current version of the email channel.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The current version of the email channel.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The current version of the email channel.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The current version of the email channel.</p>
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
