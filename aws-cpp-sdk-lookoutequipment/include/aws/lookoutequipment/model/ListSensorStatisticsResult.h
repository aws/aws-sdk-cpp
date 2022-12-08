/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/SensorStatisticsSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LookoutEquipment
{
namespace Model
{
  class ListSensorStatisticsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListSensorStatisticsResult();
    AWS_LOOKOUTEQUIPMENT_API ListSensorStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListSensorStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline const Aws::Vector<SensorStatisticsSummary>& GetSensorStatisticsSummaries() const{ return m_sensorStatisticsSummaries; }

    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline void SetSensorStatisticsSummaries(const Aws::Vector<SensorStatisticsSummary>& value) { m_sensorStatisticsSummaries = value; }

    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline void SetSensorStatisticsSummaries(Aws::Vector<SensorStatisticsSummary>&& value) { m_sensorStatisticsSummaries = std::move(value); }

    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline ListSensorStatisticsResult& WithSensorStatisticsSummaries(const Aws::Vector<SensorStatisticsSummary>& value) { SetSensorStatisticsSummaries(value); return *this;}

    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline ListSensorStatisticsResult& WithSensorStatisticsSummaries(Aws::Vector<SensorStatisticsSummary>&& value) { SetSensorStatisticsSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline ListSensorStatisticsResult& AddSensorStatisticsSummaries(const SensorStatisticsSummary& value) { m_sensorStatisticsSummaries.push_back(value); return *this; }

    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline ListSensorStatisticsResult& AddSensorStatisticsSummaries(SensorStatisticsSummary&& value) { m_sensorStatisticsSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline ListSensorStatisticsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline ListSensorStatisticsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline ListSensorStatisticsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SensorStatisticsSummary> m_sensorStatisticsSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
