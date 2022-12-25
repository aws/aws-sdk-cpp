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
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesResult();
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARNOTIFICATIONS_API ListNotificationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline ListNotificationRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline ListNotificationRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that can be used in a request to return the next batch
     * of the results.</p>
     */
    inline ListNotificationRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline const Aws::Vector<NotificationRuleSummary>& GetNotificationRules() const{ return m_notificationRules; }

    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline void SetNotificationRules(const Aws::Vector<NotificationRuleSummary>& value) { m_notificationRules = value; }

    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline void SetNotificationRules(Aws::Vector<NotificationRuleSummary>&& value) { m_notificationRules = std::move(value); }

    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline ListNotificationRulesResult& WithNotificationRules(const Aws::Vector<NotificationRuleSummary>& value) { SetNotificationRules(value); return *this;}

    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline ListNotificationRulesResult& WithNotificationRules(Aws::Vector<NotificationRuleSummary>&& value) { SetNotificationRules(std::move(value)); return *this;}

    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline ListNotificationRulesResult& AddNotificationRules(const NotificationRuleSummary& value) { m_notificationRules.push_back(value); return *this; }

    /**
     * <p>The list of notification rules for the Amazon Web Services account, by Amazon
     * Resource Name (ARN) and ID. </p>
     */
    inline ListNotificationRulesResult& AddNotificationRules(NotificationRuleSummary&& value) { m_notificationRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<NotificationRuleSummary> m_notificationRules;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
