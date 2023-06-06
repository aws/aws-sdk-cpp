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
   * <p>Contains information about the bot alias used for the test set discrepancy
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetDiscrepancyReportBotAliasTarget">AWS
   * API Reference</a></p>
   */
  class TestSetDiscrepancyReportBotAliasTarget
  {
  public:
    AWS_LEXMODELSV2_API TestSetDiscrepancyReportBotAliasTarget();
    AWS_LEXMODELSV2_API TestSetDiscrepancyReportBotAliasTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetDiscrepancyReportBotAliasTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the bot associated with the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the locale associated with the bot alias.</p>
     */
    inline TestSetDiscrepancyReportBotAliasTarget& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

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
