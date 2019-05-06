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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostText"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

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
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

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
    inline PostTextRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

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
    inline PostTextRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

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
    inline PostTextRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-specific information passed between Amazon Lex and a client
     * application.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline PostTextRequest& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestAttributes() const{ return m_requestAttributes; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline void SetRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = value; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline void SetRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::move(value); }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& WithRequestAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestAttributes(value); return *this;}

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& WithRequestAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestAttributes(std::move(value)); return *this;}

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& AddRequestAttributes(const Aws::String& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& AddRequestAttributes(Aws::String&& key, const Aws::String& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& AddRequestAttributes(const Aws::String& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& AddRequestAttributes(Aws::String&& key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& AddRequestAttributes(const char* key, Aws::String&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& AddRequestAttributes(Aws::String&& key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Request-specific information passed between Amazon Lex and a client
     * application.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline PostTextRequest& AddRequestAttributes(const char* key, const char* value) { m_requestAttributesHasBeenSet = true; m_requestAttributes.emplace(key, value); return *this; }


    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline const Aws::String& GetInputText() const{ return m_inputText; }

    /**
     * <p>The text that the user entered (Amazon Lex interprets this text).</p>
     */
    inline bool InputTextHasBeenSet() const { return m_inputTextHasBeenSet; }

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

    Aws::Map<Aws::String, Aws::String> m_requestAttributes;
    bool m_requestAttributesHasBeenSet;

    Aws::String m_inputText;
    bool m_inputTextHasBeenSet;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
