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
    AWS_CONNECT_API LexBotConfig();
    AWS_CONNECT_API LexBotConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API LexBotConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const LexBot& GetLexBot() const{ return m_lexBot; }

    
    inline bool LexBotHasBeenSet() const { return m_lexBotHasBeenSet; }

    
    inline void SetLexBot(const LexBot& value) { m_lexBotHasBeenSet = true; m_lexBot = value; }

    
    inline void SetLexBot(LexBot&& value) { m_lexBotHasBeenSet = true; m_lexBot = std::move(value); }

    
    inline LexBotConfig& WithLexBot(const LexBot& value) { SetLexBot(value); return *this;}

    
    inline LexBotConfig& WithLexBot(LexBot&& value) { SetLexBot(std::move(value)); return *this;}


    /**
     * <p>Configuration information of an Amazon Lex V2 bot.</p>
     */
    inline const LexV2Bot& GetLexV2Bot() const{ return m_lexV2Bot; }

    /**
     * <p>Configuration information of an Amazon Lex V2 bot.</p>
     */
    inline bool LexV2BotHasBeenSet() const { return m_lexV2BotHasBeenSet; }

    /**
     * <p>Configuration information of an Amazon Lex V2 bot.</p>
     */
    inline void SetLexV2Bot(const LexV2Bot& value) { m_lexV2BotHasBeenSet = true; m_lexV2Bot = value; }

    /**
     * <p>Configuration information of an Amazon Lex V2 bot.</p>
     */
    inline void SetLexV2Bot(LexV2Bot&& value) { m_lexV2BotHasBeenSet = true; m_lexV2Bot = std::move(value); }

    /**
     * <p>Configuration information of an Amazon Lex V2 bot.</p>
     */
    inline LexBotConfig& WithLexV2Bot(const LexV2Bot& value) { SetLexV2Bot(value); return *this;}

    /**
     * <p>Configuration information of an Amazon Lex V2 bot.</p>
     */
    inline LexBotConfig& WithLexV2Bot(LexV2Bot&& value) { SetLexV2Bot(std::move(value)); return *this;}

  private:

    LexBot m_lexBot;
    bool m_lexBotHasBeenSet = false;

    LexV2Bot m_lexV2Bot;
    bool m_lexV2BotHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
