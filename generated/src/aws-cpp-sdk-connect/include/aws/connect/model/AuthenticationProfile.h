/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>This API is in preview release for Amazon Connect and is subject to change.
   * To request access to this API, contact Amazon Web Services Support.</p>
   * <p>Information about an authentication profile. An authentication profile is a
   * resource that stores the authentication settings for users in your contact
   * center. You use authentication profiles to set up IP address range restrictions
   * and session timeouts. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html">Set
   * IP address restrictions or session timeouts</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AuthenticationProfile">AWS
   * API Reference</a></p>
   */
  class AuthenticationProfile
  {
  public:
    AWS_CONNECT_API AuthenticationProfile();
    AWS_CONNECT_API AuthenticationProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AuthenticationProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the authentication profile. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AuthenticationProfile& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AuthenticationProfile& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AuthenticationProfile& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the authentication profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AuthenticationProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AuthenticationProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AuthenticationProfile& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the authentication profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AuthenticationProfile& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AuthenticationProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AuthenticationProfile& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the authentication profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AuthenticationProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AuthenticationProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AuthenticationProfile& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IP address range strings that are allowed to access the Amazon
     * Connect instance. For more information about how to configure IP addresses, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-ip-based-ac">Configure
     * IP address based access control</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedIps() const{ return m_allowedIps; }
    inline bool AllowedIpsHasBeenSet() const { return m_allowedIpsHasBeenSet; }
    inline void SetAllowedIps(const Aws::Vector<Aws::String>& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = value; }
    inline void SetAllowedIps(Aws::Vector<Aws::String>&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = std::move(value); }
    inline AuthenticationProfile& WithAllowedIps(const Aws::Vector<Aws::String>& value) { SetAllowedIps(value); return *this;}
    inline AuthenticationProfile& WithAllowedIps(Aws::Vector<Aws::String>&& value) { SetAllowedIps(std::move(value)); return *this;}
    inline AuthenticationProfile& AddAllowedIps(const Aws::String& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(value); return *this; }
    inline AuthenticationProfile& AddAllowedIps(Aws::String&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(std::move(value)); return *this; }
    inline AuthenticationProfile& AddAllowedIps(const char* value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IP address range strings that are blocked from accessing the Amazon
     * Connect instance. For more information about how to configure IP addresses, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-ip-based-ac">Configure
     * IP address based access control</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedIps() const{ return m_blockedIps; }
    inline bool BlockedIpsHasBeenSet() const { return m_blockedIpsHasBeenSet; }
    inline void SetBlockedIps(const Aws::Vector<Aws::String>& value) { m_blockedIpsHasBeenSet = true; m_blockedIps = value; }
    inline void SetBlockedIps(Aws::Vector<Aws::String>&& value) { m_blockedIpsHasBeenSet = true; m_blockedIps = std::move(value); }
    inline AuthenticationProfile& WithBlockedIps(const Aws::Vector<Aws::String>& value) { SetBlockedIps(value); return *this;}
    inline AuthenticationProfile& WithBlockedIps(Aws::Vector<Aws::String>&& value) { SetBlockedIps(std::move(value)); return *this;}
    inline AuthenticationProfile& AddBlockedIps(const Aws::String& value) { m_blockedIpsHasBeenSet = true; m_blockedIps.push_back(value); return *this; }
    inline AuthenticationProfile& AddBlockedIps(Aws::String&& value) { m_blockedIpsHasBeenSet = true; m_blockedIps.push_back(std::move(value)); return *this; }
    inline AuthenticationProfile& AddBlockedIps(const char* value) { m_blockedIpsHasBeenSet = true; m_blockedIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Shows whether the authentication profile is the default authentication
     * profile for the Amazon Connect instance. The default authentication profile
     * applies to all agents in an Amazon Connect instance, unless overridden by
     * another authentication profile.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline AuthenticationProfile& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the authentication profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline AuthenticationProfile& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline AuthenticationProfile& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the authentication profile was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline AuthenticationProfile& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline AuthenticationProfile& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the authentication profile was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }
    inline AuthenticationProfile& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline AuthenticationProfile& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline AuthenticationProfile& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short lived session duration configuration for users logged in to Amazon
     * Connect, in minutes. This value determines the maximum possible time before an
     * agent is authenticated. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-session-timeouts">Configure
     * the session duration</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline int GetPeriodicSessionDuration() const{ return m_periodicSessionDuration; }
    inline bool PeriodicSessionDurationHasBeenSet() const { return m_periodicSessionDurationHasBeenSet; }
    inline void SetPeriodicSessionDuration(int value) { m_periodicSessionDurationHasBeenSet = true; m_periodicSessionDuration = value; }
    inline AuthenticationProfile& WithPeriodicSessionDuration(int value) { SetPeriodicSessionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long lived session duration for users logged in to Amazon Connect, in
     * minutes. After this time period, users must log in again. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-session-timeouts">Configure
     * the session duration</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline int GetMaxSessionDuration() const{ return m_maxSessionDuration; }
    inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
    inline void SetMaxSessionDuration(int value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = value; }
    inline AuthenticationProfile& WithMaxSessionDuration(int value) { SetMaxSessionDuration(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedIps;
    bool m_allowedIpsHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedIps;
    bool m_blockedIpsHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;

    int m_periodicSessionDuration;
    bool m_periodicSessionDurationHasBeenSet = false;

    int m_maxSessionDuration;
    bool m_maxSessionDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
