/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CoverageStatistics.h>
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
namespace GuardDuty
{
namespace Model
{
  class GetCoverageStatisticsResult
  {
  public:
    AWS_GUARDDUTY_API GetCoverageStatisticsResult() = default;
    AWS_GUARDDUTY_API GetCoverageStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetCoverageStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the count aggregated by the <code>statusCode</code> and
     * <code>resourceType</code>.</p>
     */
    inline const CoverageStatistics& GetCoverageStatistics() const { return m_coverageStatistics; }
    template<typename CoverageStatisticsT = CoverageStatistics>
    void SetCoverageStatistics(CoverageStatisticsT&& value) { m_coverageStatisticsHasBeenSet = true; m_coverageStatistics = std::forward<CoverageStatisticsT>(value); }
    template<typename CoverageStatisticsT = CoverageStatistics>
    GetCoverageStatisticsResult& WithCoverageStatistics(CoverageStatisticsT&& value) { SetCoverageStatistics(std::forward<CoverageStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCoverageStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CoverageStatistics m_coverageStatistics;
    bool m_coverageStatisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
