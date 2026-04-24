/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>Controls the detail level and smoothness of generated isolines. More detailed
 * isolines provide better visual representation of reachable areas but require
 * more processing time and result in larger responses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineGranularityOptions">AWS
 * API Reference</a></p>
 */
class IsolineGranularityOptions {
 public:
  AWS_GEOROUTES_API IsolineGranularityOptions() = default;
  AWS_GEOROUTES_API IsolineGranularityOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineGranularityOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of points used to define each isoline. Higher values
   * create smoother, more detailed shapes.</p>
   */
  inline int GetMaxPoints() const { return m_maxPoints; }
  inline bool MaxPointsHasBeenSet() const { return m_maxPointsHasBeenSet; }
  inline void SetMaxPoints(int value) {
    m_maxPointsHasBeenSet = true;
    m_maxPoints = value;
  }
  inline IsolineGranularityOptions& WithMaxPoints(int value) {
    SetMaxPoints(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum distance in meters between points along the isoline. Smaller
   * values create more detailed shapes.</p> <p> <b>Unit</b>: <code>meters</code>
   * </p>
   */
  inline long long GetMaxResolution() const { return m_maxResolution; }
  inline bool MaxResolutionHasBeenSet() const { return m_maxResolutionHasBeenSet; }
  inline void SetMaxResolution(long long value) {
    m_maxResolutionHasBeenSet = true;
    m_maxResolution = value;
  }
  inline IsolineGranularityOptions& WithMaxResolution(long long value) {
    SetMaxResolution(value);
    return *this;
  }
  ///@}
 private:
  int m_maxPoints{0};

  long long m_maxResolution{0};
  bool m_maxPointsHasBeenSet = false;
  bool m_maxResolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
