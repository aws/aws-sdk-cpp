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
   * <p>Provides the bot locale parameters required for exporting a bot
   * locale.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotLocaleExportSpecification">AWS
   * API Reference</a></p>
   */
  class BotLocaleExportSpecification
  {
  public:
    AWS_LEXMODELSV2_API BotLocaleExportSpecification();
    AWS_LEXMODELSV2_API BotLocaleExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotLocaleExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the bot to create the locale for.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline BotLocaleExportSpecification& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline BotLocaleExportSpecification& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline BotLocaleExportSpecification& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot to export.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline BotLocaleExportSpecification& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline BotLocaleExportSpecification& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline BotLocaleExportSpecification& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale to export. The string must match
     * one of the locales in the bot.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline BotLocaleExportSpecification& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline BotLocaleExportSpecification& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline BotLocaleExportSpecification& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
