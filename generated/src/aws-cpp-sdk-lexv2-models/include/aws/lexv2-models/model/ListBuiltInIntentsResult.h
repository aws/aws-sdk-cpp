/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BuiltInIntentSummary.h>
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
  class ListBuiltInIntentsResult
  {
  public:
    AWS_LEXMODELSV2_API ListBuiltInIntentsResult() = default;
    AWS_LEXMODELSV2_API ListBuiltInIntentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBuiltInIntentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for the built-in intents that meet the filter criteria
     * specified in the request. The length of the list is specified in the
     * <code>maxResults</code> parameter of the request. If there are more intents
     * available, the <code>nextToken</code> field contains a token to get the next
     * page of results.</p>
     */
    inline const Aws::Vector<BuiltInIntentSummary>& GetBuiltInIntentSummaries() const { return m_builtInIntentSummaries; }
    template<typename BuiltInIntentSummariesT = Aws::Vector<BuiltInIntentSummary>>
    void SetBuiltInIntentSummaries(BuiltInIntentSummariesT&& value) { m_builtInIntentSummariesHasBeenSet = true; m_builtInIntentSummaries = std::forward<BuiltInIntentSummariesT>(value); }
    template<typename BuiltInIntentSummariesT = Aws::Vector<BuiltInIntentSummary>>
    ListBuiltInIntentsResult& WithBuiltInIntentSummaries(BuiltInIntentSummariesT&& value) { SetBuiltInIntentSummaries(std::forward<BuiltInIntentSummariesT>(value)); return *this;}
    template<typename BuiltInIntentSummariesT = BuiltInIntentSummary>
    ListBuiltInIntentsResult& AddBuiltInIntentSummaries(BuiltInIntentSummariesT&& value) { m_builtInIntentSummariesHasBeenSet = true; m_builtInIntentSummaries.emplace_back(std::forward<BuiltInIntentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates whether there are more results to return in a response
     * to the <code>ListBuiltInIntents</code> operation. If the <code>nextToken</code>
     * field is present, you send the contents as the <code>nextToken</code> parameter
     * of a <code>ListBotAliases</code> operation request to get the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBuiltInIntentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale of the intents in the list.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    ListBuiltInIntentsResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBuiltInIntentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BuiltInIntentSummary> m_builtInIntentSummaries;
    bool m_builtInIntentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
