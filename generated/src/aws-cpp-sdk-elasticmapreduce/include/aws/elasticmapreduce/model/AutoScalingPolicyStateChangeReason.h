﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AutoScalingPolicyStateChangeReason
  {
  public:
    AWS_EMR_API AutoScalingPolicyStateChangeReason();
    AWS_EMR_API AutoScalingPolicyStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API AutoScalingPolicyStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code indicating the reason for the change in
     * status.<code>USER_REQUEST</code> indicates that the scaling policy status was
     * changed by a user. <code>PROVISION_FAILURE</code> indicates that the status
     * change was because the policy failed to provision. <code>CLEANUP_FAILURE</code>
     * indicates an error.</p>
     */
    inline const AutoScalingPolicyStateChangeReasonCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const AutoScalingPolicyStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(AutoScalingPolicyStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline AutoScalingPolicyStateChangeReason& WithCode(const AutoScalingPolicyStateChangeReasonCode& value) { SetCode(value); return *this;}
    inline AutoScalingPolicyStateChangeReason& WithCode(AutoScalingPolicyStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AutoScalingPolicyStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AutoScalingPolicyStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AutoScalingPolicyStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    AutoScalingPolicyStateChangeReasonCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
