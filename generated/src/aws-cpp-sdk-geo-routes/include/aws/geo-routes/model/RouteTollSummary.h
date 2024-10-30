/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTollPriceSummary.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The toll summary for the complete route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTollSummary">AWS
   * API Reference</a></p>
   */
  class RouteTollSummary
  {
  public:
    AWS_GEOROUTES_API RouteTollSummary();
    AWS_GEOROUTES_API RouteTollSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total toll summary for the complete route. Total is the only summary
     * available today.</p>
     */
    inline const RouteTollPriceSummary& GetTotal() const{ return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(const RouteTollPriceSummary& value) { m_totalHasBeenSet = true; m_total = value; }
    inline void SetTotal(RouteTollPriceSummary&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }
    inline RouteTollSummary& WithTotal(const RouteTollPriceSummary& value) { SetTotal(value); return *this;}
    inline RouteTollSummary& WithTotal(RouteTollPriceSummary&& value) { SetTotal(std::move(value)); return *this;}
    ///@}
  private:

    RouteTollPriceSummary m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
