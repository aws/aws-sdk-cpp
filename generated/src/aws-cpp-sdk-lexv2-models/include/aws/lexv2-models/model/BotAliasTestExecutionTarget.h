/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The target Amazon S3 location for the test set execution using a bot
   * alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotAliasTestExecutionTarget">AWS
   * API Reference</a></p>
   */
  class BotAliasTestExecutionTarget
  {
  public:
    AWS_LEXMODELSV2_API BotAliasTestExecutionTarget();
    AWS_LEXMODELSV2_API BotAliasTestExecutionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotAliasTestExecutionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The bot Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The bot alias Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale Id of the bot alias used in the test set execution.</p>
     */
    inline BotAliasTestExecutionTarget& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
