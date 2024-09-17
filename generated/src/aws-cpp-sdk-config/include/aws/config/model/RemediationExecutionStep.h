/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/RemediationExecutionStepState.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Name of the step from the SSM document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RemediationExecutionStep">AWS
   * API Reference</a></p>
   */
  class RemediationExecutionStep
  {
  public:
    AWS_CONFIGSERVICE_API RemediationExecutionStep();
    AWS_CONFIGSERVICE_API RemediationExecutionStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RemediationExecutionStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RemediationExecutionStep& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RemediationExecutionStep& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RemediationExecutionStep& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid status of the step.</p>
     */
    inline const RemediationExecutionStepState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const RemediationExecutionStepState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(RemediationExecutionStepState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline RemediationExecutionStep& WithState(const RemediationExecutionStepState& value) { SetState(value); return *this;}
    inline RemediationExecutionStep& WithState(RemediationExecutionStepState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message if the step was interrupted during execution.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline RemediationExecutionStep& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline RemediationExecutionStep& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline RemediationExecutionStep& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the step started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline RemediationExecutionStep& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline RemediationExecutionStep& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the step stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTimeHasBeenSet = true; m_stopTime = value; }
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::move(value); }
    inline RemediationExecutionStep& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}
    inline RemediationExecutionStep& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RemediationExecutionStepState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime;
    bool m_stopTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
