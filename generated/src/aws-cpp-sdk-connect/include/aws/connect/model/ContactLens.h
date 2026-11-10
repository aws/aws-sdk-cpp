/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ConversationalAnalytics.h>

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
 * <p>Information about the conversational analytics configuration applied to the
 * contact. This field is present only for contacts where conversational analytics
 * is enabled in the contact flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactLens">AWS
 * API Reference</a></p>
 */
class ContactLens {
 public:
  AWS_CONNECT_API ContactLens() = default;
  AWS_CONNECT_API ContactLens(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactLens& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversational analytics configuration applied to the contact.</p>
   */
  inline const ConversationalAnalytics& GetConversationalAnalytics() const { return m_conversationalAnalytics; }
  inline bool ConversationalAnalyticsHasBeenSet() const { return m_conversationalAnalyticsHasBeenSet; }
  template <typename ConversationalAnalyticsT = ConversationalAnalytics>
  void SetConversationalAnalytics(ConversationalAnalyticsT&& value) {
    m_conversationalAnalyticsHasBeenSet = true;
    m_conversationalAnalytics = std::forward<ConversationalAnalyticsT>(value);
  }
  template <typename ConversationalAnalyticsT = ConversationalAnalytics>
  ContactLens& WithConversationalAnalytics(ConversationalAnalyticsT&& value) {
    SetConversationalAnalytics(std::forward<ConversationalAnalyticsT>(value));
    return *this;
  }
  ///@}
 private:
  ConversationalAnalytics m_conversationalAnalytics;
  bool m_conversationalAnalyticsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
