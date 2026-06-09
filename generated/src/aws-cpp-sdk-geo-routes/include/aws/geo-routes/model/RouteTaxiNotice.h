/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteNoticeImpact.h>
#include <aws/geo-routes/model/RouteTaxiNoticeCode.h>

#include <utility>

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
 * <p>A notice that indicates an issue that occurred during route
 * calculation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTaxiNotice">AWS
 * API Reference</a></p>
 */
class RouteTaxiNotice {
 public:
  AWS_GEOROUTES_API RouteTaxiNotice() = default;
  AWS_GEOROUTES_API RouteTaxiNotice(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteTaxiNotice& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Code corresponding to the issue.</p>
   */
  inline RouteTaxiNoticeCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(RouteTaxiNoticeCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline RouteTaxiNotice& WithCode(RouteTaxiNoticeCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Impact corresponding to the issue. While Low impact notices can be safely
   * ignored, High impact notices must be evaluated further to determine the
   * impact.</p>
   */
  inline RouteNoticeImpact GetImpact() const { return m_impact; }
  inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
  inline void SetImpact(RouteNoticeImpact value) {
    m_impactHasBeenSet = true;
    m_impact = value;
  }
  inline RouteTaxiNotice& WithImpact(RouteNoticeImpact value) {
    SetImpact(value);
    return *this;
  }
  ///@}
 private:
  RouteTaxiNoticeCode m_code{RouteTaxiNoticeCode::NOT_SET};

  RouteNoticeImpact m_impact{RouteNoticeImpact::NOT_SET};
  bool m_codeHasBeenSet = false;
  bool m_impactHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
