/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

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
 * <p>Specifies the location of an identified issue within the bot
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IssueLocation">AWS
 * API Reference</a></p>
 */
class IssueLocation {
 public:
  AWS_LEXMODELSV2_API IssueLocation() = default;
  AWS_LEXMODELSV2_API IssueLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API IssueLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The locale identifier where the issue was found.</p>
   */
  inline const Aws::String& GetBotLocale() const { return m_botLocale; }
  inline bool BotLocaleHasBeenSet() const { return m_botLocaleHasBeenSet; }
  template <typename BotLocaleT = Aws::String>
  void SetBotLocale(BotLocaleT&& value) {
    m_botLocaleHasBeenSet = true;
    m_botLocale = std::forward<BotLocaleT>(value);
  }
  template <typename BotLocaleT = Aws::String>
  IssueLocation& WithBotLocale(BotLocaleT&& value) {
    SetBotLocale(std::forward<BotLocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The intent identifier where the issue was found, if applicable.</p>
   */
  inline const Aws::String& GetIntentId() const { return m_intentId; }
  inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
  template <typename IntentIdT = Aws::String>
  void SetIntentId(IntentIdT&& value) {
    m_intentIdHasBeenSet = true;
    m_intentId = std::forward<IntentIdT>(value);
  }
  template <typename IntentIdT = Aws::String>
  IssueLocation& WithIntentId(IntentIdT&& value) {
    SetIntentId(std::forward<IntentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The slot identifier where the issue was found, if applicable.</p>
   */
  inline const Aws::String& GetSlotId() const { return m_slotId; }
  inline bool SlotIdHasBeenSet() const { return m_slotIdHasBeenSet; }
  template <typename SlotIdT = Aws::String>
  void SetSlotId(SlotIdT&& value) {
    m_slotIdHasBeenSet = true;
    m_slotId = std::forward<SlotIdT>(value);
  }
  template <typename SlotIdT = Aws::String>
  IssueLocation& WithSlotId(SlotIdT&& value) {
    SetSlotId(std::forward<SlotIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_botLocale;

  Aws::String m_intentId;

  Aws::String m_slotId;
  bool m_botLocaleHasBeenSet = false;
  bool m_intentIdHasBeenSet = false;
  bool m_slotIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
