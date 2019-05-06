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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostContent"; }

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    bool SignBody() const override { return false; }


    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

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
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

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
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline PostContentRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline PostContentRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. At runtime, each request must contain the
     * <code>userID</code> field.</p> <p>To decide the user ID to use for your
     * application, consider the following factors.</p> <ul> <li> <p>The
     * <code>userID</code> field must not contain any personally identifiable
     * information of the user, for example, name, personal identification numbers, or
     * other end user personal information.</p> </li> <li> <p>If you want a user to
     * start a conversation on one device and continue on another device, use a
     * user-specific identifier.</p> </li> <li> <p>If you want the same user to be able
     * to have two independent conversations on two different devices, choose a
     * device-specific identifier.</p> </li> <li> <p>A user can't have two independent
     * conversations with two different versions of the same bot. For example, a user
     * can't have a conversation with the PROD and BETA versions of the same bot. If
     * you anticipate that a user will need to have conversation with two different
     * versions, for example, while testing, include the bot alias in the user ID to
     * separate the two conversations.</p> </li> </ul>
     */
    inline PostContentRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline const Aws::String& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline void SetSessionAttributes(const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline void SetSessionAttributes(Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline void SetSessionAttributes(const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.assign(value); }

    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostContentRequest& WithSessionAttributes(const Aws::String& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostContentRequest& WithSessionAttributes(Aws::String&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostContentRequest& WithSessionAttributes(const char* value) { SetSessionAttributes(value); return *this;}


    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline const Aws::String& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }

    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline void SetRequestAttributes(const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }

    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline void SetRequestAttributes(Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }

    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline void SetRequestAttributes(const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.assign(value); }

    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostContentRequest& WithRequestAttributes(const Aws::String& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostContentRequest& WithRequestAttributes(Aws::String&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostContentRequest& WithRequestAttributes(const char* value) { SetRequestAttributes(value); return *this;}


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
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

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

    Aws::String m_requestAttributes;
    bool m_requestAttributesHasBeenSet;

    Aws::String m_accept;
    bool m_acceptHasBeenSet;

  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
