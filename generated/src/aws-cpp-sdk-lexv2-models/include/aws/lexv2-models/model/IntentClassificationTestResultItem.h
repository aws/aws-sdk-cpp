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
    AWS_LEXMODELSV2_API IntentClassificationTestResultItem();
    AWS_LEXMODELSV2_API IntentClassificationTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentClassificationTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }
    inline IntentClassificationTestResultItem& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}
    inline IntentClassificationTestResultItem& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}
    inline IntentClassificationTestResultItem& WithIntentName(const char* value) { SetIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the conversation involves multiple turns or not.</p>
     */
    inline bool GetMultiTurnConversation() const{ return m_multiTurnConversation; }
    inline bool MultiTurnConversationHasBeenSet() const { return m_multiTurnConversationHasBeenSet; }
    inline void SetMultiTurnConversation(bool value) { m_multiTurnConversationHasBeenSet = true; m_multiTurnConversation = value; }
    inline IntentClassificationTestResultItem& WithMultiTurnConversation(bool value) { SetMultiTurnConversation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the intent classification test.</p>
     */
    inline const IntentClassificationTestResultItemCounts& GetResultCounts() const{ return m_resultCounts; }
    inline bool ResultCountsHasBeenSet() const { return m_resultCountsHasBeenSet; }
    inline void SetResultCounts(const IntentClassificationTestResultItemCounts& value) { m_resultCountsHasBeenSet = true; m_resultCounts = value; }
    inline void SetResultCounts(IntentClassificationTestResultItemCounts&& value) { m_resultCountsHasBeenSet = true; m_resultCounts = std::move(value); }
    inline IntentClassificationTestResultItem& WithResultCounts(const IntentClassificationTestResultItemCounts& value) { SetResultCounts(value); return *this;}
    inline IntentClassificationTestResultItem& WithResultCounts(IntentClassificationTestResultItemCounts&& value) { SetResultCounts(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    bool m_multiTurnConversation;
    bool m_multiTurnConversationHasBeenSet = false;

    IntentClassificationTestResultItemCounts m_resultCounts;
    bool m_resultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
