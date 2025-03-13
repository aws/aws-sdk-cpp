/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/InsufficientSensorData.h>
#include <aws/lookoutequipment/model/MissingSensorData.h>
#include <aws/lookoutequipment/model/InvalidSensorData.h>
#include <aws/lookoutequipment/model/UnsupportedTimestamps.h>
#include <aws/lookoutequipment/model/DuplicateTimestamps.h>
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
   * <p> DataQualitySummary gives aggregated statistics over all the sensors about a
   * completed ingestion job. It primarily gives more information about statistics
   * over different incorrect data like MissingCompleteSensorData, MissingSensorData,
   * UnsupportedDateFormats, InsufficientSensorData, DuplicateTimeStamps.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DataQualitySummary">AWS
   * API Reference</a></p>
   */
  class DataQualitySummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DataQualitySummary() = default;
    AWS_LOOKOUTEQUIPMENT_API DataQualitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DataQualitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Parameter that gives information about insufficient data for sensors in the
     * dataset. This includes information about those sensors that have complete data
     * missing and those with a short date range. </p>
     */
    inline const InsufficientSensorData& GetInsufficientSensorData() const { return m_insufficientSensorData; }
    inline bool InsufficientSensorDataHasBeenSet() const { return m_insufficientSensorDataHasBeenSet; }
    template<typename InsufficientSensorDataT = InsufficientSensorData>
    void SetInsufficientSensorData(InsufficientSensorDataT&& value) { m_insufficientSensorDataHasBeenSet = true; m_insufficientSensorData = std::forward<InsufficientSensorDataT>(value); }
    template<typename InsufficientSensorDataT = InsufficientSensorData>
    DataQualitySummary& WithInsufficientSensorData(InsufficientSensorDataT&& value) { SetInsufficientSensorData(std::forward<InsufficientSensorDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that gives information about data that is missing over all the
     * sensors in the input data. </p>
     */
    inline const MissingSensorData& GetMissingSensorData() const { return m_missingSensorData; }
    inline bool MissingSensorDataHasBeenSet() const { return m_missingSensorDataHasBeenSet; }
    template<typename MissingSensorDataT = MissingSensorData>
    void SetMissingSensorData(MissingSensorDataT&& value) { m_missingSensorDataHasBeenSet = true; m_missingSensorData = std::forward<MissingSensorDataT>(value); }
    template<typename MissingSensorDataT = MissingSensorData>
    DataQualitySummary& WithMissingSensorData(MissingSensorDataT&& value) { SetMissingSensorData(std::forward<MissingSensorDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that gives information about data that is invalid over all the
     * sensors in the input data. </p>
     */
    inline const InvalidSensorData& GetInvalidSensorData() const { return m_invalidSensorData; }
    inline bool InvalidSensorDataHasBeenSet() const { return m_invalidSensorDataHasBeenSet; }
    template<typename InvalidSensorDataT = InvalidSensorData>
    void SetInvalidSensorData(InvalidSensorDataT&& value) { m_invalidSensorDataHasBeenSet = true; m_invalidSensorData = std::forward<InvalidSensorDataT>(value); }
    template<typename InvalidSensorDataT = InvalidSensorData>
    DataQualitySummary& WithInvalidSensorData(InvalidSensorDataT&& value) { SetInvalidSensorData(std::forward<InvalidSensorDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that gives information about unsupported timestamps in the input
     * data. </p>
     */
    inline const UnsupportedTimestamps& GetUnsupportedTimestamps() const { return m_unsupportedTimestamps; }
    inline bool UnsupportedTimestampsHasBeenSet() const { return m_unsupportedTimestampsHasBeenSet; }
    template<typename UnsupportedTimestampsT = UnsupportedTimestamps>
    void SetUnsupportedTimestamps(UnsupportedTimestampsT&& value) { m_unsupportedTimestampsHasBeenSet = true; m_unsupportedTimestamps = std::forward<UnsupportedTimestampsT>(value); }
    template<typename UnsupportedTimestampsT = UnsupportedTimestamps>
    DataQualitySummary& WithUnsupportedTimestamps(UnsupportedTimestampsT&& value) { SetUnsupportedTimestamps(std::forward<UnsupportedTimestampsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Parameter that gives information about duplicate timestamps in the input
     * data. </p>
     */
    inline const DuplicateTimestamps& GetDuplicateTimestamps() const { return m_duplicateTimestamps; }
    inline bool DuplicateTimestampsHasBeenSet() const { return m_duplicateTimestampsHasBeenSet; }
    template<typename DuplicateTimestampsT = DuplicateTimestamps>
    void SetDuplicateTimestamps(DuplicateTimestampsT&& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = std::forward<DuplicateTimestampsT>(value); }
    template<typename DuplicateTimestampsT = DuplicateTimestamps>
    DataQualitySummary& WithDuplicateTimestamps(DuplicateTimestampsT&& value) { SetDuplicateTimestamps(std::forward<DuplicateTimestampsT>(value)); return *this;}
    ///@}
  private:

    InsufficientSensorData m_insufficientSensorData;
    bool m_insufficientSensorDataHasBeenSet = false;

    MissingSensorData m_missingSensorData;
    bool m_missingSensorDataHasBeenSet = false;

    InvalidSensorData m_invalidSensorData;
    bool m_invalidSensorDataHasBeenSet = false;

    UnsupportedTimestamps m_unsupportedTimestamps;
    bool m_unsupportedTimestampsHasBeenSet = false;

    DuplicateTimestamps m_duplicateTimestamps;
    bool m_duplicateTimestampsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
