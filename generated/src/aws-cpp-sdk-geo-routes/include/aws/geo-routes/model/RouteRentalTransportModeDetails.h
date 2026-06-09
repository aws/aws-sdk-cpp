/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteEngineType.h>
#include <aws/geo-routes/model/RouteRentalMode.h>

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
 * <p>Transport mode details for the rental leg.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteRentalTransportModeDetails">AWS
 * API Reference</a></p>
 */
class RouteRentalTransportModeDetails {
 public:
  AWS_GEOROUTES_API RouteRentalTransportModeDetails() = default;
  AWS_GEOROUTES_API RouteRentalTransportModeDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteRentalTransportModeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Number of available seats in the vehicle.</p>
   */
  inline int GetAvailableSeats() const { return m_availableSeats; }
  inline bool AvailableSeatsHasBeenSet() const { return m_availableSeatsHasBeenSet; }
  inline void SetAvailableSeats(int value) {
    m_availableSeatsHasBeenSet = true;
    m_availableSeats = value;
  }
  inline RouteRentalTransportModeDetails& WithAvailableSeats(int value) {
    SetAvailableSeats(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human readable transport category.</p>
   */
  inline const Aws::String& GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  template <typename CategoryT = Aws::String>
  void SetCategory(CategoryT&& value) {
    m_categoryHasBeenSet = true;
    m_category = std::forward<CategoryT>(value);
  }
  template <typename CategoryT = Aws::String>
  RouteRentalTransportModeDetails& WithCategory(CategoryT&& value) {
    SetCategory(std::forward<CategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Color of the transport polyline and background for the transport name.</p>
   */
  inline const Aws::String& GetColor() const { return m_color; }
  inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
  template <typename ColorT = Aws::String>
  void SetColor(ColorT&& value) {
    m_colorHasBeenSet = true;
    m_color = std::forward<ColorT>(value);
  }
  template <typename ColorT = Aws::String>
  RouteRentalTransportModeDetails& WithColor(ColorT&& value) {
    SetColor(std::forward<ColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Vehicle engine type.</p>
   */
  inline RouteEngineType GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  inline void SetEngine(RouteEngineType value) {
    m_engineHasBeenSet = true;
    m_engine = value;
  }
  inline RouteRentalTransportModeDetails& WithEngine(RouteEngineType value) {
    SetEngine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Vehicle license plate number.</p>
   */
  inline const Aws::String& GetLicensePlate() const { return m_licensePlate; }
  inline bool LicensePlateHasBeenSet() const { return m_licensePlateHasBeenSet; }
  template <typename LicensePlateT = Aws::String>
  void SetLicensePlate(LicensePlateT&& value) {
    m_licensePlateHasBeenSet = true;
    m_licensePlate = std::forward<LicensePlateT>(value);
  }
  template <typename LicensePlateT = Aws::String>
  RouteRentalTransportModeDetails& WithLicensePlate(LicensePlateT&& value) {
    SetLicensePlate(std::forward<LicensePlateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Mode of the rental transport.</p>
   */
  inline RouteRentalMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(RouteRentalMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline RouteRentalTransportModeDetails& WithMode(RouteRentalMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Vehicle model.</p>
   */
  inline const Aws::String& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = Aws::String>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = Aws::String>
  RouteRentalTransportModeDetails& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Vehicle name or mobility provider name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RouteRentalTransportModeDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Color of the transport name text.</p>
   */
  inline const Aws::String& GetTextColor() const { return m_textColor; }
  inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
  template <typename TextColorT = Aws::String>
  void SetTextColor(TextColorT&& value) {
    m_textColorHasBeenSet = true;
    m_textColor = std::forward<TextColorT>(value);
  }
  template <typename TextColorT = Aws::String>
  RouteRentalTransportModeDetails& WithTextColor(TextColorT&& value) {
    SetTextColor(std::forward<TextColorT>(value));
    return *this;
  }
  ///@}
 private:
  int m_availableSeats{0};

  Aws::String m_category;

  Aws::String m_color;

  RouteEngineType m_engine{RouteEngineType::NOT_SET};

  Aws::String m_licensePlate;

  RouteRentalMode m_mode{RouteRentalMode::NOT_SET};

  Aws::String m_model;

  Aws::String m_name;

  Aws::String m_textColor;
  bool m_availableSeatsHasBeenSet = false;
  bool m_categoryHasBeenSet = false;
  bool m_colorHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_licensePlateHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_textColorHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
