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
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsResult();
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupCostReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline const Aws::Vector<BillingGroupCostReportElement>& GetBillingGroupCostReports() const{ return m_billingGroupCostReports; }

    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline void SetBillingGroupCostReports(const Aws::Vector<BillingGroupCostReportElement>& value) { m_billingGroupCostReports = value; }

    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline void SetBillingGroupCostReports(Aws::Vector<BillingGroupCostReportElement>&& value) { m_billingGroupCostReports = std::move(value); }

    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline ListBillingGroupCostReportsResult& WithBillingGroupCostReports(const Aws::Vector<BillingGroupCostReportElement>& value) { SetBillingGroupCostReports(value); return *this;}

    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline ListBillingGroupCostReportsResult& WithBillingGroupCostReports(Aws::Vector<BillingGroupCostReportElement>&& value) { SetBillingGroupCostReports(std::move(value)); return *this;}

    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline ListBillingGroupCostReportsResult& AddBillingGroupCostReports(const BillingGroupCostReportElement& value) { m_billingGroupCostReports.push_back(value); return *this; }

    /**
     * <p>A list of <code>BillingGroupCostReportElement</code> retrieved. </p>
     */
    inline ListBillingGroupCostReportsResult& AddBillingGroupCostReports(BillingGroupCostReportElement&& value) { m_billingGroupCostReports.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline ListBillingGroupCostReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline ListBillingGroupCostReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get reports. </p>
     */
    inline ListBillingGroupCostReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BillingGroupCostReportElement> m_billingGroupCostReports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
