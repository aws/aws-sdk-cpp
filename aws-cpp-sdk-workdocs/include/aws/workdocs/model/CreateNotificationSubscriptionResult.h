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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/Subscription.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API CreateNotificationSubscriptionResult
  {
  public:
    CreateNotificationSubscriptionResult();
    CreateNotificationSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateNotificationSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The subscription.</p>
     */
    inline const Subscription& GetSubscription() const{ return m_subscription; }

    /**
     * <p>The subscription.</p>
     */
    inline void SetSubscription(const Subscription& value) { m_subscription = value; }

    /**
     * <p>The subscription.</p>
     */
    inline void SetSubscription(Subscription&& value) { m_subscription = std::move(value); }

    /**
     * <p>The subscription.</p>
     */
    inline CreateNotificationSubscriptionResult& WithSubscription(const Subscription& value) { SetSubscription(value); return *this;}

    /**
     * <p>The subscription.</p>
     */
    inline CreateNotificationSubscriptionResult& WithSubscription(Subscription&& value) { SetSubscription(std::move(value)); return *this;}

  private:

    Subscription m_subscription;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
