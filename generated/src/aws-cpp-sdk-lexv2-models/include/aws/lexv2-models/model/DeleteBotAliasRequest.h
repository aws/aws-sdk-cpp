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
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DeleteBotAliasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBotAlias"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline DeleteBotAliasRequest& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline DeleteBotAliasRequest& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot alias to delete.</p>
     */
    inline DeleteBotAliasRequest& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline DeleteBotAliasRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline DeleteBotAliasRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot associated with the alias to delete.</p>
     */
    inline DeleteBotAliasRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>When this parameter is true, Amazon Lex doesn't check to see if any other
     * resource is using the alias before it is deleted.</p>
     */
    inline bool GetSkipResourceInUseCheck() const{ return m_skipResourceInUseCheck; }

    /**
     * <p>When this parameter is true, Amazon Lex doesn't check to see if any other
     * resource is using the alias before it is deleted.</p>
     */
    inline bool SkipResourceInUseCheckHasBeenSet() const { return m_skipResourceInUseCheckHasBeenSet; }

    /**
     * <p>When this parameter is true, Amazon Lex doesn't check to see if any other
     * resource is using the alias before it is deleted.</p>
     */
    inline void SetSkipResourceInUseCheck(bool value) { m_skipResourceInUseCheckHasBeenSet = true; m_skipResourceInUseCheck = value; }

    /**
     * <p>When this parameter is true, Amazon Lex doesn't check to see if any other
     * resource is using the alias before it is deleted.</p>
     */
    inline DeleteBotAliasRequest& WithSkipResourceInUseCheck(bool value) { SetSkipResourceInUseCheck(value); return *this;}

  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    bool m_skipResourceInUseCheck;
    bool m_skipResourceInUseCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
