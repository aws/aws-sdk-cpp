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
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

  /**
   */
  class AWS_LEXRUNTIMESERVICE_API PostTextRequest : public LexRuntimeServiceRequest
  {
  public:
    PostTextRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotName(Aws::String&& value) { SetBotName(value); return *this;}

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotName(const char* value) { SetBotName(value); return *this;}

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(value); return *this;}

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}

    /**
     * <p>User ID of your client application. Typically, each of your application users
     * should have a unique ID. Note the following considerations: </p> <ul> <li> <p>
     * If you want a user to start a conversation on one mobile device and continue the
     * conversation on another device, you might choose a user-specific identifier,
     * such as a login or Amazon Cognito user ID (assuming your application is using
     * Amazon Cognito). </p> </li> <li> <p> If you want the same user to be able to
     * have two independent conversations on two different devices, you might choose a
     * device-specific identifier, such as device ID, or some globally unique
     * identifier. </p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>User ID of your client application. Typically, each of your application users
     * should have a unique ID. Note the following considerations: </p> <ul> <li> <p>
     * If you want a user to start a conversation on one mobile device and continue the
     * conversation on another device, you might choose a user-specific identifier,
     * such as a login or Amazon Cognito user ID (assuming your application is using
     * Amazon Cognito). </p> </li> <li> <p> If you want the same user to be able to
     * have two independent conversations on two different devices, you might choose a
     * device-specific identifier, such as device ID, or some globally unique
     * identifier. </p> </li> </ul>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>User ID of your client application. Typically, each of your application users
     * should have a unique ID. Note the following considerations: </p> <ul> <li> <p>
     * If you want a user to start a conversation on one mobile device and continue the
     * conversation on another device, you might choose a user-specific identifier,
     * such as a login or Amazon Cognito user ID (assuming your application is using
     * Amazon Cognito). </p> </li> <li> <p> If you want the same user to be able to
     * have two independent conversations on two different devices, you might choose a
     * device-specific identifier, such as device ID, or some globally unique
     * identifier. </p> </li> </ul>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>User ID of your client application. Typically, each of your application users
     * should have a unique ID. Note the following considerations: </p> <ul> <li> <p>
     * If you want a user to start a conversation on one mobile device and continue the
     * conversation on another device, you might choose a user-specific identifier,
     * such as a login or Amazon Cognito user ID (assuming your application is using
     * Amazon Cognito). </p> </li> <li> <p> If you want the same user to be able to
     * have two independent conversations on two different devices, you might choose a
     * device-specific identifier, such as device ID, or some globally unique
     * identifier. </p> </li> </ul>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>User ID of your client application. Typically, each of your application users
     * should have a unique ID. Note the following considerations: </p> <ul> <li> <p>
     * If you want a user to start a conversation on one mobile device and continue the
     * conversation on another device, you might choose a user-specific identifier,
     * such as a login or Amazon Cognito user ID (assuming your application is using
     * Amazon Cognito). </p> </li> <li> <p> If you want the same user to be able to
     * have two independent conversations on two different devices, you might choose a
     * device-specific identifier, such as device ID, or some globally unique
     * identifier. </p> </li> </ul>
     */
    inline PostTextRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>User ID of your client application. Typically, each of your application users
     * should have a unique ID. Note the following considerations: </p> <ul> <li> <p>
     * If you want a user to start a conversation on one mobile device and continue the
     * conversation on another device, you might choose a user-specific identifier,
     * such as a login or Amazon Cognito user ID (assuming your application is using
     * Amazon Cognito). </p> </li> <li> <p> If you want the same user to be able to
     * have two independent conversations on two different devices, you might choose a
     * device-specific identifier, such as device ID, or some globally unique
     * identifier. </p> </li> </ul>
     */
    inline PostTextRequest& WithUserId(Aws::String&& value) { SetUserId(value); return *this;}

    /**
     * <p>User ID of your client application. Typically, each of your application users
     * should have a unique ID. Note the following considerations: </p> <ul> <li> <p>
     * If you want a user to start a conversation on one mobile device and continue the
     * conversation on another device, you might choose a user-specific identifier,
     * such as a login or Amazon Cognito user ID (assuming your application is using
     * Amazon Cognito). </p> </li> <li> <p> If you want the same user to be able to
     * have two independent conversations on two different devices, you might choose a
     * device-specific identifier, such as device ID, or some globally unique
     * identifier. </p> </li> </ul>
     */
    inline PostTextRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes[key] = value; return *this; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes[key] = value; return *this; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes[key] = value; return *this; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes[key] = value; return *this; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes[key] = value; return *this; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes[key] = value; return *this; }

    /**
     * <p> A session represents the dialog between a user and Amazon Lex. At runtime, a
     * client application can pass contextual information (session attributes) in the
     * request. For example, <code>"FirstName" : "Joe"</code>. Amazon Lex passes these
     * session attributes to the AWS Lambda functions configured for the intent (see
     * <code>dialogCodeHook</code> and <code>fulfillmentActivity.codeHook</code> in
     * <code>CreateIntent</code>). </p> <p>In your Lambda function, you can use the
     * session attributes for customization. Some examples are:</p> <ul> <li> <p> In a
     * pizza ordering application, if you can pass user location as a session attribute
     * (for example, <code>"Location" : "111 Maple street"</code>), your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order. </p> </li> <li> <p> Use session attributes to personalize prompts.
     * For example, you pass in user name as a session attribute (<code>"FirstName" :
     * "Joe"</code>), you might configure subsequent prompts to refer to this
     * attribute, as <code>$session.FirstName"</code>. At runtime, Amazon Lex
     * substitutes a real value when it generates a prompt, such as "Hello Joe, what
     * would you like to order?" </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If the intent is configured without a
     * Lambda function to process the intent (that is, the client application to
     * process the intent), Amazon Lex simply returns the session attributes back to
     * the client application. </p> <p> If the intent is configured with a Lambda
     * function to process the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. The Lambda function must return these session
     * attributes if you want Amazon Lex to return them back to the client. </p>
     * </note>
     */
    inline PostTextRequest& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes[key] = value; return *this; }

    /**
     * <p>Text user entered (Amazon Lex interprets this text).</p>
     */
    inline const Aws::String& GetInputText() const{ return m_inputText; }

    /**
     * <p>Text user entered (Amazon Lex interprets this text).</p>
     */
    inline void SetInputText(const Aws::String& value) { m_inputTextHasBeenSet = true; m_inputText = value; }

    /**
     * <p>Text user entered (Amazon Lex interprets this text).</p>
     */
    inline void SetInputText(Aws::String&& value) { m_inputTextHasBeenSet = true; m_inputText = value; }

    /**
     * <p>Text user entered (Amazon Lex interprets this text).</p>
     */
    inline void SetInputText(const char* value) { m_inputTextHasBeenSet = true; m_inputText.assign(value); }

    /**
     * <p>Text user entered (Amazon Lex interprets this text).</p>
     */
    inline PostTextRequest& WithInputText(const Aws::String& value) { SetInputText(value); return *this;}

    /**
     * <p>Text user entered (Amazon Lex interprets this text).</p>
     */
    inline PostTextRequest& WithInputText(Aws::String&& value) { SetInputText(value); return *this;}

    /**
     * <p>Text user entered (Amazon Lex interprets this text).</p>
     */
    inline PostTextRequest& WithInputText(const char* value) { SetInputText(value); return *this;}

  private:
    Aws::String m_botName;
    bool m_botNameHasBeenSet;
    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet;
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet;
    Aws::String m_inputText;
    bool m_inputTextHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
