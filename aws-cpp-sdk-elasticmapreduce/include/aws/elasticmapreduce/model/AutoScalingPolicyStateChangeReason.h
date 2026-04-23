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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicyStateChangeReasonCode.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The reason for an <a>AutoScalingPolicyStatus</a> change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AutoScalingPolicyStateChangeReason">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API AutoScalingPolicyStateChangeReason
  {
  public:
    AutoScalingPolicyStateChangeReason();
    AutoScalingPolicyStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingPolicyStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code indicating the reason for the change in
     * status.<code>USER_REQUEST</code> indicates that the scaling policy status was
     * changed by a user. <code>PROVISION_FAILURE</code> indicates that the status
     * change was because the policy failed to provision. <code>CLEANUP_FAILURE</code>
     * indicates an error.</p>
     */
    inline const AutoScalingPolicyStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The code indicating the reason for the change in
     * status.<code>USER_REQUEST</code> indicates that the scaling policy status was
     * changed by a user. <code>PROVISION_FAILURE</code> indicates that the status
     * change was because the policy failed to provision. <code>CLEANUP_FAILURE</code>
     * indicates an error.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code indicating the reason for the change in
     * status.<code>USER_REQUEST</code> indicates that the scaling policy status was
     * changed by a user. <code>PROVISION_FAILURE</code> indicates that the status
     * change was because the policy failed to provision. <code>CLEANUP_FAILURE</code>
     * indicates an error.</p>
     */
    inline void SetCode(const AutoScalingPolicyStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code indicating the reason for the change in
     * status.<code>USER_REQUEST</code> indicates that the scaling policy status was
     * changed by a user. <code>PROVISION_FAILURE</code> indicates that the status
     * change was because the policy failed to provision. <code>CLEANUP_FAILURE</code>
     * indicates an error.</p>
     */
    inline void SetCode(AutoScalingPolicyStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code indicating the reason for the change in
     * status.<code>USER_REQUEST</code> indicates that the scaling policy status was
     * changed by a user. <code>PROVISION_FAILURE</code> indicates that the status
     * change was because the policy failed to provision. <code>CLEANUP_FAILURE</code>
     * indicates an error.</p>
     */
    inline AutoScalingPolicyStateChangeReason& WithCode(const AutoScalingPolicyStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The code indicating the reason for the change in
     * status.<code>USER_REQUEST</code> indicates that the scaling policy status was
     * changed by a user. <code>PROVISION_FAILURE</code> indicates that the status
     * change was because the policy failed to provision. <code>CLEANUP_FAILURE</code>
     * indicates an error.</p>
     */
    inline AutoScalingPolicyStateChangeReason& WithCode(AutoScalingPolicyStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline AutoScalingPolicyStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline AutoScalingPolicyStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline AutoScalingPolicyStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    AutoScalingPolicyStateChangeReasonCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
