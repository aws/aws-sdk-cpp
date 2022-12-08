/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Input for SetSubscriptionAttributes action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSubscriptionAttributesInput">AWS
   * API Reference</a></p>
   */
  class SetSubscriptionAttributesRequest : public SNSRequest
  {
  public:
    AWS_SNS_API SetSubscriptionAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetSubscriptionAttributes"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }

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
    inline SetSubscriptionAttributesRequest& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the subscription to modify.</p>
     */
    inline SetSubscriptionAttributesRequest& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}


    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * this action uses:</p> <ul> <li> <p> <code>DeliveryPolicy</code> – The policy
     * that defines how Amazon SNS retries failed deliveries to HTTP/S endpoints.</p>
     * </li> <li> <p> <code>FilterPolicy</code> – The simple JSON object that lets your
     * subscriber receive only a subset of messages, rather than receiving every
     * message published to the topic.</p> </li> <li> <p>
     * <code>FilterPolicyScope</code> – This attribute lets you choose the filtering
     * scope by using one of the following string value types:</p> <ul> <li> <p>
     * <code>MessageAttributes</code> (default) – The filter is applied on the message
     * attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is applied
     * on the message body.</p> </li> </ul> </li> <li> <p>
     * <code>RawMessageDelivery</code> – When set to <code>true</code>, enables raw
     * message delivery to Amazon SQS or HTTP/S endpoints. This eliminates the need for
     * the endpoints to process JSON formatting, which is otherwise created for Amazon
     * SNS metadata.</p> </li> <li> <p> <code>RedrivePolicy</code> – When specified,
     * sends undeliverable messages to the specified Amazon SQS dead-letter queue.
     * Messages that can't be delivered due to client errors (for example, when the
     * subscribed endpoint is unreachable) or server errors (for example, when the
     * service that powers the subscribed endpoint becomes unavailable) are held in the
     * dead-letter queue for further analysis or reprocessing.</p> </li> </ul> <p>The
     * following attribute applies only to Amazon Kinesis Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Kinesis Data Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a
     * trusted entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is
     * required for Kinesis Data Firehose delivery stream subscriptions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

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
    inline SetSubscriptionAttributesRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The new value for the attribute in JSON format.</p>
     */
    inline SetSubscriptionAttributesRequest& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
