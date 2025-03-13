/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * example, an email subscriber has the following parameters:</p> <ul> <li> <p>A
   * <code>subscriptionType</code> of <code>EMAIL</code> </p> </li> <li> <p>An
   * <code>address</code> of <code>example@example.com</code> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/Subscriber">AWS
   * API Reference</a></p>
   */
  class Subscriber
  {
  public:
    AWS_BUDGETS_API Subscriber() = default;
    AWS_BUDGETS_API Subscriber(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Subscriber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of notification that Amazon Web Services sends to a subscriber.</p>
     */
    inline SubscriptionType GetSubscriptionType() const { return m_subscriptionType; }
    inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }
    inline void SetSubscriptionType(SubscriptionType value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }
    inline Subscriber& WithSubscriptionType(SubscriptionType value) { SetSubscriptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address that Amazon Web Services sends budget notifications to, either an
     * SNS topic or an email.</p> <p>When you create a subscriber, the value of
     * <code>Address</code> can't contain line breaks.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    Subscriber& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}
  private:

    SubscriptionType m_subscriptionType{SubscriptionType::NOT_SET};
    bool m_subscriptionTypeHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
