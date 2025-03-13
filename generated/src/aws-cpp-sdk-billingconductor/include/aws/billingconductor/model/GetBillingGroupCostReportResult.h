/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupCostReportResultElement.h>
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
namespace BillingConductor
{
namespace Model
{
  class GetBillingGroupCostReportResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API GetBillingGroupCostReportResult() = default;
    AWS_BILLINGCONDUCTOR_API GetBillingGroupCostReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API GetBillingGroupCostReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of margin summary reports.</p>
     */
    inline const Aws::Vector<BillingGroupCostReportResultElement>& GetBillingGroupCostReportResults() const { return m_billingGroupCostReportResults; }
    template<typename BillingGroupCostReportResultsT = Aws::Vector<BillingGroupCostReportResultElement>>
    void SetBillingGroupCostReportResults(BillingGroupCostReportResultsT&& value) { m_billingGroupCostReportResultsHasBeenSet = true; m_billingGroupCostReportResults = std::forward<BillingGroupCostReportResultsT>(value); }
    template<typename BillingGroupCostReportResultsT = Aws::Vector<BillingGroupCostReportResultElement>>
    GetBillingGroupCostReportResult& WithBillingGroupCostReportResults(BillingGroupCostReportResultsT&& value) { SetBillingGroupCostReportResults(std::forward<BillingGroupCostReportResultsT>(value)); return *this;}
    template<typename BillingGroupCostReportResultsT = BillingGroupCostReportResultElement>
    GetBillingGroupCostReportResult& AddBillingGroupCostReportResults(BillingGroupCostReportResultsT&& value) { m_billingGroupCostReportResultsHasBeenSet = true; m_billingGroupCostReportResults.emplace_back(std::forward<BillingGroupCostReportResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBillingGroupCostReportResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBillingGroupCostReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BillingGroupCostReportResultElement> m_billingGroupCostReportResults;
    bool m_billingGroupCostReportResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
