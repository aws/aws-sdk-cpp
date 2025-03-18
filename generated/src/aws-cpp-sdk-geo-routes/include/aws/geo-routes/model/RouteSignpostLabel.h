/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteNumber.h>
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
   * <p>Labels presented on the sign post.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteSignpostLabel">AWS
   * API Reference</a></p>
   */
  class RouteSignpostLabel
  {
  public:
    AWS_GEOROUTES_API RouteSignpostLabel() = default;
    AWS_GEOROUTES_API RouteSignpostLabel(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteSignpostLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Route number of the road.</p>
     */
    inline const RouteNumber& GetRouteNumber() const { return m_routeNumber; }
    inline bool RouteNumberHasBeenSet() const { return m_routeNumberHasBeenSet; }
    template<typename RouteNumberT = RouteNumber>
    void SetRouteNumber(RouteNumberT&& value) { m_routeNumberHasBeenSet = true; m_routeNumber = std::forward<RouteNumberT>(value); }
    template<typename RouteNumberT = RouteNumber>
    RouteSignpostLabel& WithRouteNumber(RouteNumberT&& value) { SetRouteNumber(std::forward<RouteNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Signpost text.</p>
     */
    inline const LocalizedString& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = LocalizedString>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = LocalizedString>
    RouteSignpostLabel& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    RouteNumber m_routeNumber;
    bool m_routeNumberHasBeenSet = false;

    LocalizedString m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
