/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateAuthenticationProfileRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateAuthenticationProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAuthenticationProfile"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the authentication profile. </p>
     */
    inline const Aws::String& GetAuthenticationProfileId() const{ return m_authenticationProfileId; }
    inline bool AuthenticationProfileIdHasBeenSet() const { return m_authenticationProfileIdHasBeenSet; }
    inline void SetAuthenticationProfileId(const Aws::String& value) { m_authenticationProfileIdHasBeenSet = true; m_authenticationProfileId = value; }
    inline void SetAuthenticationProfileId(Aws::String&& value) { m_authenticationProfileIdHasBeenSet = true; m_authenticationProfileId = std::move(value); }
    inline void SetAuthenticationProfileId(const char* value) { m_authenticationProfileIdHasBeenSet = true; m_authenticationProfileId.assign(value); }
    inline UpdateAuthenticationProfileRequest& WithAuthenticationProfileId(const Aws::String& value) { SetAuthenticationProfileId(value); return *this;}
    inline UpdateAuthenticationProfileRequest& WithAuthenticationProfileId(Aws::String&& value) { SetAuthenticationProfileId(std::move(value)); return *this;}
    inline UpdateAuthenticationProfileRequest& WithAuthenticationProfileId(const char* value) { SetAuthenticationProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline UpdateAuthenticationProfileRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline UpdateAuthenticationProfileRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline UpdateAuthenticationProfileRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline UpdateAuthenticationProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAuthenticationProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAuthenticationProfileRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline UpdateAuthenticationProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAuthenticationProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAuthenticationProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IP address range strings that are allowed to access the instance.
     * For more information on how to configure IP addresses, see<a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-session-timeouts">Configure
     * session timeouts</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedIps() const{ return m_allowedIps; }
    inline bool AllowedIpsHasBeenSet() const { return m_allowedIpsHasBeenSet; }
    inline void SetAllowedIps(const Aws::Vector<Aws::String>& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = value; }
    inline void SetAllowedIps(Aws::Vector<Aws::String>&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = std::move(value); }
    inline UpdateAuthenticationProfileRequest& WithAllowedIps(const Aws::Vector<Aws::String>& value) { SetAllowedIps(value); return *this;}
    inline UpdateAuthenticationProfileRequest& WithAllowedIps(Aws::Vector<Aws::String>&& value) { SetAllowedIps(std::move(value)); return *this;}
    inline UpdateAuthenticationProfileRequest& AddAllowedIps(const Aws::String& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(value); return *this; }
    inline UpdateAuthenticationProfileRequest& AddAllowedIps(Aws::String&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(std::move(value)); return *this; }
    inline UpdateAuthenticationProfileRequest& AddAllowedIps(const char* value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IP address range strings that are blocked from accessing the
     * instance. For more information on how to configure IP addresses, For more
     * information on how to configure IP addresses, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-ip-based-ac">Configure
     * IP-based access control</a> in the <i>Amazon Connect Administrator Guide</i>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetBlockedIps() const{ return m_blockedIps; }
    inline bool BlockedIpsHasBeenSet() const { return m_blockedIpsHasBeenSet; }
    inline void SetBlockedIps(const Aws::Vector<Aws::String>& value) { m_blockedIpsHasBeenSet = true; m_blockedIps = value; }
    inline void SetBlockedIps(Aws::Vector<Aws::String>&& value) { m_blockedIpsHasBeenSet = true; m_blockedIps = std::move(value); }
    inline UpdateAuthenticationProfileRequest& WithBlockedIps(const Aws::Vector<Aws::String>& value) { SetBlockedIps(value); return *this;}
    inline UpdateAuthenticationProfileRequest& WithBlockedIps(Aws::Vector<Aws::String>&& value) { SetBlockedIps(std::move(value)); return *this;}
    inline UpdateAuthenticationProfileRequest& AddBlockedIps(const Aws::String& value) { m_blockedIpsHasBeenSet = true; m_blockedIps.push_back(value); return *this; }
    inline UpdateAuthenticationProfileRequest& AddBlockedIps(Aws::String&& value) { m_blockedIpsHasBeenSet = true; m_blockedIps.push_back(std::move(value)); return *this; }
    inline UpdateAuthenticationProfileRequest& AddBlockedIps(const char* value) { m_blockedIpsHasBeenSet = true; m_blockedIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The short lived session duration configuration for users logged in to Amazon
     * Connect, in minutes. This value determines the maximum possible time before an
     * agent is authenticated. For more information, For more information on how to
     * configure IP addresses, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/authentication-profiles.html#configure-session-timeouts">Configure
     * session timeouts</a> in the <i>Amazon Connect Administrator Guide</i>. </p>
     */
    inline int GetPeriodicSessionDuration() const{ return m_periodicSessionDuration; }
    inline bool PeriodicSessionDurationHasBeenSet() const { return m_periodicSessionDurationHasBeenSet; }
    inline void SetPeriodicSessionDuration(int value) { m_periodicSessionDurationHasBeenSet = true; m_periodicSessionDuration = value; }
    inline UpdateAuthenticationProfileRequest& WithPeriodicSessionDuration(int value) { SetPeriodicSessionDuration(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationProfileId;
    bool m_authenticationProfileIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedIps;
    bool m_allowedIpsHasBeenSet = false;

    Aws::Vector<Aws::String> m_blockedIps;
    bool m_blockedIpsHasBeenSet = false;

    int m_periodicSessionDuration;
    bool m_periodicSessionDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
