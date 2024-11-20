/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/Dimension.h>
#include <aws/compute-optimizer/model/Order.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes how the recommendations are ordered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/OrderBy">AWS
   * API Reference</a></p>
   */
  class OrderBy
  {
  public:
    AWS_COMPUTEOPTIMIZER_API OrderBy();
    AWS_COMPUTEOPTIMIZER_API OrderBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API OrderBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension values to sort the recommendations.</p>
     */
    inline const Dimension& GetDimension() const{ return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    inline void SetDimension(const Dimension& value) { m_dimensionHasBeenSet = true; m_dimension = value; }
    inline void SetDimension(Dimension&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }
    inline OrderBy& WithDimension(const Dimension& value) { SetDimension(value); return *this;}
    inline OrderBy& WithDimension(Dimension&& value) { SetDimension(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort the recommendations.</p>
     */
    inline const Order& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline OrderBy& WithOrder(const Order& value) { SetOrder(value); return *this;}
    inline OrderBy& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}
    ///@}
  private:

    Dimension m_dimension;
    bool m_dimensionHasBeenSet = false;

    Order m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
