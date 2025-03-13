/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/AccountFindingsMetric.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class ListFindingsMetricsResult
  {
  public:
    AWS_CODEGURUSECURITY_API ListFindingsMetricsResult() = default;
    AWS_CODEGURUSECURITY_API ListFindingsMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API ListFindingsMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>AccountFindingsMetric</code> objects retrieved from the
     * specified time interval.</p>
     */
    inline const Aws::Vector<AccountFindingsMetric>& GetFindingsMetrics() const { return m_findingsMetrics; }
    template<typename FindingsMetricsT = Aws::Vector<AccountFindingsMetric>>
    void SetFindingsMetrics(FindingsMetricsT&& value) { m_findingsMetricsHasBeenSet = true; m_findingsMetrics = std::forward<FindingsMetricsT>(value); }
    template<typename FindingsMetricsT = Aws::Vector<AccountFindingsMetric>>
    ListFindingsMetricsResult& WithFindingsMetrics(FindingsMetricsT&& value) { SetFindingsMetrics(std::forward<FindingsMetricsT>(value)); return *this;}
    template<typename FindingsMetricsT = AccountFindingsMetric>
    ListFindingsMetricsResult& AddFindingsMetrics(FindingsMetricsT&& value) { m_findingsMetricsHasBeenSet = true; m_findingsMetrics.emplace_back(std::forward<FindingsMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListFindingMetrics</code> to continue listing results after the current
     * page. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFindingsMetricsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFindingsMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountFindingsMetric> m_findingsMetrics;
    bool m_findingsMetricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
