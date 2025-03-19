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
   * <p>The DynamoDB reservations that Amazon Web Services recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DynamoDBCapacityDetails">AWS
   * API Reference</a></p>
   */
  class DynamoDBCapacityDetails
  {
  public:
    AWS_COSTEXPLORER_API DynamoDBCapacityDetails() = default;
    AWS_COSTEXPLORER_API DynamoDBCapacityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API DynamoDBCapacityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The capacity unit of the recommended reservation.</p>
     */
    inline const Aws::String& GetCapacityUnits() const { return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    template<typename CapacityUnitsT = Aws::String>
    void SetCapacityUnits(CapacityUnitsT&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::forward<CapacityUnitsT>(value); }
    template<typename CapacityUnitsT = Aws::String>
    DynamoDBCapacityDetails& WithCapacityUnits(CapacityUnitsT&& value) { SetCapacityUnits(std::forward<CapacityUnitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    DynamoDBCapacityDetails& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
