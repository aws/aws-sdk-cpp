/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-linux-subscriptions/model/RegisteredSubscriptionProvider.h>
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
  class ListRegisteredSubscriptionProvidersResult
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListRegisteredSubscriptionProvidersResult() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListRegisteredSubscriptionProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListRegisteredSubscriptionProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListRegisteredSubscriptionProvidersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of BYOL registration resources that fit the criteria you specified
     * in the request.</p>
     */
    inline const Aws::Vector<RegisteredSubscriptionProvider>& GetRegisteredSubscriptionProviders() const { return m_registeredSubscriptionProviders; }
    template<typename RegisteredSubscriptionProvidersT = Aws::Vector<RegisteredSubscriptionProvider>>
    void SetRegisteredSubscriptionProviders(RegisteredSubscriptionProvidersT&& value) { m_registeredSubscriptionProvidersHasBeenSet = true; m_registeredSubscriptionProviders = std::forward<RegisteredSubscriptionProvidersT>(value); }
    template<typename RegisteredSubscriptionProvidersT = Aws::Vector<RegisteredSubscriptionProvider>>
    ListRegisteredSubscriptionProvidersResult& WithRegisteredSubscriptionProviders(RegisteredSubscriptionProvidersT&& value) { SetRegisteredSubscriptionProviders(std::forward<RegisteredSubscriptionProvidersT>(value)); return *this;}
    template<typename RegisteredSubscriptionProvidersT = RegisteredSubscriptionProvider>
    ListRegisteredSubscriptionProvidersResult& AddRegisteredSubscriptionProviders(RegisteredSubscriptionProvidersT&& value) { m_registeredSubscriptionProvidersHasBeenSet = true; m_registeredSubscriptionProviders.emplace_back(std::forward<RegisteredSubscriptionProvidersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRegisteredSubscriptionProvidersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RegisteredSubscriptionProvider> m_registeredSubscriptionProviders;
    bool m_registeredSubscriptionProvidersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
