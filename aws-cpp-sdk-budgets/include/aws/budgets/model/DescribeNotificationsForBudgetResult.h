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
#include <aws/budgets/model/Notification.h>

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
   * Response of GetNotificationsForBudget
   */
  class AWS_BUDGETS_API DescribeNotificationsForBudgetResult
  {
  public:
    DescribeNotificationsForBudgetResult();
    DescribeNotificationsForBudgetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeNotificationsForBudgetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<Notification>& GetNotifications() const{ return m_notifications; }

    
    inline void SetNotifications(const Aws::Vector<Notification>& value) { m_notifications = value; }

    
    inline void SetNotifications(Aws::Vector<Notification>&& value) { m_notifications = value; }

    
    inline DescribeNotificationsForBudgetResult& WithNotifications(const Aws::Vector<Notification>& value) { SetNotifications(value); return *this;}

    
    inline DescribeNotificationsForBudgetResult& WithNotifications(Aws::Vector<Notification>&& value) { SetNotifications(value); return *this;}

    
    inline DescribeNotificationsForBudgetResult& AddNotifications(const Notification& value) { m_notifications.push_back(value); return *this; }

    
    inline DescribeNotificationsForBudgetResult& AddNotifications(Notification&& value) { m_notifications.push_back(value); return *this; }

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeNotificationsForBudgetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeNotificationsForBudgetResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    
    inline DescribeNotificationsForBudgetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Notification> m_notifications;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
