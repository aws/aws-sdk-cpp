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
   * Input for Subscribe action.
   */
  class AWS_SNS_API SubscribeRequest : public SNSRequest
  {
  public:
    SubscribeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

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
    inline SubscribeRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline SubscribeRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    /**
     * <p>The protocol you want to use. Supported protocols include:</p>
    <ul>
     
     * <li>
<code>http</code> -- delivery of JSON-encoded message via HTTP POST</li>
  
     * <li>
<code>https</code> -- delivery of JSON-encoded message via HTTPS POST</li>

     * <li>
<code>email</code> -- delivery of message via SMTP</li>
     
     * <li>
<code>email-json</code> -- delivery of JSON-encoded message via SMTP</li>
 
     * <li>
<code>sms</code> -- delivery of message via SMS</li>
     
     * <li>
<code>sqs</code> -- delivery of JSON-encoded message to an Amazon SQS
     * queue</li>
      <li>
<code>application</code> -- delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</li>
    </ul>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p>
    <ul>
     
     * <li>
<code>http</code> -- delivery of JSON-encoded message via HTTP POST</li>
  
     * <li>
<code>https</code> -- delivery of JSON-encoded message via HTTPS POST</li>

     * <li>
<code>email</code> -- delivery of message via SMTP</li>
     
     * <li>
<code>email-json</code> -- delivery of JSON-encoded message via SMTP</li>
 
     * <li>
<code>sms</code> -- delivery of message via SMS</li>
     
     * <li>
<code>sqs</code> -- delivery of JSON-encoded message to an Amazon SQS
     * queue</li>
      <li>
<code>application</code> -- delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</li>
    </ul>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p>
    <ul>
     
     * <li>
<code>http</code> -- delivery of JSON-encoded message via HTTP POST</li>
  
     * <li>
<code>https</code> -- delivery of JSON-encoded message via HTTPS POST</li>

     * <li>
<code>email</code> -- delivery of message via SMTP</li>
     
     * <li>
<code>email-json</code> -- delivery of JSON-encoded message via SMTP</li>
 
     * <li>
<code>sms</code> -- delivery of message via SMS</li>
     
     * <li>
<code>sqs</code> -- delivery of JSON-encoded message to an Amazon SQS
     * queue</li>
      <li>
<code>application</code> -- delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</li>
    </ul>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p>
    <ul>
     
     * <li>
<code>http</code> -- delivery of JSON-encoded message via HTTP POST</li>
  
     * <li>
<code>https</code> -- delivery of JSON-encoded message via HTTPS POST</li>

     * <li>
<code>email</code> -- delivery of message via SMTP</li>
     
     * <li>
<code>email-json</code> -- delivery of JSON-encoded message via SMTP</li>
 
     * <li>
<code>sms</code> -- delivery of message via SMS</li>
     
     * <li>
<code>sqs</code> -- delivery of JSON-encoded message to an Amazon SQS
     * queue</li>
      <li>
<code>application</code> -- delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</li>
    </ul>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol you want to use. Supported protocols include:</p>
    <ul>
     
     * <li>
<code>http</code> -- delivery of JSON-encoded message via HTTP POST</li>
  
     * <li>
<code>https</code> -- delivery of JSON-encoded message via HTTPS POST</li>

     * <li>
<code>email</code> -- delivery of message via SMTP</li>
     
     * <li>
<code>email-json</code> -- delivery of JSON-encoded message via SMTP</li>
 
     * <li>
<code>sms</code> -- delivery of message via SMS</li>
     
     * <li>
<code>sqs</code> -- delivery of JSON-encoded message to an Amazon SQS
     * queue</li>
      <li>
<code>application</code> -- delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</li>
    </ul>
     */
    inline SubscribeRequest& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol you want to use. Supported protocols include:</p>
    <ul>
     
     * <li>
<code>http</code> -- delivery of JSON-encoded message via HTTP POST</li>
  
     * <li>
<code>https</code> -- delivery of JSON-encoded message via HTTPS POST</li>

     * <li>
<code>email</code> -- delivery of message via SMTP</li>
     
     * <li>
<code>email-json</code> -- delivery of JSON-encoded message via SMTP</li>
 
     * <li>
<code>sms</code> -- delivery of message via SMS</li>
     
     * <li>
<code>sqs</code> -- delivery of JSON-encoded message to an Amazon SQS
     * queue</li>
      <li>
<code>application</code> -- delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</li>
    </ul>
     */
    inline SubscribeRequest& WithProtocol(Aws::String&& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol you want to use. Supported protocols include:</p>
    <ul>
     
     * <li>
<code>http</code> -- delivery of JSON-encoded message via HTTP POST</li>
  
     * <li>
<code>https</code> -- delivery of JSON-encoded message via HTTPS POST</li>

     * <li>
<code>email</code> -- delivery of message via SMTP</li>
     
     * <li>
<code>email-json</code> -- delivery of JSON-encoded message via SMTP</li>
 
     * <li>
<code>sms</code> -- delivery of message via SMS</li>
     
     * <li>
<code>sqs</code> -- delivery of JSON-encoded message to an Amazon SQS
     * queue</li>
      <li>
<code>application</code> -- delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device.</li>
    </ul>
     */
    inline SubscribeRequest& WithProtocol(const char* value) { SetProtocol(value); return *this;}

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p>
    <ul>
      <li>For the <code>http</code> protocol, the
     * endpoint is an URL beginning with "http://"</li>
      <li>For the
     * <code>https</code> protocol, the endpoint is a URL beginning with
     * "https://"</li>
      <li>For the <code>email</code> protocol, the endpoint is
     * an email address</li>
      <li>For the <code>email-json</code> protocol, the
     * endpoint is an email address</li>
      <li>For the <code>sms</code> protocol,
     * the endpoint is a phone number of an SMS-enabled device</li>
      <li>For the
     * <code>sqs</code> protocol, the endpoint is the ARN of an Amazon SQS queue</li>
 
     * <li>For the <code>application</code> protocol, the endpoint is the EndpointArn
     * of a mobile app and device.</li>
    </ul>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p>
    <ul>
      <li>For the <code>http</code> protocol, the
     * endpoint is an URL beginning with "http://"</li>
      <li>For the
     * <code>https</code> protocol, the endpoint is a URL beginning with
     * "https://"</li>
      <li>For the <code>email</code> protocol, the endpoint is
     * an email address</li>
      <li>For the <code>email-json</code> protocol, the
     * endpoint is an email address</li>
      <li>For the <code>sms</code> protocol,
     * the endpoint is a phone number of an SMS-enabled device</li>
      <li>For the
     * <code>sqs</code> protocol, the endpoint is the ARN of an Amazon SQS queue</li>
 
     * <li>For the <code>application</code> protocol, the endpoint is the EndpointArn
     * of a mobile app and device.</li>
    </ul>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p>
    <ul>
      <li>For the <code>http</code> protocol, the
     * endpoint is an URL beginning with "http://"</li>
      <li>For the
     * <code>https</code> protocol, the endpoint is a URL beginning with
     * "https://"</li>
      <li>For the <code>email</code> protocol, the endpoint is
     * an email address</li>
      <li>For the <code>email-json</code> protocol, the
     * endpoint is an email address</li>
      <li>For the <code>sms</code> protocol,
     * the endpoint is a phone number of an SMS-enabled device</li>
      <li>For the
     * <code>sqs</code> protocol, the endpoint is the ARN of an Amazon SQS queue</li>
 
     * <li>For the <code>application</code> protocol, the endpoint is the EndpointArn
     * of a mobile app and device.</li>
    </ul>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p>
    <ul>
      <li>For the <code>http</code> protocol, the
     * endpoint is an URL beginning with "http://"</li>
      <li>For the
     * <code>https</code> protocol, the endpoint is a URL beginning with
     * "https://"</li>
      <li>For the <code>email</code> protocol, the endpoint is
     * an email address</li>
      <li>For the <code>email-json</code> protocol, the
     * endpoint is an email address</li>
      <li>For the <code>sms</code> protocol,
     * the endpoint is a phone number of an SMS-enabled device</li>
      <li>For the
     * <code>sqs</code> protocol, the endpoint is the ARN of an Amazon SQS queue</li>
 
     * <li>For the <code>application</code> protocol, the endpoint is the EndpointArn
     * of a mobile app and device.</li>
    </ul>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p>
    <ul>
      <li>For the <code>http</code> protocol, the
     * endpoint is an URL beginning with "http://"</li>
      <li>For the
     * <code>https</code> protocol, the endpoint is a URL beginning with
     * "https://"</li>
      <li>For the <code>email</code> protocol, the endpoint is
     * an email address</li>
      <li>For the <code>email-json</code> protocol, the
     * endpoint is an email address</li>
      <li>For the <code>sms</code> protocol,
     * the endpoint is a phone number of an SMS-enabled device</li>
      <li>For the
     * <code>sqs</code> protocol, the endpoint is the ARN of an Amazon SQS queue</li>
 
     * <li>For the <code>application</code> protocol, the endpoint is the EndpointArn
     * of a mobile app and device.</li>
    </ul>
     */
    inline SubscribeRequest& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p>
    <ul>
      <li>For the <code>http</code> protocol, the
     * endpoint is an URL beginning with "http://"</li>
      <li>For the
     * <code>https</code> protocol, the endpoint is a URL beginning with
     * "https://"</li>
      <li>For the <code>email</code> protocol, the endpoint is
     * an email address</li>
      <li>For the <code>email-json</code> protocol, the
     * endpoint is an email address</li>
      <li>For the <code>sms</code> protocol,
     * the endpoint is a phone number of an SMS-enabled device</li>
      <li>For the
     * <code>sqs</code> protocol, the endpoint is the ARN of an Amazon SQS queue</li>
 
     * <li>For the <code>application</code> protocol, the endpoint is the EndpointArn
     * of a mobile app and device.</li>
    </ul>
     */
    inline SubscribeRequest& WithEndpoint(Aws::String&& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p>
    <ul>
      <li>For the <code>http</code> protocol, the
     * endpoint is an URL beginning with "http://"</li>
      <li>For the
     * <code>https</code> protocol, the endpoint is a URL beginning with
     * "https://"</li>
      <li>For the <code>email</code> protocol, the endpoint is
     * an email address</li>
      <li>For the <code>email-json</code> protocol, the
     * endpoint is an email address</li>
      <li>For the <code>sms</code> protocol,
     * the endpoint is a phone number of an SMS-enabled device</li>
      <li>For the
     * <code>sqs</code> protocol, the endpoint is the ARN of an Amazon SQS queue</li>
 
     * <li>For the <code>application</code> protocol, the endpoint is the EndpointArn
     * of a mobile app and device.</li>
    </ul>
     */
    inline SubscribeRequest& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_protocol;
    bool m_protocolHasBeenSet;
    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
