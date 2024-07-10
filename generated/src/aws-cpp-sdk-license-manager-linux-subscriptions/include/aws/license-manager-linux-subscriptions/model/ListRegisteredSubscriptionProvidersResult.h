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
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListRegisteredSubscriptionProvidersResult();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListRegisteredSubscriptionProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListRegisteredSubscriptionProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRegisteredSubscriptionProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRegisteredSubscriptionProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRegisteredSubscriptionProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of BYOL registration resources that fit the criteria you specified
     * in the request.</p>
     */
    inline const Aws::Vector<RegisteredSubscriptionProvider>& GetRegisteredSubscriptionProviders() const{ return m_registeredSubscriptionProviders; }
    inline void SetRegisteredSubscriptionProviders(const Aws::Vector<RegisteredSubscriptionProvider>& value) { m_registeredSubscriptionProviders = value; }
    inline void SetRegisteredSubscriptionProviders(Aws::Vector<RegisteredSubscriptionProvider>&& value) { m_registeredSubscriptionProviders = std::move(value); }
    inline ListRegisteredSubscriptionProvidersResult& WithRegisteredSubscriptionProviders(const Aws::Vector<RegisteredSubscriptionProvider>& value) { SetRegisteredSubscriptionProviders(value); return *this;}
    inline ListRegisteredSubscriptionProvidersResult& WithRegisteredSubscriptionProviders(Aws::Vector<RegisteredSubscriptionProvider>&& value) { SetRegisteredSubscriptionProviders(std::move(value)); return *this;}
    inline ListRegisteredSubscriptionProvidersResult& AddRegisteredSubscriptionProviders(const RegisteredSubscriptionProvider& value) { m_registeredSubscriptionProviders.push_back(value); return *this; }
    inline ListRegisteredSubscriptionProvidersResult& AddRegisteredSubscriptionProviders(RegisteredSubscriptionProvider&& value) { m_registeredSubscriptionProviders.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRegisteredSubscriptionProvidersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRegisteredSubscriptionProvidersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRegisteredSubscriptionProvidersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RegisteredSubscriptionProvider> m_registeredSubscriptionProviders;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
