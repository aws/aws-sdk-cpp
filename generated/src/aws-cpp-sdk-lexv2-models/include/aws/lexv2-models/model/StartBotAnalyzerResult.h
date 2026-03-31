/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
class StartBotAnalyzerResult {
 public:
  AWS_LEXMODELSV2_API StartBotAnalyzerResult() = default;
  AWS_LEXMODELSV2_API StartBotAnalyzerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LEXMODELSV2_API StartBotAnalyzerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the bot being analyzed.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  StartBotAnalyzerResult& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the bot being analyzed.</p>
   */
  inline const Aws::String& GetBotVersion() const { return m_botVersion; }
  template <typename BotVersionT = Aws::String>
  void SetBotVersion(BotVersionT&& value) {
    m_botVersionHasBeenSet = true;
    m_botVersion = std::forward<BotVersionT>(value);
  }
  template <typename BotVersionT = Aws::String>
  StartBotAnalyzerResult& WithBotVersion(BotVersionT&& value) {
    SetBotVersion(std::forward<BotVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale identifier of the bot locale being analyzed.</p>
   */
  inline const Aws::String& GetLocaleId() const { return m_localeId; }
  template <typename LocaleIdT = Aws::String>
  void SetLocaleId(LocaleIdT&& value) {
    m_localeIdHasBeenSet = true;
    m_localeId = std::forward<LocaleIdT>(value);
  }
  template <typename LocaleIdT = Aws::String>
  StartBotAnalyzerResult& WithLocaleId(LocaleIdT&& value) {
    SetLocaleId(std::forward<LocaleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the analysis. The initial status is
   * <code>Processing</code>.</p> <p>Valid Values: <code>Processing | Available |
   * Failed | Stopping | Stopped</code> </p>
   */
  inline BotAnalyzerStatus GetBotAnalyzerStatus() const { return m_botAnalyzerStatus; }
  inline void SetBotAnalyzerStatus(BotAnalyzerStatus value) {
    m_botAnalyzerStatusHasBeenSet = true;
    m_botAnalyzerStatus = value;
  }
  inline StartBotAnalyzerResult& WithBotAnalyzerStatus(BotAnalyzerStatus value) {
    SetBotAnalyzerStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this analysis request. Use this identifier to check
   * the status and retrieve results.</p>
   */
  inline const Aws::String& GetBotAnalyzerRequestId() const { return m_botAnalyzerRequestId; }
  template <typename BotAnalyzerRequestIdT = Aws::String>
  void SetBotAnalyzerRequestId(BotAnalyzerRequestIdT&& value) {
    m_botAnalyzerRequestIdHasBeenSet = true;
    m_botAnalyzerRequestId = std::forward<BotAnalyzerRequestIdT>(value);
  }
  template <typename BotAnalyzerRequestIdT = Aws::String>
  StartBotAnalyzerResult& WithBotAnalyzerRequestId(BotAnalyzerRequestIdT&& value) {
    SetBotAnalyzerRequestId(std::forward<BotAnalyzerRequestIdT>(value));
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
  StartBotAnalyzerResult& WithCreationDateTime(CreationDateTimeT&& value) {
    SetCreationDateTime(std::forward<CreationDateTimeT>(value));
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
  StartBotAnalyzerResult& WithRequestId(RequestIdT&& value) {
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

  Aws::String m_botAnalyzerRequestId;

  Aws::Utils::DateTime m_creationDateTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_botIdHasBeenSet = false;
  bool m_botVersionHasBeenSet = false;
  bool m_localeIdHasBeenSet = false;
  bool m_botAnalyzerStatusHasBeenSet = false;
  bool m_botAnalyzerRequestIdHasBeenSet = false;
  bool m_creationDateTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
