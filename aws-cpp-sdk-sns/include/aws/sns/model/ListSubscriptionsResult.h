﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/Subscription.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for ListSubscriptions action</p>
   */
  class AWS_SNS_API ListSubscriptionsResult
  {
  public:
    ListSubscriptionsResult();
    ListSubscriptionsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListSubscriptionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of subscriptions.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const{ return m_subscriptions; }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline void SetSubscriptions(const Aws::Vector<Subscription>& value) { m_subscriptions = value; }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline void SetSubscriptions(Aws::Vector<Subscription>&& value) { m_subscriptions = value; }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& WithSubscriptions(const Aws::Vector<Subscription>& value) { SetSubscriptions(value); return *this;}

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& WithSubscriptions(Aws::Vector<Subscription>&& value) { SetSubscriptions(value); return *this;}

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& AddSubscriptions(const Subscription& value) { m_subscriptions.push_back(value); return *this; }

    /**
     * <p>A list of subscriptions.</p>
     */
    inline ListSubscriptionsResult& AddSubscriptions(Subscription&& value) { m_subscriptions.push_back(value); return *this; }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline ListSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline ListSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to pass along to the next <code>ListSubscriptions</code> request. This
     * element is returned if there are more subscriptions to retrieve.</p>
     */
    inline ListSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListSubscriptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListSubscriptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Subscription> m_subscriptions;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws