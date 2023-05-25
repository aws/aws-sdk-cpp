/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DescribeBotAliasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBotAlias"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline DescribeBotAliasRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline DescribeBotAliasRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot alias to describe.</p>
     */
    inline DescribeBotAliasRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline DescribeBotAliasRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline DescribeBotAliasRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the bot alias to describe.</p>
     */
    inline DescribeBotAliasRequest& WithBotId(const char* value) { SetBotId(value); return *this;}

  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
