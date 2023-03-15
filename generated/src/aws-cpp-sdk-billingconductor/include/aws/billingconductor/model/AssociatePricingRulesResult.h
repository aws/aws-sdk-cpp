﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AssociatePricingRulesResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API AssociatePricingRulesResult();
    AWS_BILLINGCONDUCTOR_API AssociatePricingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API AssociatePricingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline AssociatePricingRulesResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline AssociatePricingRulesResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The <code>PricingPlanArn</code> that the <code>PricingRuleArns</code> are
     * associated with. </p>
     */
    inline AssociatePricingRulesResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociatePricingRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociatePricingRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociatePricingRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
