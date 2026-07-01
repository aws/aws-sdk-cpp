/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SummaryMode.h>
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
 * <p>The summary configuration for conversational analytics.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SummaryConfiguration">AWS
 * API Reference</a></p>
 */
class SummaryConfiguration {
 public:
  AWS_CONNECT_API SummaryConfiguration() = default;
  AWS_CONNECT_API SummaryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API SummaryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The summary modes that determine what type of summarization is generated.
   * Valid values: <code>PostContact</code> | <code>AutomatedInteraction</code> |
   * <code>ContactChain</code>.</p>
   */
  inline const Aws::Vector<SummaryMode>& GetSummaryModes() const { return m_summaryModes; }
  inline bool SummaryModesHasBeenSet() const { return m_summaryModesHasBeenSet; }
  template <typename SummaryModesT = Aws::Vector<SummaryMode>>
  void SetSummaryModes(SummaryModesT&& value) {
    m_summaryModesHasBeenSet = true;
    m_summaryModes = std::forward<SummaryModesT>(value);
  }
  template <typename SummaryModesT = Aws::Vector<SummaryMode>>
  SummaryConfiguration& WithSummaryModes(SummaryModesT&& value) {
    SetSummaryModes(std::forward<SummaryModesT>(value));
    return *this;
  }
  inline SummaryConfiguration& AddSummaryModes(SummaryMode value) {
    m_summaryModesHasBeenSet = true;
    m_summaryModes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SummaryMode> m_summaryModes;
  bool m_summaryModesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
