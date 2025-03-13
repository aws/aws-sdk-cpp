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
    AWS_CODECATALYST_API GetSubscriptionResult() = default;
    AWS_CODECATALYST_API GetSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of the billing plan for the space.</p>
     */
    inline const Aws::String& GetSubscriptionType() const { return m_subscriptionType; }
    template<typename SubscriptionTypeT = Aws::String>
    void SetSubscriptionType(SubscriptionTypeT&& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = std::forward<SubscriptionTypeT>(value); }
    template<typename SubscriptionTypeT = Aws::String>
    GetSubscriptionResult& WithSubscriptionType(SubscriptionTypeT&& value) { SetSubscriptionType(std::forward<SubscriptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the Amazon Web Services account used for billing for the
     * space.</p>
     */
    inline const Aws::String& GetAwsAccountName() const { return m_awsAccountName; }
    template<typename AwsAccountNameT = Aws::String>
    void SetAwsAccountName(AwsAccountNameT&& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName = std::forward<AwsAccountNameT>(value); }
    template<typename AwsAccountNameT = Aws::String>
    GetSubscriptionResult& WithAwsAccountName(AwsAccountNameT&& value) { SetAwsAccountName(std::forward<AwsAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the billing plan that the space will be changed to at the start
     * of the next billing cycle. This applies only to changes that reduce the
     * functionality available for the space. Billing plan changes that increase
     * functionality are applied immediately. For more information, see <a
     * href="https://codecatalyst.aws/explore/pricing">Pricing</a>.</p>
     */
    inline const Aws::String& GetPendingSubscriptionType() const { return m_pendingSubscriptionType; }
    template<typename PendingSubscriptionTypeT = Aws::String>
    void SetPendingSubscriptionType(PendingSubscriptionTypeT&& value) { m_pendingSubscriptionTypeHasBeenSet = true; m_pendingSubscriptionType = std::forward<PendingSubscriptionTypeT>(value); }
    template<typename PendingSubscriptionTypeT = Aws::String>
    GetSubscriptionResult& WithPendingSubscriptionType(PendingSubscriptionTypeT&& value) { SetPendingSubscriptionType(std::forward<PendingSubscriptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time the pending change will be applied to the space, in
     * coordinated universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetPendingSubscriptionStartTime() const { return m_pendingSubscriptionStartTime; }
    template<typename PendingSubscriptionStartTimeT = Aws::Utils::DateTime>
    void SetPendingSubscriptionStartTime(PendingSubscriptionStartTimeT&& value) { m_pendingSubscriptionStartTimeHasBeenSet = true; m_pendingSubscriptionStartTime = std::forward<PendingSubscriptionStartTimeT>(value); }
    template<typename PendingSubscriptionStartTimeT = Aws::Utils::DateTime>
    GetSubscriptionResult& WithPendingSubscriptionStartTime(PendingSubscriptionStartTimeT&& value) { SetPendingSubscriptionStartTime(std::forward<PendingSubscriptionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionType;
    bool m_subscriptionTypeHasBeenSet = false;

    Aws::String m_awsAccountName;
    bool m_awsAccountNameHasBeenSet = false;

    Aws::String m_pendingSubscriptionType;
    bool m_pendingSubscriptionTypeHasBeenSet = false;

    Aws::Utils::DateTime m_pendingSubscriptionStartTime{};
    bool m_pendingSubscriptionStartTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
