/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactAnalysisReferenceState.h>
#include <aws/connect/model/ConversationalAnalyticsConfiguration.h>

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
 * <p>Contains the conversational analytics configuration and state for a
 * contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ConversationalAnalytics">AWS
 * API Reference</a></p>
 */
class ConversationalAnalytics {
 public:
  AWS_CONNECT_API ConversationalAnalytics() = default;
  AWS_CONNECT_API ConversationalAnalytics(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ConversationalAnalytics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversational analytics settings that apply to the contact.</p>
   */
  inline const ConversationalAnalyticsConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = ConversationalAnalyticsConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = ConversationalAnalyticsConfiguration>
  ConversationalAnalytics& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of conversational analytics processing for the contact.</p>
   */
  inline const ContactAnalysisReferenceState& GetContactAnalysisReferenceState() const { return m_contactAnalysisReferenceState; }
  inline bool ContactAnalysisReferenceStateHasBeenSet() const { return m_contactAnalysisReferenceStateHasBeenSet; }
  template <typename ContactAnalysisReferenceStateT = ContactAnalysisReferenceState>
  void SetContactAnalysisReferenceState(ContactAnalysisReferenceStateT&& value) {
    m_contactAnalysisReferenceStateHasBeenSet = true;
    m_contactAnalysisReferenceState = std::forward<ContactAnalysisReferenceStateT>(value);
  }
  template <typename ContactAnalysisReferenceStateT = ContactAnalysisReferenceState>
  ConversationalAnalytics& WithContactAnalysisReferenceState(ContactAnalysisReferenceStateT&& value) {
    SetContactAnalysisReferenceState(std::forward<ContactAnalysisReferenceStateT>(value));
    return *this;
  }
  ///@}
 private:
  ConversationalAnalyticsConfiguration m_configuration;

  ContactAnalysisReferenceState m_contactAnalysisReferenceState;
  bool m_configurationHasBeenSet = false;
  bool m_contactAnalysisReferenceStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
