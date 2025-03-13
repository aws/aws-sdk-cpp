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
    AWS_CONFIGSERVICE_API RemediationExecutionStep() = default;
    AWS_CONFIGSERVICE_API RemediationExecutionStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RemediationExecutionStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of the step.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RemediationExecutionStep& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid status of the step.</p>
     */
    inline RemediationExecutionStepState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RemediationExecutionStepState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RemediationExecutionStep& WithState(RemediationExecutionStepState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message if the step was interrupted during execution.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    RemediationExecutionStep& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the step started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    RemediationExecutionStep& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the step stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const { return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    template<typename StopTimeT = Aws::Utils::DateTime>
    void SetStopTime(StopTimeT&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::forward<StopTimeT>(value); }
    template<typename StopTimeT = Aws::Utils::DateTime>
    RemediationExecutionStep& WithStopTime(StopTimeT&& value) { SetStopTime(std::forward<StopTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RemediationExecutionStepState m_state{RemediationExecutionStepState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime{};
    bool m_stopTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
