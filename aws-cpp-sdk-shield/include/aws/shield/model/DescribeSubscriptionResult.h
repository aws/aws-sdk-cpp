/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/Subscription.h>
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
namespace Shield
{
namespace Model
{
  class DescribeSubscriptionResult
  {
  public:
    AWS_SHIELD_API DescribeSubscriptionResult();
    AWS_SHIELD_API DescribeSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Shield Advanced subscription details for an account.</p>
     */
    inline const Subscription& GetSubscription() const{ return m_subscription; }

    /**
     * <p>The Shield Advanced subscription details for an account.</p>
     */
    inline void SetSubscription(const Subscription& value) { m_subscription = value; }

    /**
     * <p>The Shield Advanced subscription details for an account.</p>
     */
    inline void SetSubscription(Subscription&& value) { m_subscription = std::move(value); }

    /**
     * <p>The Shield Advanced subscription details for an account.</p>
     */
    inline DescribeSubscriptionResult& WithSubscription(const Subscription& value) { SetSubscription(value); return *this;}

    /**
     * <p>The Shield Advanced subscription details for an account.</p>
     */
    inline DescribeSubscriptionResult& WithSubscription(Subscription&& value) { SetSubscription(std::move(value)); return *this;}

  private:

    Subscription m_subscription;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
