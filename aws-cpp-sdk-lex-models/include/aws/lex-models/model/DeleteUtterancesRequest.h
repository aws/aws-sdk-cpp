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
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API DeleteUtterancesRequest : public LexModelBuildingServiceRequest
  {
  public:
    DeleteUtterancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUtterances"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline DeleteUtterancesRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline DeleteUtterancesRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot that stored the utterances.</p>
     */
    inline DeleteUtterancesRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline DeleteUtterancesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline DeleteUtterancesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the user that made the utterances. This is the
     * user ID that was sent in the <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostContent.html">PostContent</a>
     * or <a
     * href="http://docs.aws.amazon.com/lex/latest/dg/API_runtime_PostText.html">PostText</a>
     * operation request that contained the utterance.</p>
     */
    inline DeleteUtterancesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
