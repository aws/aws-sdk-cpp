﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetUtterancesViewResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the bot for which utterance information was returned.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline void SetBotName(const Aws::String& value) { m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botName.assign(value); }
    inline GetUtterancesViewResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline GetUtterancesViewResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline GetUtterancesViewResult& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>UtteranceList</a> objects, each containing a list of
     * <a>UtteranceData</a> objects describing the utterances that were processed by
     * your bot. The response contains a maximum of 100 <code>UtteranceData</code>
     * objects for each version. Amazon Lex returns the most frequent utterances
     * received by the bot in the last 15 days.</p>
     */
    inline const Aws::Vector<UtteranceList>& GetUtterances() const{ return m_utterances; }
    inline void SetUtterances(const Aws::Vector<UtteranceList>& value) { m_utterances = value; }
    inline void SetUtterances(Aws::Vector<UtteranceList>&& value) { m_utterances = std::move(value); }
    inline GetUtterancesViewResult& WithUtterances(const Aws::Vector<UtteranceList>& value) { SetUtterances(value); return *this;}
    inline GetUtterancesViewResult& WithUtterances(Aws::Vector<UtteranceList>&& value) { SetUtterances(std::move(value)); return *this;}
    inline GetUtterancesViewResult& AddUtterances(const UtteranceList& value) { m_utterances.push_back(value); return *this; }
    inline GetUtterancesViewResult& AddUtterances(UtteranceList&& value) { m_utterances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUtterancesViewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUtterancesViewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUtterancesViewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botName;

    Aws::Vector<UtteranceList> m_utterances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
