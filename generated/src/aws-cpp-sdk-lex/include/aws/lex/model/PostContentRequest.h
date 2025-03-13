/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PostContentRequest : public StreamingLexRuntimeServiceRequest
  {
  public:
    AWS_LEXRUNTIMESERVICE_API PostContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostContent"; }

    AWS_LEXRUNTIMESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_LEXRUNTIMESERVICE_API bool SignBody() const override { return false; }


    ///@{
    /**
     * <p>Name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    PostContentRequest& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Alias of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotAlias() const { return m_botAlias; }
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }
    template<typename BotAliasT = Aws::String>
    void SetBotAlias(BotAliasT&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::forward<BotAliasT>(value); }
    template<typename BotAliasT = Aws::String>
    PostContentRequest& WithBotAlias(BotAliasT&& value) { SetBotAlias(std::forward<BotAliasT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    PostContentRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You pass this value as the <code>x-amz-lex-session-attributes</code> HTTP
     * header.</p> <p>Application-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>sessionAttributes</code> and <code>requestAttributes</code> headers is
     * limited to 12 KB.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-session-attribs">Setting
     * Session Attributes</a>.</p>
     */
    inline const Aws::String& GetSessionAttributes() const { return m_sessionAttributes; }
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }
    template<typename SessionAttributesT = Aws::String>
    void SetSessionAttributes(SessionAttributesT&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::forward<SessionAttributesT>(value); }
    template<typename SessionAttributesT = Aws::String>
    PostContentRequest& WithSessionAttributes(SessionAttributesT&& value) { SetSessionAttributes(std::forward<SessionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You pass this value as the <code>x-amz-lex-request-attributes</code> HTTP
     * header.</p> <p>Request-specific information passed between Amazon Lex and a
     * client application. The value must be a JSON serialized and base64 encoded map
     * with string keys and values. The total size of the
     * <code>requestAttributes</code> and <code>sessionAttributes</code> headers is
     * limited to 12 KB.</p> <p>The namespace <code>x-amz-lex:</code> is reserved for
     * special attributes. Don't create any request attributes with the prefix
     * <code>x-amz-lex:</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/context-mgmt.html#context-mgmt-request-attribs">Setting
     * Request Attributes</a>.</p>
     */
    inline const Aws::String& GetRequestAttributes() const { return m_requestAttributes; }
    inline bool RequestAttributesHasBeenSet() const { return m_requestAttributesHasBeenSet; }
    template<typename RequestAttributesT = Aws::String>
    void SetRequestAttributes(RequestAttributesT&& value) { m_requestAttributesHasBeenSet = true; m_requestAttributes = std::forward<RequestAttributesT>(value); }
    template<typename RequestAttributesT = Aws::String>
    PostContentRequest& WithRequestAttributes(RequestAttributesT&& value) { SetRequestAttributes(std::forward<RequestAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> You pass this value as the <code>Accept</code> HTTP header. </p> <p> The
     * message Amazon Lex returns in the response can be either text or speech based on
     * the <code>Accept</code> HTTP header value in the request. </p> <ul> <li> <p> If
     * the value is <code>text/plain; charset=utf-8</code>, Amazon Lex returns text in
     * the response. </p> </li> <li> <p> If the value begins with <code>audio/</code>,
     * Amazon Lex returns speech in the response. Amazon Lex uses Amazon Polly to
     * generate the speech (using the configuration you specified in the
     * <code>Accept</code> header). For example, if you specify <code>audio/mpeg</code>
     * as the value, Amazon Lex returns speech in the MPEG format.</p> </li> <li> <p>If
     * the value is <code>audio/pcm</code>, the speech returned is
     * <code>audio/pcm</code> in 16-bit, little endian format. </p> </li> <li> <p>The
     * following are the accepted values:</p> <ul> <li> <p>audio/mpeg</p> </li> <li>
     * <p>audio/ogg</p> </li> <li> <p>audio/pcm</p> </li> <li> <p>text/plain;
     * charset=utf-8</p> </li> <li> <p>audio/ * (defaults to mpeg)</p> </li> </ul> </li>
     * </ul>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    PostContentRequest& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request,</p>
     * <p>If you don't specify a list of contexts, Amazon Lex will use the current list
     * of contexts for the session. If you specify an empty list, all contexts for the
     * session are cleared.</p>
     */
    inline const Aws::String& GetActiveContexts() const { return m_activeContexts; }
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }
    template<typename ActiveContextsT = Aws::String>
    void SetActiveContexts(ActiveContextsT&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::forward<ActiveContextsT>(value); }
    template<typename ActiveContextsT = Aws::String>
    PostContentRequest& WithActiveContexts(ActiveContextsT&& value) { SetActiveContexts(std::forward<ActiveContextsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::String m_requestAttributes;
    bool m_requestAttributesHasBeenSet = false;

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;


    Aws::String m_activeContexts;
    bool m_activeContextsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
