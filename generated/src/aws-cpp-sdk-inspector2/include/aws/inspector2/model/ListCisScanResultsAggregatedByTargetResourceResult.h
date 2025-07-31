/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisTargetResourceAggregation.h>
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
  class ListCisScanResultsAggregatedByTargetResourceResult
  {
  public:
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByTargetResourceResult() = default;
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByTargetResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByTargetResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource aggregations.</p>
     */
    inline const Aws::Vector<CisTargetResourceAggregation>& GetTargetResourceAggregations() const { return m_targetResourceAggregations; }
    template<typename TargetResourceAggregationsT = Aws::Vector<CisTargetResourceAggregation>>
    void SetTargetResourceAggregations(TargetResourceAggregationsT&& value) { m_targetResourceAggregationsHasBeenSet = true; m_targetResourceAggregations = std::forward<TargetResourceAggregationsT>(value); }
    template<typename TargetResourceAggregationsT = Aws::Vector<CisTargetResourceAggregation>>
    ListCisScanResultsAggregatedByTargetResourceResult& WithTargetResourceAggregations(TargetResourceAggregationsT&& value) { SetTargetResourceAggregations(std::forward<TargetResourceAggregationsT>(value)); return *this;}
    template<typename TargetResourceAggregationsT = CisTargetResourceAggregation>
    ListCisScanResultsAggregatedByTargetResourceResult& AddTargetResourceAggregations(TargetResourceAggregationsT&& value) { m_targetResourceAggregationsHasBeenSet = true; m_targetResourceAggregations.emplace_back(std::forward<TargetResourceAggregationsT>(value)); return *this; }
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
    ListCisScanResultsAggregatedByTargetResourceResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCisScanResultsAggregatedByTargetResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CisTargetResourceAggregation> m_targetResourceAggregations;
    bool m_targetResourceAggregationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
