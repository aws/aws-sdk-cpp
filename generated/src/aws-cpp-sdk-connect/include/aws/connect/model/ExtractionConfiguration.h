/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ExtractionDefinitionNotFoundBehavior.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The extraction configuration that defines how data is extracted from customer
 * interactions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class ExtractionConfiguration {
 public:
  AWS_CONNECT_API ExtractionConfiguration() = default;
  AWS_CONNECT_API ExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The prompt hint that guides the extraction. This text tells the generative AI
   * model what data to look for in the customer interaction.</p>
   */
  inline const Aws::String& GetPromptHint() const { return m_promptHint; }
  inline bool PromptHintHasBeenSet() const { return m_promptHintHasBeenSet; }
  template <typename PromptHintT = Aws::String>
  void SetPromptHint(PromptHintT&& value) {
    m_promptHintHasBeenSet = true;
    m_promptHint = std::forward<PromptHintT>(value);
  }
  template <typename PromptHintT = Aws::String>
  ExtractionConfiguration& WithPromptHint(PromptHintT&& value) {
    SetPromptHint(std::forward<PromptHintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behavior when the extraction cannot find the specified data in the
   * interaction.</p>
   */
  inline const ExtractionDefinitionNotFoundBehavior& GetNotFoundBehavior() const { return m_notFoundBehavior; }
  inline bool NotFoundBehaviorHasBeenSet() const { return m_notFoundBehaviorHasBeenSet; }
  template <typename NotFoundBehaviorT = ExtractionDefinitionNotFoundBehavior>
  void SetNotFoundBehavior(NotFoundBehaviorT&& value) {
    m_notFoundBehaviorHasBeenSet = true;
    m_notFoundBehavior = std::forward<NotFoundBehaviorT>(value);
  }
  template <typename NotFoundBehaviorT = ExtractionDefinitionNotFoundBehavior>
  ExtractionConfiguration& WithNotFoundBehavior(NotFoundBehaviorT&& value) {
    SetNotFoundBehavior(std::forward<NotFoundBehaviorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_promptHint;

  ExtractionDefinitionNotFoundBehavior m_notFoundBehavior;
  bool m_promptHintHasBeenSet = false;
  bool m_notFoundBehaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
