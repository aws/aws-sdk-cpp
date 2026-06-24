/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CaptureLimitsConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Defines what data to capture for code-level instrumentation, including
 * arguments, return values, stack traces, local variables, and safety
 * limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CodeCaptureConfiguration">AWS
 * API Reference</a></p>
 */
class CodeCaptureConfiguration {
 public:
  AWS_APPLICATIONSIGNALS_API CodeCaptureConfiguration() = default;
  AWS_APPLICATIONSIGNALS_API CodeCaptureConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API CodeCaptureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The function arguments to capture. Omit to capture defaults, use an empty
   * list to capture none, use <code>["*"]</code> to capture all arguments, or
   * specify argument names to capture selectively (up to 10 entries).</p>
   */
  inline const Aws::Vector<Aws::String>& GetCaptureArguments() const { return m_captureArguments; }
  inline bool CaptureArgumentsHasBeenSet() const { return m_captureArgumentsHasBeenSet; }
  template <typename CaptureArgumentsT = Aws::Vector<Aws::String>>
  void SetCaptureArguments(CaptureArgumentsT&& value) {
    m_captureArgumentsHasBeenSet = true;
    m_captureArguments = std::forward<CaptureArgumentsT>(value);
  }
  template <typename CaptureArgumentsT = Aws::Vector<Aws::String>>
  CodeCaptureConfiguration& WithCaptureArguments(CaptureArgumentsT&& value) {
    SetCaptureArguments(std::forward<CaptureArgumentsT>(value));
    return *this;
  }
  template <typename CaptureArgumentsT = Aws::String>
  CodeCaptureConfiguration& AddCaptureArguments(CaptureArgumentsT&& value) {
    m_captureArgumentsHasBeenSet = true;
    m_captureArguments.emplace_back(std::forward<CaptureArgumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to capture the return value. Defaults to false.</p>
   */
  inline bool GetCaptureReturn() const { return m_captureReturn; }
  inline bool CaptureReturnHasBeenSet() const { return m_captureReturnHasBeenSet; }
  inline void SetCaptureReturn(bool value) {
    m_captureReturnHasBeenSet = true;
    m_captureReturn = value;
  }
  inline CodeCaptureConfiguration& WithCaptureReturn(bool value) {
    SetCaptureReturn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to capture a stack trace when the instrumentation point is hit.
   * Defaults to true.</p>
   */
  inline bool GetCaptureStackTrace() const { return m_captureStackTrace; }
  inline bool CaptureStackTraceHasBeenSet() const { return m_captureStackTraceHasBeenSet; }
  inline void SetCaptureStackTrace(bool value) {
    m_captureStackTraceHasBeenSet = true;
    m_captureStackTrace = value;
  }
  inline CodeCaptureConfiguration& WithCaptureStackTrace(bool value) {
    SetCaptureStackTrace(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The local variables to capture by name. Omit or pass an empty list to capture
   * none. You can specify up to 20 names.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCaptureLocals() const { return m_captureLocals; }
  inline bool CaptureLocalsHasBeenSet() const { return m_captureLocalsHasBeenSet; }
  template <typename CaptureLocalsT = Aws::Vector<Aws::String>>
  void SetCaptureLocals(CaptureLocalsT&& value) {
    m_captureLocalsHasBeenSet = true;
    m_captureLocals = std::forward<CaptureLocalsT>(value);
  }
  template <typename CaptureLocalsT = Aws::Vector<Aws::String>>
  CodeCaptureConfiguration& WithCaptureLocals(CaptureLocalsT&& value) {
    SetCaptureLocals(std::forward<CaptureLocalsT>(value));
    return *this;
  }
  template <typename CaptureLocalsT = Aws::String>
  CodeCaptureConfiguration& AddCaptureLocals(CaptureLocalsT&& value) {
    m_captureLocalsHasBeenSet = true;
    m_captureLocals.emplace_back(std::forward<CaptureLocalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Safety limits that bound what is captured, including hit counts, string
   * length, collection depth, and stack trace size.</p>
   */
  inline const CaptureLimitsConfig& GetCaptureLimits() const { return m_captureLimits; }
  inline bool CaptureLimitsHasBeenSet() const { return m_captureLimitsHasBeenSet; }
  template <typename CaptureLimitsT = CaptureLimitsConfig>
  void SetCaptureLimits(CaptureLimitsT&& value) {
    m_captureLimitsHasBeenSet = true;
    m_captureLimits = std::forward<CaptureLimitsT>(value);
  }
  template <typename CaptureLimitsT = CaptureLimitsConfig>
  CodeCaptureConfiguration& WithCaptureLimits(CaptureLimitsT&& value) {
    SetCaptureLimits(std::forward<CaptureLimitsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_captureArguments;

  bool m_captureReturn{false};

  bool m_captureStackTrace{false};

  Aws::Vector<Aws::String> m_captureLocals;

  CaptureLimitsConfig m_captureLimits;
  bool m_captureArgumentsHasBeenSet = false;
  bool m_captureReturnHasBeenSet = false;
  bool m_captureStackTraceHasBeenSet = false;
  bool m_captureLocalsHasBeenSet = false;
  bool m_captureLimitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
