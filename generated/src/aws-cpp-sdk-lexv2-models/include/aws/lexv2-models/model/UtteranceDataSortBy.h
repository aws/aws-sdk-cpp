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
    AWS_LEXMODELSV2_API UtteranceDataSortBy();
    AWS_LEXMODELSV2_API UtteranceDataSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceDataSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The measure by which to sort the utterance analytics data.</p> <ul> <li> <p>
     * <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline const AnalyticsUtteranceSortByName& GetName() const{ return m_name; }

    /**
     * <p>The measure by which to sort the utterance analytics data.</p> <ul> <li> <p>
     * <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The measure by which to sort the utterance analytics data.</p> <ul> <li> <p>
     * <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline void SetName(const AnalyticsUtteranceSortByName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The measure by which to sort the utterance analytics data.</p> <ul> <li> <p>
     * <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline void SetName(AnalyticsUtteranceSortByName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The measure by which to sort the utterance analytics data.</p> <ul> <li> <p>
     * <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline UtteranceDataSortBy& WithName(const AnalyticsUtteranceSortByName& value) { SetName(value); return *this;}

    /**
     * <p>The measure by which to sort the utterance analytics data.</p> <ul> <li> <p>
     * <code>Count</code> – The number of utterances.</p> </li> <li> <p>
     * <code>UtteranceTimestamp</code> – The date and time of the utterance.</p> </li>
     * </ul>
     */
    inline UtteranceDataSortBy& WithName(AnalyticsUtteranceSortByName&& value) { SetName(std::move(value)); return *this;}


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
    inline UtteranceDataSortBy& WithOrder(const AnalyticsSortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Specifies whether to sort the results in ascending or descending order.</p>
     */
    inline UtteranceDataSortBy& WithOrder(AnalyticsSortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    AnalyticsUtteranceSortByName m_name;
    bool m_nameHasBeenSet = false;

    AnalyticsSortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
