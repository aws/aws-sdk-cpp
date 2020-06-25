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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ColumnStatistics.h>
#include <aws/glue/model/ColumnError.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetColumnStatisticsForPartitionResult
  {
  public:
    GetColumnStatisticsForPartitionResult();
    GetColumnStatisticsForPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetColumnStatisticsForPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline const Aws::Vector<ColumnStatistics>& GetColumnStatisticsList() const{ return m_columnStatisticsList; }

    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline void SetColumnStatisticsList(const Aws::Vector<ColumnStatistics>& value) { m_columnStatisticsList = value; }

    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline void SetColumnStatisticsList(Aws::Vector<ColumnStatistics>&& value) { m_columnStatisticsList = std::move(value); }

    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline GetColumnStatisticsForPartitionResult& WithColumnStatisticsList(const Aws::Vector<ColumnStatistics>& value) { SetColumnStatisticsList(value); return *this;}

    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline GetColumnStatisticsForPartitionResult& WithColumnStatisticsList(Aws::Vector<ColumnStatistics>&& value) { SetColumnStatisticsList(std::move(value)); return *this;}

    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline GetColumnStatisticsForPartitionResult& AddColumnStatisticsList(const ColumnStatistics& value) { m_columnStatisticsList.push_back(value); return *this; }

    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline GetColumnStatisticsForPartitionResult& AddColumnStatisticsList(ColumnStatistics&& value) { m_columnStatisticsList.push_back(std::move(value)); return *this; }


    /**
     * <p>Error occurred during retrieving column statistics data.</p>
     */
    inline const Aws::Vector<ColumnError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Error occurred during retrieving column statistics data.</p>
     */
    inline void SetErrors(const Aws::Vector<ColumnError>& value) { m_errors = value; }

    /**
     * <p>Error occurred during retrieving column statistics data.</p>
     */
    inline void SetErrors(Aws::Vector<ColumnError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Error occurred during retrieving column statistics data.</p>
     */
    inline GetColumnStatisticsForPartitionResult& WithErrors(const Aws::Vector<ColumnError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Error occurred during retrieving column statistics data.</p>
     */
    inline GetColumnStatisticsForPartitionResult& WithErrors(Aws::Vector<ColumnError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Error occurred during retrieving column statistics data.</p>
     */
    inline GetColumnStatisticsForPartitionResult& AddErrors(const ColumnError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Error occurred during retrieving column statistics data.</p>
     */
    inline GetColumnStatisticsForPartitionResult& AddErrors(ColumnError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnStatistics> m_columnStatisticsList;

    Aws::Vector<ColumnError> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
