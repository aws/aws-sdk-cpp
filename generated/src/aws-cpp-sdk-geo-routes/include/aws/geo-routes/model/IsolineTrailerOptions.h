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
 * <p>Additional specifications when the vehicle includes one or more
 * trailers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/IsolineTrailerOptions">AWS
 * API Reference</a></p>
 */
class IsolineTrailerOptions {
 public:
  AWS_GEOROUTES_API IsolineTrailerOptions() = default;
  AWS_GEOROUTES_API IsolineTrailerOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API IsolineTrailerOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of axles across all trailers. Used for weight distribution
   * calculations and road restrictions.</p>
   */
  inline int GetAxleCount() const { return m_axleCount; }
  inline bool AxleCountHasBeenSet() const { return m_axleCountHasBeenSet; }
  inline void SetAxleCount(int value) {
    m_axleCountHasBeenSet = true;
    m_axleCount = value;
  }
  inline IsolineTrailerOptions& WithAxleCount(int value) {
    SetAxleCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of trailers being pulled. Affects which roads can be used based on
   * local regulations.</p> <p>Default value: <code>0</code> </p>
   */
  inline int GetTrailerCount() const { return m_trailerCount; }
  inline bool TrailerCountHasBeenSet() const { return m_trailerCountHasBeenSet; }
  inline void SetTrailerCount(int value) {
    m_trailerCountHasBeenSet = true;
    m_trailerCount = value;
  }
  inline IsolineTrailerOptions& WithTrailerCount(int value) {
    SetTrailerCount(value);
    return *this;
  }
  ///@}
 private:
  int m_axleCount{0};

  int m_trailerCount{0};
  bool m_axleCountHasBeenSet = false;
  bool m_trailerCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
