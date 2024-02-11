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
   * <p>The Lambda function configuration used for recommendations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/LambdaFunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API LambdaFunctionConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API LambdaFunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API LambdaFunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the compute configuration.</p>
     */
    inline const ComputeConfiguration& GetCompute() const{ return m_compute; }

    /**
     * <p>Details about the compute configuration.</p>
     */
    inline bool ComputeHasBeenSet() const { return m_computeHasBeenSet; }

    /**
     * <p>Details about the compute configuration.</p>
     */
    inline void SetCompute(const ComputeConfiguration& value) { m_computeHasBeenSet = true; m_compute = value; }

    /**
     * <p>Details about the compute configuration.</p>
     */
    inline void SetCompute(ComputeConfiguration&& value) { m_computeHasBeenSet = true; m_compute = std::move(value); }

    /**
     * <p>Details about the compute configuration.</p>
     */
    inline LambdaFunctionConfiguration& WithCompute(const ComputeConfiguration& value) { SetCompute(value); return *this;}

    /**
     * <p>Details about the compute configuration.</p>
     */
    inline LambdaFunctionConfiguration& WithCompute(ComputeConfiguration&& value) { SetCompute(std::move(value)); return *this;}

  private:

    ComputeConfiguration m_compute;
    bool m_computeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
