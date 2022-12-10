/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicyState.h>
#include <aws/elasticmapreduce/model/AutoScalingPolicyStateChangeReason.h>
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
   * <p>The status of an automatic scaling policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AutoScalingPolicyStatus">AWS
   * API Reference</a></p>
   */
  class AutoScalingPolicyStatus
  {
  public:
    AWS_EMR_API AutoScalingPolicyStatus();
    AWS_EMR_API AutoScalingPolicyStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API AutoScalingPolicyStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the status of the automatic scaling policy.</p>
     */
    inline const AutoScalingPolicyState& GetState() const{ return m_state; }

    /**
     * <p>Indicates the status of the automatic scaling policy.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates the status of the automatic scaling policy.</p>
     */
    inline void SetState(const AutoScalingPolicyState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates the status of the automatic scaling policy.</p>
     */
    inline void SetState(AutoScalingPolicyState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates the status of the automatic scaling policy.</p>
     */
    inline AutoScalingPolicyStatus& WithState(const AutoScalingPolicyState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates the status of the automatic scaling policy.</p>
     */
    inline AutoScalingPolicyStatus& WithState(AutoScalingPolicyState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for a change in status.</p>
     */
    inline const AutoScalingPolicyStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason for a change in status.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>The reason for a change in status.</p>
     */
    inline void SetStateChangeReason(const AutoScalingPolicyStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The reason for a change in status.</p>
     */
    inline void SetStateChangeReason(AutoScalingPolicyStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The reason for a change in status.</p>
     */
    inline AutoScalingPolicyStatus& WithStateChangeReason(const AutoScalingPolicyStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The reason for a change in status.</p>
     */
    inline AutoScalingPolicyStatus& WithStateChangeReason(AutoScalingPolicyStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}

  private:

    AutoScalingPolicyState m_state;
    bool m_stateHasBeenSet = false;

    AutoScalingPolicyStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
