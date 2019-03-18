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
  class AWS_EMR_API AutoScalingPolicyStatus
  {
  public:
    AutoScalingPolicyStatus();
    AutoScalingPolicyStatus(Aws::Utils::Json::JsonView jsonValue);
    AutoScalingPolicyStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_stateHasBeenSet;

    AutoScalingPolicyStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
