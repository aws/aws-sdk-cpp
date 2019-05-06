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
  class AWS_IOT_API AttachPolicyRequest : public IoTRequest
  {
  public:
    AttachPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachPolicy"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the policy to attach.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy to attach.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy to attach.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy to attach.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy to attach.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy to attach.</p>
     */
    inline AttachPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy to attach.</p>
     */
    inline AttachPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy to attach.</p>
     */
    inline AttachPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline AttachPolicyRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline AttachPolicyRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-security-identity.html">identity</a>
     * to which the policy is attached.</p>
     */
    inline AttachPolicyRequest& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
