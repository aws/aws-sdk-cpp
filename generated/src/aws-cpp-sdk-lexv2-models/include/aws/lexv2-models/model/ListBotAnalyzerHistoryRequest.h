/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LexModelsV2 {
namespace Model {

/**
 */
class ListBotAnalyzerHistoryRequest : public LexModelsV2Request {
 public:
  AWS_LEXMODELSV2_API ListBotAnalyzerHistoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBotAnalyzerHistory"; }

  AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the bot.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  ListBotAnalyzerHistoryRequest& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale identifier to filter the history. If not specified, returns
   * history for all locales.</p>
   */
  inline const Aws::String& GetLocaleId() const { return m_localeId; }
  inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
  template <typename LocaleIdT = Aws::String>
  void SetLocaleId(LocaleIdT&& value) {
    m_localeIdHasBeenSet = true;
    m_localeId = std::forward<LocaleIdT>(value);
  }
  template <typename LocaleIdT = Aws::String>
  ListBotAnalyzerHistoryRequest& WithLocaleId(LocaleIdT&& value) {
    SetLocaleId(std::forward<LocaleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bot version to filter the history. If not specified, defaults to
   * <code>DRAFT</code>.</p>
   */
  inline const Aws::String& GetBotVersion() const { return m_botVersion; }
  inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
  template <typename BotVersionT = Aws::String>
  void SetBotVersion(BotVersionT&& value) {
    m_botVersionHasBeenSet = true;
    m_botVersion = std::forward<BotVersionT>(value);
  }
  template <typename BotVersionT = Aws::String>
  ListBotAnalyzerHistoryRequest& WithBotVersion(BotVersionT&& value) {
    SetBotVersion(std::forward<BotVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response from a previous request was truncated, the
   * <code>nextToken</code> value is used to retrieve the next page of history
   * entries.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBotAnalyzerHistoryRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of history entries to return in the response. The default
   * is 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBotAnalyzerHistoryRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_botId;

  Aws::String m_localeId;

  Aws::String m_botVersion;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_botIdHasBeenSet = false;
  bool m_localeIdHasBeenSet = false;
  bool m_botVersionHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
