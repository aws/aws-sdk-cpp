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
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsResult();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLinuxSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLinuxSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLinuxSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const{ return m_subscriptions; }

    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline void SetSubscriptions(const Aws::Vector<Subscription>& value) { m_subscriptions = value; }

    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline void SetSubscriptions(Aws::Vector<Subscription>&& value) { m_subscriptions = std::move(value); }

    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline ListLinuxSubscriptionsResult& WithSubscriptions(const Aws::Vector<Subscription>& value) { SetSubscriptions(value); return *this;}

    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline ListLinuxSubscriptionsResult& WithSubscriptions(Aws::Vector<Subscription>&& value) { SetSubscriptions(std::move(value)); return *this;}

    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline ListLinuxSubscriptionsResult& AddSubscriptions(const Subscription& value) { m_subscriptions.push_back(value); return *this; }

    /**
     * <p>An array that contains subscription objects.</p>
     */
    inline ListLinuxSubscriptionsResult& AddSubscriptions(Subscription&& value) { m_subscriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Subscription> m_subscriptions;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
