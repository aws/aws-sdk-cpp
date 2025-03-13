/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/LexBot.h>
#include <aws/connect/model/LexV2Bot.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information of an Amazon Lex or Amazon Lex V2
   * bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/LexBotConfig">AWS
   * API Reference</a></p>
   */
  class LexBotConfig
  {
  public:
    AWS_CONNECT_API LexBotConfig() = default;
    AWS_CONNECT_API LexBotConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API LexBotConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const LexBot& GetLexBot() const { return m_lexBot; }
    inline bool LexBotHasBeenSet() const { return m_lexBotHasBeenSet; }
    template<typename LexBotT = LexBot>
    void SetLexBot(LexBotT&& value) { m_lexBotHasBeenSet = true; m_lexBot = std::forward<LexBotT>(value); }
    template<typename LexBotT = LexBot>
    LexBotConfig& WithLexBot(LexBotT&& value) { SetLexBot(std::forward<LexBotT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information of an Amazon Lex V2 bot.</p>
     */
    inline const LexV2Bot& GetLexV2Bot() const { return m_lexV2Bot; }
    inline bool LexV2BotHasBeenSet() const { return m_lexV2BotHasBeenSet; }
    template<typename LexV2BotT = LexV2Bot>
    void SetLexV2Bot(LexV2BotT&& value) { m_lexV2BotHasBeenSet = true; m_lexV2Bot = std::forward<LexV2BotT>(value); }
    template<typename LexV2BotT = LexV2Bot>
    LexBotConfig& WithLexV2Bot(LexV2BotT&& value) { SetLexV2Bot(std::forward<LexV2BotT>(value)); return *this;}
    ///@}
  private:

    LexBot m_lexBot;
    bool m_lexBotHasBeenSet = false;

    LexV2Bot m_lexV2Bot;
    bool m_lexV2BotHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
