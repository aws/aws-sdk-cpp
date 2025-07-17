/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/AcceptAction.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The structure of a traffic policy resource which is a container for policy
   * statements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/TrafficPolicy">AWS
   * API Reference</a></p>
   */
  class TrafficPolicy
  {
  public:
    AWS_MAILMANAGER_API TrafficPolicy() = default;
    AWS_MAILMANAGER_API TrafficPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API TrafficPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyName() const { return m_trafficPolicyName; }
    inline bool TrafficPolicyNameHasBeenSet() const { return m_trafficPolicyNameHasBeenSet; }
    template<typename TrafficPolicyNameT = Aws::String>
    void SetTrafficPolicyName(TrafficPolicyNameT&& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = std::forward<TrafficPolicyNameT>(value); }
    template<typename TrafficPolicyNameT = Aws::String>
    TrafficPolicy& WithTrafficPolicyName(TrafficPolicyNameT&& value) { SetTrafficPolicyName(std::forward<TrafficPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    template<typename TrafficPolicyIdT = Aws::String>
    void SetTrafficPolicyId(TrafficPolicyIdT&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value); }
    template<typename TrafficPolicyIdT = Aws::String>
    TrafficPolicy& WithTrafficPolicyId(TrafficPolicyIdT&& value) { SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline AcceptAction GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(AcceptAction value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline TrafficPolicy& WithDefaultAction(AcceptAction value) { SetDefaultAction(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficPolicyName;
    bool m_trafficPolicyNameHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    AcceptAction m_defaultAction{AcceptAction::NOT_SET};
    bool m_defaultActionHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
