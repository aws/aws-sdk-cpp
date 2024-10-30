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
    AWS_GEOROUTES_API WaypointOptimizationFailedConstraint();
    AWS_GEOROUTES_API WaypointOptimizationFailedConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API WaypointOptimizationFailedConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The failed constraint.</p>
     */
    inline const WaypointOptimizationConstraint& GetConstraint() const{ return m_constraint; }
    inline bool ConstraintHasBeenSet() const { return m_constraintHasBeenSet; }
    inline void SetConstraint(const WaypointOptimizationConstraint& value) { m_constraintHasBeenSet = true; m_constraint = value; }
    inline void SetConstraint(WaypointOptimizationConstraint&& value) { m_constraintHasBeenSet = true; m_constraint = std::move(value); }
    inline WaypointOptimizationFailedConstraint& WithConstraint(const WaypointOptimizationConstraint& value) { SetConstraint(value); return *this;}
    inline WaypointOptimizationFailedConstraint& WithConstraint(WaypointOptimizationConstraint&& value) { SetConstraint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for the failed constraint.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline WaypointOptimizationFailedConstraint& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline WaypointOptimizationFailedConstraint& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline WaypointOptimizationFailedConstraint& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    WaypointOptimizationConstraint m_constraint;
    bool m_constraintHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
