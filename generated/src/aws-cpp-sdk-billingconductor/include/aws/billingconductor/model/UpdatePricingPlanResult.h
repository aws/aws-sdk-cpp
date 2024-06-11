/**
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
  class UpdatePricingPlanResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdatePricingPlanResult();
    AWS_BILLINGCONDUCTOR_API UpdatePricingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdatePricingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated pricing plan. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdatePricingPlanResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdatePricingPlanResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdatePricingPlanResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdatePricingPlanResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdatePricingPlanResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdatePricingPlanResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdatePricingPlanResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePricingPlanResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePricingPlanResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list. </p>
     */
    inline long long GetSize() const{ return m_size; }
    inline void SetSize(long long value) { m_size = value; }
    inline UpdatePricingPlanResult& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }
    inline UpdatePricingPlanResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePricingPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePricingPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePricingPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    long long m_size;

    long long m_lastModifiedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
