/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotAnalyzerHistorySummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LexModelsV2 {
namespace Model {
class ListBotAnalyzerHistoryResult {
 public:
  AWS_LEXMODELSV2_API ListBotAnalyzerHistoryResult() = default;
  AWS_LEXMODELSV2_API ListBotAnalyzerHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LEXMODELSV2_API ListBotAnalyzerHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the bot.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  ListBotAnalyzerHistoryResult& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale identifier used to filter the history.</p>
   */
  inline const Aws::String& GetLocaleId() const { return m_localeId; }
  template <typename LocaleIdT = Aws::String>
  void SetLocaleId(LocaleIdT&& value) {
    m_localeIdHasBeenSet = true;
    m_localeId = std::forward<LocaleIdT>(value);
  }
  template <typename LocaleIdT = Aws::String>
  ListBotAnalyzerHistoryResult& WithLocaleId(LocaleIdT&& value) {
    SetLocaleId(std::forward<LocaleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bot version used to filter the history.</p>
   */
  inline const Aws::String& GetBotVersion() const { return m_botVersion; }
  template <typename BotVersionT = Aws::String>
  void SetBotVersion(BotVersionT&& value) {
    m_botVersionHasBeenSet = true;
    m_botVersion = std::forward<BotVersionT>(value);
  }
  template <typename BotVersionT = Aws::String>
  ListBotAnalyzerHistoryResult& WithBotVersion(BotVersionT&& value) {
    SetBotVersion(std::forward<BotVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of historical analysis executions, ordered by creation date with the
   * most recent first.</p>
   */
  inline const Aws::Vector<BotAnalyzerHistorySummary>& GetBotAnalyzerHistoryList() const { return m_botAnalyzerHistoryList; }
  template <typename BotAnalyzerHistoryListT = Aws::Vector<BotAnalyzerHistorySummary>>
  void SetBotAnalyzerHistoryList(BotAnalyzerHistoryListT&& value) {
    m_botAnalyzerHistoryListHasBeenSet = true;
    m_botAnalyzerHistoryList = std::forward<BotAnalyzerHistoryListT>(value);
  }
  template <typename BotAnalyzerHistoryListT = Aws::Vector<BotAnalyzerHistorySummary>>
  ListBotAnalyzerHistoryResult& WithBotAnalyzerHistoryList(BotAnalyzerHistoryListT&& value) {
    SetBotAnalyzerHistoryList(std::forward<BotAnalyzerHistoryListT>(value));
    return *this;
  }
  template <typename BotAnalyzerHistoryListT = BotAnalyzerHistorySummary>
  ListBotAnalyzerHistoryResult& AddBotAnalyzerHistoryList(BotAnalyzerHistoryListT&& value) {
    m_botAnalyzerHistoryListHasBeenSet = true;
    m_botAnalyzerHistoryList.emplace_back(std::forward<BotAnalyzerHistoryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, this token can be used in a subsequent request
   * to retrieve the next page of history entries.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBotAnalyzerHistoryResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListBotAnalyzerHistoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_botId;

  Aws::String m_localeId;

  Aws::String m_botVersion;

  Aws::Vector<BotAnalyzerHistorySummary> m_botAnalyzerHistoryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_botIdHasBeenSet = false;
  bool m_localeIdHasBeenSet = false;
  bool m_botVersionHasBeenSet = false;
  bool m_botAnalyzerHistoryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
