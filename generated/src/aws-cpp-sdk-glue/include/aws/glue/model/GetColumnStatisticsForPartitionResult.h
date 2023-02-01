/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetColumnStatisticsForPartitionResult
  {
  public:
    AWS_GLUE_API GetColumnStatisticsForPartitionResult();
    AWS_GLUE_API GetColumnStatisticsForPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsForPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
