/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Notification.h>
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
   * <p> Response of GetNotificationsForBudget </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudgetResponse">AWS
   * API Reference</a></p>
   */
  class DescribeNotificationsForBudgetResult
  {
  public:
    AWS_BUDGETS_API DescribeNotificationsForBudgetResult();
    AWS_BUDGETS_API DescribeNotificationsForBudgetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeNotificationsForBudgetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of notifications that are associated with a budget.</p>
     */
    inline const Aws::Vector<Notification>& GetNotifications() const{ return m_notifications; }

    /**
     * <p>A list of notifications that are associated with a budget.</p>
     */
    inline void SetNotifications(const Aws::Vector<Notification>& value) { m_notifications = value; }

    /**
     * <p>A list of notifications that are associated with a budget.</p>
     */
    inline void SetNotifications(Aws::Vector<Notification>&& value) { m_notifications = std::move(value); }

    /**
     * <p>A list of notifications that are associated with a budget.</p>
     */
    inline DescribeNotificationsForBudgetResult& WithNotifications(const Aws::Vector<Notification>& value) { SetNotifications(value); return *this;}

    /**
     * <p>A list of notifications that are associated with a budget.</p>
     */
    inline DescribeNotificationsForBudgetResult& WithNotifications(Aws::Vector<Notification>&& value) { SetNotifications(std::move(value)); return *this;}

    /**
     * <p>A list of notifications that are associated with a budget.</p>
     */
    inline DescribeNotificationsForBudgetResult& AddNotifications(const Notification& value) { m_notifications.push_back(value); return *this; }

    /**
     * <p>A list of notifications that are associated with a budget.</p>
     */
    inline DescribeNotificationsForBudgetResult& AddNotifications(Notification&& value) { m_notifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline DescribeNotificationsForBudgetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline DescribeNotificationsForBudgetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token in the service response that indicates the next set of
     * results that you can retrieve.</p>
     */
    inline DescribeNotificationsForBudgetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Notification> m_notifications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
