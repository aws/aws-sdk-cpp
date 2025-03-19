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
    AWS_LOOKOUTEQUIPMENT_API SensorStatisticsSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API SensorStatisticsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API SensorStatisticsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Name of the component to which the particular sensor belongs for which the
     * statistics belong to. </p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    SensorStatisticsSummary& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Name of the sensor that the statistics belong to. </p>
     */
    inline const Aws::String& GetSensorName() const { return m_sensorName; }
    inline bool SensorNameHasBeenSet() const { return m_sensorNameHasBeenSet; }
    template<typename SensorNameT = Aws::String>
    void SetSensorName(SensorNameT&& value) { m_sensorNameHasBeenSet = true; m_sensorName = std::forward<SensorNameT>(value); }
    template<typename SensorNameT = Aws::String>
    SensorStatisticsSummary& WithSensorName(SensorNameT&& value) { SetSensorName(std::forward<SensorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that indicates whether data exists for the sensor that the
     * statistics belong to. </p>
     */
    inline bool GetDataExists() const { return m_dataExists; }
    inline bool DataExistsHasBeenSet() const { return m_dataExistsHasBeenSet; }
    inline void SetDataExists(bool value) { m_dataExistsHasBeenSet = true; m_dataExists = value; }
    inline SensorStatisticsSummary& WithDataExists(bool value) { SetDataExists(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are missing for the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetMissingValues() const { return m_missingValues; }
    inline bool MissingValuesHasBeenSet() const { return m_missingValuesHasBeenSet; }
    template<typename MissingValuesT = CountPercent>
    void SetMissingValues(MissingValuesT&& value) { m_missingValuesHasBeenSet = true; m_missingValues = std::forward<MissingValuesT>(value); }
    template<typename MissingValuesT = CountPercent>
    SensorStatisticsSummary& WithMissingValues(MissingValuesT&& value) { SetMissingValues(std::forward<MissingValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of, and percentage of, values that
     * are invalid for the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetInvalidValues() const { return m_invalidValues; }
    inline bool InvalidValuesHasBeenSet() const { return m_invalidValuesHasBeenSet; }
    template<typename InvalidValuesT = CountPercent>
    void SetInvalidValues(InvalidValuesT&& value) { m_invalidValuesHasBeenSet = true; m_invalidValues = std::forward<InvalidValuesT>(value); }
    template<typename InvalidValuesT = CountPercent>
    SensorStatisticsSummary& WithInvalidValues(InvalidValuesT&& value) { SetInvalidValues(std::forward<InvalidValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of invalid date entries associated
     * with the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetInvalidDateEntries() const { return m_invalidDateEntries; }
    inline bool InvalidDateEntriesHasBeenSet() const { return m_invalidDateEntriesHasBeenSet; }
    template<typename InvalidDateEntriesT = CountPercent>
    void SetInvalidDateEntries(InvalidDateEntriesT&& value) { m_invalidDateEntriesHasBeenSet = true; m_invalidDateEntries = std::forward<InvalidDateEntriesT>(value); }
    template<typename InvalidDateEntriesT = CountPercent>
    SensorStatisticsSummary& WithInvalidDateEntries(InvalidDateEntriesT&& value) { SetInvalidDateEntries(std::forward<InvalidDateEntriesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes the total number of duplicate timestamp records
     * associated with the sensor that the statistics belong to. </p>
     */
    inline const CountPercent& GetDuplicateTimestamps() const { return m_duplicateTimestamps; }
    inline bool DuplicateTimestampsHasBeenSet() const { return m_duplicateTimestampsHasBeenSet; }
    template<typename DuplicateTimestampsT = CountPercent>
    void SetDuplicateTimestamps(DuplicateTimestampsT&& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = std::forward<DuplicateTimestampsT>(value); }
    template<typename DuplicateTimestampsT = CountPercent>
    SensorStatisticsSummary& WithDuplicateTimestamps(DuplicateTimestampsT&& value) { SetDuplicateTimestamps(std::forward<DuplicateTimestampsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is categorical. </p>
     */
    inline const CategoricalValues& GetCategoricalValues() const { return m_categoricalValues; }
    inline bool CategoricalValuesHasBeenSet() const { return m_categoricalValuesHasBeenSet; }
    template<typename CategoricalValuesT = CategoricalValues>
    void SetCategoricalValues(CategoricalValuesT&& value) { m_categoricalValuesHasBeenSet = true; m_categoricalValues = std::forward<CategoricalValuesT>(value); }
    template<typename CategoricalValuesT = CategoricalValues>
    SensorStatisticsSummary& WithCategoricalValues(CategoricalValuesT&& value) { SetCategoricalValues(std::forward<CategoricalValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor has more than one operating mode. </p>
     */
    inline const MultipleOperatingModes& GetMultipleOperatingModes() const { return m_multipleOperatingModes; }
    inline bool MultipleOperatingModesHasBeenSet() const { return m_multipleOperatingModesHasBeenSet; }
    template<typename MultipleOperatingModesT = MultipleOperatingModes>
    void SetMultipleOperatingModes(MultipleOperatingModesT&& value) { m_multipleOperatingModesHasBeenSet = true; m_multipleOperatingModes = std::forward<MultipleOperatingModesT>(value); }
    template<typename MultipleOperatingModesT = MultipleOperatingModes>
    SensorStatisticsSummary& WithMultipleOperatingModes(MultipleOperatingModesT&& value) { SetMultipleOperatingModes(std::forward<MultipleOperatingModesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor contains one or more large gaps between consecutive timestamps. </p>
     */
    inline const LargeTimestampGaps& GetLargeTimestampGaps() const { return m_largeTimestampGaps; }
    inline bool LargeTimestampGapsHasBeenSet() const { return m_largeTimestampGapsHasBeenSet; }
    template<typename LargeTimestampGapsT = LargeTimestampGaps>
    void SetLargeTimestampGaps(LargeTimestampGapsT&& value) { m_largeTimestampGapsHasBeenSet = true; m_largeTimestampGaps = std::forward<LargeTimestampGapsT>(value); }
    template<typename LargeTimestampGapsT = LargeTimestampGaps>
    SensorStatisticsSummary& WithLargeTimestampGaps(LargeTimestampGapsT&& value) { SetLargeTimestampGaps(std::forward<LargeTimestampGapsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that describes potential risk about whether data associated with
     * the sensor is mostly monotonic. </p>
     */
    inline const MonotonicValues& GetMonotonicValues() const { return m_monotonicValues; }
    inline bool MonotonicValuesHasBeenSet() const { return m_monotonicValuesHasBeenSet; }
    template<typename MonotonicValuesT = MonotonicValues>
    void SetMonotonicValues(MonotonicValuesT&& value) { m_monotonicValuesHasBeenSet = true; m_monotonicValues = std::forward<MonotonicValuesT>(value); }
    template<typename MonotonicValuesT = MonotonicValues>
    SensorStatisticsSummary& WithMonotonicValues(MonotonicValuesT&& value) { SetMonotonicValues(std::forward<MonotonicValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference to indicate the beginning of valid data
     * associated with the sensor that the statistics belong to. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const { return m_dataStartTime; }
    inline bool DataStartTimeHasBeenSet() const { return m_dataStartTimeHasBeenSet; }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    void SetDataStartTime(DataStartTimeT&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::forward<DataStartTimeT>(value); }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    SensorStatisticsSummary& WithDataStartTime(DataStartTimeT&& value) { SetDataStartTime(std::forward<DataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the time reference to indicate the end of valid data associated
     * with the sensor that the statistics belong to. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const { return m_dataEndTime; }
    inline bool DataEndTimeHasBeenSet() const { return m_dataEndTimeHasBeenSet; }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    void SetDataEndTime(DataEndTimeT&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::forward<DataEndTimeT>(value); }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    SensorStatisticsSummary& WithDataEndTime(DataEndTimeT&& value) { SetDataEndTime(std::forward<DataEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_sensorName;
    bool m_sensorNameHasBeenSet = false;

    bool m_dataExists{false};
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

    Aws::Utils::DateTime m_dataStartTime{};
    bool m_dataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataEndTime{};
    bool m_dataEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
