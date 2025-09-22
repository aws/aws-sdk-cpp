/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/ProductUserSummary.h>
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
  class ListProductSubscriptionsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListProductSubscriptionsResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListProductSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListProductSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata that describes the list product subscriptions operation.</p>
     */
    inline const Aws::Vector<ProductUserSummary>& GetProductUserSummaries() const { return m_productUserSummaries; }
    template<typename ProductUserSummariesT = Aws::Vector<ProductUserSummary>>
    void SetProductUserSummaries(ProductUserSummariesT&& value) { m_productUserSummariesHasBeenSet = true; m_productUserSummaries = std::forward<ProductUserSummariesT>(value); }
    template<typename ProductUserSummariesT = Aws::Vector<ProductUserSummary>>
    ListProductSubscriptionsResult& WithProductUserSummaries(ProductUserSummariesT&& value) { SetProductUserSummaries(std::forward<ProductUserSummariesT>(value)); return *this;}
    template<typename ProductUserSummariesT = ProductUserSummary>
    ListProductSubscriptionsResult& AddProductUserSummaries(ProductUserSummariesT&& value) { m_productUserSummariesHasBeenSet = true; m_productUserSummaries.emplace_back(std::forward<ProductUserSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProductSubscriptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProductSubscriptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProductUserSummary> m_productUserSummaries;
    bool m_productUserSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
