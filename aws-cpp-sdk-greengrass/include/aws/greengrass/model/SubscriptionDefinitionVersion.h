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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Subscription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a subscription definition version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/SubscriptionDefinitionVersion">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API SubscriptionDefinitionVersion
  {
  public:
    SubscriptionDefinitionVersion();
    SubscriptionDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    SubscriptionDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of subscriptions.
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const{ return m_subscriptions; }

    /**
     * A list of subscriptions.
     */
    inline bool SubscriptionsHasBeenSet() const { return m_subscriptionsHasBeenSet; }

    /**
     * A list of subscriptions.
     */
    inline void SetSubscriptions(const Aws::Vector<Subscription>& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = value; }

    /**
     * A list of subscriptions.
     */
    inline void SetSubscriptions(Aws::Vector<Subscription>&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = std::move(value); }

    /**
     * A list of subscriptions.
     */
    inline SubscriptionDefinitionVersion& WithSubscriptions(const Aws::Vector<Subscription>& value) { SetSubscriptions(value); return *this;}

    /**
     * A list of subscriptions.
     */
    inline SubscriptionDefinitionVersion& WithSubscriptions(Aws::Vector<Subscription>&& value) { SetSubscriptions(std::move(value)); return *this;}

    /**
     * A list of subscriptions.
     */
    inline SubscriptionDefinitionVersion& AddSubscriptions(const Subscription& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.push_back(value); return *this; }

    /**
     * A list of subscriptions.
     */
    inline SubscriptionDefinitionVersion& AddSubscriptions(Subscription&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Subscription> m_subscriptions;
    bool m_subscriptionsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
