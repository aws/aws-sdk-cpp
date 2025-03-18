/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/IsolineZoneCategory.h>
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
   * <p>Zone category to be avoided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineAvoidanceZoneCategory">AWS
   * API Reference</a></p>
   */
  class IsolineAvoidanceZoneCategory
  {
  public:
    AWS_GEOROUTES_API IsolineAvoidanceZoneCategory() = default;
    AWS_GEOROUTES_API IsolineAvoidanceZoneCategory(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API IsolineAvoidanceZoneCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Zone category to be avoided.</p>
     */
    inline IsolineZoneCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(IsolineZoneCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline IsolineAvoidanceZoneCategory& WithCategory(IsolineZoneCategory value) { SetCategory(value); return *this;}
    ///@}
  private:

    IsolineZoneCategory m_category{IsolineZoneCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
