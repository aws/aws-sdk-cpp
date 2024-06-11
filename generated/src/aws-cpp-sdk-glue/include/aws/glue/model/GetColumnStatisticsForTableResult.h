﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetColumnStatisticsForTableResult
  {
  public:
    AWS_GLUE_API GetColumnStatisticsForTableResult();
    AWS_GLUE_API GetColumnStatisticsForTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsForTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of ColumnStatistics.</p>
     */
    inline const Aws::Vector<ColumnStatistics>& GetColumnStatisticsList() const{ return m_columnStatisticsList; }
    inline void SetColumnStatisticsList(const Aws::Vector<ColumnStatistics>& value) { m_columnStatisticsList = value; }
    inline void SetColumnStatisticsList(Aws::Vector<ColumnStatistics>&& value) { m_columnStatisticsList = std::move(value); }
    inline GetColumnStatisticsForTableResult& WithColumnStatisticsList(const Aws::Vector<ColumnStatistics>& value) { SetColumnStatisticsList(value); return *this;}
    inline GetColumnStatisticsForTableResult& WithColumnStatisticsList(Aws::Vector<ColumnStatistics>&& value) { SetColumnStatisticsList(std::move(value)); return *this;}
    inline GetColumnStatisticsForTableResult& AddColumnStatisticsList(const ColumnStatistics& value) { m_columnStatisticsList.push_back(value); return *this; }
    inline GetColumnStatisticsForTableResult& AddColumnStatisticsList(ColumnStatistics&& value) { m_columnStatisticsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline const Aws::Vector<ColumnError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<ColumnError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<ColumnError>&& value) { m_errors = std::move(value); }
    inline GetColumnStatisticsForTableResult& WithErrors(const Aws::Vector<ColumnError>& value) { SetErrors(value); return *this;}
    inline GetColumnStatisticsForTableResult& WithErrors(Aws::Vector<ColumnError>&& value) { SetErrors(std::move(value)); return *this;}
    inline GetColumnStatisticsForTableResult& AddErrors(const ColumnError& value) { m_errors.push_back(value); return *this; }
    inline GetColumnStatisticsForTableResult& AddErrors(ColumnError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetColumnStatisticsForTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetColumnStatisticsForTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetColumnStatisticsForTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnStatistics> m_columnStatisticsList;

    Aws::Vector<ColumnError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
