/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/HookState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Configuration for lifecycle hooks invoked during MicroVM events such as run,
 * resume, suspend, and terminate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/MicrovmHooks">AWS
 * API Reference</a></p>
 */
class MicrovmHooks {
 public:
  AWS_LAMBDAMICROVMS_API MicrovmHooks() = default;
  AWS_LAMBDAMICROVMS_API MicrovmHooks(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API MicrovmHooks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path of the hook invoked when the MicroVM starts running.</p>
   */
  inline HookState GetRun() const { return m_run; }
  inline bool RunHasBeenSet() const { return m_runHasBeenSet; }
  inline void SetRun(HookState value) {
    m_runHasBeenSet = true;
    m_run = value;
  }
  inline MicrovmHooks& WithRun(HookState value) {
    SetRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds for the run hook to complete.</p>
   */
  inline int GetRunTimeoutInSeconds() const { return m_runTimeoutInSeconds; }
  inline bool RunTimeoutInSecondsHasBeenSet() const { return m_runTimeoutInSecondsHasBeenSet; }
  inline void SetRunTimeoutInSeconds(int value) {
    m_runTimeoutInSecondsHasBeenSet = true;
    m_runTimeoutInSeconds = value;
  }
  inline MicrovmHooks& WithRunTimeoutInSeconds(int value) {
    SetRunTimeoutInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the hook invoked when the MicroVM resumes from a suspended
   * state.</p>
   */
  inline HookState GetResume() const { return m_resume; }
  inline bool ResumeHasBeenSet() const { return m_resumeHasBeenSet; }
  inline void SetResume(HookState value) {
    m_resumeHasBeenSet = true;
    m_resume = value;
  }
  inline MicrovmHooks& WithResume(HookState value) {
    SetResume(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds for the resume hook to complete.</p>
   */
  inline int GetResumeTimeoutInSeconds() const { return m_resumeTimeoutInSeconds; }
  inline bool ResumeTimeoutInSecondsHasBeenSet() const { return m_resumeTimeoutInSecondsHasBeenSet; }
  inline void SetResumeTimeoutInSeconds(int value) {
    m_resumeTimeoutInSecondsHasBeenSet = true;
    m_resumeTimeoutInSeconds = value;
  }
  inline MicrovmHooks& WithResumeTimeoutInSeconds(int value) {
    SetResumeTimeoutInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the hook invoked when the MicroVM is suspended.</p>
   */
  inline HookState GetSuspend() const { return m_suspend; }
  inline bool SuspendHasBeenSet() const { return m_suspendHasBeenSet; }
  inline void SetSuspend(HookState value) {
    m_suspendHasBeenSet = true;
    m_suspend = value;
  }
  inline MicrovmHooks& WithSuspend(HookState value) {
    SetSuspend(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds for the suspend hook to complete.</p>
   */
  inline int GetSuspendTimeoutInSeconds() const { return m_suspendTimeoutInSeconds; }
  inline bool SuspendTimeoutInSecondsHasBeenSet() const { return m_suspendTimeoutInSecondsHasBeenSet; }
  inline void SetSuspendTimeoutInSeconds(int value) {
    m_suspendTimeoutInSecondsHasBeenSet = true;
    m_suspendTimeoutInSeconds = value;
  }
  inline MicrovmHooks& WithSuspendTimeoutInSeconds(int value) {
    SetSuspendTimeoutInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the hook invoked when the MicroVM is terminated.</p>
   */
  inline HookState GetTerminate() const { return m_terminate; }
  inline bool TerminateHasBeenSet() const { return m_terminateHasBeenSet; }
  inline void SetTerminate(HookState value) {
    m_terminateHasBeenSet = true;
    m_terminate = value;
  }
  inline MicrovmHooks& WithTerminate(HookState value) {
    SetTerminate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time in seconds for the terminate hook to complete.</p>
   */
  inline int GetTerminateTimeoutInSeconds() const { return m_terminateTimeoutInSeconds; }
  inline bool TerminateTimeoutInSecondsHasBeenSet() const { return m_terminateTimeoutInSecondsHasBeenSet; }
  inline void SetTerminateTimeoutInSeconds(int value) {
    m_terminateTimeoutInSecondsHasBeenSet = true;
    m_terminateTimeoutInSeconds = value;
  }
  inline MicrovmHooks& WithTerminateTimeoutInSeconds(int value) {
    SetTerminateTimeoutInSeconds(value);
    return *this;
  }
  ///@}
 private:
  HookState m_run{HookState::NOT_SET};

  int m_runTimeoutInSeconds{0};

  HookState m_resume{HookState::NOT_SET};

  int m_resumeTimeoutInSeconds{0};

  HookState m_suspend{HookState::NOT_SET};

  int m_suspendTimeoutInSeconds{0};

  HookState m_terminate{HookState::NOT_SET};

  int m_terminateTimeoutInSeconds{0};
  bool m_runHasBeenSet = false;
  bool m_runTimeoutInSecondsHasBeenSet = false;
  bool m_resumeHasBeenSet = false;
  bool m_resumeTimeoutInSecondsHasBeenSet = false;
  bool m_suspendHasBeenSet = false;
  bool m_suspendTimeoutInSecondsHasBeenSet = false;
  bool m_terminateHasBeenSet = false;
  bool m_terminateTimeoutInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
