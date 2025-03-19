/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
  class StartColumnStatisticsTaskRunResult
  {
  public:
    AWS_GLUE_API StartColumnStatisticsTaskRunResult() = default;
    AWS_GLUE_API StartColumnStatisticsTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API StartColumnStatisticsTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the column statistics task run.</p>
     */
    inline const Aws::String& GetColumnStatisticsTaskRunId() const { return m_columnStatisticsTaskRunId; }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    void SetColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { m_columnStatisticsTaskRunIdHasBeenSet = true; m_columnStatisticsTaskRunId = std::forward<ColumnStatisticsTaskRunIdT>(value); }
    template<typename ColumnStatisticsTaskRunIdT = Aws::String>
    StartColumnStatisticsTaskRunResult& WithColumnStatisticsTaskRunId(ColumnStatisticsTaskRunIdT&& value) { SetColumnStatisticsTaskRunId(std::forward<ColumnStatisticsTaskRunIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartColumnStatisticsTaskRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnStatisticsTaskRunId;
    bool m_columnStatisticsTaskRunIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
