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
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Subscription.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateSubscriptionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    CreateSubscriptionDefinitionVersionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriptionDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * subscription definition Id
     */
    inline const Aws::String& GetSubscriptionDefinitionId() const{ return m_subscriptionDefinitionId; }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(const Aws::String& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = value; }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(Aws::String&& value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId = std::move(value); }

    /**
     * subscription definition Id
     */
    inline void SetSubscriptionDefinitionId(const char* value) { m_subscriptionDefinitionIdHasBeenSet = true; m_subscriptionDefinitionId.assign(value); }

    /**
     * subscription definition Id
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(const Aws::String& value) { SetSubscriptionDefinitionId(value); return *this;}

    /**
     * subscription definition Id
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(Aws::String&& value) { SetSubscriptionDefinitionId(std::move(value)); return *this;}

    /**
     * subscription definition Id
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithSubscriptionDefinitionId(const char* value) { SetSubscriptionDefinitionId(value); return *this;}


    /**
     * Subscriptions in the version.
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const{ return m_subscriptions; }

    /**
     * Subscriptions in the version.
     */
    inline void SetSubscriptions(const Aws::Vector<Subscription>& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = value; }

    /**
     * Subscriptions in the version.
     */
    inline void SetSubscriptions(Aws::Vector<Subscription>&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = std::move(value); }

    /**
     * Subscriptions in the version.
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithSubscriptions(const Aws::Vector<Subscription>& value) { SetSubscriptions(value); return *this;}

    /**
     * Subscriptions in the version.
     */
    inline CreateSubscriptionDefinitionVersionRequest& WithSubscriptions(Aws::Vector<Subscription>&& value) { SetSubscriptions(std::move(value)); return *this;}

    /**
     * Subscriptions in the version.
     */
    inline CreateSubscriptionDefinitionVersionRequest& AddSubscriptions(const Subscription& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.push_back(value); return *this; }

    /**
     * Subscriptions in the version.
     */
    inline CreateSubscriptionDefinitionVersionRequest& AddSubscriptions(Subscription&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_subscriptionDefinitionId;
    bool m_subscriptionDefinitionIdHasBeenSet;

    Aws::Vector<Subscription> m_subscriptions;
    bool m_subscriptionsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
