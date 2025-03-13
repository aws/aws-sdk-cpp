/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteResponseNoticeCode.h>
#include <aws/geo-routes/model/RouteNoticeImpact.h>
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
   * <p>Notices are additional information returned that indicate issues that
   * occurred during route calculation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteResponseNotice">AWS
   * API Reference</a></p>
   */
  class RouteResponseNotice
  {
  public:
    AWS_GEOROUTES_API RouteResponseNotice() = default;
    AWS_GEOROUTES_API RouteResponseNotice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteResponseNotice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Code corresponding to the issue.</p>
     */
    inline RouteResponseNoticeCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(RouteResponseNoticeCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline RouteResponseNotice& WithCode(RouteResponseNoticeCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Impact corresponding to the issue. While Low impact notices can be safely
     * ignored, High impact notices must be evaluated further to determine the
     * impact.</p>
     */
    inline RouteNoticeImpact GetImpact() const { return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(RouteNoticeImpact value) { m_impactHasBeenSet = true; m_impact = value; }
    inline RouteResponseNotice& WithImpact(RouteNoticeImpact value) { SetImpact(value); return *this;}
    ///@}
  private:

    RouteResponseNoticeCode m_code{RouteResponseNoticeCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    RouteNoticeImpact m_impact{RouteNoticeImpact::NOT_SET};
    bool m_impactHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
