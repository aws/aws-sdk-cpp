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
 * <p>The conversational analytics summary configuration for a
 * contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactLensSummaryConfiguration">AWS
 * API Reference</a></p>
 */
class ContactLensSummaryConfiguration {
 public:
  AWS_CONNECT_API ContactLensSummaryConfiguration() = default;
  AWS_CONNECT_API ContactLensSummaryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactLensSummaryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The conversational analytics summary modes enabled for the contact. Valid
   * values: <code>PostContact</code> | <code>AutomatedInteraction</code> |
   * <code>ContactChain</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSummaryModes() const { return m_summaryModes; }
  inline bool SummaryModesHasBeenSet() const { return m_summaryModesHasBeenSet; }
  template <typename SummaryModesT = Aws::Vector<Aws::String>>
  void SetSummaryModes(SummaryModesT&& value) {
    m_summaryModesHasBeenSet = true;
    m_summaryModes = std::forward<SummaryModesT>(value);
  }
  template <typename SummaryModesT = Aws::Vector<Aws::String>>
  ContactLensSummaryConfiguration& WithSummaryModes(SummaryModesT&& value) {
    SetSummaryModes(std::forward<SummaryModesT>(value));
    return *this;
  }
  template <typename SummaryModesT = Aws::String>
  ContactLensSummaryConfiguration& AddSummaryModes(SummaryModesT&& value) {
    m_summaryModesHasBeenSet = true;
    m_summaryModes.emplace_back(std::forward<SummaryModesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_summaryModes;
  bool m_summaryModesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
