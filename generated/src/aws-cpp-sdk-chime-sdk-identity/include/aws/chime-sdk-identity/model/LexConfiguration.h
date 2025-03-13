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
    AWS_CHIMESDKIDENTITY_API LexConfiguration() = default;
    AWS_CHIMESDKIDENTITY_API LexConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API LexConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     *  <p> <b>Deprecated</b>. Use <code>InvokedBy</code> instead.</p>
     *  <p>Determines whether the Amazon Lex V2 bot responds to all
     * standard messages. Control messages are not supported.</p>
     */
    inline RespondsTo GetRespondsTo() const { return m_respondsTo; }
    inline bool RespondsToHasBeenSet() const { return m_respondsToHasBeenSet; }
    inline void SetRespondsTo(RespondsTo value) { m_respondsToHasBeenSet = true; m_respondsTo = value; }
    inline LexConfiguration& WithRespondsTo(RespondsTo value) { SetRespondsTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of message that triggers a bot.</p>
     */
    inline const InvokedBy& GetInvokedBy() const { return m_invokedBy; }
    inline bool InvokedByHasBeenSet() const { return m_invokedByHasBeenSet; }
    template<typename InvokedByT = InvokedBy>
    void SetInvokedBy(InvokedByT&& value) { m_invokedByHasBeenSet = true; m_invokedBy = std::forward<InvokedByT>(value); }
    template<typename InvokedByT = InvokedBy>
    LexConfiguration& WithInvokedBy(InvokedByT&& value) { SetInvokedBy(std::forward<InvokedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Lex V2 bot's alias. The ARN uses this format:
     * <code>arn:aws:lex:REGION:ACCOUNT:bot-alias/MYBOTID/MYBOTALIAS</code> </p>
     */
    inline const Aws::String& GetLexBotAliasArn() const { return m_lexBotAliasArn; }
    inline bool LexBotAliasArnHasBeenSet() const { return m_lexBotAliasArnHasBeenSet; }
    template<typename LexBotAliasArnT = Aws::String>
    void SetLexBotAliasArn(LexBotAliasArnT&& value) { m_lexBotAliasArnHasBeenSet = true; m_lexBotAliasArn = std::forward<LexBotAliasArnT>(value); }
    template<typename LexBotAliasArnT = Aws::String>
    LexConfiguration& WithLexBotAliasArn(LexBotAliasArnT&& value) { SetLexBotAliasArn(std::forward<LexBotAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Lex V2 bot's language and locale. The string must match
     * one of the supported locales in Amazon Lex V2. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> in the <i>Amazon Lex V2 Developer Guide</i>.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    LexConfiguration& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the welcome intent configured in the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetWelcomeIntent() const { return m_welcomeIntent; }
    inline bool WelcomeIntentHasBeenSet() const { return m_welcomeIntentHasBeenSet; }
    template<typename WelcomeIntentT = Aws::String>
    void SetWelcomeIntent(WelcomeIntentT&& value) { m_welcomeIntentHasBeenSet = true; m_welcomeIntent = std::forward<WelcomeIntentT>(value); }
    template<typename WelcomeIntentT = Aws::String>
    LexConfiguration& WithWelcomeIntent(WelcomeIntentT&& value) { SetWelcomeIntent(std::forward<WelcomeIntentT>(value)); return *this;}
    ///@}
  private:

    RespondsTo m_respondsTo{RespondsTo::NOT_SET};
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
