/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SHIELD_API GetSubscriptionStateResult
  {
  public:
    GetSubscriptionStateResult();
    GetSubscriptionStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSubscriptionStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
