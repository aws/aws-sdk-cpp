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
   * <p>Input for SetPlatformApplicationAttributes action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetPlatformApplicationAttributesInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API SetPlatformApplicationAttributesRequest : public SNSRequest
  {
  public:
    SetPlatformApplicationAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetPlatformApplicationAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline bool PlatformApplicationArnHasBeenSet() const { return m_platformApplicationArnHasBeenSet; }

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::move(value); }

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline SetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline SetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(std::move(value)); return *this;}

    /**
     * <p>PlatformApplicationArn for SetPlatformApplicationAttributes action.</p>
     */
    inline SetPlatformApplicationAttributesRequest& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}


    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For APNS/APNS_SANDBOX,
     * PlatformCredential is private key. For GCM, PlatformCredential is "API key". For
     * ADM, PlatformCredential is "client secret".</p> </li> <li> <p>
     * <code>PlatformPrincipal</code> – The principal received from the notification
     * service. For APNS/APNS_SANDBOX, PlatformPrincipal is SSL certificate. For GCM,
     * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client
     * id".</p> </li> <li> <p> <code>EventEndpointCreated</code> – Topic ARN to which
     * EndpointCreated event notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which EndpointDeleted event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which EndpointUpdate event
     * notifications should be sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which DeliveryFailure event
     * notifications should be sent upon Direct Publish delivery failure (permanent) to
     * one of the application's endpoints.</p> </li> <li> <p>
     * <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
