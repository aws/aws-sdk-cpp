/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class DeleteBotResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotResult();
    AWS_LEXMODELSV2_API DeleteBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot that Amazon Lex is deleting.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that Amazon Lex is deleting.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot that Amazon Lex is deleting.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that Amazon Lex is deleting.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that Amazon Lex is deleting.</p>
     */
    inline DeleteBotResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that Amazon Lex is deleting.</p>
     */
    inline DeleteBotResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that Amazon Lex is deleting.</p>
     */
    inline DeleteBotResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The current status of the bot. The status is <code>Deleting</code> while the
     * bot and its associated resources are being deleted.</p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }

    /**
     * <p>The current status of the bot. The status is <code>Deleting</code> while the
     * bot and its associated resources are being deleted.</p>
     */
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }

    /**
     * <p>The current status of the bot. The status is <code>Deleting</code> while the
     * bot and its associated resources are being deleted.</p>
     */
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }

    /**
     * <p>The current status of the bot. The status is <code>Deleting</code> while the
     * bot and its associated resources are being deleted.</p>
     */
    inline DeleteBotResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}

    /**
     * <p>The current status of the bot. The status is <code>Deleting</code> while the
     * bot and its associated resources are being deleted.</p>
     */
    inline DeleteBotResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    BotStatus m_botStatus;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
