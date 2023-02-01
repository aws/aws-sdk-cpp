/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class DetachPolicyRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DetachPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachPolicy"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The policy to detach.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The policy to detach.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The policy to detach.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The policy to detach.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The policy to detach.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The policy to detach.</p>
     */
    inline DetachPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy to detach.</p>
     */
    inline DetachPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The policy to detach.</p>
     */
    inline DetachPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline DetachPolicyRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline DetachPolicyRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target from which the policy will be detached.</p>
     */
    inline DetachPolicyRequest& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
