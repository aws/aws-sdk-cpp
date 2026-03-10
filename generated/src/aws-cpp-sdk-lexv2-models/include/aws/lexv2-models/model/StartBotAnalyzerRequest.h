/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalysisScope.h>

#include <utility>

namespace Aws {
namespace LexModelsV2 {
namespace Model {

/**
 */
class StartBotAnalyzerRequest : public LexModelsV2Request {
 public:
  AWS_LEXMODELSV2_API StartBotAnalyzerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartBotAnalyzer"; }

  AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the bot to analyze.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  StartBotAnalyzerRequest& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of analysis to perform. Currently only <code>BotLocale</code> scope
   * is supported.</p> <p>Valid Values: <code>BotLocale</code> </p>
   */
  inline AnalysisScope GetAnalysisScope() const { return m_analysisScope; }
  inline bool AnalysisScopeHasBeenSet() const { return m_analysisScopeHasBeenSet; }
  inline void SetAnalysisScope(AnalysisScope value) {
    m_analysisScopeHasBeenSet = true;
    m_analysisScope = value;
  }
  inline StartBotAnalyzerRequest& WithAnalysisScope(AnalysisScope value) {
    SetAnalysisScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locale identifier for the bot locale to analyze. Required when
   * <code>analysisScope</code> is <code>BotLocale</code>.</p>
   */
  inline const Aws::String& GetLocaleId() const { return m_localeId; }
  inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
  template <typename LocaleIdT = Aws::String>
  void SetLocaleId(LocaleIdT&& value) {
    m_localeIdHasBeenSet = true;
    m_localeId = std::forward<LocaleIdT>(value);
  }
  template <typename LocaleIdT = Aws::String>
  StartBotAnalyzerRequest& WithLocaleId(LocaleIdT&& value) {
    SetLocaleId(std::forward<LocaleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the bot to analyze. Defaults to <code>DRAFT</code> if not
   * specified.</p>
   */
  inline const Aws::String& GetBotVersion() const { return m_botVersion; }
  inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
  template <typename BotVersionT = Aws::String>
  void SetBotVersion(BotVersionT&& value) {
    m_botVersionHasBeenSet = true;
    m_botVersion = std::forward<BotVersionT>(value);
  }
  template <typename BotVersionT = Aws::String>
  StartBotAnalyzerRequest& WithBotVersion(BotVersionT&& value) {
    SetBotVersion(std::forward<BotVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_botId;

  AnalysisScope m_analysisScope{AnalysisScope::NOT_SET};

  Aws::String m_localeId;

  Aws::String m_botVersion;
  bool m_botIdHasBeenSet = false;
  bool m_analysisScopeHasBeenSet = false;
  bool m_localeIdHasBeenSet = false;
  bool m_botVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
