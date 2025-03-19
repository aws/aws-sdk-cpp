/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupCostReportElement.h>
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
  class ListBillingGroupCostReportsResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsResult() = default;
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline const Aws::Vector<BillingGroupCostReportElement>& GetBillingGroupCostReports() const { return m_billingGroupCostReports; }
    template<typename BillingGroupCostReportsT = Aws::Vector<BillingGroupCostReportElement>>
    void SetBillingGroupCostReports(BillingGroupCostReportsT&& value) { m_billingGroupCostReportsHasBeenSet = true; m_billingGroupCostReports = std::forward<BillingGroupCostReportsT>(value); }
    template<typename BillingGroupCostReportsT = Aws::Vector<BillingGroupCostReportElement>>
    ListBillingGroupCostReportsResult& WithBillingGroupCostReports(BillingGroupCostReportsT&& value) { SetBillingGroupCostReports(std::forward<BillingGroupCostReportsT>(value)); return *this;}
    template<typename BillingGroupCostReportsT = BillingGroupCostReportElement>
    ListBillingGroupCostReportsResult& AddBillingGroupCostReports(BillingGroupCostReportsT&& value) { m_billingGroupCostReportsHasBeenSet = true; m_billingGroupCostReports.emplace_back(std::forward<BillingGroupCostReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBillingGroupCostReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBillingGroupCostReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BillingGroupCostReportElement> m_billingGroupCostReports;
    bool m_billingGroupCostReportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
