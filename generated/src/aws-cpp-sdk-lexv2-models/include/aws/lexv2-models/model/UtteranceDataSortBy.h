/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceSortByName.h>
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
   * <p>An object specifying the measure and method by which to sort the utterance
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceDataSortBy">AWS
   * API Reference</a></p>
   */
  class UtteranceDataSortBy
  {
  public:
    AWS_LEXMODELSV2_API UtteranceDataSortBy() = default;
    AWS_LEXMODELSV2_API UtteranceDataSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceDataSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The measure by which to sort the utterance analytics data.</p> <ul> <li> <p>
     * <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline AnalyticsUtteranceSortByName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsUtteranceSortByName value) { m_nameHasBeenSet = true; m_name = value; }
    inline UtteranceDataSortBy& WithName(AnalyticsUtteranceSortByName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline AnalyticsSortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(AnalyticsSortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline UtteranceDataSortBy& WithOrder(AnalyticsSortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    AnalyticsUtteranceSortByName m_name{AnalyticsUtteranceSortByName::NOT_SET};
    bool m_nameHasBeenSet = false;

    AnalyticsSortOrder m_order{AnalyticsSortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
