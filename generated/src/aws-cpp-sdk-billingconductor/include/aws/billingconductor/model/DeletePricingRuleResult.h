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
  class DeletePricingRuleResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API DeletePricingRuleResult();
    AWS_BILLINGCONDUCTOR_API DeletePricingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API DeletePricingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing rule. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing rule. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing rule. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing rule. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing rule. </p>
     */
    inline DeletePricingRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing rule. </p>
     */
    inline DeletePricingRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the deleted pricing rule. </p>
     */
    inline DeletePricingRuleResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeletePricingRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeletePricingRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeletePricingRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
