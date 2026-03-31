/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotAnalyzerRecommendation.h>
#include <aws/lexv2-models/model/BotAnalyzerStatus.h>

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
class DescribeBotAnalyzerRecommendationResult {
 public:
  AWS_LEXMODELSV2_API DescribeBotAnalyzerRecommendationResult() = default;
  AWS_LEXMODELSV2_API DescribeBotAnalyzerRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LEXMODELSV2_API DescribeBotAnalyzerRecommendationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  DescribeBotAnalyzerRecommendationResult& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the bot that was analyzed.</p>
   */
  inline const Aws::String& GetBotVersion() const { return m_botVersion; }
  template <typename BotVersionT = Aws::String>
  void SetBotVersion(BotVersionT&& value) {
    m_botVersionHasBeenSet = true;
    m_botVersion = std::forward<BotVersionT>(value);
  }
  template <typename BotVersionT = Aws::String>
  DescribeBotAnalyzerRecommendationResult& WithBotVersion(BotVersionT&& value) {
    SetBotVersion(std::forward<BotVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale identifier of the bot locale that was analyzed.</p>
   */
  inline const Aws::String& GetLocaleId() const { return m_localeId; }
  template <typename LocaleIdT = Aws::String>
  void SetLocaleId(LocaleIdT&& value) {
    m_localeIdHasBeenSet = true;
    m_localeId = std::forward<LocaleIdT>(value);
  }
  template <typename LocaleIdT = Aws::String>
  DescribeBotAnalyzerRecommendationResult& WithLocaleId(LocaleIdT&& value) {
    SetLocaleId(std::forward<LocaleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the analysis.</p> <p>Valid Values: <code>Processing |
   * Available | Failed | Stopping | Stopped</code> </p>
   */
  inline BotAnalyzerStatus GetBotAnalyzerStatus() const { return m_botAnalyzerStatus; }
  inline void SetBotAnalyzerStatus(BotAnalyzerStatus value) {
    m_botAnalyzerStatusHasBeenSet = true;
    m_botAnalyzerStatus = value;
  }
  inline DescribeBotAnalyzerRecommendationResult& WithBotAnalyzerStatus(BotAnalyzerStatus value) {
    SetBotAnalyzerStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the analysis was initiated.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
  template <typename CreationDateTimeT = Aws::Utils::DateTime>
  void SetCreationDateTime(CreationDateTimeT&& value) {
    m_creationDateTimeHasBeenSet = true;
    m_creationDateTime = std::forward<CreationDateTimeT>(value);
  }
  template <typename CreationDateTimeT = Aws::Utils::DateTime>
  DescribeBotAnalyzerRecommendationResult& WithCreationDateTime(CreationDateTimeT&& value) {
    SetCreationDateTime(std::forward<CreationDateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of recommendations for optimizing your bot configuration. Each
   * recommendation includes the issue location, priority, description, and proposed
   * fix.</p>
   */
  inline const Aws::Vector<BotAnalyzerRecommendation>& GetBotAnalyzerRecommendationList() const { return m_botAnalyzerRecommendationList; }
  template <typename BotAnalyzerRecommendationListT = Aws::Vector<BotAnalyzerRecommendation>>
  void SetBotAnalyzerRecommendationList(BotAnalyzerRecommendationListT&& value) {
    m_botAnalyzerRecommendationListHasBeenSet = true;
    m_botAnalyzerRecommendationList = std::forward<BotAnalyzerRecommendationListT>(value);
  }
  template <typename BotAnalyzerRecommendationListT = Aws::Vector<BotAnalyzerRecommendation>>
  DescribeBotAnalyzerRecommendationResult& WithBotAnalyzerRecommendationList(BotAnalyzerRecommendationListT&& value) {
    SetBotAnalyzerRecommendationList(std::forward<BotAnalyzerRecommendationListT>(value));
    return *this;
  }
  template <typename BotAnalyzerRecommendationListT = BotAnalyzerRecommendation>
  DescribeBotAnalyzerRecommendationResult& AddBotAnalyzerRecommendationList(BotAnalyzerRecommendationListT&& value) {
    m_botAnalyzerRecommendationListHasBeenSet = true;
    m_botAnalyzerRecommendationList.emplace_back(std::forward<BotAnalyzerRecommendationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, this token can be used in a subsequent request
   * to retrieve the next page of recommendations.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeBotAnalyzerRecommendationResult& WithNextToken(NextTokenT&& value) {
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
  DescribeBotAnalyzerRecommendationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_botId;

  Aws::String m_botVersion;

  Aws::String m_localeId;

  BotAnalyzerStatus m_botAnalyzerStatus{BotAnalyzerStatus::NOT_SET};

  Aws::Utils::DateTime m_creationDateTime{};

  Aws::Vector<BotAnalyzerRecommendation> m_botAnalyzerRecommendationList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_botIdHasBeenSet = false;
  bool m_botVersionHasBeenSet = false;
  bool m_localeIdHasBeenSet = false;
  bool m_botAnalyzerStatusHasBeenSet = false;
  bool m_creationDateTimeHasBeenSet = false;
  bool m_botAnalyzerRecommendationListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
