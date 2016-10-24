/*
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
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Subscriber.h>

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
namespace Budgets
{
namespace Model
{
  /**
   * Response of DescribeSubscribersForNotification
   */
  class AWS_BUDGETS_API DescribeSubscribersForNotificationResult
  {
  public:
    DescribeSubscribersForNotificationResult();
    DescribeSubscribersForNotificationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSubscribersForNotificationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribers = value; }

    
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribers = value; }

    
    inline DescribeSubscribersForNotificationResult& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    
    inline DescribeSubscribersForNotificationResult& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(value); return *this;}

    
    inline DescribeSubscribersForNotificationResult& AddSubscribers(const Subscriber& value) { m_subscribers.push_back(value); return *this; }

    
    inline DescribeSubscribersForNotificationResult& AddSubscribers(Subscriber&& value) { m_subscribers.push_back(value); return *this; }

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeSubscribersForNotificationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeSubscribersForNotificationResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    
    inline DescribeSubscribersForNotificationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Subscriber> m_subscribers;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
