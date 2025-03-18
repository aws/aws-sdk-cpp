/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/MissingCompleteSensorData.h>
#include <aws/lookoutequipment/model/SensorsWithShortDateRange.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises aggregated information on sensors having insufficient
   * data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InsufficientSensorData">AWS
   * API Reference</a></p>
   */
  class InsufficientSensorData
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InsufficientSensorData() = default;
    AWS_LOOKOUTEQUIPMENT_API InsufficientSensorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InsufficientSensorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Parameter that describes the total number of sensors that have data
     * completely missing for it. </p>
     */
    inline const MissingCompleteSensorData& GetMissingCompleteSensorData() const { return m_missingCompleteSensorData; }
    inline bool MissingCompleteSensorDataHasBeenSet() const { return m_missingCompleteSensorDataHasBeenSet; }
    template<typename MissingCompleteSensorDataT = MissingCompleteSensorData>
    void SetMissingCompleteSensorData(MissingCompleteSensorDataT&& value) { m_missingCompleteSensorDataHasBeenSet = true; m_missingCompleteSensorData = std::forward<MissingCompleteSensorDataT>(value); }
    template<typename MissingCompleteSensorDataT = MissingCompleteSensorData>
    InsufficientSensorData& WithMissingCompleteSensorData(MissingCompleteSensorDataT&& value) { SetMissingCompleteSensorData(std::forward<MissingCompleteSensorDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of sensors that have a short date
     * range of less than 14 days of data overall. </p>
     */
    inline const SensorsWithShortDateRange& GetSensorsWithShortDateRange() const { return m_sensorsWithShortDateRange; }
    inline bool SensorsWithShortDateRangeHasBeenSet() const { return m_sensorsWithShortDateRangeHasBeenSet; }
    template<typename SensorsWithShortDateRangeT = SensorsWithShortDateRange>
    void SetSensorsWithShortDateRange(SensorsWithShortDateRangeT&& value) { m_sensorsWithShortDateRangeHasBeenSet = true; m_sensorsWithShortDateRange = std::forward<SensorsWithShortDateRangeT>(value); }
    template<typename SensorsWithShortDateRangeT = SensorsWithShortDateRange>
    InsufficientSensorData& WithSensorsWithShortDateRange(SensorsWithShortDateRangeT&& value) { SetSensorsWithShortDateRange(std::forward<SensorsWithShortDateRangeT>(value)); return *this;}
    ///@}
  private:

    MissingCompleteSensorData m_missingCompleteSensorData;
    bool m_missingCompleteSensorDataHasBeenSet = false;

    SensorsWithShortDateRange m_sensorsWithShortDateRange;
    bool m_sensorsWithShortDateRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
