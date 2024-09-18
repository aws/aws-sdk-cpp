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
    AWS_COSTEXPLORER_API DynamoDBCapacityDetails();
    AWS_COSTEXPLORER_API DynamoDBCapacityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API DynamoDBCapacityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The capacity unit of the recommended reservation.</p>
     */
    inline const Aws::String& GetCapacityUnits() const{ return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    inline void SetCapacityUnits(const Aws::String& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }
    inline void SetCapacityUnits(Aws::String&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::move(value); }
    inline void SetCapacityUnits(const char* value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits.assign(value); }
    inline DynamoDBCapacityDetails& WithCapacityUnits(const Aws::String& value) { SetCapacityUnits(value); return *this;}
    inline DynamoDBCapacityDetails& WithCapacityUnits(Aws::String&& value) { SetCapacityUnits(std::move(value)); return *this;}
    inline DynamoDBCapacityDetails& WithCapacityUnits(const char* value) { SetCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline DynamoDBCapacityDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline DynamoDBCapacityDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline DynamoDBCapacityDetails& WithRegion(const char* value) { SetRegion(value); return *this;}
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
