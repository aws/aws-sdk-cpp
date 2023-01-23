/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/lex/LexRuntimeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexRuntimeService
{
namespace Model
{

  /**
   */
  class GetSessionRequest : public LexRuntimeServiceRequest
  {
  public:
    AWS_LEXRUNTIMESERVICE_API GetSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSession"; }

    AWS_LEXRUNTIMESERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXRUNTIMESERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline GetSessionRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline GetSessionRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot that contains the session data.</p>
     */
    inline GetSessionRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline GetSessionRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline GetSessionRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>The alias in use for the bot that contains the session data.</p>
     */
    inline GetSessionRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline GetSessionRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline GetSessionRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client application user. Amazon Lex uses this to identify a
     * user's conversation with your bot. </p>
     */
    inline GetSessionRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline const Aws::String& GetCheckpointLabelFilter() const{ return m_checkpointLabelFilter; }

    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline bool CheckpointLabelFilterHasBeenSet() const { return m_checkpointLabelFilterHasBeenSet; }

    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline void SetCheckpointLabelFilter(const Aws::String& value) { m_checkpointLabelFilterHasBeenSet = true; m_checkpointLabelFilter = value; }

    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline void SetCheckpointLabelFilter(Aws::String&& value) { m_checkpointLabelFilterHasBeenSet = true; m_checkpointLabelFilter = std::move(value); }

    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline void SetCheckpointLabelFilter(const char* value) { m_checkpointLabelFilterHasBeenSet = true; m_checkpointLabelFilter.assign(value); }

    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline GetSessionRequest& WithCheckpointLabelFilter(const Aws::String& value) { SetCheckpointLabelFilter(value); return *this;}

    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline GetSessionRequest& WithCheckpointLabelFilter(Aws::String&& value) { SetCheckpointLabelFilter(std::move(value)); return *this;}

    /**
     * <p>A string used to filter the intents returned in the
     * <code>recentIntentSummaryView</code> structure. </p> <p>When you specify a
     * filter, only intents with their <code>checkpointLabel</code> field set to that
     * string are returned.</p>
     */
    inline GetSessionRequest& WithCheckpointLabelFilter(const char* value) { SetCheckpointLabelFilter(value); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_checkpointLabelFilter;
    bool m_checkpointLabelFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
