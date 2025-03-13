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
    AWS_BILLING_API GetBillingViewResult() = default;
    AWS_BILLING_API GetBillingViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLING_API GetBillingViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The billing view element associated with the specified ARN. </p>
     */
    inline const BillingViewElement& GetBillingView() const { return m_billingView; }
    template<typename BillingViewT = BillingViewElement>
    void SetBillingView(BillingViewT&& value) { m_billingViewHasBeenSet = true; m_billingView = std::forward<BillingViewT>(value); }
    template<typename BillingViewT = BillingViewElement>
    GetBillingViewResult& WithBillingView(BillingViewT&& value) { SetBillingView(std::forward<BillingViewT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBillingViewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BillingViewElement m_billingView;
    bool m_billingViewHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
