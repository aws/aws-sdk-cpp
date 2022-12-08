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
    AWS_GUARDDUTY_API Action();
    AWS_GUARDDUTY_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }

    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }

    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline Action& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}

    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline Action& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}

    /**
     * <p>The GuardDuty finding activity type.</p>
     */
    inline Action& WithActionType(const char* value) { SetActionType(value); return *this;}


    /**
     * <p>Information about the AWS_API_CALL action described in this finding.</p>
     */
    inline const AwsApiCallAction& GetAwsApiCallAction() const{ return m_awsApiCallAction; }

    /**
     * <p>Information about the AWS_API_CALL action described in this finding.</p>
     */
    inline bool AwsApiCallActionHasBeenSet() const { return m_awsApiCallActionHasBeenSet; }

    /**
     * <p>Information about the AWS_API_CALL action described in this finding.</p>
     */
    inline void SetAwsApiCallAction(const AwsApiCallAction& value) { m_awsApiCallActionHasBeenSet = true; m_awsApiCallAction = value; }

    /**
     * <p>Information about the AWS_API_CALL action described in this finding.</p>
     */
    inline void SetAwsApiCallAction(AwsApiCallAction&& value) { m_awsApiCallActionHasBeenSet = true; m_awsApiCallAction = std::move(value); }

    /**
     * <p>Information about the AWS_API_CALL action described in this finding.</p>
     */
    inline Action& WithAwsApiCallAction(const AwsApiCallAction& value) { SetAwsApiCallAction(value); return *this;}

    /**
     * <p>Information about the AWS_API_CALL action described in this finding.</p>
     */
    inline Action& WithAwsApiCallAction(AwsApiCallAction&& value) { SetAwsApiCallAction(std::move(value)); return *this;}


    /**
     * <p>Information about the DNS_REQUEST action described in this finding.</p>
     */
    inline const DnsRequestAction& GetDnsRequestAction() const{ return m_dnsRequestAction; }

    /**
     * <p>Information about the DNS_REQUEST action described in this finding.</p>
     */
    inline bool DnsRequestActionHasBeenSet() const { return m_dnsRequestActionHasBeenSet; }

    /**
     * <p>Information about the DNS_REQUEST action described in this finding.</p>
     */
    inline void SetDnsRequestAction(const DnsRequestAction& value) { m_dnsRequestActionHasBeenSet = true; m_dnsRequestAction = value; }

    /**
     * <p>Information about the DNS_REQUEST action described in this finding.</p>
     */
    inline void SetDnsRequestAction(DnsRequestAction&& value) { m_dnsRequestActionHasBeenSet = true; m_dnsRequestAction = std::move(value); }

    /**
     * <p>Information about the DNS_REQUEST action described in this finding.</p>
     */
    inline Action& WithDnsRequestAction(const DnsRequestAction& value) { SetDnsRequestAction(value); return *this;}

    /**
     * <p>Information about the DNS_REQUEST action described in this finding.</p>
     */
    inline Action& WithDnsRequestAction(DnsRequestAction&& value) { SetDnsRequestAction(std::move(value)); return *this;}


    /**
     * <p>Information about the NETWORK_CONNECTION action described in this
     * finding.</p>
     */
    inline const NetworkConnectionAction& GetNetworkConnectionAction() const{ return m_networkConnectionAction; }

    /**
     * <p>Information about the NETWORK_CONNECTION action described in this
     * finding.</p>
     */
    inline bool NetworkConnectionActionHasBeenSet() const { return m_networkConnectionActionHasBeenSet; }

    /**
     * <p>Information about the NETWORK_CONNECTION action described in this
     * finding.</p>
     */
    inline void SetNetworkConnectionAction(const NetworkConnectionAction& value) { m_networkConnectionActionHasBeenSet = true; m_networkConnectionAction = value; }

    /**
     * <p>Information about the NETWORK_CONNECTION action described in this
     * finding.</p>
     */
    inline void SetNetworkConnectionAction(NetworkConnectionAction&& value) { m_networkConnectionActionHasBeenSet = true; m_networkConnectionAction = std::move(value); }

    /**
     * <p>Information about the NETWORK_CONNECTION action described in this
     * finding.</p>
     */
    inline Action& WithNetworkConnectionAction(const NetworkConnectionAction& value) { SetNetworkConnectionAction(value); return *this;}

    /**
     * <p>Information about the NETWORK_CONNECTION action described in this
     * finding.</p>
     */
    inline Action& WithNetworkConnectionAction(NetworkConnectionAction&& value) { SetNetworkConnectionAction(std::move(value)); return *this;}


    /**
     * <p>Information about the PORT_PROBE action described in this finding.</p>
     */
    inline const PortProbeAction& GetPortProbeAction() const{ return m_portProbeAction; }

    /**
     * <p>Information about the PORT_PROBE action described in this finding.</p>
     */
    inline bool PortProbeActionHasBeenSet() const { return m_portProbeActionHasBeenSet; }

    /**
     * <p>Information about the PORT_PROBE action described in this finding.</p>
     */
    inline void SetPortProbeAction(const PortProbeAction& value) { m_portProbeActionHasBeenSet = true; m_portProbeAction = value; }

    /**
     * <p>Information about the PORT_PROBE action described in this finding.</p>
     */
    inline void SetPortProbeAction(PortProbeAction&& value) { m_portProbeActionHasBeenSet = true; m_portProbeAction = std::move(value); }

    /**
     * <p>Information about the PORT_PROBE action described in this finding.</p>
     */
    inline Action& WithPortProbeAction(const PortProbeAction& value) { SetPortProbeAction(value); return *this;}

    /**
     * <p>Information about the PORT_PROBE action described in this finding.</p>
     */
    inline Action& WithPortProbeAction(PortProbeAction&& value) { SetPortProbeAction(std::move(value)); return *this;}


    /**
     * <p>Information about the Kubernetes API call action described in this
     * finding.</p>
     */
    inline const KubernetesApiCallAction& GetKubernetesApiCallAction() const{ return m_kubernetesApiCallAction; }

    /**
     * <p>Information about the Kubernetes API call action described in this
     * finding.</p>
     */
    inline bool KubernetesApiCallActionHasBeenSet() const { return m_kubernetesApiCallActionHasBeenSet; }

    /**
     * <p>Information about the Kubernetes API call action described in this
     * finding.</p>
     */
    inline void SetKubernetesApiCallAction(const KubernetesApiCallAction& value) { m_kubernetesApiCallActionHasBeenSet = true; m_kubernetesApiCallAction = value; }

    /**
     * <p>Information about the Kubernetes API call action described in this
     * finding.</p>
     */
    inline void SetKubernetesApiCallAction(KubernetesApiCallAction&& value) { m_kubernetesApiCallActionHasBeenSet = true; m_kubernetesApiCallAction = std::move(value); }

    /**
     * <p>Information about the Kubernetes API call action described in this
     * finding.</p>
     */
    inline Action& WithKubernetesApiCallAction(const KubernetesApiCallAction& value) { SetKubernetesApiCallAction(value); return *this;}

    /**
     * <p>Information about the Kubernetes API call action described in this
     * finding.</p>
     */
    inline Action& WithKubernetesApiCallAction(KubernetesApiCallAction&& value) { SetKubernetesApiCallAction(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
