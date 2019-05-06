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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for Subscribe action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SubscribeInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API SubscribeRequest : public SNSRequest
  {
  public:
    SubscribeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Subscribe"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline SubscribeRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline SubscribeRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline SubscribeRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline SubscribeRequest& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline SubscribeRequest& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol you want to use. Supported protocols include:</p> <ul> <li> <p>
     * <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an AWS Lambda
     * function.</p> </li> </ul>
     */
    inline SubscribeRequest& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline SubscribeRequest& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline SubscribeRequest& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the endpoint is
     * an URL beginning with "https://"</p> </li> <li> <p>For the <code>https</code>
     * protocol, the endpoint is a URL beginning with "https://"</p> </li> <li> <p>For
     * the <code>email</code> protocol, the endpoint is an email address</p> </li> <li>
     * <p>For the <code>email-json</code> protocol, the endpoint is an email
     * address</p> </li> <li> <p>For the <code>sms</code> protocol, the endpoint is a
     * phone number of an SMS-enabled device</p> </li> <li> <p>For the <code>sqs</code>
     * protocol, the endpoint is the ARN of an Amazon SQS queue</p> </li> <li> <p>For
     * the <code>application</code> protocol, the endpoint is the EndpointArn of a
     * mobile app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol,
     * the endpoint is the ARN of an AWS Lambda function.</p> </li> </ul>
     */
    inline SubscribeRequest& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>false</code>, the response includes the ARN for
     * confirmed subscriptions, but it includes an ARN value of "pending subscription"
     * for subscriptions that are not yet confirmed. A subscription becomes confirmed
     * when the subscriber calls the <code>ConfirmSubscription</code> action with a
     * confirmation token.</p> <p>If you set this parameter to <code>true</code>, the
     * response includes the ARN in all cases, even if the subscription is not yet
     * confirmed.</p> <p>The default value is <code>false</code>.</p>
     */
    inline bool GetReturnSubscriptionArn() const{ return m_returnSubscriptionArn; }

    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>false</code>, the response includes the ARN for
     * confirmed subscriptions, but it includes an ARN value of "pending subscription"
     * for subscriptions that are not yet confirmed. A subscription becomes confirmed
     * when the subscriber calls the <code>ConfirmSubscription</code> action with a
     * confirmation token.</p> <p>If you set this parameter to <code>true</code>, the
     * response includes the ARN in all cases, even if the subscription is not yet
     * confirmed.</p> <p>The default value is <code>false</code>.</p>
     */
    inline bool ReturnSubscriptionArnHasBeenSet() const { return m_returnSubscriptionArnHasBeenSet; }

    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>false</code>, the response includes the ARN for
     * confirmed subscriptions, but it includes an ARN value of "pending subscription"
     * for subscriptions that are not yet confirmed. A subscription becomes confirmed
     * when the subscriber calls the <code>ConfirmSubscription</code> action with a
     * confirmation token.</p> <p>If you set this parameter to <code>true</code>, the
     * response includes the ARN in all cases, even if the subscription is not yet
     * confirmed.</p> <p>The default value is <code>false</code>.</p>
     */
    inline void SetReturnSubscriptionArn(bool value) { m_returnSubscriptionArnHasBeenSet = true; m_returnSubscriptionArn = value; }

    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>false</code>, the response includes the ARN for
     * confirmed subscriptions, but it includes an ARN value of "pending subscription"
     * for subscriptions that are not yet confirmed. A subscription becomes confirmed
     * when the subscriber calls the <code>ConfirmSubscription</code> action with a
     * confirmation token.</p> <p>If you set this parameter to <code>true</code>, the
     * response includes the ARN in all cases, even if the subscription is not yet
     * confirmed.</p> <p>The default value is <code>false</code>.</p>
     */
    inline SubscribeRequest& WithReturnSubscriptionArn(bool value) { SetReturnSubscriptionArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    bool m_returnSubscriptionArn;
    bool m_returnSubscriptionArnHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
