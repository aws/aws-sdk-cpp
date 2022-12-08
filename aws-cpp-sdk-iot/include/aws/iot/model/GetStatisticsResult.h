/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/Statistics.h>
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
namespace IoT
{
namespace Model
{
  class GetStatisticsResult
  {
  public:
    AWS_IOT_API GetStatisticsResult();
    AWS_IOT_API GetStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The statistics returned by the Fleet Indexing service based on the query and
     * aggregation field.</p>
     */
    inline const Statistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The statistics returned by the Fleet Indexing service based on the query and
     * aggregation field.</p>
     */
    inline void SetStatistics(const Statistics& value) { m_statistics = value; }

    /**
     * <p>The statistics returned by the Fleet Indexing service based on the query and
     * aggregation field.</p>
     */
    inline void SetStatistics(Statistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>The statistics returned by the Fleet Indexing service based on the query and
     * aggregation field.</p>
     */
    inline GetStatisticsResult& WithStatistics(const Statistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>The statistics returned by the Fleet Indexing service based on the query and
     * aggregation field.</p>
     */
    inline GetStatisticsResult& WithStatistics(Statistics&& value) { SetStatistics(std::move(value)); return *this;}

  private:

    Statistics m_statistics;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
