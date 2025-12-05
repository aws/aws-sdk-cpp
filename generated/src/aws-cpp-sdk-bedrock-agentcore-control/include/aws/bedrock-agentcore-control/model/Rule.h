/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Filter.h>
#include <aws/bedrock-agentcore-control/model/SamplingConfig.h>
#include <aws/bedrock-agentcore-control/model/SessionConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The evaluation rule that defines sampling configuration, filtering criteria,
 * and session detection settings for online evaluation. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Rule">AWS
 * API Reference</a></p>
 */
class Rule {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Rule() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Rule(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The sampling configuration that determines what percentage of agent traces
   * to evaluate. </p>
   */
  inline const SamplingConfig& GetSamplingConfig() const { return m_samplingConfig; }
  inline bool SamplingConfigHasBeenSet() const { return m_samplingConfigHasBeenSet; }
  template <typename SamplingConfigT = SamplingConfig>
  void SetSamplingConfig(SamplingConfigT&& value) {
    m_samplingConfigHasBeenSet = true;
    m_samplingConfig = std::forward<SamplingConfigT>(value);
  }
  template <typename SamplingConfigT = SamplingConfig>
  Rule& WithSamplingConfig(SamplingConfigT&& value) {
    SetSamplingConfig(std::forward<SamplingConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of filters that determine which agent traces should be included in
   * the evaluation based on trace properties. </p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  Rule& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  Rule& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The session configuration that defines timeout settings for detecting when
   * agent sessions are complete and ready for evaluation. </p>
   */
  inline const SessionConfig& GetSessionConfig() const { return m_sessionConfig; }
  inline bool SessionConfigHasBeenSet() const { return m_sessionConfigHasBeenSet; }
  template <typename SessionConfigT = SessionConfig>
  void SetSessionConfig(SessionConfigT&& value) {
    m_sessionConfigHasBeenSet = true;
    m_sessionConfig = std::forward<SessionConfigT>(value);
  }
  template <typename SessionConfigT = SessionConfig>
  Rule& WithSessionConfig(SessionConfigT&& value) {
    SetSessionConfig(std::forward<SessionConfigT>(value));
    return *this;
  }
  ///@}
 private:
  SamplingConfig m_samplingConfig;

  Aws::Vector<Filter> m_filters;

  SessionConfig m_sessionConfig;
  bool m_samplingConfigHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_sessionConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
