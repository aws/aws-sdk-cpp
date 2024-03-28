/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class GetSubscriptionResult
  {
  public:
    AWS_CODECATALYST_API GetSubscriptionResult();
    AWS_CODECATALYST_API GetSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline const Aws::String& GetSubscriptionType() const{ return m_subscriptionType; }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline void SetSubscriptionType(const Aws::String& value) { m_subscriptionType = value; }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline void SetSubscriptionType(Aws::String&& value) { m_subscriptionType = std::move(value); }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline void SetSubscriptionType(const char* value) { m_subscriptionType.assign(value); }

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionType(const Aws::String& value) { SetSubscriptionType(value); return *this;}

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionType(Aws::String&& value) { SetSubscriptionType(std::move(value)); return *this;}

    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline GetSubscriptionResult& WithSubscriptionType(const char* value) { SetSubscriptionType(value); return *this;}


    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline const Aws::String& GetAwsAccountName() const{ return m_awsAccountName; }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline void SetAwsAccountName(const Aws::String& value) { m_awsAccountName = value; }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline void SetAwsAccountName(Aws::String&& value) { m_awsAccountName = std::move(value); }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline void SetAwsAccountName(const char* value) { m_awsAccountName.assign(value); }

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline GetSubscriptionResult& WithAwsAccountName(const Aws::String& value) { SetAwsAccountName(value); return *this;}

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline GetSubscriptionResult& WithAwsAccountName(Aws::String&& value) { SetAwsAccountName(std::move(value)); return *this;}

    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline GetSubscriptionResult& WithAwsAccountName(const char* value) { SetAwsAccountName(value); return *this;}


    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline const Aws::String& GetPendingSubscriptionType() const{ return m_pendingSubscriptionType; }

    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline void SetPendingSubscriptionType(const Aws::String& value) { m_pendingSubscriptionType = value; }

    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline void SetPendingSubscriptionType(Aws::String&& value) { m_pendingSubscriptionType = std::move(value); }

    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline void SetPendingSubscriptionType(const char* value) { m_pendingSubscriptionType.assign(value); }

    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline GetSubscriptionResult& WithPendingSubscriptionType(const Aws::String& value) { SetPendingSubscriptionType(value); return *this;}

    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline GetSubscriptionResult& WithPendingSubscriptionType(Aws::String&& value) { SetPendingSubscriptionType(std::move(value)); return *this;}

    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline GetSubscriptionResult& WithPendingSubscriptionType(const char* value) { SetPendingSubscriptionType(value); return *this;}


    /**
     * <p>The day and time the pending change will be applied to the space, in
     * coordinated universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetPendingSubscriptionStartTime() const{ return m_pendingSubscriptionStartTime; }

    /**
     * <p>The day and time the pending change will be applied to the space, in
     * coordinated universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetPendingSubscriptionStartTime(const Aws::Utils::DateTime& value) { m_pendingSubscriptionStartTime = value; }

    /**
     * <p>The day and time the pending change will be applied to the space, in
     * coordinated universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline void SetPendingSubscriptionStartTime(Aws::Utils::DateTime&& value) { m_pendingSubscriptionStartTime = std::move(value); }

    /**
     * <p>The day and time the pending change will be applied to the space, in
     * coordinated universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetSubscriptionResult& WithPendingSubscriptionStartTime(const Aws::Utils::DateTime& value) { SetPendingSubscriptionStartTime(value); return *this;}

    /**
     * <p>The day and time the pending change will be applied to the space, in
     * coordinated universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline GetSubscriptionResult& WithPendingSubscriptionStartTime(Aws::Utils::DateTime&& value) { SetPendingSubscriptionStartTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_subscriptionType;

    Aws::String m_awsAccountName;

    Aws::String m_pendingSubscriptionType;

    Aws::Utils::DateTime m_pendingSubscriptionStartTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
