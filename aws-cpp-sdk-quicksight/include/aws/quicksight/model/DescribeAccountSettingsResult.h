/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccountSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeAccountSettingsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAccountSettingsResult();
    AWS_QUICKSIGHT_API DescribeAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon QuickSight settings for this Amazon Web Services account. This
     * information includes the edition of Amazon Amazon QuickSight that you subscribed
     * to (Standard or Enterprise) and the notification email for the Amazon QuickSight
     * subscription. </p> <p>In the QuickSight console, the Amazon QuickSight
     * subscription is sometimes referred to as a QuickSight "account" even though it's
     * technically not an account by itself. Instead, it's a subscription to the Amazon
     * QuickSight service for your Amazon Web Services account. The edition that you
     * subscribe to applies to Amazon QuickSight in every Amazon Web Services Region
     * where you use it.</p>
     */
    inline const AccountSettings& GetAccountSettings() const{ return m_accountSettings; }

    /**
     * <p>The Amazon QuickSight settings for this Amazon Web Services account. This
     * information includes the edition of Amazon Amazon QuickSight that you subscribed
     * to (Standard or Enterprise) and the notification email for the Amazon QuickSight
     * subscription. </p> <p>In the QuickSight console, the Amazon QuickSight
     * subscription is sometimes referred to as a QuickSight "account" even though it's
     * technically not an account by itself. Instead, it's a subscription to the Amazon
     * QuickSight service for your Amazon Web Services account. The edition that you
     * subscribe to applies to Amazon QuickSight in every Amazon Web Services Region
     * where you use it.</p>
     */
    inline void SetAccountSettings(const AccountSettings& value) { m_accountSettings = value; }

    /**
     * <p>The Amazon QuickSight settings for this Amazon Web Services account. This
     * information includes the edition of Amazon Amazon QuickSight that you subscribed
     * to (Standard or Enterprise) and the notification email for the Amazon QuickSight
     * subscription. </p> <p>In the QuickSight console, the Amazon QuickSight
     * subscription is sometimes referred to as a QuickSight "account" even though it's
     * technically not an account by itself. Instead, it's a subscription to the Amazon
     * QuickSight service for your Amazon Web Services account. The edition that you
     * subscribe to applies to Amazon QuickSight in every Amazon Web Services Region
     * where you use it.</p>
     */
    inline void SetAccountSettings(AccountSettings&& value) { m_accountSettings = std::move(value); }

    /**
     * <p>The Amazon QuickSight settings for this Amazon Web Services account. This
     * information includes the edition of Amazon Amazon QuickSight that you subscribed
     * to (Standard or Enterprise) and the notification email for the Amazon QuickSight
     * subscription. </p> <p>In the QuickSight console, the Amazon QuickSight
     * subscription is sometimes referred to as a QuickSight "account" even though it's
     * technically not an account by itself. Instead, it's a subscription to the Amazon
     * QuickSight service for your Amazon Web Services account. The edition that you
     * subscribe to applies to Amazon QuickSight in every Amazon Web Services Region
     * where you use it.</p>
     */
    inline DescribeAccountSettingsResult& WithAccountSettings(const AccountSettings& value) { SetAccountSettings(value); return *this;}

    /**
     * <p>The Amazon QuickSight settings for this Amazon Web Services account. This
     * information includes the edition of Amazon Amazon QuickSight that you subscribed
     * to (Standard or Enterprise) and the notification email for the Amazon QuickSight
     * subscription. </p> <p>In the QuickSight console, the Amazon QuickSight
     * subscription is sometimes referred to as a QuickSight "account" even though it's
     * technically not an account by itself. Instead, it's a subscription to the Amazon
     * QuickSight service for your Amazon Web Services account. The edition that you
     * subscribe to applies to Amazon QuickSight in every Amazon Web Services Region
     * where you use it.</p>
     */
    inline DescribeAccountSettingsResult& WithAccountSettings(AccountSettings&& value) { SetAccountSettings(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeAccountSettingsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    AccountSettings m_accountSettings;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
