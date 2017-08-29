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
#include <aws/lex-models/model/UtteranceList.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewResult
  {
  public:
    GetUtterancesViewResult();
    GetUtterancesViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUtterancesViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botName = value; }

    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }

    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline void SetBotName(const char* value) { m_botName.assign(value); }

    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline GetUtterancesViewResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline GetUtterancesViewResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline GetUtterancesViewResult& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version.</p>
     */
    inline const Aws::Vector<UtteranceList>& GetUtterances() const{ return m_utterances; }

    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version.</p>
     */
    inline void SetUtterances(const Aws::Vector<UtteranceList>& value) { m_utterances = value; }

    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version.</p>
     */
    inline void SetUtterances(Aws::Vector<UtteranceList>&& value) { m_utterances = std::move(value); }

    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version.</p>
     */
    inline GetUtterancesViewResult& WithUtterances(const Aws::Vector<UtteranceList>& value) { SetUtterances(value); return *this;}

    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version.</p>
     */
    inline GetUtterancesViewResult& WithUtterances(Aws::Vector<UtteranceList>&& value) { SetUtterances(std::move(value)); return *this;}

    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version.</p>
     */
    inline GetUtterancesViewResult& AddUtterances(const UtteranceList& value) { m_utterances.push_back(value); return *this; }

    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version.</p>
     */
    inline GetUtterancesViewResult& AddUtterances(UtteranceList&& value) { m_utterances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_botName;

    Aws::Vector<UtteranceList> m_utterances;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
