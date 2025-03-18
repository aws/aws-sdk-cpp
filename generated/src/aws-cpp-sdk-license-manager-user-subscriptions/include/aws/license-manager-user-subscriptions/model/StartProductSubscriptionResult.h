/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ProductUserSummary.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class StartProductSubscriptionResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StartProductSubscriptionResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StartProductSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API StartProductSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata that describes the start product subscription operation.</p>
     */
    inline const ProductUserSummary& GetProductUserSummary() const { return m_productUserSummary; }
    template<typename ProductUserSummaryT = ProductUserSummary>
    void SetProductUserSummary(ProductUserSummaryT&& value) { m_productUserSummaryHasBeenSet = true; m_productUserSummary = std::forward<ProductUserSummaryT>(value); }
    template<typename ProductUserSummaryT = ProductUserSummary>
    StartProductSubscriptionResult& WithProductUserSummary(ProductUserSummaryT&& value) { SetProductUserSummary(std::forward<ProductUserSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartProductSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProductUserSummary m_productUserSummary;
    bool m_productUserSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
