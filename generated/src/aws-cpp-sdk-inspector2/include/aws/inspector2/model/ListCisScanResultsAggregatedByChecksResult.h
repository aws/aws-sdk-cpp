/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisCheckAggregation.h>
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
namespace Inspector2
{
namespace Model
{
  class ListCisScanResultsAggregatedByChecksResult
  {
  public:
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByChecksResult() = default;
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The check aggregations.</p>
     */
    inline const Aws::Vector<CisCheckAggregation>& GetCheckAggregations() const { return m_checkAggregations; }
    template<typename CheckAggregationsT = Aws::Vector<CisCheckAggregation>>
    void SetCheckAggregations(CheckAggregationsT&& value) { m_checkAggregationsHasBeenSet = true; m_checkAggregations = std::forward<CheckAggregationsT>(value); }
    template<typename CheckAggregationsT = Aws::Vector<CisCheckAggregation>>
    ListCisScanResultsAggregatedByChecksResult& WithCheckAggregations(CheckAggregationsT&& value) { SetCheckAggregations(std::forward<CheckAggregationsT>(value)); return *this;}
    template<typename CheckAggregationsT = CisCheckAggregation>
    ListCisScanResultsAggregatedByChecksResult& AddCheckAggregations(CheckAggregationsT&& value) { m_checkAggregationsHasBeenSet = true; m_checkAggregations.emplace_back(std::forward<CheckAggregationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCisScanResultsAggregatedByChecksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCisScanResultsAggregatedByChecksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CisCheckAggregation> m_checkAggregations;
    bool m_checkAggregationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
