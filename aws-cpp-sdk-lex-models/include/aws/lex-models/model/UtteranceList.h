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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/UtteranceData.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides a list of utterances that have been made to a specific version of
   * your bot. The list contains a maximum of 100 utterances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/UtteranceList">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API UtteranceList
  {
  public:
    UtteranceList();
    UtteranceList(Aws::Utils::Json::JsonView jsonValue);
    UtteranceList& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline UtteranceList& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline UtteranceList& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline UtteranceList& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline const Aws::Vector<UtteranceData>& GetUtterances() const{ return m_utterances; }

    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline bool UtterancesHasBeenSet() const { return m_utterancesHasBeenSet; }

    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline void SetUtterances(const Aws::Vector<UtteranceData>& value) { m_utterancesHasBeenSet = true; m_utterances = value; }

    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline void SetUtterances(Aws::Vector<UtteranceData>&& value) { m_utterancesHasBeenSet = true; m_utterances = std::move(value); }

    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline UtteranceList& WithUtterances(const Aws::Vector<UtteranceData>& value) { SetUtterances(value); return *this;}

    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline UtteranceList& WithUtterances(Aws::Vector<UtteranceData>&& value) { SetUtterances(std::move(value)); return *this;}

    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline UtteranceList& AddUtterances(const UtteranceData& value) { m_utterancesHasBeenSet = true; m_utterances.push_back(value); return *this; }

    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline UtteranceList& AddUtterances(UtteranceData&& value) { m_utterancesHasBeenSet = true; m_utterances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet;

    Aws::Vector<UtteranceData> m_utterances;
    bool m_utterancesHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
