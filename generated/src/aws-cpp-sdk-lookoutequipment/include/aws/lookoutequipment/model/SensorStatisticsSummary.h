/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/CountPercent.h>
#include <aws/lookoutequipment/model/CategoricalValues.h>
#include <aws/lookoutequipment/model/MultipleOperatingModes.h>
#include <aws/lookoutequipment/model/LargeTimestampGaps.h>
#include <aws/lookoutequipment/model/MonotonicValues.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Summary of ingestion statistics like whether data exists, number of missing
   * values, number of invalid values and so on related to the particular sensor.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/SensorStatisticsSummary">AWS
   * API Reference</a></p>
   */
  class SensorStatisticsSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API SensorStatisticsSummary();
    AWS_LOOKOUTEQUIPMENT_API SensorStatisticsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API SensorStatisticsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline SensorStatisticsSummary& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline SensorStatisticsSummary& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline SensorStatisticsSummary& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline const Aws::String& GetSensorName() const{ return m_sensorName; }
    inline bool SensorNameHasBeenSet() const { return m_sensorNameHasBeenSet; }
    inline void SetSensorName(const Aws::String& value) { m_sensorNameHasBeenSet = true; m_sensorName = value; }
    inline void SetSensorName(Aws::String&& value) { m_sensorNameHasBeenSet = true; m_sensorName = std::move(value); }
    inline void SetSensorName(const char* value) { m_sensorNameHasBeenSet = true; m_sensorName.assign(value); }
    inline SensorStatisticsSummary& WithSensorName(const Aws::String& value) { SetSensorName(value); return *this;}
    inline SensorStatisticsSummary& WithSensorName(Aws::String&& value) { SetSensorName(std::move(value)); return *this;}
    inline SensorStatisticsSummary& WithSensorName(const char* value) { SetSensorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that indicates whether data exists for the sensor that the
     * statistics belong to. </p>
     */
    inline bool GetDataExists() const{ return m_dataExists; }
    inline bool DataExistsHasBeenSet() const { return m_dataExistsHasBeenSet; }
    inline void SetDataExists(bool value) { m_dataExistsHasBeenSet = true; m_dataExists = value; }
    inline SensorStatisticsSummary& WithDataExists(bool value) { SetDataExists(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetMissingValues() const{ return m_missingValues; }
    inline bool MissingValuesHasBeenSet() const { return m_missingValuesHasBeenSet; }
    inline void SetMissingValues(const CountPercent& value) { m_missingValuesHasBeenSet = true; m_missingValues = value; }
    inline void SetMissingValues(CountPercent&& value) { m_missingValuesHasBeenSet = true; m_missingValues = std::move(value); }
    inline SensorStatisticsSummary& WithMissingValues(const CountPercent& value) { SetMissingValues(value); return *this;}
    inline SensorStatisticsSummary& WithMissingValues(CountPercent&& value) { SetMissingValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetInvalidValues() const{ return m_invalidValues; }
    inline bool InvalidValuesHasBeenSet() const { return m_invalidValuesHasBeenSet; }
    inline void SetInvalidValues(const CountPercent& value) { m_invalidValuesHasBeenSet = true; m_invalidValues = value; }
    inline void SetInvalidValues(CountPercent&& value) { m_invalidValuesHasBeenSet = true; m_invalidValues = std::move(value); }
    inline SensorStatisticsSummary& WithInvalidValues(const CountPercent& value) { SetInvalidValues(value); return *this;}
    inline SensorStatisticsSummary& WithInvalidValues(CountPercent&& value) { SetInvalidValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetInvalidDateEntries() const{ return m_invalidDateEntries; }
    inline bool InvalidDateEntriesHasBeenSet() const { return m_invalidDateEntriesHasBeenSet; }
    inline void SetInvalidDateEntries(const CountPercent& value) { m_invalidDateEntriesHasBeenSet = true; m_invalidDateEntries = value; }
    inline void SetInvalidDateEntries(CountPercent&& value) { m_invalidDateEntriesHasBeenSet = true; m_invalidDateEntries = std::move(value); }
    inline SensorStatisticsSummary& WithInvalidDateEntries(const CountPercent& value) { SetInvalidDateEntries(value); return *this;}
    inline SensorStatisticsSummary& WithInvalidDateEntries(CountPercent&& value) { SetInvalidDateEntries(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetDuplicateTimestamps() const{ return m_duplicateTimestamps; }
    inline bool DuplicateTimestampsHasBeenSet() const { return m_duplicateTimestampsHasBeenSet; }
    inline void SetDuplicateTimestamps(const CountPercent& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = value; }
    inline void SetDuplicateTimestamps(CountPercent&& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = std::move(value); }
    inline SensorStatisticsSummary& WithDuplicateTimestamps(const CountPercent& value) { SetDuplicateTimestamps(value); return *this;}
    inline SensorStatisticsSummary& WithDuplicateTimestamps(CountPercent&& value) { SetDuplicateTimestamps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline const CategoricalValues& GetCategoricalValues() const{ return m_categoricalValues; }
    inline bool CategoricalValuesHasBeenSet() const { return m_categoricalValuesHasBeenSet; }
    inline void SetCategoricalValues(const CategoricalValues& value) { m_categoricalValuesHasBeenSet = true; m_categoricalValues = value; }
    inline void SetCategoricalValues(CategoricalValues&& value) { m_categoricalValuesHasBeenSet = true; m_categoricalValues = std::move(value); }
    inline SensorStatisticsSummary& WithCategoricalValues(const CategoricalValues& value) { SetCategoricalValues(value); return *this;}
    inline SensorStatisticsSummary& WithCategoricalValues(CategoricalValues&& value) { SetCategoricalValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline const MultipleOperatingModes& GetMultipleOperatingModes() const{ return m_multipleOperatingModes; }
    inline bool MultipleOperatingModesHasBeenSet() const { return m_multipleOperatingModesHasBeenSet; }
    inline void SetMultipleOperatingModes(const MultipleOperatingModes& value) { m_multipleOperatingModesHasBeenSet = true; m_multipleOperatingModes = value; }
    inline void SetMultipleOperatingModes(MultipleOperatingModes&& value) { m_multipleOperatingModesHasBeenSet = true; m_multipleOperatingModes = std::move(value); }
    inline SensorStatisticsSummary& WithMultipleOperatingModes(const MultipleOperatingModes& value) { SetMultipleOperatingModes(value); return *this;}
    inline SensorStatisticsSummary& WithMultipleOperatingModes(MultipleOperatingModes&& value) { SetMultipleOperatingModes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline const LargeTimestampGaps& GetLargeTimestampGaps() const{ return m_largeTimestampGaps; }
    inline bool LargeTimestampGapsHasBeenSet() const { return m_largeTimestampGapsHasBeenSet; }
    inline void SetLargeTimestampGaps(const LargeTimestampGaps& value) { m_largeTimestampGapsHasBeenSet = true; m_largeTimestampGaps = value; }
    inline void SetLargeTimestampGaps(LargeTimestampGaps&& value) { m_largeTimestampGapsHasBeenSet = true; m_largeTimestampGaps = std::move(value); }
    inline SensorStatisticsSummary& WithLargeTimestampGaps(const LargeTimestampGaps& value) { SetLargeTimestampGaps(value); return *this;}
    inline SensorStatisticsSummary& WithLargeTimestampGaps(LargeTimestampGaps&& value) { SetLargeTimestampGaps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline const MonotonicValues& GetMonotonicValues() const{ return m_monotonicValues; }
    inline bool MonotonicValuesHasBeenSet() const { return m_monotonicValuesHasBeenSet; }
    inline void SetMonotonicValues(const MonotonicValues& value) { m_monotonicValuesHasBeenSet = true; m_monotonicValues = value; }
    inline void SetMonotonicValues(MonotonicValues&& value) { m_monotonicValuesHasBeenSet = true; m_monotonicValues = std::move(value); }
    inline SensorStatisticsSummary& WithMonotonicValues(const MonotonicValues& value) { SetMonotonicValues(value); return *this;}
    inline SensorStatisticsSummary& WithMonotonicValues(MonotonicValues&& value) { SetMonotonicValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const{ return m_dataStartTime; }
    inline bool DataStartTimeHasBeenSet() const { return m_dataStartTimeHasBeenSet; }
    inline void SetDataStartTime(const Aws::Utils::DateTime& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = value; }
    inline void SetDataStartTime(Aws::Utils::DateTime&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::move(value); }
    inline SensorStatisticsSummary& WithDataStartTime(const Aws::Utils::DateTime& value) { SetDataStartTime(value); return *this;}
    inline SensorStatisticsSummary& WithDataStartTime(Aws::Utils::DateTime&& value) { SetDataStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const{ return m_dataEndTime; }
    inline bool DataEndTimeHasBeenSet() const { return m_dataEndTimeHasBeenSet; }
    inline void SetDataEndTime(const Aws::Utils::DateTime& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = value; }
    inline void SetDataEndTime(Aws::Utils::DateTime&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::move(value); }
    inline SensorStatisticsSummary& WithDataEndTime(const Aws::Utils::DateTime& value) { SetDataEndTime(value); return *this;}
    inline SensorStatisticsSummary& WithDataEndTime(Aws::Utils::DateTime&& value) { SetDataEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_sensorName;
    bool m_sensorNameHasBeenSet = false;

    bool m_dataExists;
    bool m_dataExistsHasBeenSet = false;

    CountPercent m_missingValues;
    bool m_missingValuesHasBeenSet = false;

    CountPercent m_invalidValues;
    bool m_invalidValuesHasBeenSet = false;

    CountPercent m_invalidDateEntries;
    bool m_invalidDateEntriesHasBeenSet = false;

    CountPercent m_duplicateTimestamps;
    bool m_duplicateTimestampsHasBeenSet = false;

    CategoricalValues m_categoricalValues;
    bool m_categoricalValuesHasBeenSet = false;

    MultipleOperatingModes m_multipleOperatingModes;
    bool m_multipleOperatingModesHasBeenSet = false;

    LargeTimestampGaps m_largeTimestampGaps;
    bool m_largeTimestampGapsHasBeenSet = false;

    MonotonicValues m_monotonicValues;
    bool m_monotonicValuesHasBeenSet = false;

    Aws::Utils::DateTime m_dataStartTime;
    bool m_dataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataEndTime;
    bool m_dataEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
