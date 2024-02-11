/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/ConversationLevelTestResultItem.h>
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
   * <p>The test set results data at the conversation level.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLevelTestResults">AWS
   * API Reference</a></p>
   */
  class ConversationLevelTestResults
  {
  public:
    AWS_LEXMODELSV2_API ConversationLevelTestResults();
    AWS_LEXMODELSV2_API ConversationLevelTestResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLevelTestResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline const Aws::Vector<ConversationLevelTestResultItem>& GetItems() const{ return m_items; }

    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline void SetItems(const Aws::Vector<ConversationLevelTestResultItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline void SetItems(Aws::Vector<ConversationLevelTestResultItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline ConversationLevelTestResults& WithItems(const Aws::Vector<ConversationLevelTestResultItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline ConversationLevelTestResults& WithItems(Aws::Vector<ConversationLevelTestResultItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline ConversationLevelTestResults& AddItems(const ConversationLevelTestResultItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The item list in the test set results data at the conversation level.</p>
     */
    inline ConversationLevelTestResults& AddItems(ConversationLevelTestResultItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConversationLevelTestResultItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
