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
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

  /**
   */
  class AWS_LEXRUNTIMESERVICE_API PostContentRequest : public StreamingLexRuntimeServiceRequest
  {
  public:
    PostContentRequest();
    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline PostContentRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline PostContentRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline PostContentRequest& WithBotName(const char* value) { SetBotName(value); return *this;}

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
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline PostContentRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline PostContentRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline PostContentRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}

    /**
     * <p>ID of the client application user. Typically, each of your application users
     * should have a unique ID. The application developer decides the user IDs. At
     * runtime, each request must include the user ID. Note the following
     * considerations:</p> <ul> <li> <p> If you want a user to start conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as the user's login, or Amazon Cognito user ID
     * (assuming your application is using Amazon Cognito). </p> </li> <li> <p> If you
     * want the same user to be able to have two independent conversations on two
     * different devices, you might choose device-specific identifier, such as device
     * ID, or some globally unique identifier. </p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>ID of the client application user. Typically, each of your application users
     * should have a unique ID. The application developer decides the user IDs. At
     * runtime, each request must include the user ID. Note the following
     * considerations:</p> <ul> <li> <p> If you want a user to start conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as the user's login, or Amazon Cognito user ID
     * (assuming your application is using Amazon Cognito). </p> </li> <li> <p> If you
     * want the same user to be able to have two independent conversations on two
     * different devices, you might choose device-specific identifier, such as device
     * ID, or some globally unique identifier. </p> </li> </ul>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>ID of the client application user. Typically, each of your application users
     * should have a unique ID. The application developer decides the user IDs. At
     * runtime, each request must include the user ID. Note the following
     * considerations:</p> <ul> <li> <p> If you want a user to start conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as the user's login, or Amazon Cognito user ID
     * (assuming your application is using Amazon Cognito). </p> </li> <li> <p> If you
     * want the same user to be able to have two independent conversations on two
     * different devices, you might choose device-specific identifier, such as device
     * ID, or some globally unique identifier. </p> </li> </ul>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>ID of the client application user. Typically, each of your application users
     * should have a unique ID. The application developer decides the user IDs. At
     * runtime, each request must include the user ID. Note the following
     * considerations:</p> <ul> <li> <p> If you want a user to start conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as the user's login, or Amazon Cognito user ID
     * (assuming your application is using Amazon Cognito). </p> </li> <li> <p> If you
     * want the same user to be able to have two independent conversations on two
     * different devices, you might choose device-specific identifier, such as device
     * ID, or some globally unique identifier. </p> </li> </ul>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>ID of the client application user. Typically, each of your application users
     * should have a unique ID. The application developer decides the user IDs. At
     * runtime, each request must include the user ID. Note the following
     * considerations:</p> <ul> <li> <p> If you want a user to start conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as the user's login, or Amazon Cognito user ID
     * (assuming your application is using Amazon Cognito). </p> </li> <li> <p> If you
     * want the same user to be able to have two independent conversations on two
     * different devices, you might choose device-specific identifier, such as device
     * ID, or some globally unique identifier. </p> </li> </ul>
     */
    inline PostContentRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>ID of the client application user. Typically, each of your application users
     * should have a unique ID. The application developer decides the user IDs. At
     * runtime, each request must include the user ID. Note the following
     * considerations:</p> <ul> <li> <p> If you want a user to start conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as the user's login, or Amazon Cognito user ID
     * (assuming your application is using Amazon Cognito). </p> </li> <li> <p> If you
     * want the same user to be able to have two independent conversations on two
     * different devices, you might choose device-specific identifier, such as device
     * ID, or some globally unique identifier. </p> </li> </ul>
     */
    inline PostContentRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>ID of the client application user. Typically, each of your application users
     * should have a unique ID. The application developer decides the user IDs. At
     * runtime, each request must include the user ID. Note the following
     * considerations:</p> <ul> <li> <p> If you want a user to start conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as the user's login, or Amazon Cognito user ID
     * (assuming your application is using Amazon Cognito). </p> </li> <li> <p> If you
     * want the same user to be able to have two independent conversations on two
     * different devices, you might choose device-specific identifier, such as device
     * ID, or some globally unique identifier. </p> </li> </ul>
     */
    inline PostContentRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p>You pass this value in the <code>x-amz-lex-session-attributes</code> HTTP
     * header. The value must be map (keys and values must be strings) that is JSON
     * serialized and then base64 encoded.</p> <p> A session represents dialog between
     * a user and Amazon Lex. At runtime, a client application can pass contextual
     * information, in the request to Amazon Lex. For example, </p> <ul> <li> <p>You
     * might use session attributes to track the requestID of user requests.</p> </li>
     * <li> <p>In Getting Started Exercise 1, the example bot uses the price session
     * attribute to maintain the price of flowers ordered (for example, "price":25).
     * The code hook (Lambda function) sets this attribute based on the type of flowers
     * ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintains the slot data during the in-progress conversation to book a hotel or
     * book a car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> </ul> <p> Amazon Lex passes these session
     * attributes to the Lambda functions configured for the intent In the your Lambda
     * function, you can use the session attributes for initialization and
     * customization (prompts). Some examples are: </p> <ul> <li> <p> Initialization -
     * In a pizza ordering bot, if you pass user location (for example, <code>"Location
     * : 111 Maple Street"</code>), then your Lambda function might use this
     * information to determine the closest pizzeria to place the order (and perhaps
     * set the storeAddress slot value as well). </p> <p> Personalized prompts - For
     * example, you can configure prompts to refer to the user by name (for example,
     * "Hey [firstName], what toppings would you like?"). You can pass the user's name
     * as a session attribute ("firstName": "Joe") so that Amazon Lex can substitute
     * the placeholder to provide a personalized prompt to the user ("Hey Joe, what
     * toppings would you like?"). </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If you configured a code hook for the
     * intent, Amazon Lex passes the incoming session attributes to the Lambda
     * function. The Lambda function must return these session attributes if you want
     * Amazon Lex to return them to the client. </p> <p> If there is no code hook
     * configured for the intent Amazon Lex simply returns the session attributes to
     * the client application. </p> </note>
     */
    inline const Aws::String& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>You pass this value in the <code>x-amz-lex-session-attributes</code> HTTP
     * header. The value must be map (keys and values must be strings) that is JSON
     * serialized and then base64 encoded.</p> <p> A session represents dialog between
     * a user and Amazon Lex. At runtime, a client application can pass contextual
     * information, in the request to Amazon Lex. For example, </p> <ul> <li> <p>You
     * might use session attributes to track the requestID of user requests.</p> </li>
     * <li> <p>In Getting Started Exercise 1, the example bot uses the price session
     * attribute to maintain the price of flowers ordered (for example, "price":25).
     * The code hook (Lambda function) sets this attribute based on the type of flowers
     * ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintains the slot data during the in-progress conversation to book a hotel or
     * book a car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> </ul> <p> Amazon Lex passes these session
     * attributes to the Lambda functions configured for the intent In the your Lambda
     * function, you can use the session attributes for initialization and
     * customization (prompts). Some examples are: </p> <ul> <li> <p> Initialization -
     * In a pizza ordering bot, if you pass user location (for example, <code>"Location
     * : 111 Maple Street"</code>), then your Lambda function might use this
     * information to determine the closest pizzeria to place the order (and perhaps
     * set the storeAddress slot value as well). </p> <p> Personalized prompts - For
     * example, you can configure prompts to refer to the user by name (for example,
     * "Hey [firstName], what toppings would you like?"). You can pass the user's name
     * as a session attribute ("firstName": "Joe") so that Amazon Lex can substitute
     * the placeholder to provide a personalized prompt to the user ("Hey Joe, what
     * toppings would you like?"). </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If you configured a code hook for the
     * intent, Amazon Lex passes the incoming session attributes to the Lambda
     * function. The Lambda function must return these session attributes if you want
     * Amazon Lex to return them to the client. </p> <p> If there is no code hook
     * configured for the intent Amazon Lex simply returns the session attributes to
     * the client application. </p> </note>
     */
    inline void SetSessionAttributes(const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>You pass this value in the <code>x-amz-lex-session-attributes</code> HTTP
     * header. The value must be map (keys and values must be strings) that is JSON
     * serialized and then base64 encoded.</p> <p> A session represents dialog between
     * a user and Amazon Lex. At runtime, a client application can pass contextual
     * information, in the request to Amazon Lex. For example, </p> <ul> <li> <p>You
     * might use session attributes to track the requestID of user requests.</p> </li>
     * <li> <p>In Getting Started Exercise 1, the example bot uses the price session
     * attribute to maintain the price of flowers ordered (for example, "price":25).
     * The code hook (Lambda function) sets this attribute based on the type of flowers
     * ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintains the slot data during the in-progress conversation to book a hotel or
     * book a car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> </ul> <p> Amazon Lex passes these session
     * attributes to the Lambda functions configured for the intent In the your Lambda
     * function, you can use the session attributes for initialization and
     * customization (prompts). Some examples are: </p> <ul> <li> <p> Initialization -
     * In a pizza ordering bot, if you pass user location (for example, <code>"Location
     * : 111 Maple Street"</code>), then your Lambda function might use this
     * information to determine the closest pizzeria to place the order (and perhaps
     * set the storeAddress slot value as well). </p> <p> Personalized prompts - For
     * example, you can configure prompts to refer to the user by name (for example,
     * "Hey [firstName], what toppings would you like?"). You can pass the user's name
     * as a session attribute ("firstName": "Joe") so that Amazon Lex can substitute
     * the placeholder to provide a personalized prompt to the user ("Hey Joe, what
     * toppings would you like?"). </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If you configured a code hook for the
     * intent, Amazon Lex passes the incoming session attributes to the Lambda
     * function. The Lambda function must return these session attributes if you want
     * Amazon Lex to return them to the client. </p> <p> If there is no code hook
     * configured for the intent Amazon Lex simply returns the session attributes to
     * the client application. </p> </note>
     */
    inline void SetSessionAttributes(Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>You pass this value in the <code>x-amz-lex-session-attributes</code> HTTP
     * header. The value must be map (keys and values must be strings) that is JSON
     * serialized and then base64 encoded.</p> <p> A session represents dialog between
     * a user and Amazon Lex. At runtime, a client application can pass contextual
     * information, in the request to Amazon Lex. For example, </p> <ul> <li> <p>You
     * might use session attributes to track the requestID of user requests.</p> </li>
     * <li> <p>In Getting Started Exercise 1, the example bot uses the price session
     * attribute to maintain the price of flowers ordered (for example, "price":25).
     * The code hook (Lambda function) sets this attribute based on the type of flowers
     * ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintains the slot data during the in-progress conversation to book a hotel or
     * book a car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> </ul> <p> Amazon Lex passes these session
     * attributes to the Lambda functions configured for the intent In the your Lambda
     * function, you can use the session attributes for initialization and
     * customization (prompts). Some examples are: </p> <ul> <li> <p> Initialization -
     * In a pizza ordering bot, if you pass user location (for example, <code>"Location
     * : 111 Maple Street"</code>), then your Lambda function might use this
     * information to determine the closest pizzeria to place the order (and perhaps
     * set the storeAddress slot value as well). </p> <p> Personalized prompts - For
     * example, you can configure prompts to refer to the user by name (for example,
     * "Hey [firstName], what toppings would you like?"). You can pass the user's name
     * as a session attribute ("firstName": "Joe") so that Amazon Lex can substitute
     * the placeholder to provide a personalized prompt to the user ("Hey Joe, what
     * toppings would you like?"). </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If you configured a code hook for the
     * intent, Amazon Lex passes the incoming session attributes to the Lambda
     * function. The Lambda function must return these session attributes if you want
     * Amazon Lex to return them to the client. </p> <p> If there is no code hook
     * configured for the intent Amazon Lex simply returns the session attributes to
     * the client application. </p> </note>
     */
    inline void SetSessionAttributes(const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.assign(value); }

    /**
     * <p>You pass this value in the <code>x-amz-lex-session-attributes</code> HTTP
     * header. The value must be map (keys and values must be strings) that is JSON
     * serialized and then base64 encoded.</p> <p> A session represents dialog between
     * a user and Amazon Lex. At runtime, a client application can pass contextual
     * information, in the request to Amazon Lex. For example, </p> <ul> <li> <p>You
     * might use session attributes to track the requestID of user requests.</p> </li>
     * <li> <p>In Getting Started Exercise 1, the example bot uses the price session
     * attribute to maintain the price of flowers ordered (for example, "price":25).
     * The code hook (Lambda function) sets this attribute based on the type of flowers
     * ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintains the slot data during the in-progress conversation to book a hotel or
     * book a car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> </ul> <p> Amazon Lex passes these session
     * attributes to the Lambda functions configured for the intent In the your Lambda
     * function, you can use the session attributes for initialization and
     * customization (prompts). Some examples are: </p> <ul> <li> <p> Initialization -
     * In a pizza ordering bot, if you pass user location (for example, <code>"Location
     * : 111 Maple Street"</code>), then your Lambda function might use this
     * information to determine the closest pizzeria to place the order (and perhaps
     * set the storeAddress slot value as well). </p> <p> Personalized prompts - For
     * example, you can configure prompts to refer to the user by name (for example,
     * "Hey [firstName], what toppings would you like?"). You can pass the user's name
     * as a session attribute ("firstName": "Joe") so that Amazon Lex can substitute
     * the placeholder to provide a personalized prompt to the user ("Hey Joe, what
     * toppings would you like?"). </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If you configured a code hook for the
     * intent, Amazon Lex passes the incoming session attributes to the Lambda
     * function. The Lambda function must return these session attributes if you want
     * Amazon Lex to return them to the client. </p> <p> If there is no code hook
     * configured for the intent Amazon Lex simply returns the session attributes to
     * the client application. </p> </note>
     */
    inline PostContentRequest& WithSessionAttributes(const Aws::String& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>You pass this value in the <code>x-amz-lex-session-attributes</code> HTTP
     * header. The value must be map (keys and values must be strings) that is JSON
     * serialized and then base64 encoded.</p> <p> A session represents dialog between
     * a user and Amazon Lex. At runtime, a client application can pass contextual
     * information, in the request to Amazon Lex. For example, </p> <ul> <li> <p>You
     * might use session attributes to track the requestID of user requests.</p> </li>
     * <li> <p>In Getting Started Exercise 1, the example bot uses the price session
     * attribute to maintain the price of flowers ordered (for example, "price":25).
     * The code hook (Lambda function) sets this attribute based on the type of flowers
     * ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintains the slot data during the in-progress conversation to book a hotel or
     * book a car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> </ul> <p> Amazon Lex passes these session
     * attributes to the Lambda functions configured for the intent In the your Lambda
     * function, you can use the session attributes for initialization and
     * customization (prompts). Some examples are: </p> <ul> <li> <p> Initialization -
     * In a pizza ordering bot, if you pass user location (for example, <code>"Location
     * : 111 Maple Street"</code>), then your Lambda function might use this
     * information to determine the closest pizzeria to place the order (and perhaps
     * set the storeAddress slot value as well). </p> <p> Personalized prompts - For
     * example, you can configure prompts to refer to the user by name (for example,
     * "Hey [firstName], what toppings would you like?"). You can pass the user's name
     * as a session attribute ("firstName": "Joe") so that Amazon Lex can substitute
     * the placeholder to provide a personalized prompt to the user ("Hey Joe, what
     * toppings would you like?"). </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If you configured a code hook for the
     * intent, Amazon Lex passes the incoming session attributes to the Lambda
     * function. The Lambda function must return these session attributes if you want
     * Amazon Lex to return them to the client. </p> <p> If there is no code hook
     * configured for the intent Amazon Lex simply returns the session attributes to
     * the client application. </p> </note>
     */
    inline PostContentRequest& WithSessionAttributes(Aws::String&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>You pass this value in the <code>x-amz-lex-session-attributes</code> HTTP
     * header. The value must be map (keys and values must be strings) that is JSON
     * serialized and then base64 encoded.</p> <p> A session represents dialog between
     * a user and Amazon Lex. At runtime, a client application can pass contextual
     * information, in the request to Amazon Lex. For example, </p> <ul> <li> <p>You
     * might use session attributes to track the requestID of user requests.</p> </li>
     * <li> <p>In Getting Started Exercise 1, the example bot uses the price session
     * attribute to maintain the price of flowers ordered (for example, "price":25).
     * The code hook (Lambda function) sets this attribute based on the type of flowers
     * ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintains the slot data during the in-progress conversation to book a hotel or
     * book a car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> </ul> <p> Amazon Lex passes these session
     * attributes to the Lambda functions configured for the intent In the your Lambda
     * function, you can use the session attributes for initialization and
     * customization (prompts). Some examples are: </p> <ul> <li> <p> Initialization -
     * In a pizza ordering bot, if you pass user location (for example, <code>"Location
     * : 111 Maple Street"</code>), then your Lambda function might use this
     * information to determine the closest pizzeria to place the order (and perhaps
     * set the storeAddress slot value as well). </p> <p> Personalized prompts - For
     * example, you can configure prompts to refer to the user by name (for example,
     * "Hey [firstName], what toppings would you like?"). You can pass the user's name
     * as a session attribute ("firstName": "Joe") so that Amazon Lex can substitute
     * the placeholder to provide a personalized prompt to the user ("Hey Joe, what
     * toppings would you like?"). </p> </li> </ul> <note> <p> Amazon Lex does not
     * persist session attributes. </p> <p> If you configured a code hook for the
     * intent, Amazon Lex passes the incoming session attributes to the Lambda
     * function. The Lambda function must return these session attributes if you want
     * Amazon Lex to return them to the client. </p> <p> If there is no code hook
     * configured for the intent Amazon Lex simply returns the session attributes to
     * the client application. </p> </note>
     */
    inline PostContentRequest& WithSessionAttributes(const char* value) { SetSessionAttributes(value); return *this;}

    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> <p>The following
     * are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> <p>The following
     * are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> <p>The following
     * are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> <p>The following
     * are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> <p>The following
     * are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline PostContentRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> <p>The following
     * are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline PostContentRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> <p>The following
     * are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline PostContentRequest& WithAccept(const char* value) { SetAccept(value); return *this;}

  private:
    Aws::String m_botName;
    bool m_botNameHasBeenSet;
    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet;
    Aws::String m_userId;
    bool m_userIdHasBeenSet;
    Aws::String m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet;
    Aws::String m_accept;
    bool m_acceptHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
