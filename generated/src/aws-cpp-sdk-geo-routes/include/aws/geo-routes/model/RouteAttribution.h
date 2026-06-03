/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteAttributionType.h>
#include <aws/geo-routes/model/RouteWebLink.h>

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
 * <p>Required attribution to display.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteAttribution">AWS
 * API Reference</a></p>
 */
class RouteAttribution {
 public:
  AWS_GEOROUTES_API RouteAttribution() = default;
  AWS_GEOROUTES_API RouteAttribution(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteAttribution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the attribution link.</p>
   */
  inline RouteAttributionType GetAttributionType() const { return m_attributionType; }
  inline bool AttributionTypeHasBeenSet() const { return m_attributionTypeHasBeenSet; }
  inline void SetAttributionType(RouteAttributionType value) {
    m_attributionTypeHasBeenSet = true;
    m_attributionType = value;
  }
  inline RouteAttribution& WithAttributionType(RouteAttributionType value) {
    SetAttributionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL to an external resource.</p>
   */
  inline const RouteWebLink& GetWebLink() const { return m_webLink; }
  inline bool WebLinkHasBeenSet() const { return m_webLinkHasBeenSet; }
  template <typename WebLinkT = RouteWebLink>
  void SetWebLink(WebLinkT&& value) {
    m_webLinkHasBeenSet = true;
    m_webLink = std::forward<WebLinkT>(value);
  }
  template <typename WebLinkT = RouteWebLink>
  RouteAttribution& WithWebLink(WebLinkT&& value) {
    SetWebLink(std::forward<WebLinkT>(value));
    return *this;
  }
  ///@}
 private:
  RouteAttributionType m_attributionType{RouteAttributionType::NOT_SET};

  RouteWebLink m_webLink;
  bool m_attributionTypeHasBeenSet = false;
  bool m_webLinkHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
