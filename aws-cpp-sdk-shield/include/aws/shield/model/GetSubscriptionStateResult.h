/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/SubscriptionState.h>
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
  class GetSubscriptionStateResult
  {
  public:
    AWS_SHIELD_API GetSubscriptionStateResult();
    AWS_SHIELD_API GetSubscriptionStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API GetSubscriptionStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the subscription.</p>
     */
    inline const SubscriptionState& GetSubscriptionState() const{ return m_subscriptionState; }

    /**
     * <p>The status of the subscription.</p>
     */
    inline void SetSubscriptionState(const SubscriptionState& value) { m_subscriptionState = value; }

    /**
     * <p>The status of the subscription.</p>
     */
    inline void SetSubscriptionState(SubscriptionState&& value) { m_subscriptionState = std::move(value); }

    /**
     * <p>The status of the subscription.</p>
     */
    inline GetSubscriptionStateResult& WithSubscriptionState(const SubscriptionState& value) { SetSubscriptionState(value); return *this;}

    /**
     * <p>The status of the subscription.</p>
     */
    inline GetSubscriptionStateResult& WithSubscriptionState(SubscriptionState&& value) { SetSubscriptionState(std::move(value)); return *this;}

  private:

    SubscriptionState m_subscriptionState;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
