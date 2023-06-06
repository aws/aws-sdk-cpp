/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ConversationLogsDataSource.h>
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
   * <p>Contains information about the data source from which the test set is
   * generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetGenerationDataSource">AWS
   * API Reference</a></p>
   */
  class TestSetGenerationDataSource
  {
  public:
    AWS_LEXMODELSV2_API TestSetGenerationDataSource();
    AWS_LEXMODELSV2_API TestSetGenerationDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetGenerationDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the bot from which the conversation logs are
     * sourced.</p>
     */
    inline const ConversationLogsDataSource& GetConversationLogsDataSource() const{ return m_conversationLogsDataSource; }

    /**
     * <p>Contains information about the bot from which the conversation logs are
     * sourced.</p>
     */
    inline bool ConversationLogsDataSourceHasBeenSet() const { return m_conversationLogsDataSourceHasBeenSet; }

    /**
     * <p>Contains information about the bot from which the conversation logs are
     * sourced.</p>
     */
    inline void SetConversationLogsDataSource(const ConversationLogsDataSource& value) { m_conversationLogsDataSourceHasBeenSet = true; m_conversationLogsDataSource = value; }

    /**
     * <p>Contains information about the bot from which the conversation logs are
     * sourced.</p>
     */
    inline void SetConversationLogsDataSource(ConversationLogsDataSource&& value) { m_conversationLogsDataSourceHasBeenSet = true; m_conversationLogsDataSource = std::move(value); }

    /**
     * <p>Contains information about the bot from which the conversation logs are
     * sourced.</p>
     */
    inline TestSetGenerationDataSource& WithConversationLogsDataSource(const ConversationLogsDataSource& value) { SetConversationLogsDataSource(value); return *this;}

    /**
     * <p>Contains information about the bot from which the conversation logs are
     * sourced.</p>
     */
    inline TestSetGenerationDataSource& WithConversationLogsDataSource(ConversationLogsDataSource&& value) { SetConversationLogsDataSource(std::move(value)); return *this;}

  private:

    ConversationLogsDataSource m_conversationLogsDataSource;
    bool m_conversationLogsDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
