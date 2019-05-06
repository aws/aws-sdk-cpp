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
#include <aws/shield/ShieldRequest.h>
#include <aws/shield/model/AutoRenew.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API UpdateSubscriptionRequest : public ShieldRequest
  {
  public:
    UpdateSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscription"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When you initally create a subscription, <code>AutoRenew</code> is set to
     * <code>ENABLED</code>. If <code>ENABLED</code>, the subscription will be
     * automatically renewed at the end of the existing subscription period. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline const AutoRenew& GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>When you initally create a subscription, <code>AutoRenew</code> is set to
     * <code>ENABLED</code>. If <code>ENABLED</code>, the subscription will be
     * automatically renewed at the end of the existing subscription period. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>When you initally create a subscription, <code>AutoRenew</code> is set to
     * <code>ENABLED</code>. If <code>ENABLED</code>, the subscription will be
     * automatically renewed at the end of the existing subscription period. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline void SetAutoRenew(const AutoRenew& value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>When you initally create a subscription, <code>AutoRenew</code> is set to
     * <code>ENABLED</code>. If <code>ENABLED</code>, the subscription will be
     * automatically renewed at the end of the existing subscription period. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline void SetAutoRenew(AutoRenew&& value) { m_autoRenewHasBeenSet = true; m_autoRenew = std::move(value); }

    /**
     * <p>When you initally create a subscription, <code>AutoRenew</code> is set to
     * <code>ENABLED</code>. If <code>ENABLED</code>, the subscription will be
     * automatically renewed at the end of the existing subscription period. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline UpdateSubscriptionRequest& WithAutoRenew(const AutoRenew& value) { SetAutoRenew(value); return *this;}

    /**
     * <p>When you initally create a subscription, <code>AutoRenew</code> is set to
     * <code>ENABLED</code>. If <code>ENABLED</code>, the subscription will be
     * automatically renewed at the end of the existing subscription period. You can
     * change this by submitting an <code>UpdateSubscription</code> request. If the
     * <code>UpdateSubscription</code> request does not included a value for
     * <code>AutoRenew</code>, the existing value for <code>AutoRenew</code> remains
     * unchanged.</p>
     */
    inline UpdateSubscriptionRequest& WithAutoRenew(AutoRenew&& value) { SetAutoRenew(std::move(value)); return *this;}

  private:

    AutoRenew m_autoRenew;
    bool m_autoRenewHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
