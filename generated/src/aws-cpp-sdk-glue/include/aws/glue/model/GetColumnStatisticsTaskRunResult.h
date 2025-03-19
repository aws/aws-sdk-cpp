/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ColumnStatisticsTaskRun.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetColumnStatisticsTaskRunResult
  {
  public:
    AWS_GLUE_API GetColumnStatisticsTaskRunResult() = default;
    AWS_GLUE_API GetColumnStatisticsTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>ColumnStatisticsTaskRun</code> object representing the details of the
     * column stats run.</p>
     */
    inline const ColumnStatisticsTaskRun& GetColumnStatisticsTaskRun() const { return m_columnStatisticsTaskRun; }
    template<typename ColumnStatisticsTaskRunT = ColumnStatisticsTaskRun>
    void SetColumnStatisticsTaskRun(ColumnStatisticsTaskRunT&& value) { m_columnStatisticsTaskRunHasBeenSet = true; m_columnStatisticsTaskRun = std::forward<ColumnStatisticsTaskRunT>(value); }
    template<typename ColumnStatisticsTaskRunT = ColumnStatisticsTaskRun>
    GetColumnStatisticsTaskRunResult& WithColumnStatisticsTaskRun(ColumnStatisticsTaskRunT&& value) { SetColumnStatisticsTaskRun(std::forward<ColumnStatisticsTaskRunT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetColumnStatisticsTaskRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ColumnStatisticsTaskRun m_columnStatisticsTaskRun;
    bool m_columnStatisticsTaskRunHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
