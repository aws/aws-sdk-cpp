/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListPricingPlansAssociatedWithPricingRuleResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult();
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingPlansAssociatedWithPricingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriod = value; }

    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriod = std::move(value); }

    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriod.assign(value); }

    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The pricing plan billing period for which associations will be listed. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline const Aws::String& GetPricingRuleArn() const{ return m_pricingRuleArn; }

    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline void SetPricingRuleArn(const Aws::String& value) { m_pricingRuleArn = value; }

    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline void SetPricingRuleArn(Aws::String&& value) { m_pricingRuleArn = std::move(value); }

    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline void SetPricingRuleArn(const char* value) { m_pricingRuleArn.assign(value); }

    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingRuleArn(const Aws::String& value) { SetPricingRuleArn(value); return *this;}

    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingRuleArn(Aws::String&& value) { SetPricingRuleArn(std::move(value)); return *this;}

    /**
     * <p> The pricing rule Amazon Resource Name (ARN) for which associations will be
     * listed. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingRuleArn(const char* value) { SetPricingRuleArn(value); return *this;}


    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingPlanArns() const{ return m_pricingPlanArns; }

    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline void SetPricingPlanArns(const Aws::Vector<Aws::String>& value) { m_pricingPlanArns = value; }

    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline void SetPricingPlanArns(Aws::Vector<Aws::String>&& value) { m_pricingPlanArns = std::move(value); }

    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingPlanArns(const Aws::Vector<Aws::String>& value) { SetPricingPlanArns(value); return *this;}

    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithPricingPlanArns(Aws::Vector<Aws::String>&& value) { SetPricingPlanArns(std::move(value)); return *this;}

    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& AddPricingPlanArns(const Aws::String& value) { m_pricingPlanArns.push_back(value); return *this; }

    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& AddPricingPlanArns(Aws::String&& value) { m_pricingPlanArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The list containing pricing plans that are associated with the requested
     * pricing rule. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& AddPricingPlanArns(const char* value) { m_pricingPlanArns.push_back(value); return *this; }


    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline ListPricingPlansAssociatedWithPricingRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_billingPeriod;

    Aws::String m_pricingRuleArn;

    Aws::Vector<Aws::String> m_pricingPlanArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
