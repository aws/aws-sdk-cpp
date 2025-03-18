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
    AWS_IOTMANAGEDINTEGRATIONS_API ListNotificationConfigurationsResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ListNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of notification configurations.</p>
     */
    inline const Aws::Vector<NotificationConfigurationSummary>& GetNotificationConfigurationList() const { return m_notificationConfigurationList; }
    template<typename NotificationConfigurationListT = Aws::Vector<NotificationConfigurationSummary>>
    void SetNotificationConfigurationList(NotificationConfigurationListT&& value) { m_notificationConfigurationListHasBeenSet = true; m_notificationConfigurationList = std::forward<NotificationConfigurationListT>(value); }
    template<typename NotificationConfigurationListT = Aws::Vector<NotificationConfigurationSummary>>
    ListNotificationConfigurationsResult& WithNotificationConfigurationList(NotificationConfigurationListT&& value) { SetNotificationConfigurationList(std::forward<NotificationConfigurationListT>(value)); return *this;}
    template<typename NotificationConfigurationListT = NotificationConfigurationSummary>
    ListNotificationConfigurationsResult& AddNotificationConfigurationList(NotificationConfigurationListT&& value) { m_notificationConfigurationListHasBeenSet = true; m_notificationConfigurationList.emplace_back(std::forward<NotificationConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotificationConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotificationConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationConfigurationSummary> m_notificationConfigurationList;
    bool m_notificationConfigurationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
