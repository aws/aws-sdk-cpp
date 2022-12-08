/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/CanaryRunState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryRunStateReasonCode.h>
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
   * <p>This structure contains the status information about a canary
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunStatus">AWS
   * API Reference</a></p>
   */
  class CanaryRunStatus
  {
  public:
    AWS_SYNTHETICS_API CanaryRunStatus();
    AWS_SYNTHETICS_API CanaryRunStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the run.</p>
     */
    inline const CanaryRunState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the run.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the run.</p>
     */
    inline void SetState(const CanaryRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the run.</p>
     */
    inline void SetState(CanaryRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the run.</p>
     */
    inline CanaryRunStatus& WithState(const CanaryRunState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the run.</p>
     */
    inline CanaryRunStatus& WithState(CanaryRunState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline CanaryRunStatus& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline CanaryRunStatus& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline CanaryRunStatus& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>If this value is <code>CANARY_FAILURE</code>, an exception occurred in the
     * canary code. If this value is <code>EXECUTION_FAILURE</code>, an exception
     * occurred in CloudWatch Synthetics.</p>
     */
    inline const CanaryRunStateReasonCode& GetStateReasonCode() const{ return m_stateReasonCode; }

    /**
     * <p>If this value is <code>CANARY_FAILURE</code>, an exception occurred in the
     * canary code. If this value is <code>EXECUTION_FAILURE</code>, an exception
     * occurred in CloudWatch Synthetics.</p>
     */
    inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }

    /**
     * <p>If this value is <code>CANARY_FAILURE</code>, an exception occurred in the
     * canary code. If this value is <code>EXECUTION_FAILURE</code>, an exception
     * occurred in CloudWatch Synthetics.</p>
     */
    inline void SetStateReasonCode(const CanaryRunStateReasonCode& value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = value; }

    /**
     * <p>If this value is <code>CANARY_FAILURE</code>, an exception occurred in the
     * canary code. If this value is <code>EXECUTION_FAILURE</code>, an exception
     * occurred in CloudWatch Synthetics.</p>
     */
    inline void SetStateReasonCode(CanaryRunStateReasonCode&& value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = std::move(value); }

    /**
     * <p>If this value is <code>CANARY_FAILURE</code>, an exception occurred in the
     * canary code. If this value is <code>EXECUTION_FAILURE</code>, an exception
     * occurred in CloudWatch Synthetics.</p>
     */
    inline CanaryRunStatus& WithStateReasonCode(const CanaryRunStateReasonCode& value) { SetStateReasonCode(value); return *this;}

    /**
     * <p>If this value is <code>CANARY_FAILURE</code>, an exception occurred in the
     * canary code. If this value is <code>EXECUTION_FAILURE</code>, an exception
     * occurred in CloudWatch Synthetics.</p>
     */
    inline CanaryRunStatus& WithStateReasonCode(CanaryRunStateReasonCode&& value) { SetStateReasonCode(std::move(value)); return *this;}

  private:

    CanaryRunState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    CanaryRunStateReasonCode m_stateReasonCode;
    bool m_stateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
