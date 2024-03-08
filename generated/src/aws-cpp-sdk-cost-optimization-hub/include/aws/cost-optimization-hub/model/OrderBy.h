/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/Order.h>
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
   * <p>Defines how rows will be sorted in the response.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/OrderBy">AWS
   * API Reference</a></p>
   */
  class OrderBy
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API OrderBy();
    AWS_COSTOPTIMIZATIONHUB_API OrderBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API OrderBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sorts by dimension values.</p>
     */
    inline const Aws::String& GetDimension() const{ return m_dimension; }

    /**
     * <p>Sorts by dimension values.</p>
     */
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }

    /**
     * <p>Sorts by dimension values.</p>
     */
    inline void SetDimension(const Aws::String& value) { m_dimensionHasBeenSet = true; m_dimension = value; }

    /**
     * <p>Sorts by dimension values.</p>
     */
    inline void SetDimension(Aws::String&& value) { m_dimensionHasBeenSet = true; m_dimension = std::move(value); }

    /**
     * <p>Sorts by dimension values.</p>
     */
    inline void SetDimension(const char* value) { m_dimensionHasBeenSet = true; m_dimension.assign(value); }

    /**
     * <p>Sorts by dimension values.</p>
     */
    inline OrderBy& WithDimension(const Aws::String& value) { SetDimension(value); return *this;}

    /**
     * <p>Sorts by dimension values.</p>
     */
    inline OrderBy& WithDimension(Aws::String&& value) { SetDimension(std::move(value)); return *this;}

    /**
     * <p>Sorts by dimension values.</p>
     */
    inline OrderBy& WithDimension(const char* value) { SetDimension(value); return *this;}


    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline const Order& GetOrder() const{ return m_order; }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline OrderBy& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline OrderBy& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Aws::String m_dimension;
    bool m_dimensionHasBeenSet = false;

    Order m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
