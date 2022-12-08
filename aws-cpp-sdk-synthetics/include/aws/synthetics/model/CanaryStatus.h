/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/CanaryState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryStateReasonCode.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains the current state of the canary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryStatus">AWS
   * API Reference</a></p>
   */
  class CanaryStatus
  {
  public:
    AWS_SYNTHETICS_API CanaryStatus();
    AWS_SYNTHETICS_API CanaryStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the canary.</p>
     */
    inline const CanaryState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the canary.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the canary.</p>
     */
    inline void SetState(const CanaryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the canary.</p>
     */
    inline void SetState(CanaryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the canary.</p>
     */
    inline CanaryStatus& WithState(const CanaryState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the canary.</p>
     */
    inline CanaryStatus& WithState(CanaryState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline CanaryStatus& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline CanaryStatus& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>If the canary has insufficient permissions to run, this field provides more
     * details.</p>
     */
    inline CanaryStatus& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>If the canary cannot run or has failed, this field displays the reason.</p>
     */
    inline const CanaryStateReasonCode& GetStateReasonCode() const{ return m_stateReasonCode; }

    /**
     * <p>If the canary cannot run or has failed, this field displays the reason.</p>
     */
    inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }

    /**
     * <p>If the canary cannot run or has failed, this field displays the reason.</p>
     */
    inline void SetStateReasonCode(const CanaryStateReasonCode& value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = value; }

    /**
     * <p>If the canary cannot run or has failed, this field displays the reason.</p>
     */
    inline void SetStateReasonCode(CanaryStateReasonCode&& value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = std::move(value); }

    /**
     * <p>If the canary cannot run or has failed, this field displays the reason.</p>
     */
    inline CanaryStatus& WithStateReasonCode(const CanaryStateReasonCode& value) { SetStateReasonCode(value); return *this;}

    /**
     * <p>If the canary cannot run or has failed, this field displays the reason.</p>
     */
    inline CanaryStatus& WithStateReasonCode(CanaryStateReasonCode&& value) { SetStateReasonCode(std::move(value)); return *this;}

  private:

    CanaryState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    CanaryStateReasonCode m_stateReasonCode;
    bool m_stateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
