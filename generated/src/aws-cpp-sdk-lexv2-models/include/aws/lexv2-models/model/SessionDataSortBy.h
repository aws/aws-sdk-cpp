/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsSessionSortByName.h>
#include <aws/lexv2-models/model/AnalyticsSortOrder.h>
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
   * <p>An object specifying the measure and method by which to sort the session
   * analytics data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SessionDataSortBy">AWS
   * API Reference</a></p>
   */
  class SessionDataSortBy
  {
  public:
    AWS_LEXMODELSV2_API SessionDataSortBy();
    AWS_LEXMODELSV2_API SessionDataSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SessionDataSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The measure by which to sort the session analytics data.</p> <ul> <li> <p>
     * <code>conversationStartTime</code> – The date and time when the conversation
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p> </li> <li>
     * <p> <code>numberOfTurns</code> – The number of turns that the session took.</p>
     * </li> <li> <p> <code>conversationDurationSeconds</code> – The duration of the
     * conversation in seconds.</p> </li> </ul>
     */
    inline const AnalyticsSessionSortByName& GetName() const{ return m_name; }

    /**
     * <p>The measure by which to sort the session analytics data.</p> <ul> <li> <p>
     * <code>conversationStartTime</code> – The date and time when the conversation
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p> </li> <li>
     * <p> <code>numberOfTurns</code> – The number of turns that the session took.</p>
     * </li> <li> <p> <code>conversationDurationSeconds</code> – The duration of the
     * conversation in seconds.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The measure by which to sort the session analytics data.</p> <ul> <li> <p>
     * <code>conversationStartTime</code> – The date and time when the conversation
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p> </li> <li>
     * <p> <code>numberOfTurns</code> – The number of turns that the session took.</p>
     * </li> <li> <p> <code>conversationDurationSeconds</code> – The duration of the
     * conversation in seconds.</p> </li> </ul>
     */
    inline void SetName(const AnalyticsSessionSortByName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The measure by which to sort the session analytics data.</p> <ul> <li> <p>
     * <code>conversationStartTime</code> – The date and time when the conversation
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p> </li> <li>
     * <p> <code>numberOfTurns</code> – The number of turns that the session took.</p>
     * </li> <li> <p> <code>conversationDurationSeconds</code> – The duration of the
     * conversation in seconds.</p> </li> </ul>
     */
    inline void SetName(AnalyticsSessionSortByName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The measure by which to sort the session analytics data.</p> <ul> <li> <p>
     * <code>conversationStartTime</code> – The date and time when the conversation
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p> </li> <li>
     * <p> <code>numberOfTurns</code> – The number of turns that the session took.</p>
     * </li> <li> <p> <code>conversationDurationSeconds</code> – The duration of the
     * conversation in seconds.</p> </li> </ul>
     */
    inline SessionDataSortBy& WithName(const AnalyticsSessionSortByName& value) { SetName(value); return *this;}

    /**
     * <p>The measure by which to sort the session analytics data.</p> <ul> <li> <p>
     * <code>conversationStartTime</code> – The date and time when the conversation
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p> </li> <li>
     * <p> <code>numberOfTurns</code> – The number of turns that the session took.</p>
     * </li> <li> <p> <code>conversationDurationSeconds</code> – The duration of the
     * conversation in seconds.</p> </li> </ul>
     */
    inline SessionDataSortBy& WithName(AnalyticsSessionSortByName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline const AnalyticsSortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline void SetOrder(const AnalyticsSortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline void SetOrder(AnalyticsSortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline SessionDataSortBy& WithOrder(const AnalyticsSortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline SessionDataSortBy& WithOrder(AnalyticsSortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    AnalyticsSessionSortByName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsSortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
