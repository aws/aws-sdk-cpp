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
  class ListPricingRulesAssociatedToPricingPlanResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingRulesAssociatedToPricingPlanResult();
    AWS_BILLINGCONDUCTOR_API ListPricingRulesAssociatedToPricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API ListPricingRulesAssociatedToPricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriod = value; }

    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriod = std::move(value); }

    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriod.assign(value); }

    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The billing period for which the pricing rule associations are listed. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline const Aws::String& GetPricingPlanArn() const{ return m_pricingPlanArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline void SetPricingPlanArn(const Aws::String& value) { m_pricingPlanArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline void SetPricingPlanArn(Aws::String&& value) { m_pricingPlanArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline void SetPricingPlanArn(const char* value) { m_pricingPlanArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithPricingPlanArn(const Aws::String& value) { SetPricingPlanArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithPricingPlanArn(Aws::String&& value) { SetPricingPlanArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pricing plan for which associations
     * are listed.</p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithPricingPlanArn(const char* value) { SetPricingPlanArn(value); return *this;}


    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingRuleArns() const{ return m_pricingRuleArns; }

    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline void SetPricingRuleArns(const Aws::Vector<Aws::String>& value) { m_pricingRuleArns = value; }

    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline void SetPricingRuleArns(Aws::Vector<Aws::String>&& value) { m_pricingRuleArns = std::move(value); }

    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithPricingRuleArns(const Aws::Vector<Aws::String>& value) { SetPricingRuleArns(value); return *this;}

    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithPricingRuleArns(Aws::Vector<Aws::String>&& value) { SetPricingRuleArns(std::move(value)); return *this;}

    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& AddPricingRuleArns(const Aws::String& value) { m_pricingRuleArns.push_back(value); return *this; }

    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& AddPricingRuleArns(Aws::String&& value) { m_pricingRuleArns.push_back(std::move(value)); return *this; }

    /**
     * <p> A list containing pricing rules that are associated with the requested
     * pricing plan. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& AddPricingRuleArns(const char* value) { m_pricingRuleArns.push_back(value); return *this; }


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
    inline ListPricingRulesAssociatedToPricingPlanResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token to be used on subsequent calls. </p>
     */
    inline ListPricingRulesAssociatedToPricingPlanResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_billingPeriod;

    Aws::String m_pricingPlanArn;

    Aws::Vector<Aws::String> m_pricingRuleArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
