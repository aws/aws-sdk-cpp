/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/UtteranceLevelTestResultItem.h>
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
   * <p>Contains information about the utterances in the results of the test set
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceLevelTestResults">AWS
   * API Reference</a></p>
   */
  class UtteranceLevelTestResults
  {
  public:
    AWS_LEXMODELSV2_API UtteranceLevelTestResults();
    AWS_LEXMODELSV2_API UtteranceLevelTestResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceLevelTestResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline const Aws::Vector<UtteranceLevelTestResultItem>& GetItems() const{ return m_items; }

    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline void SetItems(const Aws::Vector<UtteranceLevelTestResultItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline void SetItems(Aws::Vector<UtteranceLevelTestResultItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline UtteranceLevelTestResults& WithItems(const Aws::Vector<UtteranceLevelTestResultItem>& value) { SetItems(value); return *this;}

    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline UtteranceLevelTestResults& WithItems(Aws::Vector<UtteranceLevelTestResultItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline UtteranceLevelTestResults& AddItems(const UtteranceLevelTestResultItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Contains information about an utterance in the results of the test set
     * execution.</p>
     */
    inline UtteranceLevelTestResults& AddItems(UtteranceLevelTestResultItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UtteranceLevelTestResultItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
