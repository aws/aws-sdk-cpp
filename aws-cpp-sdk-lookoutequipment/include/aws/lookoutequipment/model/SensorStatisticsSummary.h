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


    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline const Aws::String& GetSensorName() const{ return m_sensorName; }

    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline bool SensorNameHasBeenSet() const { return m_sensorNameHasBeenSet; }

    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline void SetSensorName(const Aws::String& value) { m_sensorNameHasBeenSet = true; m_sensorName = value; }

    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline void SetSensorName(Aws::String&& value) { m_sensorNameHasBeenSet = true; m_sensorName = std::move(value); }

    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline void SetSensorName(const char* value) { m_sensorNameHasBeenSet = true; m_sensorName.assign(value); }

    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithSensorName(const Aws::String& value) { SetSensorName(value); return *this;}

    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithSensorName(Aws::String&& value) { SetSensorName(std::move(value)); return *this;}

    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithSensorName(const char* value) { SetSensorName(value); return *this;}


    /**
     * <p> Parameter that indicates whether data exists for the sensor that the
     * statistics belong to. </p>
     */
    inline bool GetDataExists() const{ return m_dataExists; }

    /**
     * <p> Parameter that indicates whether data exists for the sensor that the
     * statistics belong to. </p>
     */
    inline bool DataExistsHasBeenSet() const { return m_dataExistsHasBeenSet; }

    /**
     * <p> Parameter that indicates whether data exists for the sensor that the
     * statistics belong to. </p>
     */
    inline void SetDataExists(bool value) { m_dataExistsHasBeenSet = true; m_dataExists = value; }

    /**
     * <p> Parameter that indicates whether data exists for the sensor that the
     * statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithDataExists(bool value) { SetDataExists(value); return *this;}


    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetMissingValues() const{ return m_missingValues; }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline bool MissingValuesHasBeenSet() const { return m_missingValuesHasBeenSet; }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline void SetMissingValues(const CountPercent& value) { m_missingValuesHasBeenSet = true; m_missingValues = value; }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline void SetMissingValues(CountPercent&& value) { m_missingValuesHasBeenSet = true; m_missingValues = std::move(value); }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithMissingValues(const CountPercent& value) { SetMissingValues(value); return *this;}

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithMissingValues(CountPercent&& value) { SetMissingValues(std::move(value)); return *this;}


    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetInvalidValues() const{ return m_invalidValues; }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline bool InvalidValuesHasBeenSet() const { return m_invalidValuesHasBeenSet; }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline void SetInvalidValues(const CountPercent& value) { m_invalidValuesHasBeenSet = true; m_invalidValues = value; }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline void SetInvalidValues(CountPercent&& value) { m_invalidValuesHasBeenSet = true; m_invalidValues = std::move(value); }

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithInvalidValues(const CountPercent& value) { SetInvalidValues(value); return *this;}

    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithInvalidValues(CountPercent&& value) { SetInvalidValues(std::move(value)); return *this;}


    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetInvalidDateEntries() const{ return m_invalidDateEntries; }

    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline bool InvalidDateEntriesHasBeenSet() const { return m_invalidDateEntriesHasBeenSet; }

    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline void SetInvalidDateEntries(const CountPercent& value) { m_invalidDateEntriesHasBeenSet = true; m_invalidDateEntries = value; }

    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline void SetInvalidDateEntries(CountPercent&& value) { m_invalidDateEntriesHasBeenSet = true; m_invalidDateEntries = std::move(value); }

    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithInvalidDateEntries(const CountPercent& value) { SetInvalidDateEntries(value); return *this;}

    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithInvalidDateEntries(CountPercent&& value) { SetInvalidDateEntries(std::move(value)); return *this;}


    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetDuplicateTimestamps() const{ return m_duplicateTimestamps; }

    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline bool DuplicateTimestampsHasBeenSet() const { return m_duplicateTimestampsHasBeenSet; }

    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline void SetDuplicateTimestamps(const CountPercent& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = value; }

    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline void SetDuplicateTimestamps(CountPercent&& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = std::move(value); }

    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithDuplicateTimestamps(const CountPercent& value) { SetDuplicateTimestamps(value); return *this;}

    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithDuplicateTimestamps(CountPercent&& value) { SetDuplicateTimestamps(std::move(value)); return *this;}


    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline const CategoricalValues& GetCategoricalValues() const{ return m_categoricalValues; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline bool CategoricalValuesHasBeenSet() const { return m_categoricalValuesHasBeenSet; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline void SetCategoricalValues(const CategoricalValues& value) { m_categoricalValuesHasBeenSet = true; m_categoricalValues = value; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline void SetCategoricalValues(CategoricalValues&& value) { m_categoricalValuesHasBeenSet = true; m_categoricalValues = std::move(value); }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline SensorStatisticsSummary& WithCategoricalValues(const CategoricalValues& value) { SetCategoricalValues(value); return *this;}

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline SensorStatisticsSummary& WithCategoricalValues(CategoricalValues&& value) { SetCategoricalValues(std::move(value)); return *this;}


    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline const MultipleOperatingModes& GetMultipleOperatingModes() const{ return m_multipleOperatingModes; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline bool MultipleOperatingModesHasBeenSet() const { return m_multipleOperatingModesHasBeenSet; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline void SetMultipleOperatingModes(const MultipleOperatingModes& value) { m_multipleOperatingModesHasBeenSet = true; m_multipleOperatingModes = value; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline void SetMultipleOperatingModes(MultipleOperatingModes&& value) { m_multipleOperatingModesHasBeenSet = true; m_multipleOperatingModes = std::move(value); }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline SensorStatisticsSummary& WithMultipleOperatingModes(const MultipleOperatingModes& value) { SetMultipleOperatingModes(value); return *this;}

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline SensorStatisticsSummary& WithMultipleOperatingModes(MultipleOperatingModes&& value) { SetMultipleOperatingModes(std::move(value)); return *this;}


    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline const LargeTimestampGaps& GetLargeTimestampGaps() const{ return m_largeTimestampGaps; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline bool LargeTimestampGapsHasBeenSet() const { return m_largeTimestampGapsHasBeenSet; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline void SetLargeTimestampGaps(const LargeTimestampGaps& value) { m_largeTimestampGapsHasBeenSet = true; m_largeTimestampGaps = value; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline void SetLargeTimestampGaps(LargeTimestampGaps&& value) { m_largeTimestampGapsHasBeenSet = true; m_largeTimestampGaps = std::move(value); }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline SensorStatisticsSummary& WithLargeTimestampGaps(const LargeTimestampGaps& value) { SetLargeTimestampGaps(value); return *this;}

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline SensorStatisticsSummary& WithLargeTimestampGaps(LargeTimestampGaps&& value) { SetLargeTimestampGaps(std::move(value)); return *this;}


    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline const MonotonicValues& GetMonotonicValues() const{ return m_monotonicValues; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline bool MonotonicValuesHasBeenSet() const { return m_monotonicValuesHasBeenSet; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline void SetMonotonicValues(const MonotonicValues& value) { m_monotonicValuesHasBeenSet = true; m_monotonicValues = value; }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline void SetMonotonicValues(MonotonicValues&& value) { m_monotonicValuesHasBeenSet = true; m_monotonicValues = std::move(value); }

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline SensorStatisticsSummary& WithMonotonicValues(const MonotonicValues& value) { SetMonotonicValues(value); return *this;}

    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline SensorStatisticsSummary& WithMonotonicValues(MonotonicValues&& value) { SetMonotonicValues(std::move(value)); return *this;}


    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const{ return m_dataStartTime; }

    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline bool DataStartTimeHasBeenSet() const { return m_dataStartTimeHasBeenSet; }

    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline void SetDataStartTime(const Aws::Utils::DateTime& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = value; }

    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline void SetDataStartTime(Aws::Utils::DateTime&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::move(value); }

    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithDataStartTime(const Aws::Utils::DateTime& value) { SetDataStartTime(value); return *this;}

    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithDataStartTime(Aws::Utils::DateTime&& value) { SetDataStartTime(std::move(value)); return *this;}


    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const{ return m_dataEndTime; }

    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline bool DataEndTimeHasBeenSet() const { return m_dataEndTimeHasBeenSet; }

    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline void SetDataEndTime(const Aws::Utils::DateTime& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = value; }

    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline void SetDataEndTime(Aws::Utils::DateTime&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::move(value); }

    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithDataEndTime(const Aws::Utils::DateTime& value) { SetDataEndTime(value); return *this;}

    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline SensorStatisticsSummary& WithDataEndTime(Aws::Utils::DateTime&& value) { SetDataEndTime(std::move(value)); return *this;}

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
