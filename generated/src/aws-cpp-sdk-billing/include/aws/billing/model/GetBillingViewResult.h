/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingViewElement.h>
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
namespace Billing
{
namespace Model
{
  class GetBillingViewResult
  {
  public:
    AWS_BILLING_API GetBillingViewResult();
    AWS_BILLING_API GetBillingViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLING_API GetBillingViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The billing view element associated with the specified ARN. </p>
     */
    inline const BillingViewElement& GetBillingView() const{ return m_billingView; }
    inline void SetBillingView(const BillingViewElement& value) { m_billingView = value; }
    inline void SetBillingView(BillingViewElement&& value) { m_billingView = std::move(value); }
    inline GetBillingViewResult& WithBillingView(const BillingViewElement& value) { SetBillingView(value); return *this;}
    inline GetBillingViewResult& WithBillingView(BillingViewElement&& value) { SetBillingView(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBillingViewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBillingViewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBillingViewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    BillingViewElement m_billingView;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
