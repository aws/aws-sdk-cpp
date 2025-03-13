/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-linux-subscriptions/model/Subscription.h>
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
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{
  class ListLinuxSubscriptionsResult
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsResult() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListLinuxSubscriptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const { return m_subscriptions; }
    template<typename SubscriptionsT = Aws::Vector<Subscription>>
    void SetSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = std::forward<SubscriptionsT>(value); }
    template<typename SubscriptionsT = Aws::Vector<Subscription>>
    ListLinuxSubscriptionsResult& WithSubscriptions(SubscriptionsT&& value) { SetSubscriptions(std::forward<SubscriptionsT>(value)); return *this;}
    template<typename SubscriptionsT = Subscription>
    ListLinuxSubscriptionsResult& AddSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.emplace_back(std::forward<SubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLinuxSubscriptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Subscription> m_subscriptions;
    bool m_subscriptionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
