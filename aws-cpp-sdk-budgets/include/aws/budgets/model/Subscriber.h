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
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/SubscriptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The subscriber to a budget notification. The subscriber consists of a
   * subscription type and either an Amazon SNS topic or an email address.</p> <p>For
   * example, an email subscriber would have the following parameters:</p> <ul> <li>
   * <p>A <code>subscriptionType</code> of <code>EMAIL</code> </p> </li> <li> <p>An
   * <code>address</code> of <code>example@example.com</code> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Subscriber">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API Subscriber
  {
  public:
    Subscriber();
    Subscriber(Aws::Utils::Json::JsonView jsonValue);
    Subscriber& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of notification that AWS sends to a subscriber.</p>
     */
    inline const SubscriptionType& GetSubscriptionType() const{ return m_subscriptionType; }

    /**
     * <p>The type of notification that AWS sends to a subscriber.</p>
     */
    inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }

    /**
     * <p>The type of notification that AWS sends to a subscriber.</p>
     */
    inline void SetSubscriptionType(const SubscriptionType& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }

    /**
     * <p>The type of notification that AWS sends to a subscriber.</p>
     */
    inline void SetSubscriptionType(SubscriptionType&& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = std::move(value); }

    /**
     * <p>The type of notification that AWS sends to a subscriber.</p>
     */
    inline Subscriber& WithSubscriptionType(const SubscriptionType& value) { SetSubscriptionType(value); return *this;}

    /**
     * <p>The type of notification that AWS sends to a subscriber.</p>
     */
    inline Subscriber& WithSubscriptionType(SubscriptionType&& value) { SetSubscriptionType(std::move(value)); return *this;}


    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline Subscriber& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline Subscriber& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The address that AWS sends budget notifications to, either an SNS topic or an
     * email.</p> <p>AWS validates the address for a <code>CreateSubscriber</code>
     * request with the <code>.*</code> regex.</p>
     */
    inline Subscriber& WithAddress(const char* value) { SetAddress(value); return *this;}

  private:

    SubscriptionType m_subscriptionType;
    bool m_subscriptionTypeHasBeenSet;

    Aws::String m_address;
    bool m_addressHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
