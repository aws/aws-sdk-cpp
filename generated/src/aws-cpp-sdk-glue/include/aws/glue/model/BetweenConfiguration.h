/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration that defines how BETWEEN range filter operations are translated
 * into REST API request parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BetweenConfiguration">AWS
 * API Reference</a></p>
 */
class BetweenConfiguration {
 public:
  AWS_GLUE_API BetweenConfiguration() = default;
  AWS_GLUE_API BetweenConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API BetweenConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameter name used for the lower bound value in a BETWEEN filter
   * operation.</p>
   */
  inline const Aws::String& GetLowBoundKey() const { return m_lowBoundKey; }
  inline bool LowBoundKeyHasBeenSet() const { return m_lowBoundKeyHasBeenSet; }
  template <typename LowBoundKeyT = Aws::String>
  void SetLowBoundKey(LowBoundKeyT&& value) {
    m_lowBoundKeyHasBeenSet = true;
    m_lowBoundKey = std::forward<LowBoundKeyT>(value);
  }
  template <typename LowBoundKeyT = Aws::String>
  BetweenConfiguration& WithLowBoundKey(LowBoundKeyT&& value) {
    SetLowBoundKey(std::forward<LowBoundKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameter name used for the upper bound value in a BETWEEN filter
   * operation.</p>
   */
  inline const Aws::String& GetHighBoundKey() const { return m_highBoundKey; }
  inline bool HighBoundKeyHasBeenSet() const { return m_highBoundKeyHasBeenSet; }
  template <typename HighBoundKeyT = Aws::String>
  void SetHighBoundKey(HighBoundKeyT&& value) {
    m_highBoundKeyHasBeenSet = true;
    m_highBoundKey = std::forward<HighBoundKeyT>(value);
  }
  template <typename HighBoundKeyT = Aws::String>
  BetweenConfiguration& WithHighBoundKey(HighBoundKeyT&& value) {
    SetHighBoundKey(std::forward<HighBoundKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A template string for constructing the BETWEEN filter expression.</p>
   */
  inline const Aws::String& GetTemplate() const { return m_template; }
  inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
  template <typename TemplateT = Aws::String>
  void SetTemplate(TemplateT&& value) {
    m_templateHasBeenSet = true;
    m_template = std::forward<TemplateT>(value);
  }
  template <typename TemplateT = Aws::String>
  BetweenConfiguration& WithTemplate(TemplateT&& value) {
    SetTemplate(std::forward<TemplateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lowBoundKey;

  Aws::String m_highBoundKey;

  Aws::String m_template;
  bool m_lowBoundKeyHasBeenSet = false;
  bool m_highBoundKeyHasBeenSet = false;
  bool m_templateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
