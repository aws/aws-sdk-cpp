/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/TrafficStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElasticsearchService {
namespace Model {

/**
 * <p>The traffic shift to perform for a cloned blue/green upgrade.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/TrafficSplitRequestOptions">AWS
 * API Reference</a></p>
 */
class TrafficSplitRequestOptions {
 public:
  AWS_ELASTICSEARCHSERVICE_API TrafficSplitRequestOptions() = default;
  AWS_ELASTICSEARCHSERVICE_API TrafficSplitRequestOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API TrafficSplitRequestOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The traffic shifting strategy. The only valid value is
   * <code>ShiftReadTrafficPercent</code>.</p>
   */
  inline TrafficStrategy GetStrategy() const { return m_strategy; }
  inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
  inline void SetStrategy(TrafficStrategy value) {
    m_strategyHasBeenSet = true;
    m_strategy = value;
  }
  inline TrafficSplitRequestOptions& WithStrategy(TrafficStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of search traffic, from 0 to 100, to send to the cloned
   * cluster. The rest goes to the primary cluster.</p>
   */
  inline int GetCloneReadTrafficPercent() const { return m_cloneReadTrafficPercent; }
  inline bool CloneReadTrafficPercentHasBeenSet() const { return m_cloneReadTrafficPercentHasBeenSet; }
  inline void SetCloneReadTrafficPercent(int value) {
    m_cloneReadTrafficPercentHasBeenSet = true;
    m_cloneReadTrafficPercent = value;
  }
  inline TrafficSplitRequestOptions& WithCloneReadTrafficPercent(int value) {
    SetCloneReadTrafficPercent(value);
    return *this;
  }
  ///@}
 private:
  TrafficStrategy m_strategy{TrafficStrategy::NOT_SET};

  int m_cloneReadTrafficPercent{0};
  bool m_strategyHasBeenSet = false;
  bool m_cloneReadTrafficPercentHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
