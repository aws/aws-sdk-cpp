/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/WaypointOptimizationConstraint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The failed constraint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/WaypointOptimizationFailedConstraint">AWS
   * API Reference</a></p>
   */
  class WaypointOptimizationFailedConstraint
  {
  public:
    AWS_GEOROUTES_API WaypointOptimizationFailedConstraint() = default;
    AWS_GEOROUTES_API WaypointOptimizationFailedConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationFailedConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The failed constraint.</p>
     */
    inline WaypointOptimizationConstraint GetConstraint() const { return m_constraint; }
    inline bool ConstraintHasBeenSet() const { return m_constraintHasBeenSet; }
    inline void SetConstraint(WaypointOptimizationConstraint value) { m_constraintHasBeenSet = true; m_constraint = value; }
    inline WaypointOptimizationFailedConstraint& WithConstraint(WaypointOptimizationConstraint value) { SetConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for the failed constraint.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    WaypointOptimizationFailedConstraint& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    WaypointOptimizationConstraint m_constraint{WaypointOptimizationConstraint::NOT_SET};
    bool m_constraintHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
