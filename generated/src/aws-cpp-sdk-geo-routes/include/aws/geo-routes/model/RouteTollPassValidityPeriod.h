/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteTollPassValidityPeriodType.h>
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
   * <p>Period for which the pass is valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTollPassValidityPeriod">AWS
   * API Reference</a></p>
   */
  class RouteTollPassValidityPeriod
  {
  public:
    AWS_GEOROUTES_API RouteTollPassValidityPeriod() = default;
    AWS_GEOROUTES_API RouteTollPassValidityPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollPassValidityPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Validity period.</p>
     */
    inline RouteTollPassValidityPeriodType GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(RouteTollPassValidityPeriodType value) { m_periodHasBeenSet = true; m_period = value; }
    inline RouteTollPassValidityPeriod& WithPeriod(RouteTollPassValidityPeriodType value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Counts for the validity period.</p>
     */
    inline int GetPeriodCount() const { return m_periodCount; }
    inline bool PeriodCountHasBeenSet() const { return m_periodCountHasBeenSet; }
    inline void SetPeriodCount(int value) { m_periodCountHasBeenSet = true; m_periodCount = value; }
    inline RouteTollPassValidityPeriod& WithPeriodCount(int value) { SetPeriodCount(value); return *this;}
    ///@}
  private:

    RouteTollPassValidityPeriodType m_period{RouteTollPassValidityPeriodType::NOT_SET};
    bool m_periodHasBeenSet = false;

    int m_periodCount{0};
    bool m_periodCountHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
