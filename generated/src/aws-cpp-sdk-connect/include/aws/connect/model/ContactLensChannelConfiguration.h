/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect {
namespace Model {

/**
 * <p>The per-channel conversational analytics configuration for a
 * contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactLensChannelConfiguration">AWS
 * API Reference</a></p>
 */
class ContactLensChannelConfiguration {
 public:
  AWS_CONNECT_API ContactLensChannelConfiguration() = default;
  AWS_CONNECT_API ContactLensChannelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactLensChannelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversational analytics modes enabled for the channel. Valid values:</p>
   * <ul> <li> <p> <code>RealTime</code> – Real-time analysis is enabled during the
   * contact. Voice channel only.</p> </li> <li> <p> <code>PostContact</code> –
   * Post-contact analysis is enabled after the contact ends. Voice channel only.</p>
   * </li> <li> <p> <code>ContactLens</code> – Conversational analytics is enabled
   * for the contact. Chat channel only.</p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetAnalyticsModes() const { return m_analyticsModes; }
  inline bool AnalyticsModesHasBeenSet() const { return m_analyticsModesHasBeenSet; }
  template <typename AnalyticsModesT = Aws::Vector<Aws::String>>
  void SetAnalyticsModes(AnalyticsModesT&& value) {
    m_analyticsModesHasBeenSet = true;
    m_analyticsModes = std::forward<AnalyticsModesT>(value);
  }
  template <typename AnalyticsModesT = Aws::Vector<Aws::String>>
  ContactLensChannelConfiguration& WithAnalyticsModes(AnalyticsModesT&& value) {
    SetAnalyticsModes(std::forward<AnalyticsModesT>(value));
    return *this;
  }
  template <typename AnalyticsModesT = Aws::String>
  ContactLensChannelConfiguration& AddAnalyticsModes(AnalyticsModesT&& value) {
    m_analyticsModesHasBeenSet = true;
    m_analyticsModes.emplace_back(std::forward<AnalyticsModesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_analyticsModes;
  bool m_analyticsModesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
