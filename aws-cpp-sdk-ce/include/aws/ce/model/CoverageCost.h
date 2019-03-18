/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>How much it cost to run an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CoverageCost">AWS API
   * Reference</a></p>
   */
  class AWS_COSTEXPLORER_API CoverageCost
  {
  public:
    CoverageCost();
    CoverageCost(Aws::Utils::Json::JsonView jsonValue);
    CoverageCost& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline const Aws::String& GetOnDemandCost() const{ return m_onDemandCost; }

    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline bool OnDemandCostHasBeenSet() const { return m_onDemandCostHasBeenSet; }

    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline void SetOnDemandCost(const Aws::String& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = value; }

    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline void SetOnDemandCost(Aws::String&& value) { m_onDemandCostHasBeenSet = true; m_onDemandCost = std::move(value); }

    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline void SetOnDemandCost(const char* value) { m_onDemandCostHasBeenSet = true; m_onDemandCost.assign(value); }

    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline CoverageCost& WithOnDemandCost(const Aws::String& value) { SetOnDemandCost(value); return *this;}

    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline CoverageCost& WithOnDemandCost(Aws::String&& value) { SetOnDemandCost(std::move(value)); return *this;}

    /**
     * <p>How much an On-Demand instance cost.</p>
     */
    inline CoverageCost& WithOnDemandCost(const char* value) { SetOnDemandCost(value); return *this;}

  private:

    Aws::String m_onDemandCost;
    bool m_onDemandCostHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
