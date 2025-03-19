/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/RuleOrder.h>
#include <aws/fms/model/StreamExceptionPolicy.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Configuration settings for the handling of the stateful rule groups in a
   * Network Firewall firewall policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/StatefulEngineOptions">AWS
   * API Reference</a></p>
   */
  class StatefulEngineOptions
  {
  public:
    AWS_FMS_API StatefulEngineOptions() = default;
    AWS_FMS_API StatefulEngineOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API StatefulEngineOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates how to manage the order of stateful rule evaluation for the policy.
     * Stateful rules are provided to the rule engine as Suricata compatible strings,
     * and Suricata evaluates them based on certain settings. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/suricata-rule-evaluation-order.html">Evaluation
     * order for stateful rules</a> in the <i>Network Firewall Developer Guide</i>.</p>
     * <p>Default: <code>DEFAULT_ACTION_ORDER</code> </p>
     */
    inline RuleOrder GetRuleOrder() const { return m_ruleOrder; }
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }
    inline void SetRuleOrder(RuleOrder value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }
    inline StatefulEngineOptions& WithRuleOrder(RuleOrder value) { SetRuleOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how Network Firewall should handle traffic when a network
     * connection breaks midstream.</p> <ul> <li> <p> <code>DROP</code> - Fail closed
     * and drop all subsequent traffic going to the firewall.</p> </li> <li> <p>
     * <code>CONTINUE</code> - Continue to apply rules to subsequent traffic without
     * context from traffic before the break. This impacts the behavior of rules that
     * depend on context. For example, with a stateful rule that drops HTTP traffic,
     * Network Firewall won't match subsequent traffic because the it won't have the
     * context from session initialization, which defines the application layer
     * protocol as HTTP. However, a TCP-layer rule using a <code>flow:stateless</code>
     * rule would still match, and so would the <code>aws:drop_strict</code> default
     * action. </p> </li> <li> <p> <code>REJECT</code> - Fail closed and drop all
     * subsequent traffic going to the firewall. With this option, Network Firewall
     * also sends a TCP reject packet back to the client so the client can immediately
     * establish a new session. With the new session, Network Firewall will have
     * context and will apply rules appropriately.</p> <p>For applications that are
     * reliant on long-lived TCP connections that trigger Gateway Load Balancer idle
     * timeouts, this is the recommended setting. </p> </li> <li> <p>
     * <code>FMS_IGNORE</code> - Firewall Manager doesn't monitor or modify the Network
     * Firewall stream exception policy settings. </p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/stream-exception-policy.html">Stream
     * exception policy in your firewall policy</a> in the <i>Network Firewall
     * Developer Guide</i>.</p> <p>Default: <code>FMS_IGNORE</code> </p>
     */
    inline StreamExceptionPolicy GetStreamExceptionPolicy() const { return m_streamExceptionPolicy; }
    inline bool StreamExceptionPolicyHasBeenSet() const { return m_streamExceptionPolicyHasBeenSet; }
    inline void SetStreamExceptionPolicy(StreamExceptionPolicy value) { m_streamExceptionPolicyHasBeenSet = true; m_streamExceptionPolicy = value; }
    inline StatefulEngineOptions& WithStreamExceptionPolicy(StreamExceptionPolicy value) { SetStreamExceptionPolicy(value); return *this;}
    ///@}
  private:

    RuleOrder m_ruleOrder{RuleOrder::NOT_SET};
    bool m_ruleOrderHasBeenSet = false;

    StreamExceptionPolicy m_streamExceptionPolicy{StreamExceptionPolicy::NOT_SET};
    bool m_streamExceptionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
