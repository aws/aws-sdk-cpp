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
    AWS_LEXMODELSV2_API SessionDataSortBy() = default;
    AWS_LEXMODELSV2_API SessionDataSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SessionDataSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The measure by which to sort the session analytics data.</p> <ul> <li> <p>
     * <code>conversationStartTime</code> – The date and time when the conversation
     * began. A conversation is defined as a unique combination of a
     * <code>sessionId</code> and an <code>originatingRequestId</code>.</p> </li> <li>
     * <p> <code>numberOfTurns</code> – The number of turns that the session took.</p>
     * </li> <li> <p> <code>conversationDurationSeconds</code> – The duration of the
     * conversation in seconds.</p> </li> </ul>
     */
    inline AnalyticsSessionSortByName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsSessionSortByName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SessionDataSortBy& WithName(AnalyticsSessionSortByName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsSortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(AnalyticsSortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline SessionDataSortBy& WithOrder(AnalyticsSortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    AnalyticsSessionSortByName m_name{AnalyticsSessionSortByName::NOT_SET};
    bool m_nameHasBeenSet = false;

    AnalyticsSortOrder m_order{AnalyticsSortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
