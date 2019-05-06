/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetUtterancesViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUtterancesView"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * <p>To return utterances that were recognized and handled,
     * use<code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline const StatusType& GetStatusType() const{ return m_statusType; }

    /**
     * <p>To return utterances that were recognized and handled,
     * use<code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }

    /**
     * <p>To return utterances that were recognized and handled,
     * use<code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline void SetStatusType(const StatusType& value) { m_statusTypeHasBeenSet = true; m_statusType = value; }

    /**
     * <p>To return utterances that were recognized and handled,
     * use<code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline void SetStatusType(StatusType&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::move(value); }

    /**
     * <p>To return utterances that were recognized and handled,
     * use<code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline GetUtterancesViewRequest& WithStatusType(const StatusType& value) { SetStatusType(value); return *this;}

    /**
     * <p>To return utterances that were recognized and handled,
     * use<code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline GetUtterancesViewRequest& WithStatusType(StatusType&& value) { SetStatusType(std::move(value)); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::Vector<Aws::String> m_botVersions;
    bool m_botVersionsHasBeenSet;

    StatusType m_statusType;
    bool m_statusTypeHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
