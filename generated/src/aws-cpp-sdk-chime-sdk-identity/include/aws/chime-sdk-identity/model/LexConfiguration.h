/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/RespondsTo.h>
#include <aws/chime-sdk-identity/model/InvokedBy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>The configuration for an Amazon Lex V2 bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/LexConfiguration">AWS
   * API Reference</a></p>
   */
  class LexConfiguration
  {
  public:
    AWS_CHIMESDKIDENTITY_API LexConfiguration();
    AWS_CHIMESDKIDENTITY_API LexConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API LexConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     *  <p> <b>Deprecated</b>. Use <code>InvokedBy</code> instead.</p>
     *  <p>Determines whether the Amazon Lex V2 bot responds to all
     * standard messages. Control messages are not supported.</p>
     */
    inline const RespondsTo& GetRespondsTo() const{ return m_respondsTo; }

    /**
     *  <p> <b>Deprecated</b>. Use <code>InvokedBy</code> instead.</p>
     *  <p>Determines whether the Amazon Lex V2 bot responds to all
     * standard messages. Control messages are not supported.</p>
     */
    inline bool RespondsToHasBeenSet() const { return m_respondsToHasBeenSet; }

    /**
     *  <p> <b>Deprecated</b>. Use <code>InvokedBy</code> instead.</p>
     *  <p>Determines whether the Amazon Lex V2 bot responds to all
     * standard messages. Control messages are not supported.</p>
     */
    inline void SetRespondsTo(const RespondsTo& value) { m_respondsToHasBeenSet = true; m_respondsTo = value; }

    /**
     *  <p> <b>Deprecated</b>. Use <code>InvokedBy</code> instead.</p>
     *  <p>Determines whether the Amazon Lex V2 bot responds to all
     * standard messages. Control messages are not supported.</p>
     */
    inline void SetRespondsTo(RespondsTo&& value) { m_respondsToHasBeenSet = true; m_respondsTo = std::move(value); }

    /**
     *  <p> <b>Deprecated</b>. Use <code>InvokedBy</code> instead.</p>
     *  <p>Determines whether the Amazon Lex V2 bot responds to all
     * standard messages. Control messages are not supported.</p>
     */
    inline LexConfiguration& WithRespondsTo(const RespondsTo& value) { SetRespondsTo(value); return *this;}

    /**
     *  <p> <b>Deprecated</b>. Use <code>InvokedBy</code> instead.</p>
     *  <p>Determines whether the Amazon Lex V2 bot responds to all
     * standard messages. Control messages are not supported.</p>
     */
    inline LexConfiguration& WithRespondsTo(RespondsTo&& value) { SetRespondsTo(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of message that triggers a bot.</p>
     */
    inline const InvokedBy& GetInvokedBy() const{ return m_invokedBy; }

    /**
     * <p>Specifies the type of message that triggers a bot.</p>
     */
    inline bool InvokedByHasBeenSet() const { return m_invokedByHasBeenSet; }

    /**
     * <p>Specifies the type of message that triggers a bot.</p>
     */
    inline void SetInvokedBy(const InvokedBy& value) { m_invokedByHasBeenSet = true; m_invokedBy = value; }

    /**
     * <p>Specifies the type of message that triggers a bot.</p>
     */
    inline void SetInvokedBy(InvokedBy&& value) { m_invokedByHasBeenSet = true; m_invokedBy = std::move(value); }

    /**
     * <p>Specifies the type of message that triggers a bot.</p>
     */
    inline LexConfiguration& WithInvokedBy(const InvokedBy& value) { SetInvokedBy(value); return *this;}

    /**
     * <p>Specifies the type of message that triggers a bot.</p>
     */
    inline LexConfiguration& WithInvokedBy(InvokedBy&& value) { SetInvokedBy(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline const Aws::String& GetLexBotAliasArn() const{ return m_lexBotAliasArn; }

    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline bool LexBotAliasArnHasBeenSet() const { return m_lexBotAliasArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline void SetLexBotAliasArn(const Aws::String& value) { m_lexBotAliasArnHasBeenSet = true; m_lexBotAliasArn = value; }

    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline void SetLexBotAliasArn(Aws::String&& value) { m_lexBotAliasArnHasBeenSet = true; m_lexBotAliasArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline void SetLexBotAliasArn(const char* value) { m_lexBotAliasArnHasBeenSet = true; m_lexBotAliasArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline LexConfiguration& WithLexBotAliasArn(const Aws::String& value) { SetLexBotAliasArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline LexConfiguration& WithLexBotAliasArn(Aws::String&& value) { SetLexBotAliasArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline LexConfiguration& WithLexBotAliasArn(const char* value) { SetLexBotAliasArn(value); return *this;}


    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline LexConfiguration& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline LexConfiguration& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline LexConfiguration& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetWelcomeIntent() const{ return m_welcomeIntent; }

    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline bool WelcomeIntentHasBeenSet() const { return m_welcomeIntentHasBeenSet; }

    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline void SetWelcomeIntent(const Aws::String& value) { m_welcomeIntentHasBeenSet = true; m_welcomeIntent = value; }

    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline void SetWelcomeIntent(Aws::String&& value) { m_welcomeIntentHasBeenSet = true; m_welcomeIntent = std::move(value); }

    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline void SetWelcomeIntent(const char* value) { m_welcomeIntentHasBeenSet = true; m_welcomeIntent.assign(value); }

    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline LexConfiguration& WithWelcomeIntent(const Aws::String& value) { SetWelcomeIntent(value); return *this;}

    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline LexConfiguration& WithWelcomeIntent(Aws::String&& value) { SetWelcomeIntent(std::move(value)); return *this;}

    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline LexConfiguration& WithWelcomeIntent(const char* value) { SetWelcomeIntent(value); return *this;}

  private:

    RespondsTo m_respondsTo;
    bool m_respondsToHasBeenSet = false;

    InvokedBy m_invokedBy;
    bool m_invokedByHasBeenSet = false;

    Aws::String m_lexBotAliasArn;
    bool m_lexBotAliasArnHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_welcomeIntent;
    bool m_welcomeIntentHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
