/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * Subscriber model. Each notification may contain multiple subscribers with
   * different addresses.
   */
  class AWS_BUDGETS_API Subscriber
  {
  public:
    Subscriber();
    Subscriber(const Aws::Utils::Json::JsonValue& jsonValue);
    Subscriber& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const SubscriptionType& GetSubscriptionType() const{ return m_subscriptionType; }

    
    inline void SetSubscriptionType(const SubscriptionType& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }

    
    inline void SetSubscriptionType(SubscriptionType&& value) { m_subscriptionTypeHasBeenSet = true; m_subscriptionType = value; }

    
    inline Subscriber& WithSubscriptionType(const SubscriptionType& value) { SetSubscriptionType(value); return *this;}

    
    inline Subscriber& WithSubscriptionType(SubscriptionType&& value) { SetSubscriptionType(value); return *this;}

    
    inline const Aws::String& GetAddress() const{ return m_address; }

    
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = value; }

    
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    
    inline Subscriber& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    
    inline Subscriber& WithAddress(Aws::String&& value) { SetAddress(value); return *this;}

    
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
