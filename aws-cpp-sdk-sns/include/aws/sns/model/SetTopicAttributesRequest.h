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
   * <p>Input for SetTopicAttributes action.</p>
   */
  class AWS_SNS_API SetTopicAttributesRequest : public SNSRequest
  {
  public:
    SetTopicAttributesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline SetTopicAttributesRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline SetTopicAttributesRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline SetTopicAttributesRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    /**
     * <p>The name of the attribute you want to set. Only a subset of the topic's
     * attributes are mutable.</p> <p>Valid values: <code>Policy</code> |
     * <code>DisplayName</code> | <code>DeliveryPolicy</code> </p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the topic's
     * attributes are mutable.</p> <p>Valid values: <code>Policy</code> |
     * <code>DisplayName</code> | <code>DeliveryPolicy</code> </p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the topic's
     * attributes are mutable.</p> <p>Valid values: <code>Policy</code> |
     * <code>DisplayName</code> | <code>DeliveryPolicy</code> </p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the topic's
     * attributes are mutable.</p> <p>Valid values: <code>Policy</code> |
     * <code>DisplayName</code> | <code>DeliveryPolicy</code> </p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute you want to set. Only a subset of the topic's
     * attributes are mutable.</p> <p>Valid values: <code>Policy</code> |
     * <code>DisplayName</code> | <code>DeliveryPolicy</code> </p>
     */
    inline SetTopicAttributesRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute you want to set. Only a subset of the topic's
     * attributes are mutable.</p> <p>Valid values: <code>Policy</code> |
     * <code>DisplayName</code> | <code>DeliveryPolicy</code> </p>
     */
    inline SetTopicAttributesRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute you want to set. Only a subset of the topic's
     * attributes are mutable.</p> <p>Valid values: <code>Policy</code> |
     * <code>DisplayName</code> | <code>DeliveryPolicy</code> </p>
     */
    inline SetTopicAttributesRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}

    /**
     * <p>The new value for the attribute.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The new value for the attribute.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The new value for the attribute.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The new value for the attribute.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The new value for the attribute.</p>
     */
    inline SetTopicAttributesRequest& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The new value for the attribute.</p>
     */
    inline SetTopicAttributesRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The new value for the attribute.</p>
     */
    inline SetTopicAttributesRequest& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;
    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
