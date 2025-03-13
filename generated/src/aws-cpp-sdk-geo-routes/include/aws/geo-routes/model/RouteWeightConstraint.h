/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteWeightConstraintType.h>
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
   * <p>The weight constraint for the route.</p> <p> <b>Unit</b>:
   * <code>Kilograms</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteWeightConstraint">AWS
   * API Reference</a></p>
   */
  class RouteWeightConstraint
  {
  public:
    AWS_GEOROUTES_API RouteWeightConstraint() = default;
    AWS_GEOROUTES_API RouteWeightConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteWeightConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of constraint.</p>
     */
    inline RouteWeightConstraintType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RouteWeightConstraintType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RouteWeightConstraint& WithType(RouteWeightConstraintType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constraint value.</p> <p> <b>Unit</b>: <code>Kilograms</code> </p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline RouteWeightConstraint& WithValue(long long value) { SetValue(value); return *this;}
    ///@}
  private:

    RouteWeightConstraintType m_type{RouteWeightConstraintType::NOT_SET};
    bool m_typeHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
