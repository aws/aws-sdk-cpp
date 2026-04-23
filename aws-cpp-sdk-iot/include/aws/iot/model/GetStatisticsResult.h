/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API GetStatisticsResult
  {
  public:
    GetStatisticsResult();
    GetStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
