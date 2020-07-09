/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>FailureFeedbackRoleArn</code> – IAM role ARN used to give Amazon SNS write
     * access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
     * <code>SuccessFeedbackSampleRate</code> – Sample rate percentage (0-100) of
     * successfully delivered messages.</p> </li> </ul>
     */
    inline SetPlatformApplicationAttributesRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the platform application attributes. Attributes in this map include
     * the following:</p> <ul> <li> <p> <code>PlatformCredential</code> – The
     * credential received from the notification service. For <code>APNS</code> and
     * <code>APNS_SANDBOX</code>, <code>PlatformCredential</code> is <code>private
     * key</code>. For <code>GCM</code> (Firebase Cloud Messaging),
     * <code>PlatformCredential</code> is <code>API key</code>. For <code>ADM</code>,
     * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
     * <p> <code>PlatformPrincipal</code> – The principal received from the
     * notification service. For <code>APNS</code> and <code>APNS_SANDBOX</code>,
     * <code>PlatformPrincipal</code> is <code>SSL certificate</code>. For
     * <code>GCM</code> (Firebase Cloud Messaging), there is no
     * <code>PlatformPrincipal</code>. For <code>ADM</code>,
     * <code>PlatformPrincipal</code> is <code>client id</code>.</p> </li> <li> <p>
     * <code>EventEndpointCreated</code> – Topic ARN to which
     * <code>EndpointCreated</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointDeleted</code> – Topic ARN to which
     * <code>EndpointDeleted</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventEndpointUpdated</code> – Topic ARN to which
     * <code>EndpointUpdate</code> event notifications are sent.</p> </li> <li> <p>
     * <code>EventDeliveryFailure</code> – Topic ARN to which
     * <code>DeliveryFailure</code> event notifications are sent upon Direct Publish
     * delivery failure (permanent) to one of the application's endpoints.</p> </li>
     * <li> <p> <code>SuccessFeedbackRoleArn</code> – IAM role ARN used to give Amazon
     * SNS write access to use CloudWatch Logs on your behalf.</p> </li> <li> <p>
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
