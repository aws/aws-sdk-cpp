/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AwsApiCallAction.h>
#include <aws/guardduty/model/DnsRequestAction.h>
#include <aws/guardduty/model/NetworkConnectionAction.h>
#include <aws/guardduty/model/PortProbeAction.h>
#include <aws/guardduty/model/KubernetesApiCallAction.h>
#include <aws/guardduty/model/RdsLoginAttemptAction.h>
#include <aws/guardduty/model/KubernetesPermissionCheckedDetails.h>
#include <aws/guardduty/model/KubernetesRoleBindingDetails.h>
#include <aws/guardduty/model/KubernetesRoleDetails.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_GUARDDUTY_API Action() = default;
    AWS_GUARDDUTY_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline const Aws::String& GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    template<typename ActionTypeT = Aws::String>
    void SetActionType(ActionTypeT&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::forward<ActionTypeT>(value); }
    template<typename ActionTypeT = Aws::String>
    Action& WithActionType(ActionTypeT&& value) { SetActionType(std::forward<ActionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the AWS_API_CALL action described in this finding.</p>
     */
    inline const AwsApiCallAction& GetAwsApiCallAction() const { return m_awsApiCallAction; }
    inline bool AwsApiCallActionHasBeenSet() const { return m_awsApiCallActionHasBeenSet; }
    template<typename AwsApiCallActionT = AwsApiCallAction>
    void SetAwsApiCallAction(AwsApiCallActionT&& value) { m_awsApiCallActionHasBeenSet = true; m_awsApiCallAction = std::forward<AwsApiCallActionT>(value); }
    template<typename AwsApiCallActionT = AwsApiCallAction>
    Action& WithAwsApiCallAction(AwsApiCallActionT&& value) { SetAwsApiCallAction(std::forward<AwsApiCallActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DNS_REQUEST action described in this finding.</p>
     */
    inline const DnsRequestAction& GetDnsRequestAction() const { return m_dnsRequestAction; }
    inline bool DnsRequestActionHasBeenSet() const { return m_dnsRequestActionHasBeenSet; }
    template<typename DnsRequestActionT = DnsRequestAction>
    void SetDnsRequestAction(DnsRequestActionT&& value) { m_dnsRequestActionHasBeenSet = true; m_dnsRequestAction = std::forward<DnsRequestActionT>(value); }
    template<typename DnsRequestActionT = DnsRequestAction>
    Action& WithDnsRequestAction(DnsRequestActionT&& value) { SetDnsRequestAction(std::forward<DnsRequestActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the NETWORK_CONNECTION action described in this
     * finding.</p>
     */
    inline const NetworkConnectionAction& GetNetworkConnectionAction() const { return m_networkConnectionAction; }
    inline bool NetworkConnectionActionHasBeenSet() const { return m_networkConnectionActionHasBeenSet; }
    template<typename NetworkConnectionActionT = NetworkConnectionAction>
    void SetNetworkConnectionAction(NetworkConnectionActionT&& value) { m_networkConnectionActionHasBeenSet = true; m_networkConnectionAction = std::forward<NetworkConnectionActionT>(value); }
    template<typename NetworkConnectionActionT = NetworkConnectionAction>
    Action& WithNetworkConnectionAction(NetworkConnectionActionT&& value) { SetNetworkConnectionAction(std::forward<NetworkConnectionActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the PORT_PROBE action described in this finding.</p>
     */
    inline const PortProbeAction& GetPortProbeAction() const { return m_portProbeAction; }
    inline bool PortProbeActionHasBeenSet() const { return m_portProbeActionHasBeenSet; }
    template<typename PortProbeActionT = PortProbeAction>
    void SetPortProbeAction(PortProbeActionT&& value) { m_portProbeActionHasBeenSet = true; m_portProbeAction = std::forward<PortProbeActionT>(value); }
    template<typename PortProbeActionT = PortProbeAction>
    Action& WithPortProbeAction(PortProbeActionT&& value) { SetPortProbeAction(std::forward<PortProbeActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Kubernetes API call action described in this
     * finding.</p>
     */
    inline const KubernetesApiCallAction& GetKubernetesApiCallAction() const { return m_kubernetesApiCallAction; }
    inline bool KubernetesApiCallActionHasBeenSet() const { return m_kubernetesApiCallActionHasBeenSet; }
    template<typename KubernetesApiCallActionT = KubernetesApiCallAction>
    void SetKubernetesApiCallAction(KubernetesApiCallActionT&& value) { m_kubernetesApiCallActionHasBeenSet = true; m_kubernetesApiCallAction = std::forward<KubernetesApiCallActionT>(value); }
    template<typename KubernetesApiCallActionT = KubernetesApiCallAction>
    Action& WithKubernetesApiCallAction(KubernetesApiCallActionT&& value) { SetKubernetesApiCallAction(std::forward<KubernetesApiCallActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about <code>RDS_LOGIN_ATTEMPT</code> action described in this
     * finding.</p>
     */
    inline const RdsLoginAttemptAction& GetRdsLoginAttemptAction() const { return m_rdsLoginAttemptAction; }
    inline bool RdsLoginAttemptActionHasBeenSet() const { return m_rdsLoginAttemptActionHasBeenSet; }
    template<typename RdsLoginAttemptActionT = RdsLoginAttemptAction>
    void SetRdsLoginAttemptAction(RdsLoginAttemptActionT&& value) { m_rdsLoginAttemptActionHasBeenSet = true; m_rdsLoginAttemptAction = std::forward<RdsLoginAttemptActionT>(value); }
    template<typename RdsLoginAttemptActionT = RdsLoginAttemptAction>
    Action& WithRdsLoginAttemptAction(RdsLoginAttemptActionT&& value) { SetRdsLoginAttemptAction(std::forward<RdsLoginAttemptActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information whether the user has the permission to use a specific Kubernetes
     * API.</p>
     */
    inline const KubernetesPermissionCheckedDetails& GetKubernetesPermissionCheckedDetails() const { return m_kubernetesPermissionCheckedDetails; }
    inline bool KubernetesPermissionCheckedDetailsHasBeenSet() const { return m_kubernetesPermissionCheckedDetailsHasBeenSet; }
    template<typename KubernetesPermissionCheckedDetailsT = KubernetesPermissionCheckedDetails>
    void SetKubernetesPermissionCheckedDetails(KubernetesPermissionCheckedDetailsT&& value) { m_kubernetesPermissionCheckedDetailsHasBeenSet = true; m_kubernetesPermissionCheckedDetails = std::forward<KubernetesPermissionCheckedDetailsT>(value); }
    template<typename KubernetesPermissionCheckedDetailsT = KubernetesPermissionCheckedDetails>
    Action& WithKubernetesPermissionCheckedDetails(KubernetesPermissionCheckedDetailsT&& value) { SetKubernetesPermissionCheckedDetails(std::forward<KubernetesPermissionCheckedDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the role binding that grants the permission defined in a
     * Kubernetes role.</p>
     */
    inline const KubernetesRoleBindingDetails& GetKubernetesRoleBindingDetails() const { return m_kubernetesRoleBindingDetails; }
    inline bool KubernetesRoleBindingDetailsHasBeenSet() const { return m_kubernetesRoleBindingDetailsHasBeenSet; }
    template<typename KubernetesRoleBindingDetailsT = KubernetesRoleBindingDetails>
    void SetKubernetesRoleBindingDetails(KubernetesRoleBindingDetailsT&& value) { m_kubernetesRoleBindingDetailsHasBeenSet = true; m_kubernetesRoleBindingDetails = std::forward<KubernetesRoleBindingDetailsT>(value); }
    template<typename KubernetesRoleBindingDetailsT = KubernetesRoleBindingDetails>
    Action& WithKubernetesRoleBindingDetails(KubernetesRoleBindingDetailsT&& value) { SetKubernetesRoleBindingDetails(std::forward<KubernetesRoleBindingDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Kubernetes role name and role type.</p>
     */
    inline const KubernetesRoleDetails& GetKubernetesRoleDetails() const { return m_kubernetesRoleDetails; }
    inline bool KubernetesRoleDetailsHasBeenSet() const { return m_kubernetesRoleDetailsHasBeenSet; }
    template<typename KubernetesRoleDetailsT = KubernetesRoleDetails>
    void SetKubernetesRoleDetails(KubernetesRoleDetailsT&& value) { m_kubernetesRoleDetailsHasBeenSet = true; m_kubernetesRoleDetails = std::forward<KubernetesRoleDetailsT>(value); }
    template<typename KubernetesRoleDetailsT = KubernetesRoleDetails>
    Action& WithKubernetesRoleDetails(KubernetesRoleDetailsT&& value) { SetKubernetesRoleDetails(std::forward<KubernetesRoleDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    AwsApiCallAction m_awsApiCallAction;
    bool m_awsApiCallActionHasBeenSet = false;

    DnsRequestAction m_dnsRequestAction;
    bool m_dnsRequestActionHasBeenSet = false;

    NetworkConnectionAction m_networkConnectionAction;
    bool m_networkConnectionActionHasBeenSet = false;

    PortProbeAction m_portProbeAction;
    bool m_portProbeActionHasBeenSet = false;

    KubernetesApiCallAction m_kubernetesApiCallAction;
    bool m_kubernetesApiCallActionHasBeenSet = false;

    RdsLoginAttemptAction m_rdsLoginAttemptAction;
    bool m_rdsLoginAttemptActionHasBeenSet = false;

    KubernetesPermissionCheckedDetails m_kubernetesPermissionCheckedDetails;
    bool m_kubernetesPermissionCheckedDetailsHasBeenSet = false;

    KubernetesRoleBindingDetails m_kubernetesRoleBindingDetails;
    bool m_kubernetesRoleBindingDetailsHasBeenSet = false;

    KubernetesRoleDetails m_kubernetesRoleDetails;
    bool m_kubernetesRoleDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
