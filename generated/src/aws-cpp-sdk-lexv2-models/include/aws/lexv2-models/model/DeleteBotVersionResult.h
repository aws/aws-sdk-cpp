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
  class DeleteBotVersionResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotVersionResult();
    AWS_LEXMODELSV2_API DeleteBotVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteBotVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the bot that is being deleted.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that is being deleted.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier of the bot that is being deleted.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that is being deleted.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that is being deleted.</p>
     */
    inline DeleteBotVersionResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that is being deleted.</p>
     */
    inline DeleteBotVersionResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that is being deleted.</p>
     */
    inline DeleteBotVersionResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that is being deleted.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that is being deleted.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot that is being deleted.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that is being deleted.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that is being deleted.</p>
     */
    inline DeleteBotVersionResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that is being deleted.</p>
     */
    inline DeleteBotVersionResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that is being deleted.</p>
     */
    inline DeleteBotVersionResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The current status of the bot. </p>
     */
    inline const BotStatus& GetBotStatus() const{ return m_botStatus; }

    /**
     * <p>The current status of the bot. </p>
     */
    inline void SetBotStatus(const BotStatus& value) { m_botStatus = value; }

    /**
     * <p>The current status of the bot. </p>
     */
    inline void SetBotStatus(BotStatus&& value) { m_botStatus = std::move(value); }

    /**
     * <p>The current status of the bot. </p>
     */
    inline DeleteBotVersionResult& WithBotStatus(const BotStatus& value) { SetBotStatus(value); return *this;}

    /**
     * <p>The current status of the bot. </p>
     */
    inline DeleteBotVersionResult& WithBotStatus(BotStatus&& value) { SetBotStatus(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    BotStatus m_botStatus;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
