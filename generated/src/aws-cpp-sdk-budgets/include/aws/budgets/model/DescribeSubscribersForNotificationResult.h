﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Subscriber.h>
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
namespace Budgets
{
namespace Model
{
  /**
   * <p> Response of DescribeSubscribersForNotification </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotificationResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSubscribersForNotificationResult
  {
  public:
    AWS_BUDGETS_API DescribeSubscribersForNotificationResult();
    AWS_BUDGETS_API DescribeSubscribersForNotificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeSubscribersForNotificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of subscribers that are associated with a notification.</p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribers = value; }
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribers = std::move(value); }
    inline DescribeSubscribersForNotificationResult& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}
    inline DescribeSubscribersForNotificationResult& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}
    inline DescribeSubscribersForNotificationResult& AddSubscribers(const Subscriber& value) { m_subscribers.push_back(value); return *this; }
    inline DescribeSubscribersForNotificationResult& AddSubscribers(Subscriber&& value) { m_subscribers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeSubscribersForNotificationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeSubscribersForNotificationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeSubscribersForNotificationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSubscribersForNotificationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSubscribersForNotificationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSubscribersForNotificationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Subscriber> m_subscribers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
