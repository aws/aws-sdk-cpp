/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteWebLinkDeviceType.h>

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
 * <p>The URL to an external resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteWebLink">AWS
 * API Reference</a></p>
 */
class RouteWebLink {
 public:
  AWS_GEOROUTES_API RouteWebLink() = default;
  AWS_GEOROUTES_API RouteWebLink(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteWebLink& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The interactive or clickable portion of the text.</p>
   */
  inline const Aws::String& GetAnchorText() const { return m_anchorText; }
  inline bool AnchorTextHasBeenSet() const { return m_anchorTextHasBeenSet; }
  template <typename AnchorTextT = Aws::String>
  void SetAnchorText(AnchorTextT&& value) {
    m_anchorTextHasBeenSet = true;
    m_anchorText = std::forward<AnchorTextT>(value);
  }
  template <typename AnchorTextT = Aws::String>
  RouteWebLink& WithAnchorText(AnchorTextT&& value) {
    SetAnchorText(std::forward<AnchorTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Text describing the URL.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RouteWebLink& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Device type for which the link is intended.</p>
   */
  inline RouteWebLinkDeviceType GetDeviceType() const { return m_deviceType; }
  inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
  inline void SetDeviceType(RouteWebLinkDeviceType value) {
    m_deviceTypeHasBeenSet = true;
    m_deviceType = value;
  }
  inline RouteWebLink& WithDeviceType(RouteWebLinkDeviceType value) {
    SetDeviceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the link.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  RouteWebLink& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_anchorText;

  Aws::String m_description;

  RouteWebLinkDeviceType m_deviceType{RouteWebLinkDeviceType::NOT_SET};

  Aws::String m_url;
  bool m_anchorTextHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_deviceTypeHasBeenSet = false;
  bool m_urlHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
