/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>The conversational analytics sentiment analysis configuration for a
 * contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactLensSentimentConfiguration">AWS
 * API Reference</a></p>
 */
class ContactLensSentimentConfiguration {
 public:
  AWS_CONNECT_API ContactLensSentimentConfiguration() = default;
  AWS_CONNECT_API ContactLensSentimentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactLensSentimentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether sentiment analysis is enabled for the contact. The default
   * value is <code>Disable</code>. Valid values:</p> <ul> <li> <p>
   * <code>Enable</code> – Sentiment analysis is performed on the contact.</p> </li>
   * <li> <p> <code>Disable</code> – Sentiment analysis is not performed on the
   * contact.</p> </li> </ul>
   */
  inline const Aws::String& GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  template <typename BehaviorT = Aws::String>
  void SetBehavior(BehaviorT&& value) {
    m_behaviorHasBeenSet = true;
    m_behavior = std::forward<BehaviorT>(value);
  }
  template <typename BehaviorT = Aws::String>
  ContactLensSentimentConfiguration& WithBehavior(BehaviorT&& value) {
    SetBehavior(std::forward<BehaviorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_behavior;
  bool m_behaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
