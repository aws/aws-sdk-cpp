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
    AWS_LOOKOUTEQUIPMENT_API ListSensorStatisticsResult() = default;
    AWS_LOOKOUTEQUIPMENT_API ListSensorStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListSensorStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides ingestion-based statistics regarding the specified sensor with
     * respect to various validation types, such as whether data exists, the number and
     * percentage of missing values, and the number and percentage of duplicate
     * timestamps. </p>
     */
    inline const Aws::Vector<SensorStatisticsSummary>& GetSensorStatisticsSummaries() const { return m_sensorStatisticsSummaries; }
    template<typename SensorStatisticsSummariesT = Aws::Vector<SensorStatisticsSummary>>
    void SetSensorStatisticsSummaries(SensorStatisticsSummariesT&& value) { m_sensorStatisticsSummariesHasBeenSet = true; m_sensorStatisticsSummaries = std::forward<SensorStatisticsSummariesT>(value); }
    template<typename SensorStatisticsSummariesT = Aws::Vector<SensorStatisticsSummary>>
    ListSensorStatisticsResult& WithSensorStatisticsSummaries(SensorStatisticsSummariesT&& value) { SetSensorStatisticsSummaries(std::forward<SensorStatisticsSummariesT>(value)); return *this;}
    template<typename SensorStatisticsSummariesT = SensorStatisticsSummary>
    ListSensorStatisticsResult& AddSensorStatisticsSummaries(SensorStatisticsSummariesT&& value) { m_sensorStatisticsSummariesHasBeenSet = true; m_sensorStatisticsSummaries.emplace_back(std::forward<SensorStatisticsSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSensorStatisticsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSensorStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SensorStatisticsSummary> m_sensorStatisticsSummaries;
    bool m_sensorStatisticsSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
