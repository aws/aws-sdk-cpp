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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

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
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotName(const char* value) { SetBotName(value); return *this;}

    /**
     * <p>The alias of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>The alias of the Amazon Lex bot.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>The alias of the Amazon Lex bot.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>The alias of the Amazon Lex bot.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>The alias of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>The alias of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the Amazon Lex bot.</p>
     */
    inline PostTextRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}

    /**
     * <p>The ID of the client application user. The application developer decides the
     * user IDs. At runtime, each request must include the user ID. Typically, each of
     * your application users should have a unique ID. Note the following
     * considerations: </p> <ul> <li> <p> If you want a user to start a conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as a login or Amazon Cognito user ID (assuming
     * your application is using Amazon Cognito). </p> </li> <li> <p> If you want the
     * same user to be able to have two independent conversations on two different
     * devices, you might choose a device-specific identifier, such as device ID, or
     * some globally unique identifier. </p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the client application user. The application developer decides the
     * user IDs. At runtime, each request must include the user ID. Typically, each of
     * your application users should have a unique ID. Note the following
     * considerations: </p> <ul> <li> <p> If you want a user to start a conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as a login or Amazon Cognito user ID (assuming
     * your application is using Amazon Cognito). </p> </li> <li> <p> If you want the
     * same user to be able to have two independent conversations on two different
     * devices, you might choose a device-specific identifier, such as device ID, or
     * some globally unique identifier. </p> </li> </ul>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the client application user. The application developer decides the
     * user IDs. At runtime, each request must include the user ID. Typically, each of
     * your application users should have a unique ID. Note the following
     * considerations: </p> <ul> <li> <p> If you want a user to start a conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as a login or Amazon Cognito user ID (assuming
     * your application is using Amazon Cognito). </p> </li> <li> <p> If you want the
     * same user to be able to have two independent conversations on two different
     * devices, you might choose a device-specific identifier, such as device ID, or
     * some globally unique identifier. </p> </li> </ul>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the client application user. The application developer decides the
     * user IDs. At runtime, each request must include the user ID. Typically, each of
     * your application users should have a unique ID. Note the following
     * considerations: </p> <ul> <li> <p> If you want a user to start a conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as a login or Amazon Cognito user ID (assuming
     * your application is using Amazon Cognito). </p> </li> <li> <p> If you want the
     * same user to be able to have two independent conversations on two different
     * devices, you might choose a device-specific identifier, such as device ID, or
     * some globally unique identifier. </p> </li> </ul>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the client application user. The application developer decides the
     * user IDs. At runtime, each request must include the user ID. Typically, each of
     * your application users should have a unique ID. Note the following
     * considerations: </p> <ul> <li> <p> If you want a user to start a conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as a login or Amazon Cognito user ID (assuming
     * your application is using Amazon Cognito). </p> </li> <li> <p> If you want the
     * same user to be able to have two independent conversations on two different
     * devices, you might choose a device-specific identifier, such as device ID, or
     * some globally unique identifier. </p> </li> </ul>
     */
    inline PostTextRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the client application user. The application developer decides the
     * user IDs. At runtime, each request must include the user ID. Typically, each of
     * your application users should have a unique ID. Note the following
     * considerations: </p> <ul> <li> <p> If you want a user to start a conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as a login or Amazon Cognito user ID (assuming
     * your application is using Amazon Cognito). </p> </li> <li> <p> If you want the
     * same user to be able to have two independent conversations on two different
     * devices, you might choose a device-specific identifier, such as device ID, or
     * some globally unique identifier. </p> </li> </ul>
     */
    inline PostTextRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client application user. The application developer decides the
     * user IDs. At runtime, each request must include the user ID. Typically, each of
     * your application users should have a unique ID. Note the following
     * considerations: </p> <ul> <li> <p> If you want a user to start a conversation on
     * one device and continue the conversation on another device, you might choose a
     * user-specific identifier, such as a login or Amazon Cognito user ID (assuming
     * your application is using Amazon Cognito). </p> </li> <li> <p> If you want the
     * same user to be able to have two independent conversations on two different
     * devices, you might choose a device-specific identifier, such as device ID, or
     * some globally unique identifier. </p> </li> </ul>
     */
    inline PostTextRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p> By using session attributes, a client application can pass contextual
     * information in the request to Amazon Lex For example, </p> <ul> <li> <p>In
     * Getting Started Exercise 1, the example bot uses the <code>price</code> session
     * attribute to maintain the price of the flowers ordered (for example,
     * "Price":25). The code hook (the Lambda function) sets this attribute based on
     * the type of flowers ordered. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/gs-bp-details-after-lambda.html">Review
     * the Details of Information Flow</a>. </p> </li> <li> <p>In the BookTrip bot
     * exercise, the bot uses the <code>currentReservation</code> session attribute to
     * maintain slot data during the in-progress conversation to book a hotel or book a
     * car. For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/book-trip-detail-flow.html">Details
     * of Information Flow</a>. </p> </li> <li> <p>You might use the session attributes
     * (key, value pairs) to track the requestID of user requests.</p> </li> </ul> <p>
     * Amazon Lex simply passes these session attributes to the Lambda functions
     * configured for the intent.</p> <p>In your Lambda function, you can also use the
     * session attributes for initialization and customization (prompts and response
     * cards). Some examples are:</p> <ul> <li> <p> Initialization - In a pizza
     * ordering bot, if you can pass the user location as a session attribute (for
     * example, <code>"Location" : "111 Maple street"</code>), then your Lambda
     * function might use this information to determine the closest pizzeria to place
     * the order (perhaps to set the storeAddress slot value). </p> </li> <li> <p>
     * Personalize prompts - For example, you can configure prompts to refer to the
     * user name. (For example, "Hey [FirstName], what toppings would you like?"). You
     * can pass the user name as a session attribute (<code>"FirstName" : "Joe"</code>)
     * so that Amazon Lex can substitute the placeholder to provide a personalize
     * prompt to the user ("Hey Joe, what toppings would you like?"). </p> </li> </ul>
     * <note> <p> Amazon Lex does not persist session attributes. </p> <p> If you
     * configure a code hook for the intent, Amazon Lex passes the incoming session
     * attributes to the Lambda function. If you want Amazon Lex to return these
     * session attributes back to the client, the Lambda function must return them.
     * </p> <p> If there is no code hook configured for the intent, Amazon Lex simply
     * returns the session attributes back to the client application. </p> </note>
     */
    inline PostTextRequest& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline const Aws::String& GetInputText() const{ return m_inputText; }

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline void SetInputText(const Aws::String& value) { m_inputTextHasBeenSet = true; m_inputText = value; }

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline void SetInputText(Aws::String&& value) { m_inputTextHasBeenSet = true; m_inputText = std::move(value); }

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline void SetInputText(const char* value) { m_inputTextHasBeenSet = true; m_inputText.assign(value); }

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline PostTextRequest& WithInputText(const Aws::String& value) { SetInputText(value); return *this;}

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline PostTextRequest& WithInputText(Aws::String&& value) { SetInputText(std::move(value)); return *this;}

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
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
