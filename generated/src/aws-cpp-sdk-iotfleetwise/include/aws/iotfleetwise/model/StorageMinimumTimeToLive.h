/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/StorageMinimumTimeToLiveUnit.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the minimum amount of time that data will be kept.</p>
   *  <p>Access to certain Amazon Web Services IoT FleetWise features is
   * currently gated. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StorageMinimumTimeToLive">AWS
   * API Reference</a></p>
   */
  class StorageMinimumTimeToLive
  {
  public:
    AWS_IOTFLEETWISE_API StorageMinimumTimeToLive() = default;
    AWS_IOTFLEETWISE_API StorageMinimumTimeToLive(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StorageMinimumTimeToLive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time increment type.</p>
     */
    inline StorageMinimumTimeToLiveUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StorageMinimumTimeToLiveUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline StorageMinimumTimeToLive& WithUnit(StorageMinimumTimeToLiveUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of time to store the data.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline StorageMinimumTimeToLive& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    StorageMinimumTimeToLiveUnit m_unit{StorageMinimumTimeToLiveUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
