/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AnalyticsBinByName.h>
#include <aws/lexv2-models/model/AnalyticsInterval.h>
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
   * <p>Contains the time metric, interval, and method by which to bin the analytics
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsBinBySpecification">AWS
   * API Reference</a></p>
   */
  class AnalyticsBinBySpecification
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsBinBySpecification() = default;
    AWS_LEXMODELSV2_API AnalyticsBinBySpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsBinBySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the time metric by which to bin the analytics data.</p>
     */
    inline AnalyticsBinByName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AnalyticsBinByName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AnalyticsBinBySpecification& WithName(AnalyticsBinByName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the interval of time by which to bin the analytics data.</p>
     */
    inline AnalyticsInterval GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(AnalyticsInterval value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline AnalyticsBinBySpecification& WithInterval(AnalyticsInterval value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to bin the analytics data in ascending or descending order.
     * If this field is left blank, the default order is by the key of the bin in
     * descending order.</p>
     */
    inline AnalyticsSortOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(AnalyticsSortOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline AnalyticsBinBySpecification& WithOrder(AnalyticsSortOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    AnalyticsBinByName m_name{AnalyticsBinByName::NOT_SET};
    bool m_nameHasBeenSet = false;

    AnalyticsInterval m_interval{AnalyticsInterval::NOT_SET};
    bool m_intervalHasBeenSet = false;

    AnalyticsSortOrder m_order{AnalyticsSortOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
