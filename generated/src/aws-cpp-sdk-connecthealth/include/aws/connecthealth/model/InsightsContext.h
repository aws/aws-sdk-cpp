/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/InsightsType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Details for insights that user wants to generate</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/InsightsContext">AWS
 * API Reference</a></p>
 */
class InsightsContext {
 public:
  AWS_CONNECTHEALTH_API InsightsContext() = default;
  AWS_CONNECTHEALTH_API InsightsContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API InsightsContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p/>
   */
  inline InsightsType GetInsightsType() const { return m_insightsType; }
  inline bool InsightsTypeHasBeenSet() const { return m_insightsTypeHasBeenSet; }
  inline void SetInsightsType(InsightsType value) {
    m_insightsTypeHasBeenSet = true;
    m_insightsType = value;
  }
  inline InsightsContext& WithInsightsType(InsightsType value) {
    SetInsightsType(value);
    return *this;
  }
  ///@}
 private:
  InsightsType m_insightsType{InsightsType::NOT_SET};
  bool m_insightsTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
