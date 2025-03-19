/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestResultMatchStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The item listing the evaluation of intent level success or
   * failure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLevelIntentClassificationResultItem">AWS
   * API Reference</a></p>
   */
  class ConversationLevelIntentClassificationResultItem
  {
  public:
    AWS_LEXMODELSV2_API ConversationLevelIntentClassificationResultItem() = default;
    AWS_LEXMODELSV2_API ConversationLevelIntentClassificationResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLevelIntentClassificationResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The intent name used in the evaluation of intent level success or
     * failure.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    ConversationLevelIntentClassificationResultItem& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times the specific intent is used in the evaluation of intent
     * level success or failure.</p>
     */
    inline TestResultMatchStatus GetMatchResult() const { return m_matchResult; }
    inline bool MatchResultHasBeenSet() const { return m_matchResultHasBeenSet; }
    inline void SetMatchResult(TestResultMatchStatus value) { m_matchResultHasBeenSet = true; m_matchResult = value; }
    inline ConversationLevelIntentClassificationResultItem& WithMatchResult(TestResultMatchStatus value) { SetMatchResult(value); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    TestResultMatchStatus m_matchResult{TestResultMatchStatus::NOT_SET};
    bool m_matchResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
