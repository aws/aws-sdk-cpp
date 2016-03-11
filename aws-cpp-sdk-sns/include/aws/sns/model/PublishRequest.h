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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/MessageAttributeValue.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for Publish action.</p>
   */
  class AWS_SNS_API PublishRequest : public SNSRequest
  {
  public:
    PublishRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The topic you want to publish to.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The topic you want to publish to.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The topic you want to publish to.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The topic you want to publish to.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The topic you want to publish to.</p>
     */
    inline PublishRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The topic you want to publish to.</p>
     */
    inline PublishRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The topic you want to publish to.</p>
     */
    inline PublishRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    /**
     * <p>Either TopicArn or EndpointArn, but not both.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>Either TopicArn or EndpointArn, but not both.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>Either TopicArn or EndpointArn, but not both.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>Either TopicArn or EndpointArn, but not both.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>Either TopicArn or EndpointArn, but not both.</p>
     */
    inline PublishRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>Either TopicArn or EndpointArn, but not both.</p>
     */
    inline PublishRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(value); return *this;}

    /**
     * <p>Either TopicArn or EndpointArn, but not both.</p>
     */
    inline PublishRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

    /**
     * <p>The message you want to send to the topic.</p>
    <p>If you want to send the
     * same message to all transport protocols,
       include the text of the message
     * as a String value.</p>
    <p>If you want to send different messages for each
     * transport protocol,
       set the value of the <code>MessageStructure</code>
     * parameter to <code>json</code>
       and use a JSON object for the
     * <code>Message</code> parameter.
       See the Examples section for the format
     * of the JSON object. </p>
    <p>Constraints: Messages must be UTF-8 encoded
    
     * strings at most 256 KB in size (262144 bytes, not 262144 characters).</p>
   
     * <p>JSON-specific constraints:
      <ul>
        <li>Keys in the JSON object
     * that correspond to supported transport
      protocols must have simple JSON
     * string values. </li>
        <li>The values will be parsed (unescaped)
       
     * before they are used in outgoing messages.</li>
        <li>Outbound
     * notifications are JSON
        encoded (meaning that the characters will be
     * reescaped for sending).</li>
        <li>Values have a minimum length of 0 (the
     * empty string, "", is allowed).</li>
        <li>Values have a maximum length
     * bounded by the overall message size (so, including
        multiple protocols
     * may limit message sizes).</li>
        <li>Non-string values will cause the key

     * to be ignored.</li>
        <li>Keys that do not correspond to supported
     * transport protocols are ignored.</li>
        <li>Duplicate keys are not
     * allowed.</li>
        <li>Failure to parse or validate any key or
         
     * value in the message will cause the <code>Publish</code> call to return an error
     * (no partial
      delivery).</li>
      </ul>
     </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message you want to send to the topic.</p>
    <p>If you want to send the
     * same message to all transport protocols,
       include the text of the message
     * as a String value.</p>
    <p>If you want to send different messages for each
     * transport protocol,
       set the value of the <code>MessageStructure</code>
     * parameter to <code>json</code>
       and use a JSON object for the
     * <code>Message</code> parameter.
       See the Examples section for the format
     * of the JSON object. </p>
    <p>Constraints: Messages must be UTF-8 encoded
    
     * strings at most 256 KB in size (262144 bytes, not 262144 characters).</p>
   
     * <p>JSON-specific constraints:
      <ul>
        <li>Keys in the JSON object
     * that correspond to supported transport
      protocols must have simple JSON
     * string values. </li>
        <li>The values will be parsed (unescaped)
       
     * before they are used in outgoing messages.</li>
        <li>Outbound
     * notifications are JSON
        encoded (meaning that the characters will be
     * reescaped for sending).</li>
        <li>Values have a minimum length of 0 (the
     * empty string, "", is allowed).</li>
        <li>Values have a maximum length
     * bounded by the overall message size (so, including
        multiple protocols
     * may limit message sizes).</li>
        <li>Non-string values will cause the key

     * to be ignored.</li>
        <li>Keys that do not correspond to supported
     * transport protocols are ignored.</li>
        <li>Duplicate keys are not
     * allowed.</li>
        <li>Failure to parse or validate any key or
         
     * value in the message will cause the <code>Publish</code> call to return an error
     * (no partial
      delivery).</li>
      </ul>
     </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message you want to send to the topic.</p>
    <p>If you want to send the
     * same message to all transport protocols,
       include the text of the message
     * as a String value.</p>
    <p>If you want to send different messages for each
     * transport protocol,
       set the value of the <code>MessageStructure</code>
     * parameter to <code>json</code>
       and use a JSON object for the
     * <code>Message</code> parameter.
       See the Examples section for the format
     * of the JSON object. </p>
    <p>Constraints: Messages must be UTF-8 encoded
    
     * strings at most 256 KB in size (262144 bytes, not 262144 characters).</p>
   
     * <p>JSON-specific constraints:
      <ul>
        <li>Keys in the JSON object
     * that correspond to supported transport
      protocols must have simple JSON
     * string values. </li>
        <li>The values will be parsed (unescaped)
       
     * before they are used in outgoing messages.</li>
        <li>Outbound
     * notifications are JSON
        encoded (meaning that the characters will be
     * reescaped for sending).</li>
        <li>Values have a minimum length of 0 (the
     * empty string, "", is allowed).</li>
        <li>Values have a maximum length
     * bounded by the overall message size (so, including
        multiple protocols
     * may limit message sizes).</li>
        <li>Non-string values will cause the key

     * to be ignored.</li>
        <li>Keys that do not correspond to supported
     * transport protocols are ignored.</li>
        <li>Duplicate keys are not
     * allowed.</li>
        <li>Failure to parse or validate any key or
         
     * value in the message will cause the <code>Publish</code> call to return an error
     * (no partial
      delivery).</li>
      </ul>
     </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message you want to send to the topic.</p>
    <p>If you want to send the
     * same message to all transport protocols,
       include the text of the message
     * as a String value.</p>
    <p>If you want to send different messages for each
     * transport protocol,
       set the value of the <code>MessageStructure</code>
     * parameter to <code>json</code>
       and use a JSON object for the
     * <code>Message</code> parameter.
       See the Examples section for the format
     * of the JSON object. </p>
    <p>Constraints: Messages must be UTF-8 encoded
    
     * strings at most 256 KB in size (262144 bytes, not 262144 characters).</p>
   
     * <p>JSON-specific constraints:
      <ul>
        <li>Keys in the JSON object
     * that correspond to supported transport
      protocols must have simple JSON
     * string values. </li>
        <li>The values will be parsed (unescaped)
       
     * before they are used in outgoing messages.</li>
        <li>Outbound
     * notifications are JSON
        encoded (meaning that the characters will be
     * reescaped for sending).</li>
        <li>Values have a minimum length of 0 (the
     * empty string, "", is allowed).</li>
        <li>Values have a maximum length
     * bounded by the overall message size (so, including
        multiple protocols
     * may limit message sizes).</li>
        <li>Non-string values will cause the key

     * to be ignored.</li>
        <li>Keys that do not correspond to supported
     * transport protocols are ignored.</li>
        <li>Duplicate keys are not
     * allowed.</li>
        <li>Failure to parse or validate any key or
         
     * value in the message will cause the <code>Publish</code> call to return an error
     * (no partial
      delivery).</li>
      </ul>
     </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message you want to send to the topic.</p>
    <p>If you want to send the
     * same message to all transport protocols,
       include the text of the message
     * as a String value.</p>
    <p>If you want to send different messages for each
     * transport protocol,
       set the value of the <code>MessageStructure</code>
     * parameter to <code>json</code>
       and use a JSON object for the
     * <code>Message</code> parameter.
       See the Examples section for the format
     * of the JSON object. </p>
    <p>Constraints: Messages must be UTF-8 encoded
    
     * strings at most 256 KB in size (262144 bytes, not 262144 characters).</p>
   
     * <p>JSON-specific constraints:
      <ul>
        <li>Keys in the JSON object
     * that correspond to supported transport
      protocols must have simple JSON
     * string values. </li>
        <li>The values will be parsed (unescaped)
       
     * before they are used in outgoing messages.</li>
        <li>Outbound
     * notifications are JSON
        encoded (meaning that the characters will be
     * reescaped for sending).</li>
        <li>Values have a minimum length of 0 (the
     * empty string, "", is allowed).</li>
        <li>Values have a maximum length
     * bounded by the overall message size (so, including
        multiple protocols
     * may limit message sizes).</li>
        <li>Non-string values will cause the key

     * to be ignored.</li>
        <li>Keys that do not correspond to supported
     * transport protocols are ignored.</li>
        <li>Duplicate keys are not
     * allowed.</li>
        <li>Failure to parse or validate any key or
         
     * value in the message will cause the <code>Publish</code> call to return an error
     * (no partial
      delivery).</li>
      </ul>
     </p>
     */
    inline PublishRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message you want to send to the topic.</p>
    <p>If you want to send the
     * same message to all transport protocols,
       include the text of the message
     * as a String value.</p>
    <p>If you want to send different messages for each
     * transport protocol,
       set the value of the <code>MessageStructure</code>
     * parameter to <code>json</code>
       and use a JSON object for the
     * <code>Message</code> parameter.
       See the Examples section for the format
     * of the JSON object. </p>
    <p>Constraints: Messages must be UTF-8 encoded
    
     * strings at most 256 KB in size (262144 bytes, not 262144 characters).</p>
   
     * <p>JSON-specific constraints:
      <ul>
        <li>Keys in the JSON object
     * that correspond to supported transport
      protocols must have simple JSON
     * string values. </li>
        <li>The values will be parsed (unescaped)
       
     * before they are used in outgoing messages.</li>
        <li>Outbound
     * notifications are JSON
        encoded (meaning that the characters will be
     * reescaped for sending).</li>
        <li>Values have a minimum length of 0 (the
     * empty string, "", is allowed).</li>
        <li>Values have a maximum length
     * bounded by the overall message size (so, including
        multiple protocols
     * may limit message sizes).</li>
        <li>Non-string values will cause the key

     * to be ignored.</li>
        <li>Keys that do not correspond to supported
     * transport protocols are ignored.</li>
        <li>Duplicate keys are not
     * allowed.</li>
        <li>Failure to parse or validate any key or
         
     * value in the message will cause the <code>Publish</code> call to return an error
     * (no partial
      delivery).</li>
      </ul>
     </p>
     */
    inline PublishRequest& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>The message you want to send to the topic.</p>
    <p>If you want to send the
     * same message to all transport protocols,
       include the text of the message
     * as a String value.</p>
    <p>If you want to send different messages for each
     * transport protocol,
       set the value of the <code>MessageStructure</code>
     * parameter to <code>json</code>
       and use a JSON object for the
     * <code>Message</code> parameter.
       See the Examples section for the format
     * of the JSON object. </p>
    <p>Constraints: Messages must be UTF-8 encoded
    
     * strings at most 256 KB in size (262144 bytes, not 262144 characters).</p>
   
     * <p>JSON-specific constraints:
      <ul>
        <li>Keys in the JSON object
     * that correspond to supported transport
      protocols must have simple JSON
     * string values. </li>
        <li>The values will be parsed (unescaped)
       
     * before they are used in outgoing messages.</li>
        <li>Outbound
     * notifications are JSON
        encoded (meaning that the characters will be
     * reescaped for sending).</li>
        <li>Values have a minimum length of 0 (the
     * empty string, "", is allowed).</li>
        <li>Values have a maximum length
     * bounded by the overall message size (so, including
        multiple protocols
     * may limit message sizes).</li>
        <li>Non-string values will cause the key

     * to be ignored.</li>
        <li>Keys that do not correspond to supported
     * transport protocols are ignored.</li>
        <li>Duplicate keys are not
     * allowed.</li>
        <li>Failure to parse or validate any key or
         
     * value in the message will cause the <code>Publish</code> call to return an error
     * (no partial
      delivery).</li>
      </ul>
     </p>
     */
    inline PublishRequest& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     
     * delivered to email endpoints. This field will also be included, if present, 
   
     * in the standard JSON messages delivered to other endpoints.</p>
   
     * <p>Constraints: Subjects must be ASCII text that begins with a letter, number, 

     * or punctuation mark; must not include line breaks or control characters; and 
  
     *    must be less than 100 characters long.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     
     * delivered to email endpoints. This field will also be included, if present, 
   
     * in the standard JSON messages delivered to other endpoints.</p>
   
     * <p>Constraints: Subjects must be ASCII text that begins with a letter, number, 

     * or punctuation mark; must not include line breaks or control characters; and 
  
     *    must be less than 100 characters long.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     
     * delivered to email endpoints. This field will also be included, if present, 
   
     * in the standard JSON messages delivered to other endpoints.</p>
   
     * <p>Constraints: Subjects must be ASCII text that begins with a letter, number, 

     * or punctuation mark; must not include line breaks or control characters; and 
  
     *    must be less than 100 characters long.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     
     * delivered to email endpoints. This field will also be included, if present, 
   
     * in the standard JSON messages delivered to other endpoints.</p>
   
     * <p>Constraints: Subjects must be ASCII text that begins with a letter, number, 

     * or punctuation mark; must not include line breaks or control characters; and 
  
     *    must be less than 100 characters long.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     
     * delivered to email endpoints. This field will also be included, if present, 
   
     * in the standard JSON messages delivered to other endpoints.</p>
   
     * <p>Constraints: Subjects must be ASCII text that begins with a letter, number, 

     * or punctuation mark; must not include line breaks or control characters; and 
  
     *    must be less than 100 characters long.</p>
     */
    inline PublishRequest& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     
     * delivered to email endpoints. This field will also be included, if present, 
   
     * in the standard JSON messages delivered to other endpoints.</p>
   
     * <p>Constraints: Subjects must be ASCII text that begins with a letter, number, 

     * or punctuation mark; must not include line breaks or control characters; and 
  
     *    must be less than 100 characters long.</p>
     */
    inline PublishRequest& WithSubject(Aws::String&& value) { SetSubject(value); return *this;}

    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     
     * delivered to email endpoints. This field will also be included, if present, 
   
     * in the standard JSON messages delivered to other endpoints.</p>
   
     * <p>Constraints: Subjects must be ASCII text that begins with a letter, number, 

     * or punctuation mark; must not include line breaks or control characters; and 
  
     *    must be less than 100 characters long.</p>
     */
    inline PublishRequest& WithSubject(const char* value) { SetSubject(value); return *this;}

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send
  
     * a different message for each protocol. For example, using one publish action,
  
     * you can send a short message to your SMS subscribers and a longer message to
   
     * your email subscribers.
      If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of 
      the <code>Message</code> parameter must:

     * </p>
    <ul>
      <li>be a syntactically valid JSON object; and</li>
     
     * <li>contain at least a top-level JSON key of "default" with a value that is a
     * string.</li>
    </ul>
    <p> You can define other top-level keys that define
     * the message you want to send
      to a specific transport protocol (e.g.,
     * "http"). </p>
    <p>For information about sending different messages for each
     * protocol using
      the AWS Management Console, go to <a
     * href="http://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * 
        Different Messages for Each Protocol</a> in the <i>Amazon Simple
     * Notification Service
      Getting Started Guide</i>.
    </p>

      <p>Valid
     * value: <code>json</code></p>
     */
    inline const Aws::String& GetMessageStructure() const{ return m_messageStructure; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send
  
     * a different message for each protocol. For example, using one publish action,
  
     * you can send a short message to your SMS subscribers and a longer message to
   
     * your email subscribers.
      If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of 
      the <code>Message</code> parameter must:

     * </p>
    <ul>
      <li>be a syntactically valid JSON object; and</li>
     
     * <li>contain at least a top-level JSON key of "default" with a value that is a
     * string.</li>
    </ul>
    <p> You can define other top-level keys that define
     * the message you want to send
      to a specific transport protocol (e.g.,
     * "http"). </p>
    <p>For information about sending different messages for each
     * protocol using
      the AWS Management Console, go to <a
     * href="http://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * 
        Different Messages for Each Protocol</a> in the <i>Amazon Simple
     * Notification Service
      Getting Started Guide</i>.
    </p>

      <p>Valid
     * value: <code>json</code></p>
     */
    inline void SetMessageStructure(const Aws::String& value) { m_messageStructureHasBeenSet = true; m_messageStructure = value; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send
  
     * a different message for each protocol. For example, using one publish action,
  
     * you can send a short message to your SMS subscribers and a longer message to
   
     * your email subscribers.
      If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of 
      the <code>Message</code> parameter must:

     * </p>
    <ul>
      <li>be a syntactically valid JSON object; and</li>
     
     * <li>contain at least a top-level JSON key of "default" with a value that is a
     * string.</li>
    </ul>
    <p> You can define other top-level keys that define
     * the message you want to send
      to a specific transport protocol (e.g.,
     * "http"). </p>
    <p>For information about sending different messages for each
     * protocol using
      the AWS Management Console, go to <a
     * href="http://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * 
        Different Messages for Each Protocol</a> in the <i>Amazon Simple
     * Notification Service
      Getting Started Guide</i>.
    </p>

      <p>Valid
     * value: <code>json</code></p>
     */
    inline void SetMessageStructure(Aws::String&& value) { m_messageStructureHasBeenSet = true; m_messageStructure = value; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send
  
     * a different message for each protocol. For example, using one publish action,
  
     * you can send a short message to your SMS subscribers and a longer message to
   
     * your email subscribers.
      If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of 
      the <code>Message</code> parameter must:

     * </p>
    <ul>
      <li>be a syntactically valid JSON object; and</li>
     
     * <li>contain at least a top-level JSON key of "default" with a value that is a
     * string.</li>
    </ul>
    <p> You can define other top-level keys that define
     * the message you want to send
      to a specific transport protocol (e.g.,
     * "http"). </p>
    <p>For information about sending different messages for each
     * protocol using
      the AWS Management Console, go to <a
     * href="http://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * 
        Different Messages for Each Protocol</a> in the <i>Amazon Simple
     * Notification Service
      Getting Started Guide</i>.
    </p>

      <p>Valid
     * value: <code>json</code></p>
     */
    inline void SetMessageStructure(const char* value) { m_messageStructureHasBeenSet = true; m_messageStructure.assign(value); }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send
  
     * a different message for each protocol. For example, using one publish action,
  
     * you can send a short message to your SMS subscribers and a longer message to
   
     * your email subscribers.
      If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of 
      the <code>Message</code> parameter must:

     * </p>
    <ul>
      <li>be a syntactically valid JSON object; and</li>
     
     * <li>contain at least a top-level JSON key of "default" with a value that is a
     * string.</li>
    </ul>
    <p> You can define other top-level keys that define
     * the message you want to send
      to a specific transport protocol (e.g.,
     * "http"). </p>
    <p>For information about sending different messages for each
     * protocol using
      the AWS Management Console, go to <a
     * href="http://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * 
        Different Messages for Each Protocol</a> in the <i>Amazon Simple
     * Notification Service
      Getting Started Guide</i>.
    </p>

      <p>Valid
     * value: <code>json</code></p>
     */
    inline PublishRequest& WithMessageStructure(const Aws::String& value) { SetMessageStructure(value); return *this;}

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send
  
     * a different message for each protocol. For example, using one publish action,
  
     * you can send a short message to your SMS subscribers and a longer message to
   
     * your email subscribers.
      If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of 
      the <code>Message</code> parameter must:

     * </p>
    <ul>
      <li>be a syntactically valid JSON object; and</li>
     
     * <li>contain at least a top-level JSON key of "default" with a value that is a
     * string.</li>
    </ul>
    <p> You can define other top-level keys that define
     * the message you want to send
      to a specific transport protocol (e.g.,
     * "http"). </p>
    <p>For information about sending different messages for each
     * protocol using
      the AWS Management Console, go to <a
     * href="http://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * 
        Different Messages for Each Protocol</a> in the <i>Amazon Simple
     * Notification Service
      Getting Started Guide</i>.
    </p>

      <p>Valid
     * value: <code>json</code></p>
     */
    inline PublishRequest& WithMessageStructure(Aws::String&& value) { SetMessageStructure(value); return *this;}

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send
  
     * a different message for each protocol. For example, using one publish action,
  
     * you can send a short message to your SMS subscribers and a longer message to
   
     * your email subscribers.
      If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of 
      the <code>Message</code> parameter must:

     * </p>
    <ul>
      <li>be a syntactically valid JSON object; and</li>
     
     * <li>contain at least a top-level JSON key of "default" with a value that is a
     * string.</li>
    </ul>
    <p> You can define other top-level keys that define
     * the message you want to send
      to a specific transport protocol (e.g.,
     * "http"). </p>
    <p>For information about sending different messages for each
     * protocol using
      the AWS Management Console, go to <a
     * href="http://docs.aws.amazon.com/sns/latest/gsg/Publish.html#sns-message-formatting-by-protocol">Create
     * 
        Different Messages for Each Protocol</a> in the <i>Amazon Simple
     * Notification Service
      Getting Started Guide</i>.
    </p>

      <p>Valid
     * value: <code>json</code></p>
     */
    inline PublishRequest& WithMessageStructure(const char* value) { SetMessageStructure(value); return *this;}

    
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    
    inline PublishRequest& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    
    inline PublishRequest& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(value); return *this;}

    
    inline PublishRequest& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    
    inline PublishRequest& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    
    inline PublishRequest& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    
    inline PublishRequest& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    
    inline PublishRequest& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

    
    inline PublishRequest& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes[key] = value; return *this; }

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;
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
