/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotAnalyzerStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LexModelsV2 {
namespace Model {

/**
 * <p>Contains summary information about a historical bot analysis
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotAnalyzerHistorySummary">AWS
 * API Reference</a></p>
 */
class BotAnalyzerHistorySummary {
 public:
  AWS_LEXMODELSV2_API BotAnalyzerHistorySummary() = default;
  AWS_LEXMODELSV2_API BotAnalyzerHistorySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API BotAnalyzerHistorySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the historical analysis execution.</p> <p>Valid Values:
   * <code>Processing | Available | Failed | Stopping | Stopped</code> </p>
   */
  inline BotAnalyzerStatus GetBotAnalyzerStatus() const { return m_botAnalyzerStatus; }
  inline bool BotAnalyzerStatusHasBeenSet() const { return m_botAnalyzerStatusHasBeenSet; }
  inline void SetBotAnalyzerStatus(BotAnalyzerStatus value) {
    m_botAnalyzerStatusHasBeenSet = true;
    m_botAnalyzerStatus = value;
  }
  inline BotAnalyzerHistorySummary& WithBotAnalyzerStatus(BotAnalyzerStatus value) {
    SetBotAnalyzerStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the analysis was initiated.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
  inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
  template <typename CreationDateTimeT = Aws::Utils::DateTime>
  void SetCreationDateTime(CreationDateTimeT&& value) {
    m_creationDateTimeHasBeenSet = true;
    m_creationDateTime = std::forward<CreationDateTimeT>(value);
  }
  template <typename CreationDateTimeT = Aws::Utils::DateTime>
  BotAnalyzerHistorySummary& WithCreationDateTime(CreationDateTimeT&& value) {
    SetCreationDateTime(std::forward<CreationDateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the analysis request.</p>
   */
  inline const Aws::String& GetBotAnalyzerRequestId() const { return m_botAnalyzerRequestId; }
  inline bool BotAnalyzerRequestIdHasBeenSet() const { return m_botAnalyzerRequestIdHasBeenSet; }
  template <typename BotAnalyzerRequestIdT = Aws::String>
  void SetBotAnalyzerRequestId(BotAnalyzerRequestIdT&& value) {
    m_botAnalyzerRequestIdHasBeenSet = true;
    m_botAnalyzerRequestId = std::forward<BotAnalyzerRequestIdT>(value);
  }
  template <typename BotAnalyzerRequestIdT = Aws::String>
  BotAnalyzerHistorySummary& WithBotAnalyzerRequestId(BotAnalyzerRequestIdT&& value) {
    SetBotAnalyzerRequestId(std::forward<BotAnalyzerRequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  BotAnalyzerStatus m_botAnalyzerStatus{BotAnalyzerStatus::NOT_SET};

  Aws::Utils::DateTime m_creationDateTime{};

  Aws::String m_botAnalyzerRequestId;
  bool m_botAnalyzerStatusHasBeenSet = false;
  bool m_creationDateTimeHasBeenSet = false;
  bool m_botAnalyzerRequestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
