/**
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
    AWS_EMR_API AutoScalingPolicyStateChangeReason() = default;
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
    inline AutoScalingPolicyStateChangeReasonCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(AutoScalingPolicyStateChangeReasonCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline AutoScalingPolicyStateChangeReason& WithCode(AutoScalingPolicyStateChangeReasonCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly, more verbose message that accompanies an automatic scaling policy
     * state change.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AutoScalingPolicyStateChangeReason& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    AutoScalingPolicyStateChangeReasonCode m_code{AutoScalingPolicyStateChangeReasonCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
