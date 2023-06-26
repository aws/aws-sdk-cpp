/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/Notification.h>
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
namespace AuditManager
{
namespace Model
{
  class ListNotificationsResult
  {
  public:
    AWS_AUDITMANAGER_API ListNotificationsResult();
    AWS_AUDITMANAGER_API ListNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned list of notifications. </p>
     */
    inline const Aws::Vector<Notification>& GetNotifications() const{ return m_notifications; }

    /**
     * <p> The returned list of notifications. </p>
     */
    inline void SetNotifications(const Aws::Vector<Notification>& value) { m_notifications = value; }

    /**
     * <p> The returned list of notifications. </p>
     */
    inline void SetNotifications(Aws::Vector<Notification>&& value) { m_notifications = std::move(value); }

    /**
     * <p> The returned list of notifications. </p>
     */
    inline ListNotificationsResult& WithNotifications(const Aws::Vector<Notification>& value) { SetNotifications(value); return *this;}

    /**
     * <p> The returned list of notifications. </p>
     */
    inline ListNotificationsResult& WithNotifications(Aws::Vector<Notification>&& value) { SetNotifications(std::move(value)); return *this;}

    /**
     * <p> The returned list of notifications. </p>
     */
    inline ListNotificationsResult& AddNotifications(const Notification& value) { m_notifications.push_back(value); return *this; }

    /**
     * <p> The returned list of notifications. </p>
     */
    inline ListNotificationsResult& AddNotifications(Notification&& value) { m_notifications.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListNotificationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListNotificationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListNotificationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListNotificationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListNotificationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListNotificationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Notification> m_notifications;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
