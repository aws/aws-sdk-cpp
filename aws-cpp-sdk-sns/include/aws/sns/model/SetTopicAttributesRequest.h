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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for SetTopicAttributes action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetTopicAttributesInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API SetTopicAttributesRequest : public SNSRequest
  {
  public:
    SetTopicAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTopicAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

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
    inline SetTopicAttributesRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline SetTopicAttributesRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline SetTopicAttributesRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline SetTopicAttributesRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> </ul> <p>The following attribute applies only
     * to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> - The ID of an AWS-managed customer
     * master key (CMK) for Amazon SNS or a custom CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>AWS Key Management Service API Reference</i>. </p> </li> </ul>
     */
    inline SetTopicAttributesRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The new value for the attribute.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The new value for the attribute.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The new value for the attribute.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The new value for the attribute.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

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
    inline SetTopicAttributesRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

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
