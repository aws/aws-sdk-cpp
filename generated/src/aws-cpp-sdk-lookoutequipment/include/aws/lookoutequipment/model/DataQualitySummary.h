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
    AWS_LOOKOUTEQUIPMENT_API DataQualitySummary();
    AWS_LOOKOUTEQUIPMENT_API DataQualitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DataQualitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Parameter that gives information about insufficient data for sensors in the
     * dataset. This includes information about those sensors that have complete data
     * missing and those with a short date range. </p>
     */
    inline const InsufficientSensorData& GetInsufficientSensorData() const{ return m_insufficientSensorData; }

    /**
     * <p> Parameter that gives information about insufficient data for sensors in the
     * dataset. This includes information about those sensors that have complete data
     * missing and those with a short date range. </p>
     */
    inline bool InsufficientSensorDataHasBeenSet() const { return m_insufficientSensorDataHasBeenSet; }

    /**
     * <p> Parameter that gives information about insufficient data for sensors in the
     * dataset. This includes information about those sensors that have complete data
     * missing and those with a short date range. </p>
     */
    inline void SetInsufficientSensorData(const InsufficientSensorData& value) { m_insufficientSensorDataHasBeenSet = true; m_insufficientSensorData = value; }

    /**
     * <p> Parameter that gives information about insufficient data for sensors in the
     * dataset. This includes information about those sensors that have complete data
     * missing and those with a short date range. </p>
     */
    inline void SetInsufficientSensorData(InsufficientSensorData&& value) { m_insufficientSensorDataHasBeenSet = true; m_insufficientSensorData = std::move(value); }

    /**
     * <p> Parameter that gives information about insufficient data for sensors in the
     * dataset. This includes information about those sensors that have complete data
     * missing and those with a short date range. </p>
     */
    inline DataQualitySummary& WithInsufficientSensorData(const InsufficientSensorData& value) { SetInsufficientSensorData(value); return *this;}

    /**
     * <p> Parameter that gives information about insufficient data for sensors in the
     * dataset. This includes information about those sensors that have complete data
     * missing and those with a short date range. </p>
     */
    inline DataQualitySummary& WithInsufficientSensorData(InsufficientSensorData&& value) { SetInsufficientSensorData(std::move(value)); return *this;}


    /**
     * <p> Parameter that gives information about data that is missing over all the
     * sensors in the input data. </p>
     */
    inline const MissingSensorData& GetMissingSensorData() const{ return m_missingSensorData; }

    /**
     * <p> Parameter that gives information about data that is missing over all the
     * sensors in the input data. </p>
     */
    inline bool MissingSensorDataHasBeenSet() const { return m_missingSensorDataHasBeenSet; }

    /**
     * <p> Parameter that gives information about data that is missing over all the
     * sensors in the input data. </p>
     */
    inline void SetMissingSensorData(const MissingSensorData& value) { m_missingSensorDataHasBeenSet = true; m_missingSensorData = value; }

    /**
     * <p> Parameter that gives information about data that is missing over all the
     * sensors in the input data. </p>
     */
    inline void SetMissingSensorData(MissingSensorData&& value) { m_missingSensorDataHasBeenSet = true; m_missingSensorData = std::move(value); }

    /**
     * <p> Parameter that gives information about data that is missing over all the
     * sensors in the input data. </p>
     */
    inline DataQualitySummary& WithMissingSensorData(const MissingSensorData& value) { SetMissingSensorData(value); return *this;}

    /**
     * <p> Parameter that gives information about data that is missing over all the
     * sensors in the input data. </p>
     */
    inline DataQualitySummary& WithMissingSensorData(MissingSensorData&& value) { SetMissingSensorData(std::move(value)); return *this;}


    /**
     * <p> Parameter that gives information about data that is invalid over all the
     * sensors in the input data. </p>
     */
    inline const InvalidSensorData& GetInvalidSensorData() const{ return m_invalidSensorData; }

    /**
     * <p> Parameter that gives information about data that is invalid over all the
     * sensors in the input data. </p>
     */
    inline bool InvalidSensorDataHasBeenSet() const { return m_invalidSensorDataHasBeenSet; }

    /**
     * <p> Parameter that gives information about data that is invalid over all the
     * sensors in the input data. </p>
     */
    inline void SetInvalidSensorData(const InvalidSensorData& value) { m_invalidSensorDataHasBeenSet = true; m_invalidSensorData = value; }

    /**
     * <p> Parameter that gives information about data that is invalid over all the
     * sensors in the input data. </p>
     */
    inline void SetInvalidSensorData(InvalidSensorData&& value) { m_invalidSensorDataHasBeenSet = true; m_invalidSensorData = std::move(value); }

    /**
     * <p> Parameter that gives information about data that is invalid over all the
     * sensors in the input data. </p>
     */
    inline DataQualitySummary& WithInvalidSensorData(const InvalidSensorData& value) { SetInvalidSensorData(value); return *this;}

    /**
     * <p> Parameter that gives information about data that is invalid over all the
     * sensors in the input data. </p>
     */
    inline DataQualitySummary& WithInvalidSensorData(InvalidSensorData&& value) { SetInvalidSensorData(std::move(value)); return *this;}


    /**
     * <p> Parameter that gives information about unsupported timestamps in the input
     * data. </p>
     */
    inline const UnsupportedTimestamps& GetUnsupportedTimestamps() const{ return m_unsupportedTimestamps; }

    /**
     * <p> Parameter that gives information about unsupported timestamps in the input
     * data. </p>
     */
    inline bool UnsupportedTimestampsHasBeenSet() const { return m_unsupportedTimestampsHasBeenSet; }

    /**
     * <p> Parameter that gives information about unsupported timestamps in the input
     * data. </p>
     */
    inline void SetUnsupportedTimestamps(const UnsupportedTimestamps& value) { m_unsupportedTimestampsHasBeenSet = true; m_unsupportedTimestamps = value; }

    /**
     * <p> Parameter that gives information about unsupported timestamps in the input
     * data. </p>
     */
    inline void SetUnsupportedTimestamps(UnsupportedTimestamps&& value) { m_unsupportedTimestampsHasBeenSet = true; m_unsupportedTimestamps = std::move(value); }

    /**
     * <p> Parameter that gives information about unsupported timestamps in the input
     * data. </p>
     */
    inline DataQualitySummary& WithUnsupportedTimestamps(const UnsupportedTimestamps& value) { SetUnsupportedTimestamps(value); return *this;}

    /**
     * <p> Parameter that gives information about unsupported timestamps in the input
     * data. </p>
     */
    inline DataQualitySummary& WithUnsupportedTimestamps(UnsupportedTimestamps&& value) { SetUnsupportedTimestamps(std::move(value)); return *this;}


    /**
     * <p> Parameter that gives information about duplicate timestamps in the input
     * data. </p>
     */
    inline const DuplicateTimestamps& GetDuplicateTimestamps() const{ return m_duplicateTimestamps; }

    /**
     * <p> Parameter that gives information about duplicate timestamps in the input
     * data. </p>
     */
    inline bool DuplicateTimestampsHasBeenSet() const { return m_duplicateTimestampsHasBeenSet; }

    /**
     * <p> Parameter that gives information about duplicate timestamps in the input
     * data. </p>
     */
    inline void SetDuplicateTimestamps(const DuplicateTimestamps& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = value; }

    /**
     * <p> Parameter that gives information about duplicate timestamps in the input
     * data. </p>
     */
    inline void SetDuplicateTimestamps(DuplicateTimestamps&& value) { m_duplicateTimestampsHasBeenSet = true; m_duplicateTimestamps = std::move(value); }

    /**
     * <p> Parameter that gives information about duplicate timestamps in the input
     * data. </p>
     */
    inline DataQualitySummary& WithDuplicateTimestamps(const DuplicateTimestamps& value) { SetDuplicateTimestamps(value); return *this;}

    /**
     * <p> Parameter that gives information about duplicate timestamps in the input
     * data. </p>
     */
    inline DataQualitySummary& WithDuplicateTimestamps(DuplicateTimestamps&& value) { SetDuplicateTimestamps(std::move(value)); return *this;}

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
