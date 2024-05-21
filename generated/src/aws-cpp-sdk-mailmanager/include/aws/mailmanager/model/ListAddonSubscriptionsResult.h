/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/AddonSubscription.h>
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
namespace MailManager
{
namespace Model
{
  class ListAddonSubscriptionsResult
  {
  public:
    AWS_MAILMANAGER_API ListAddonSubscriptionsResult();
    AWS_MAILMANAGER_API ListAddonSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListAddonSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline const Aws::Vector<AddonSubscription>& GetAddonSubscriptions() const{ return m_addonSubscriptions; }

    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline void SetAddonSubscriptions(const Aws::Vector<AddonSubscription>& value) { m_addonSubscriptions = value; }

    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline void SetAddonSubscriptions(Aws::Vector<AddonSubscription>&& value) { m_addonSubscriptions = std::move(value); }

    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline ListAddonSubscriptionsResult& WithAddonSubscriptions(const Aws::Vector<AddonSubscription>& value) { SetAddonSubscriptions(value); return *this;}

    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline ListAddonSubscriptionsResult& WithAddonSubscriptions(Aws::Vector<AddonSubscription>&& value) { SetAddonSubscriptions(std::move(value)); return *this;}

    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline ListAddonSubscriptionsResult& AddAddonSubscriptions(const AddonSubscription& value) { m_addonSubscriptions.push_back(value); return *this; }

    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline ListAddonSubscriptionsResult& AddAddonSubscriptions(AddonSubscription&& value) { m_addonSubscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline ListAddonSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline ListAddonSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline ListAddonSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAddonSubscriptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAddonSubscriptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAddonSubscriptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AddonSubscription> m_addonSubscriptions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
