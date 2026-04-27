/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/SelectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Defines how operations are selected for a service-level SLO.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/SelectionConfig">AWS
 * API Reference</a></p>
 */
class SelectionConfig {
 public:
  AWS_APPLICATIONSIGNALS_API SelectionConfig() = default;
  AWS_APPLICATIONSIGNALS_API SelectionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API SelectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline SelectionType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SelectionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SelectionConfig& WithType(SelectionType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A prefix string or regular expression that specifies which operations to
   * include in a service-level SLO. When <code>SelectionType</code> is
   * <code>PREFIX</code>, this value is a prefix string that matches the beginning of
   * operation names. When <code>SelectionType</code> is <code>REGEX</code>, this
   * value is a regular expression that matches operation names.</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  SelectionConfig& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}
 private:
  SelectionType m_type{SelectionType::NOT_SET};

  Aws::String m_pattern;
  bool m_typeHasBeenSet = false;
  bool m_patternHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
