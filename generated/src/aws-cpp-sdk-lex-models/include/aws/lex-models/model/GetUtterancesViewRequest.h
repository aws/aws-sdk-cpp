/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/StatusType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class GetUtterancesViewRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUtterancesView"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXMODELBUILDINGSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline GetUtterancesViewRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline GetUtterancesViewRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline GetUtterancesViewRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBotVersions() const{ return m_botVersions; }

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline bool BotVersionsHasBeenSet() const { return m_botVersionsHasBeenSet; }

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline void SetBotVersions(const Aws::Vector<Aws::String>& value) { m_botVersionsHasBeenSet = true; m_botVersions = value; }

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline void SetBotVersions(Aws::Vector<Aws::String>&& value) { m_botVersionsHasBeenSet = true; m_botVersions = std::move(value); }

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline GetUtterancesViewRequest& WithBotVersions(const Aws::Vector<Aws::String>& value) { SetBotVersions(value); return *this;}

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline GetUtterancesViewRequest& WithBotVersions(Aws::Vector<Aws::String>&& value) { SetBotVersions(std::move(value)); return *this;}

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline GetUtterancesViewRequest& AddBotVersions(const Aws::String& value) { m_botVersionsHasBeenSet = true; m_botVersions.push_back(value); return *this; }

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline GetUtterancesViewRequest& AddBotVersions(Aws::String&& value) { m_botVersionsHasBeenSet = true; m_botVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline GetUtterancesViewRequest& AddBotVersions(const char* value) { m_botVersionsHasBeenSet = true; m_botVersions.push_back(value); return *this; }


    /**
     * <p>To return utterances that were recognized and handled, use
     * <code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline const StatusType& GetStatusType() const{ return m_statusType; }

    /**
     * <p>To return utterances that were recognized and handled, use
     * <code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }

    /**
     * <p>To return utterances that were recognized and handled, use
     * <code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline void SetStatusType(const StatusType& value) { m_statusTypeHasBeenSet = true; m_statusType = value; }

    /**
     * <p>To return utterances that were recognized and handled, use
     * <code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline void SetStatusType(StatusType&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::move(value); }

    /**
     * <p>To return utterances that were recognized and handled, use
     * <code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline GetUtterancesViewRequest& WithStatusType(const StatusType& value) { SetStatusType(value); return *this;}

    /**
     * <p>To return utterances that were recognized and handled, use
     * <code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline GetUtterancesViewRequest& WithStatusType(StatusType&& value) { SetStatusType(std::move(value)); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_botVersions;
    bool m_botVersionsHasBeenSet = false;

    StatusType m_statusType;
    bool m_statusTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
