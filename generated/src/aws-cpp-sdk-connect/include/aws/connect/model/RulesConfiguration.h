/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Behavior.h>

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
 * <p>The rules configuration for conversational analytics. Controls whether
 * Contact Lens rules are evaluated against the analytics output.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RulesConfiguration">AWS
 * API Reference</a></p>
 */
class RulesConfiguration {
 public:
  AWS_CONNECT_API RulesConfiguration() = default;
  AWS_CONNECT_API RulesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RulesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Controls whether Contact Lens rules are evaluated for the contact. Valid
   * values: <code>Enable</code> | <code>Disable</code>.</p>
   */
  inline Behavior GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(Behavior value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline RulesConfiguration& WithBehavior(Behavior value) {
    SetBehavior(value);
    return *this;
  }
  ///@}
 private:
  Behavior m_behavior{Behavior::NOT_SET};
  bool m_behaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
