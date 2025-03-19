/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/IntentClassificationTestResultItemCounts.h>
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
   * <p>Information for an intent that is classified by the test
   * workbench.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentClassificationTestResultItem">AWS
   * API Reference</a></p>
   */
  class IntentClassificationTestResultItem
  {
  public:
    AWS_LEXMODELSV2_API IntentClassificationTestResultItem() = default;
    AWS_LEXMODELSV2_API IntentClassificationTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentClassificationTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    IntentClassificationTestResultItem& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the conversation involves multiple turns or not.</p>
     */
    inline bool GetMultiTurnConversation() const { return m_multiTurnConversation; }
    inline bool MultiTurnConversationHasBeenSet() const { return m_multiTurnConversationHasBeenSet; }
    inline void SetMultiTurnConversation(bool value) { m_multiTurnConversationHasBeenSet = true; m_multiTurnConversation = value; }
    inline IntentClassificationTestResultItem& WithMultiTurnConversation(bool value) { SetMultiTurnConversation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the intent classification test.</p>
     */
    inline const IntentClassificationTestResultItemCounts& GetResultCounts() const { return m_resultCounts; }
    inline bool ResultCountsHasBeenSet() const { return m_resultCountsHasBeenSet; }
    template<typename ResultCountsT = IntentClassificationTestResultItemCounts>
    void SetResultCounts(ResultCountsT&& value) { m_resultCountsHasBeenSet = true; m_resultCounts = std::forward<ResultCountsT>(value); }
    template<typename ResultCountsT = IntentClassificationTestResultItemCounts>
    IntentClassificationTestResultItem& WithResultCounts(ResultCountsT&& value) { SetResultCounts(std::forward<ResultCountsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    bool m_multiTurnConversation{false};
    bool m_multiTurnConversationHasBeenSet = false;

    IntentClassificationTestResultItemCounts m_resultCounts;
    bool m_resultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
