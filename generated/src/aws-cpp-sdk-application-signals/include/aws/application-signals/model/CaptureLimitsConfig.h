/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>

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
 * <p>Guardrails that prevent instrumentation from impacting application
 * performance by limiting how much data is captured.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/CaptureLimitsConfig">AWS
 * API Reference</a></p>
 */
class CaptureLimitsConfig {
 public:
  AWS_APPLICATIONSIGNALS_API CaptureLimitsConfig() = default;
  AWS_APPLICATIONSIGNALS_API CaptureLimitsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API CaptureLimitsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of times the instrumentation point can be hit before it is
   * automatically disabled. Defaults to 100.</p>
   */
  inline int GetMaxHits() const { return m_maxHits; }
  inline bool MaxHitsHasBeenSet() const { return m_maxHitsHasBeenSet; }
  inline void SetMaxHits(int value) {
    m_maxHitsHasBeenSet = true;
    m_maxHits = value;
  }
  inline CaptureLimitsConfig& WithMaxHits(int value) {
    SetMaxHits(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum length of captured string values in characters. Strings longer
   * than this are truncated. Defaults to 128.</p>
   */
  inline int GetMaxStringLength() const { return m_maxStringLength; }
  inline bool MaxStringLengthHasBeenSet() const { return m_maxStringLengthHasBeenSet; }
  inline void SetMaxStringLength(int value) {
    m_maxStringLengthHasBeenSet = true;
    m_maxStringLength = value;
  }
  inline CaptureLimitsConfig& WithMaxStringLength(int value) {
    SetMaxStringLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to capture from any collection to prevent large
   * payloads. Defaults to 10.</p>
   */
  inline int GetMaxCollectionWidth() const { return m_maxCollectionWidth; }
  inline bool MaxCollectionWidthHasBeenSet() const { return m_maxCollectionWidthHasBeenSet; }
  inline void SetMaxCollectionWidth(int value) {
    m_maxCollectionWidthHasBeenSet = true;
    m_maxCollectionWidth = value;
  }
  inline CaptureLimitsConfig& WithMaxCollectionWidth(int value) {
    SetMaxCollectionWidth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum nesting depth to traverse inside collections. Defaults to 3.</p>
   */
  inline int GetMaxCollectionDepth() const { return m_maxCollectionDepth; }
  inline bool MaxCollectionDepthHasBeenSet() const { return m_maxCollectionDepthHasBeenSet; }
  inline void SetMaxCollectionDepth(int value) {
    m_maxCollectionDepthHasBeenSet = true;
    m_maxCollectionDepth = value;
  }
  inline CaptureLimitsConfig& WithMaxCollectionDepth(int value) {
    SetMaxCollectionDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of stack frames to capture in stack traces. Defaults to
   * 2.</p>
   */
  inline int GetMaxStackFrames() const { return m_maxStackFrames; }
  inline bool MaxStackFramesHasBeenSet() const { return m_maxStackFramesHasBeenSet; }
  inline void SetMaxStackFrames(int value) {
    m_maxStackFramesHasBeenSet = true;
    m_maxStackFrames = value;
  }
  inline CaptureLimitsConfig& WithMaxStackFrames(int value) {
    SetMaxStackFrames(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total size, in bytes, of a captured stack trace. Defaults to
   * 1000.</p>
   */
  inline int GetMaxStackTraceSize() const { return m_maxStackTraceSize; }
  inline bool MaxStackTraceSizeHasBeenSet() const { return m_maxStackTraceSizeHasBeenSet; }
  inline void SetMaxStackTraceSize(int value) {
    m_maxStackTraceSizeHasBeenSet = true;
    m_maxStackTraceSize = value;
  }
  inline CaptureLimitsConfig& WithMaxStackTraceSize(int value) {
    SetMaxStackTraceSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum depth for nested object traversal when capturing structured data.
   * Defaults to 3.</p>
   */
  inline int GetMaxObjectDepth() const { return m_maxObjectDepth; }
  inline bool MaxObjectDepthHasBeenSet() const { return m_maxObjectDepthHasBeenSet; }
  inline void SetMaxObjectDepth(int value) {
    m_maxObjectDepthHasBeenSet = true;
    m_maxObjectDepth = value;
  }
  inline CaptureLimitsConfig& WithMaxObjectDepth(int value) {
    SetMaxObjectDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of fields to capture for any object. Defaults to 10.</p>
   */
  inline int GetMaxFieldsPerObject() const { return m_maxFieldsPerObject; }
  inline bool MaxFieldsPerObjectHasBeenSet() const { return m_maxFieldsPerObjectHasBeenSet; }
  inline void SetMaxFieldsPerObject(int value) {
    m_maxFieldsPerObjectHasBeenSet = true;
    m_maxFieldsPerObject = value;
  }
  inline CaptureLimitsConfig& WithMaxFieldsPerObject(int value) {
    SetMaxFieldsPerObject(value);
    return *this;
  }
  ///@}
 private:
  int m_maxHits{0};

  int m_maxStringLength{0};

  int m_maxCollectionWidth{0};

  int m_maxCollectionDepth{0};

  int m_maxStackFrames{0};

  int m_maxStackTraceSize{0};

  int m_maxObjectDepth{0};

  int m_maxFieldsPerObject{0};
  bool m_maxHitsHasBeenSet = false;
  bool m_maxStringLengthHasBeenSet = false;
  bool m_maxCollectionWidthHasBeenSet = false;
  bool m_maxCollectionDepthHasBeenSet = false;
  bool m_maxStackFramesHasBeenSet = false;
  bool m_maxStackTraceSizeHasBeenSet = false;
  bool m_maxObjectDepthHasBeenSet = false;
  bool m_maxFieldsPerObjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
