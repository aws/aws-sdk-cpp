/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/NotificationConfigurationSummary.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class ListNotificationConfigurationsResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListNotificationConfigurationsResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of notification configurations.</p>
     */
    inline const Aws::Vector<NotificationConfigurationSummary>& GetNotificationConfigurationList() const{ return m_notificationConfigurationList; }
    inline void SetNotificationConfigurationList(const Aws::Vector<NotificationConfigurationSummary>& value) { m_notificationConfigurationList = value; }
    inline void SetNotificationConfigurationList(Aws::Vector<NotificationConfigurationSummary>&& value) { m_notificationConfigurationList = std::move(value); }
    inline ListNotificationConfigurationsResult& WithNotificationConfigurationList(const Aws::Vector<NotificationConfigurationSummary>& value) { SetNotificationConfigurationList(value); return *this;}
    inline ListNotificationConfigurationsResult& WithNotificationConfigurationList(Aws::Vector<NotificationConfigurationSummary>&& value) { SetNotificationConfigurationList(std::move(value)); return *this;}
    inline ListNotificationConfigurationsResult& AddNotificationConfigurationList(const NotificationConfigurationSummary& value) { m_notificationConfigurationList.push_back(value); return *this; }
    inline ListNotificationConfigurationsResult& AddNotificationConfigurationList(NotificationConfigurationSummary&& value) { m_notificationConfigurationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNotificationConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNotificationConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNotificationConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNotificationConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationConfigurationSummary> m_notificationConfigurationList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
