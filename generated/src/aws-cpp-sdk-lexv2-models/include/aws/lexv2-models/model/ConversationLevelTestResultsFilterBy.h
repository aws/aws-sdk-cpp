/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
   * <p>The selection to filter the test set results data at the conversation
   * level.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLevelTestResultsFilterBy">AWS
   * API Reference</a></p>
   */
  class ConversationLevelTestResultsFilterBy
  {
  public:
    AWS_LEXMODELSV2_API ConversationLevelTestResultsFilterBy();
    AWS_LEXMODELSV2_API ConversationLevelTestResultsFilterBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLevelTestResultsFilterBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The selection of matched or mismatched end-to-end status to filter test set
     * results data at the conversation level.</p>
     */
    inline const TestResultMatchStatus& GetEndToEndResult() const{ return m_endToEndResult; }

    /**
     * <p>The selection of matched or mismatched end-to-end status to filter test set
     * results data at the conversation level.</p>
     */
    inline bool EndToEndResultHasBeenSet() const { return m_endToEndResultHasBeenSet; }

    /**
     * <p>The selection of matched or mismatched end-to-end status to filter test set
     * results data at the conversation level.</p>
     */
    inline void SetEndToEndResult(const TestResultMatchStatus& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = value; }

    /**
     * <p>The selection of matched or mismatched end-to-end status to filter test set
     * results data at the conversation level.</p>
     */
    inline void SetEndToEndResult(TestResultMatchStatus&& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = std::move(value); }

    /**
     * <p>The selection of matched or mismatched end-to-end status to filter test set
     * results data at the conversation level.</p>
     */
    inline ConversationLevelTestResultsFilterBy& WithEndToEndResult(const TestResultMatchStatus& value) { SetEndToEndResult(value); return *this;}

    /**
     * <p>The selection of matched or mismatched end-to-end status to filter test set
     * results data at the conversation level.</p>
     */
    inline ConversationLevelTestResultsFilterBy& WithEndToEndResult(TestResultMatchStatus&& value) { SetEndToEndResult(std::move(value)); return *this;}

  private:

    TestResultMatchStatus m_endToEndResult;
    bool m_endToEndResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
