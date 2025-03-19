/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>How much it costs to run an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CoverageCost">AWS API
   * Reference</a></p>
   */
  class CoverageCost
  {
  public:
    AWS_COSTEXPLORER_API CoverageCost() = default;
    AWS_COSTEXPLORER_API CoverageCost(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CoverageCost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How much an On-Demand Instance costs.</p>
     */
    inline const Aws::String& GetOnDemandCost() const { return m_onDemandCost; }
    inline bool OnDemandCostHasBeenSet() const { return m_onDemandCostHasBeenSet; }
    template<typename OnDemandCostT = Aws::String>
    void SetOnDemandCost(OnDemandCostT&& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = std::forward<OnDemandCostT>(value); }
    template<typename OnDemandCostT = Aws::String>
    CoverageCost& WithOnDemandCost(OnDemandCostT&& value) { SetOnDemandCost(std::forward<OnDemandCostT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_onDemandCost;
    bool m_onDemandCostHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
