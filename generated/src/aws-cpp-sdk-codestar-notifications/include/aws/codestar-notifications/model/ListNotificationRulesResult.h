/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-notifications/model/NotificationRuleSummary.h>
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
namespace CodeStarNotifications
{
namespace Model
{
  class ListNotificationRulesResult
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesResult() = default;
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotificationRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline const Aws::Vector<NotificationRuleSummary>& GetNotificationRules() const { return m_notificationRules; }
    template<typename NotificationRulesT = Aws::Vector<NotificationRuleSummary>>
    void SetNotificationRules(NotificationRulesT&& value) { m_notificationRulesHasBeenSet = true; m_notificationRules = std::forward<NotificationRulesT>(value); }
    template<typename NotificationRulesT = Aws::Vector<NotificationRuleSummary>>
    ListNotificationRulesResult& WithNotificationRules(NotificationRulesT&& value) { SetNotificationRules(std::forward<NotificationRulesT>(value)); return *this;}
    template<typename NotificationRulesT = NotificationRuleSummary>
    ListNotificationRulesResult& AddNotificationRules(NotificationRulesT&& value) { m_notificationRulesHasBeenSet = true; m_notificationRules.emplace_back(std::forward<NotificationRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotificationRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NotificationRuleSummary> m_notificationRules;
    bool m_notificationRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
