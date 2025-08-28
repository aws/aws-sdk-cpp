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
    AWS_CONNECT_API AuthenticationProfile() = default;
    AWS_CONNECT_API AuthenticationProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AuthenticationProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the authentication profile. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AuthenticationProfile& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the authentication profile.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AuthenticationProfile& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the authentication profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AuthenticationProfile& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the authentication profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AuthenticationProfile& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetAllowedIps() const { return m_allowedIps; }
    inline bool AllowedIpsHasBeenSet() const { return m_allowedIpsHasBeenSet; }
    template<typename AllowedIpsT = Aws::Vector<Aws::String>>
    void SetAllowedIps(AllowedIpsT&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = std::forward<AllowedIpsT>(value); }
    template<typename AllowedIpsT = Aws::Vector<Aws::String>>
    AuthenticationProfile& WithAllowedIps(AllowedIpsT&& value) { SetAllowedIps(std::forward<AllowedIpsT>(value)); return *this;}
    template<typename AllowedIpsT = Aws::String>
    AuthenticationProfile& AddAllowedIps(AllowedIpsT&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.emplace_back(std::forward<AllowedIpsT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetBlockedIps() const { return m_blockedIps; }
    inline bool BlockedIpsHasBeenSet() const { return m_blockedIpsHasBeenSet; }
    template<typename BlockedIpsT = Aws::Vector<Aws::String>>
    void SetBlockedIps(BlockedIpsT&& value) { m_blockedIpsHasBeenSet = true; m_blockedIps = std::forward<BlockedIpsT>(value); }
    template<typename BlockedIpsT = Aws::Vector<Aws::String>>
    AuthenticationProfile& WithBlockedIps(BlockedIpsT&& value) { SetBlockedIps(std::forward<BlockedIpsT>(value)); return *this;}
    template<typename BlockedIpsT = Aws::String>
    AuthenticationProfile& AddBlockedIps(BlockedIpsT&& value) { m_blockedIpsHasBeenSet = true; m_blockedIps.emplace_back(std::forward<BlockedIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Shows whether the authentication profile is the default authentication
     * profile for the Amazon Connect instance. The default authentication profile
     * applies to all agents in an Amazon Connect instance, unless overridden by
     * another authentication profile.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline AuthenticationProfile& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the authentication profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    AuthenticationProfile& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the authentication profile was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    AuthenticationProfile& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the authentication profile was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    AuthenticationProfile& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short lived session duration configuration for users logged in to Amazon
     * Connect, in minutes. This value determines the maximum possible time before an
     * agent is authenticated. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-session-timeouts">Configure
     * the session duration</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline int GetPeriodicSessionDuration() const { return m_periodicSessionDuration; }
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
    inline int GetMaxSessionDuration() const { return m_maxSessionDuration; }
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

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;

    int m_periodicSessionDuration{0};
    bool m_periodicSessionDurationHasBeenSet = false;

    int m_maxSessionDuration{0};
    bool m_maxSessionDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
