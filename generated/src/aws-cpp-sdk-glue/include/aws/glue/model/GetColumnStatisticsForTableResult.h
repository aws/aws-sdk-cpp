/**
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
    AWS_GLUE_API GetColumnStatisticsForTableResult() = default;
    AWS_GLUE_API GetColumnStatisticsForTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsForTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of ColumnStatistics.</p>
     */
    inline const Aws::Vector<ColumnStatistics>& GetColumnStatisticsList() const { return m_columnStatisticsList; }
    template<typename ColumnStatisticsListT = Aws::Vector<ColumnStatistics>>
    void SetColumnStatisticsList(ColumnStatisticsListT&& value) { m_columnStatisticsListHasBeenSet = true; m_columnStatisticsList = std::forward<ColumnStatisticsListT>(value); }
    template<typename ColumnStatisticsListT = Aws::Vector<ColumnStatistics>>
    GetColumnStatisticsForTableResult& WithColumnStatisticsList(ColumnStatisticsListT&& value) { SetColumnStatisticsList(std::forward<ColumnStatisticsListT>(value)); return *this;}
    template<typename ColumnStatisticsListT = ColumnStatistics>
    GetColumnStatisticsForTableResult& AddColumnStatisticsList(ColumnStatisticsListT&& value) { m_columnStatisticsListHasBeenSet = true; m_columnStatisticsList.emplace_back(std::forward<ColumnStatisticsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of ColumnStatistics that failed to be retrieved.</p>
     */
    inline const Aws::Vector<ColumnError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<ColumnError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ColumnError>>
    GetColumnStatisticsForTableResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ColumnError>
    GetColumnStatisticsForTableResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetColumnStatisticsForTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnStatistics> m_columnStatisticsList;
    bool m_columnStatisticsListHasBeenSet = false;

    Aws::Vector<ColumnError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
