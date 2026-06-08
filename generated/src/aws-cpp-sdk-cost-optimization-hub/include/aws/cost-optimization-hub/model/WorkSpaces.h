/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ResourceCostCalculation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CostOptimizationHub {
namespace Model {

/**
 * <p>The WorkSpaces recommendation details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/WorkSpaces">AWS
 * API Reference</a></p>
 */
class WorkSpaces {
 public:
  AWS_COSTOPTIMIZATIONHUB_API WorkSpaces() = default;
  AWS_COSTOPTIMIZATIONHUB_API WorkSpaces(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API WorkSpaces& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const ResourceCostCalculation& GetCostCalculation() const { return m_costCalculation; }
  inline bool CostCalculationHasBeenSet() const { return m_costCalculationHasBeenSet; }
  template <typename CostCalculationT = ResourceCostCalculation>
  void SetCostCalculation(CostCalculationT&& value) {
    m_costCalculationHasBeenSet = true;
    m_costCalculation = std::forward<CostCalculationT>(value);
  }
  template <typename CostCalculationT = ResourceCostCalculation>
  WorkSpaces& WithCostCalculation(CostCalculationT&& value) {
    SetCostCalculation(std::forward<CostCalculationT>(value));
    return *this;
  }
  ///@}
 private:
  ResourceCostCalculation m_costCalculation;
  bool m_costCalculationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
