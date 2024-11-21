﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/StorageMaximumSizeUnit.h>
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
   * <p>The maximum storage size for the data partition.</p>  <p>Access to
   * certain Amazon Web Services IoT FleetWise features is currently gated. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/iot-fleetwise/latest/developerguide/fleetwise-regions.html">Amazon
   * Web Services Region and feature availability</a> in the <i>Amazon Web Services
   * IoT FleetWise Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/StorageMaximumSize">AWS
   * API Reference</a></p>
   */
  class StorageMaximumSize
  {
  public:
    AWS_IOTFLEETWISE_API StorageMaximumSize();
    AWS_IOTFLEETWISE_API StorageMaximumSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API StorageMaximumSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data type of the data to store.</p>
     */
    inline const StorageMaximumSizeUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const StorageMaximumSizeUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(StorageMaximumSizeUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline StorageMaximumSize& WithUnit(const StorageMaximumSizeUnit& value) { SetUnit(value); return *this;}
    inline StorageMaximumSize& WithUnit(StorageMaximumSizeUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time to store data.</p>
     */
    inline int GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline StorageMaximumSize& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    StorageMaximumSizeUnit m_unit;
    bool m_unitHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
