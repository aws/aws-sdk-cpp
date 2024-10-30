/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/LocalizedString.h>
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
   * <p>Details related to the continue step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteContinueStepDetails">AWS
   * API Reference</a></p>
   */
  class RouteContinueStepDetails
  {
  public:
    AWS_GEOROUTES_API RouteContinueStepDetails();
    AWS_GEOROUTES_API RouteContinueStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteContinueStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the intersection, if applicable to the step.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetIntersection() const{ return m_intersection; }
    inline bool IntersectionHasBeenSet() const { return m_intersectionHasBeenSet; }
    inline void SetIntersection(const Aws::Vector<LocalizedString>& value) { m_intersectionHasBeenSet = true; m_intersection = value; }
    inline void SetIntersection(Aws::Vector<LocalizedString>&& value) { m_intersectionHasBeenSet = true; m_intersection = std::move(value); }
    inline RouteContinueStepDetails& WithIntersection(const Aws::Vector<LocalizedString>& value) { SetIntersection(value); return *this;}
    inline RouteContinueStepDetails& WithIntersection(Aws::Vector<LocalizedString>&& value) { SetIntersection(std::move(value)); return *this;}
    inline RouteContinueStepDetails& AddIntersection(const LocalizedString& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(value); return *this; }
    inline RouteContinueStepDetails& AddIntersection(LocalizedString&& value) { m_intersectionHasBeenSet = true; m_intersection.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LocalizedString> m_intersection;
    bool m_intersectionHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
