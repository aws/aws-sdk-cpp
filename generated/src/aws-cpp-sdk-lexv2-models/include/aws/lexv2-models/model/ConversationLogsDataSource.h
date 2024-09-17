/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ConversationLogsDataSourceFilterBy.h>
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
   * <p>The data source that uses conversation logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLogsDataSource">AWS
   * API Reference</a></p>
   */
  class ConversationLogsDataSource
  {
  public:
    AWS_LEXMODELSV2_API ConversationLogsDataSource();
    AWS_LEXMODELSV2_API ConversationLogsDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLogsDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The bot Id from the conversation logs.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline ConversationLogsDataSource& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ConversationLogsDataSource& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ConversationLogsDataSource& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bot alias Id from the conversation logs.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }
    inline ConversationLogsDataSource& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}
    inline ConversationLogsDataSource& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}
    inline ConversationLogsDataSource& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale Id of the conversation log.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline ConversationLogsDataSource& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline ConversationLogsDataSource& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline ConversationLogsDataSource& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter for the data source of the conversation log.</p>
     */
    inline const ConversationLogsDataSourceFilterBy& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const ConversationLogsDataSourceFilterBy& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(ConversationLogsDataSourceFilterBy&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ConversationLogsDataSource& WithFilter(const ConversationLogsDataSourceFilterBy& value) { SetFilter(value); return *this;}
    inline ConversationLogsDataSource& WithFilter(ConversationLogsDataSourceFilterBy&& value) { SetFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    ConversationLogsDataSourceFilterBy m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
