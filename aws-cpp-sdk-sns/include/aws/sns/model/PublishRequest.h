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
#include <aws/sns/model/MessageAttributeValue.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for Publish action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API PublishRequest : public SNSRequest
  {
  public:
    PublishRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Publish"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline PublishRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline PublishRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline PublishRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline PublishRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline PublishRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline PublishRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline PublishRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline PublishRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline PublishRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline PublishRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline PublishRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message you want to send.</p> <important> <p>The <code>Message</code>
     * parameter is always a string. If you set <code>MessageStructure</code> to
     * <code>json</code>, you must string-encode the <code>Message</code>
     * parameter.</p> </important> <p>If you are publishing to a topic and you want to
     * send the same message to all transport protocols, include the text of the
     * message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline PublishRequest& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline PublishRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline PublishRequest& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be ASCII text that begins with a letter, number, or punctuation
     * mark; must not include line breaks or control characters; and must be less than
     * 100 characters long.</p>
     */
    inline PublishRequest& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline const Aws::String& GetMessageStructure() const{ return m_messageStructure; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline bool MessageStructureHasBeenSet() const { return m_messageStructureHasBeenSet; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline void SetMessageStructure(const Aws::String& value) { m_messageStructureHasBeenSet = true; m_messageStructure = value; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline void SetMessageStructure(Aws::String&& value) { m_messageStructureHasBeenSet = true; m_messageStructure = std::move(value); }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline void SetMessageStructure(const char* value) { m_messageStructureHasBeenSet = true; m_messageStructure.assign(value); }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline PublishRequest& WithMessageStructure(const Aws::String& value) { SetMessageStructure(value); return *this;}

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline PublishRequest& WithMessageStructure(Aws::String&& value) { SetMessageStructure(std::move(value)); return *this;}

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g., "http").</p> <p>For
     * information about sending different messages for each protocol using the AWS
     * Management Console, go to <a
     * href="https://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * Different Messages for Each Protocol</a> in the <i>Amazon Simple Notification
     * Service Getting Started Guide</i>. </p> <p>Valid value: <code>json</code> </p>
     */
    inline PublishRequest& WithMessageStructure(const char* value) { SetMessageStructure(value); return *this;}


    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline PublishRequest& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_subject;
    bool m_subjectHasBeenSet;

    Aws::String m_messageStructure;
    bool m_messageStructureHasBeenSet;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
