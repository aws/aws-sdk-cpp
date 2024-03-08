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
    AWS_BILLINGCONDUCTOR_API GetBillingGroupCostReportResult();
    AWS_BILLINGCONDUCTOR_API GetBillingGroupCostReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API GetBillingGroupCostReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of margin summary reports.</p>
     */
    inline const Aws::Vector<BillingGroupCostReportResultElement>& GetBillingGroupCostReportResults() const{ return m_billingGroupCostReportResults; }

    /**
     * <p>The list of margin summary reports.</p>
     */
    inline void SetBillingGroupCostReportResults(const Aws::Vector<BillingGroupCostReportResultElement>& value) { m_billingGroupCostReportResults = value; }

    /**
     * <p>The list of margin summary reports.</p>
     */
    inline void SetBillingGroupCostReportResults(Aws::Vector<BillingGroupCostReportResultElement>&& value) { m_billingGroupCostReportResults = std::move(value); }

    /**
     * <p>The list of margin summary reports.</p>
     */
    inline GetBillingGroupCostReportResult& WithBillingGroupCostReportResults(const Aws::Vector<BillingGroupCostReportResultElement>& value) { SetBillingGroupCostReportResults(value); return *this;}

    /**
     * <p>The list of margin summary reports.</p>
     */
    inline GetBillingGroupCostReportResult& WithBillingGroupCostReportResults(Aws::Vector<BillingGroupCostReportResultElement>&& value) { SetBillingGroupCostReportResults(std::move(value)); return *this;}

    /**
     * <p>The list of margin summary reports.</p>
     */
    inline GetBillingGroupCostReportResult& AddBillingGroupCostReportResults(const BillingGroupCostReportResultElement& value) { m_billingGroupCostReportResults.push_back(value); return *this; }

    /**
     * <p>The list of margin summary reports.</p>
     */
    inline GetBillingGroupCostReportResult& AddBillingGroupCostReportResults(BillingGroupCostReportResultElement&& value) { m_billingGroupCostReportResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline GetBillingGroupCostReportResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline GetBillingGroupCostReportResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used on subsequent calls to get reports.</p>
     */
    inline GetBillingGroupCostReportResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBillingGroupCostReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBillingGroupCostReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBillingGroupCostReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BillingGroupCostReportResultElement> m_billingGroupCostReportResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
