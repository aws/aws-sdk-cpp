/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/ComputeConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The ECS service configuration used for recommendations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/EcsServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class EcsServiceConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API EcsServiceConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API EcsServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API EcsServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the compute configuration.</p>
     */
    inline const ComputeConfiguration& GetCompute() const { return m_compute; }
    inline bool ComputeHasBeenSet() const { return m_computeHasBeenSet; }
    template<typename ComputeT = ComputeConfiguration>
    void SetCompute(ComputeT&& value) { m_computeHasBeenSet = true; m_compute = std::forward<ComputeT>(value); }
    template<typename ComputeT = ComputeConfiguration>
    EcsServiceConfiguration& WithCompute(ComputeT&& value) { SetCompute(std::forward<ComputeT>(value)); return *this;}
    ///@}
  private:

    ComputeConfiguration m_compute;
    bool m_computeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
