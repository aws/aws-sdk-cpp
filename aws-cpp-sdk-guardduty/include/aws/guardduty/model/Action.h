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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/AwsApiCallAction.h>
#include <aws/guardduty/model/DnsRequestAction.h>
#include <aws/guardduty/model/NetworkConnectionAction.h>
#include <aws/guardduty/model/PortProbeAction.h>
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
   * Information about the activity described in a finding.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Action">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API Action
  {
  public:
    Action();
    Action(Aws::Utils::Json::JsonView jsonValue);
    Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * GuardDuty Finding activity type.
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }

    /**
     * GuardDuty Finding activity type.
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * GuardDuty Finding activity type.
     */
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * GuardDuty Finding activity type.
     */
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * GuardDuty Finding activity type.
     */
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }

    /**
     * GuardDuty Finding activity type.
     */
    inline Action& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}

    /**
     * GuardDuty Finding activity type.
     */
    inline Action& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}

    /**
     * GuardDuty Finding activity type.
     */
    inline Action& WithActionType(const char* value) { SetActionType(value); return *this;}


    /**
     * Information about the AWS_API_CALL action described in this finding.
     */
    inline const AwsApiCallAction& GetAwsApiCallAction() const{ return m_awsApiCallAction; }

    /**
     * Information about the AWS_API_CALL action described in this finding.
     */
    inline bool AwsApiCallActionHasBeenSet() const { return m_awsApiCallActionHasBeenSet; }

    /**
     * Information about the AWS_API_CALL action described in this finding.
     */
    inline void SetAwsApiCallAction(const AwsApiCallAction& value) { m_awsApiCallActionHasBeenSet = true; m_awsApiCallAction = value; }

    /**
     * Information about the AWS_API_CALL action described in this finding.
     */
    inline void SetAwsApiCallAction(AwsApiCallAction&& value) { m_awsApiCallActionHasBeenSet = true; m_awsApiCallAction = std::move(value); }

    /**
     * Information about the AWS_API_CALL action described in this finding.
     */
    inline Action& WithAwsApiCallAction(const AwsApiCallAction& value) { SetAwsApiCallAction(value); return *this;}

    /**
     * Information about the AWS_API_CALL action described in this finding.
     */
    inline Action& WithAwsApiCallAction(AwsApiCallAction&& value) { SetAwsApiCallAction(std::move(value)); return *this;}


    /**
     * Information about the DNS_REQUEST action described in this finding.
     */
    inline const DnsRequestAction& GetDnsRequestAction() const{ return m_dnsRequestAction; }

    /**
     * Information about the DNS_REQUEST action described in this finding.
     */
    inline bool DnsRequestActionHasBeenSet() const { return m_dnsRequestActionHasBeenSet; }

    /**
     * Information about the DNS_REQUEST action described in this finding.
     */
    inline void SetDnsRequestAction(const DnsRequestAction& value) { m_dnsRequestActionHasBeenSet = true; m_dnsRequestAction = value; }

    /**
     * Information about the DNS_REQUEST action described in this finding.
     */
    inline void SetDnsRequestAction(DnsRequestAction&& value) { m_dnsRequestActionHasBeenSet = true; m_dnsRequestAction = std::move(value); }

    /**
     * Information about the DNS_REQUEST action described in this finding.
     */
    inline Action& WithDnsRequestAction(const DnsRequestAction& value) { SetDnsRequestAction(value); return *this;}

    /**
     * Information about the DNS_REQUEST action described in this finding.
     */
    inline Action& WithDnsRequestAction(DnsRequestAction&& value) { SetDnsRequestAction(std::move(value)); return *this;}


    /**
     * Information about the NETWORK_CONNECTION action described in this finding.
     */
    inline const NetworkConnectionAction& GetNetworkConnectionAction() const{ return m_networkConnectionAction; }

    /**
     * Information about the NETWORK_CONNECTION action described in this finding.
     */
    inline bool NetworkConnectionActionHasBeenSet() const { return m_networkConnectionActionHasBeenSet; }

    /**
     * Information about the NETWORK_CONNECTION action described in this finding.
     */
    inline void SetNetworkConnectionAction(const NetworkConnectionAction& value) { m_networkConnectionActionHasBeenSet = true; m_networkConnectionAction = value; }

    /**
     * Information about the NETWORK_CONNECTION action described in this finding.
     */
    inline void SetNetworkConnectionAction(NetworkConnectionAction&& value) { m_networkConnectionActionHasBeenSet = true; m_networkConnectionAction = std::move(value); }

    /**
     * Information about the NETWORK_CONNECTION action described in this finding.
     */
    inline Action& WithNetworkConnectionAction(const NetworkConnectionAction& value) { SetNetworkConnectionAction(value); return *this;}

    /**
     * Information about the NETWORK_CONNECTION action described in this finding.
     */
    inline Action& WithNetworkConnectionAction(NetworkConnectionAction&& value) { SetNetworkConnectionAction(std::move(value)); return *this;}


    /**
     * Information about the PORT_PROBE action described in this finding.
     */
    inline const PortProbeAction& GetPortProbeAction() const{ return m_portProbeAction; }

    /**
     * Information about the PORT_PROBE action described in this finding.
     */
    inline bool PortProbeActionHasBeenSet() const { return m_portProbeActionHasBeenSet; }

    /**
     * Information about the PORT_PROBE action described in this finding.
     */
    inline void SetPortProbeAction(const PortProbeAction& value) { m_portProbeActionHasBeenSet = true; m_portProbeAction = value; }

    /**
     * Information about the PORT_PROBE action described in this finding.
     */
    inline void SetPortProbeAction(PortProbeAction&& value) { m_portProbeActionHasBeenSet = true; m_portProbeAction = std::move(value); }

    /**
     * Information about the PORT_PROBE action described in this finding.
     */
    inline Action& WithPortProbeAction(const PortProbeAction& value) { SetPortProbeAction(value); return *this;}

    /**
     * Information about the PORT_PROBE action described in this finding.
     */
    inline Action& WithPortProbeAction(PortProbeAction&& value) { SetPortProbeAction(std::move(value)); return *this;}

  private:

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet;

    AwsApiCallAction m_awsApiCallAction;
    bool m_awsApiCallActionHasBeenSet;

    DnsRequestAction m_dnsRequestAction;
    bool m_dnsRequestActionHasBeenSet;

    NetworkConnectionAction m_networkConnectionAction;
    bool m_networkConnectionActionHasBeenSet;

    PortProbeAction m_portProbeAction;
    bool m_portProbeActionHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
