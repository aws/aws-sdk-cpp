/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/PricingPlanListElement.h>
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
  class ListPricingPlansResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingPlansResult();
    AWS_BILLINGCONDUCTOR_API ListPricingPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The billing period for which the described pricing plans are applicable.
     * </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p> The billing period for which the described pricing plans are applicable.
     * </p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriod = value; }

    /**
     * <p> The billing period for which the described pricing plans are applicable.
     * </p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriod = std::move(value); }

    /**
     * <p> The billing period for which the described pricing plans are applicable.
     * </p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriod.assign(value); }

    /**
     * <p> The billing period for which the described pricing plans are applicable.
     * </p>
     */
    inline ListPricingPlansResult& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p> The billing period for which the described pricing plans are applicable.
     * </p>
     */
    inline ListPricingPlansResult& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The billing period for which the described pricing plans are applicable.
     * </p>
     */
    inline ListPricingPlansResult& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p>A list of <code>PricingPlanListElement</code> retrieved. </p>
     */
    inline const Aws::Vector<PricingPlanListElement>& GetPricingPlans() const{ return m_pricingPlans; }

    /**
     * <p>A list of <code>PricingPlanListElement</code> retrieved. </p>
     */
    inline void SetPricingPlans(const Aws::Vector<PricingPlanListElement>& value) { m_pricingPlans = value; }

    /**
     * <p>A list of <code>PricingPlanListElement</code> retrieved. </p>
     */
    inline void SetPricingPlans(Aws::Vector<PricingPlanListElement>&& value) { m_pricingPlans = std::move(value); }

    /**
     * <p>A list of <code>PricingPlanListElement</code> retrieved. </p>
     */
    inline ListPricingPlansResult& WithPricingPlans(const Aws::Vector<PricingPlanListElement>& value) { SetPricingPlans(value); return *this;}

    /**
     * <p>A list of <code>PricingPlanListElement</code> retrieved. </p>
     */
    inline ListPricingPlansResult& WithPricingPlans(Aws::Vector<PricingPlanListElement>&& value) { SetPricingPlans(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PricingPlanListElement</code> retrieved. </p>
     */
    inline ListPricingPlansResult& AddPricingPlans(const PricingPlanListElement& value) { m_pricingPlans.push_back(value); return *this; }

    /**
     * <p>A list of <code>PricingPlanListElement</code> retrieved. </p>
     */
    inline ListPricingPlansResult& AddPricingPlans(PricingPlanListElement&& value) { m_pricingPlans.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's used on subsequent calls to get pricing plans.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used on subsequent calls to get pricing plans.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used on subsequent calls to get pricing plans.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get pricing plans.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get pricing plans.
     * </p>
     */
    inline ListPricingPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get pricing plans.
     * </p>
     */
    inline ListPricingPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get pricing plans.
     * </p>
     */
    inline ListPricingPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_billingPeriod;

    Aws::Vector<PricingPlanListElement> m_pricingPlans;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
