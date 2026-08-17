/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/NotFoundBehaviorType.h>
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
 * <p>The behavior configuration when an extraction definition cannot find the
 * target value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ExtractionDefinitionNotFoundBehavior">AWS
 * API Reference</a></p>
 */
class ExtractionDefinitionNotFoundBehavior {
 public:
  AWS_CONNECT_API ExtractionDefinitionNotFoundBehavior() = default;
  AWS_CONNECT_API ExtractionDefinitionNotFoundBehavior(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ExtractionDefinitionNotFoundBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The behavior type. <code>USE_DEFAULT_VALUE</code> returns the specified
   * default value. <code>OMIT</code> excludes the field from the output.</p>
   */
  inline NotFoundBehaviorType GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(NotFoundBehaviorType value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline ExtractionDefinitionNotFoundBehavior& WithBehavior(NotFoundBehaviorType value) {
    SetBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value to use when the behavior is
   * <code>USE_DEFAULT_VALUE</code>.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  ExtractionDefinitionNotFoundBehavior& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}
 private:
  NotFoundBehaviorType m_behavior{NotFoundBehaviorType::NOT_SET};

  Aws::String m_defaultValue;
  bool m_behaviorHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
