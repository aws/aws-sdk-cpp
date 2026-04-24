/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Represents a usage metric with its configured limit and current usage
 * value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UsageMetric">AWS
 * API Reference</a></p>
 */
class UsageMetric {
 public:
  AWS_DEVOPSAGENT_API UsageMetric() = default;
  AWS_DEVOPSAGENT_API UsageMetric(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API UsageMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configured limit for this metric.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline UsageMetric& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current usage for this metric</p>
   */
  inline double GetUsage() const { return m_usage; }
  inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
  inline void SetUsage(double value) {
    m_usageHasBeenSet = true;
    m_usage = value;
  }
  inline UsageMetric& WithUsage(double value) {
    SetUsage(value);
    return *this;
  }
  ///@}
 private:
  int m_limit{0};

  double m_usage{0.0};
  bool m_limitHasBeenSet = false;
  bool m_usageHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
