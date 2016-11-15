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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for SetSubscriptionAttributes action.</p>
   */
  class AWS_SNS_API SetSubscriptionAttributesRequest : public SNSRequest
  {
  public:
    SetSubscriptionAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline SetSubscriptionAttributesRequest& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline SetSubscriptionAttributesRequest& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline SetSubscriptionAttributesRequest& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The name of the attribute you want to set. Only a subset of the subscriptions
     * attributes are mutable.</p> <p>Valid values: <code>DeliveryPolicy</code> |
     * <code>RawMessageDelivery</code> </p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the subscriptions
     * attributes are mutable.</p> <p>Valid values: <code>DeliveryPolicy</code> |
     * <code>RawMessageDelivery</code> </p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the subscriptions
     * attributes are mutable.</p> <p>Valid values: <code>DeliveryPolicy</code> |
     * <code>RawMessageDelivery</code> </p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the subscriptions
     * attributes are mutable.</p> <p>Valid values: <code>DeliveryPolicy</code> |
     * <code>RawMessageDelivery</code> </p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the subscriptions
     * attributes are mutable.</p> <p>Valid values: <code>DeliveryPolicy</code> |
     * <code>RawMessageDelivery</code> </p>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute you want to set. Only a subset of the subscriptions
     * attributes are mutable.</p> <p>Valid values: <code>DeliveryPolicy</code> |
     * <code>RawMessageDelivery</code> </p>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute you want to set. Only a subset of the subscriptions
     * attributes are mutable.</p> <p>Valid values: <code>DeliveryPolicy</code> |
     * <code>RawMessageDelivery</code> </p>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:
    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet;
    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;
    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
