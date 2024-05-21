/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/AcceptAction.h>
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
    AWS_MAILMANAGER_API TrafficPolicy();
    AWS_MAILMANAGER_API TrafficPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API TrafficPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline const AcceptAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline void SetDefaultAction(const AcceptAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline void SetDefaultAction(AcceptAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline TrafficPolicy& WithDefaultAction(const AcceptAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>Default action instructs the traﬃc policy to either Allow or Deny (block)
     * messages that fall outside of (or not addressed by) the conditions of your
     * policy statements</p>
     */
    inline TrafficPolicy& WithDefaultAction(AcceptAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = value; }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::move(value); }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId.assign(value); }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline TrafficPolicy& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline TrafficPolicy& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline TrafficPolicy& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}


    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyName() const{ return m_trafficPolicyName; }

    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline bool TrafficPolicyNameHasBeenSet() const { return m_trafficPolicyNameHasBeenSet; }

    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(const Aws::String& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = value; }

    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(Aws::String&& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = std::move(value); }

    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(const char* value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName.assign(value); }

    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline TrafficPolicy& WithTrafficPolicyName(const Aws::String& value) { SetTrafficPolicyName(value); return *this;}

    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline TrafficPolicy& WithTrafficPolicyName(Aws::String&& value) { SetTrafficPolicyName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name of the traffic policy resource.</p>
     */
    inline TrafficPolicy& WithTrafficPolicyName(const char* value) { SetTrafficPolicyName(value); return *this;}

  private:

    AcceptAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    Aws::String m_trafficPolicyName;
    bool m_trafficPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
