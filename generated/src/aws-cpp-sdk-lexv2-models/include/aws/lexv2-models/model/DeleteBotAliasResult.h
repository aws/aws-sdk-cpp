/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotAliasStatus.h>
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
  class DeleteBotAliasResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotAliasResult();
    AWS_LEXMODELSV2_API DeleteBotAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteBotAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasId = value; }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasId.assign(value); }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline DeleteBotAliasResult& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline DeleteBotAliasResult& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline DeleteBotAliasResult& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The unique identifier of the bot that contains the alias to delete.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that contains the alias to delete.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot that contains the alias to delete.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that contains the alias to delete.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that contains the alias to delete.</p>
     */
    inline DeleteBotAliasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the alias to delete.</p>
     */
    inline DeleteBotAliasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the alias to delete.</p>
     */
    inline DeleteBotAliasResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The current status of the alias. The status is <code>Deleting</code> while
     * the alias is in the process of being deleted. Once the alias is deleted, it will
     * no longer appear in the list of aliases returned by the
     * <code>ListBotAliases</code> operation.</p>
     */
    inline const BotAliasStatus& GetBotAliasStatus() const{ return m_botAliasStatus; }

    /**
     * <p>The current status of the alias. The status is <code>Deleting</code> while
     * the alias is in the process of being deleted. Once the alias is deleted, it will
     * no longer appear in the list of aliases returned by the
     * <code>ListBotAliases</code> operation.</p>
     */
    inline void SetBotAliasStatus(const BotAliasStatus& value) { m_botAliasStatus = value; }

    /**
     * <p>The current status of the alias. The status is <code>Deleting</code> while
     * the alias is in the process of being deleted. Once the alias is deleted, it will
     * no longer appear in the list of aliases returned by the
     * <code>ListBotAliases</code> operation.</p>
     */
    inline void SetBotAliasStatus(BotAliasStatus&& value) { m_botAliasStatus = std::move(value); }

    /**
     * <p>The current status of the alias. The status is <code>Deleting</code> while
     * the alias is in the process of being deleted. Once the alias is deleted, it will
     * no longer appear in the list of aliases returned by the
     * <code>ListBotAliases</code> operation.</p>
     */
    inline DeleteBotAliasResult& WithBotAliasStatus(const BotAliasStatus& value) { SetBotAliasStatus(value); return *this;}

    /**
     * <p>The current status of the alias. The status is <code>Deleting</code> while
     * the alias is in the process of being deleted. Once the alias is deleted, it will
     * no longer appear in the list of aliases returned by the
     * <code>ListBotAliases</code> operation.</p>
     */
    inline DeleteBotAliasResult& WithBotAliasStatus(BotAliasStatus&& value) { SetBotAliasStatus(std::move(value)); return *this;}

  private:

    Aws::String m_botAliasId;

    Aws::String m_botId;

    BotAliasStatus m_botAliasStatus;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
