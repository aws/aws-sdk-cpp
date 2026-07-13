/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/AccessPointType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoPlaces {
namespace Model {

/**
 * <p>Position of the access point represented by longitude and latitude for a
 * vehicle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/AccessPoint">AWS
 * API Reference</a></p>
 */
class AccessPoint {
 public:
  AWS_GEOPLACES_API AccessPoint() = default;
  AWS_GEOPLACES_API AccessPoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API AccessPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The position in World Geodetic System (WGS 84) format: [longitude,
   * latitude].</p>
   */
  inline const Aws::Vector<double>& GetPosition() const { return m_position; }
  inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
  template <typename PositionT = Aws::Vector<double>>
  void SetPosition(PositionT&& value) {
    m_positionHasBeenSet = true;
    m_position = std::forward<PositionT>(value);
  }
  template <typename PositionT = Aws::Vector<double>>
  AccessPoint& WithPosition(PositionT&& value) {
    SetPosition(std::forward<PositionT>(value));
    return *this;
  }
  inline AccessPoint& AddPosition(double value) {
    m_positionHasBeenSet = true;
    m_position.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of access point, indicating its intended use. Only applies to
   * results of type place.</p>
   */
  inline AccessPointType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AccessPointType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AccessPoint& WithType(AccessPointType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to <code>true</code> for the primary access position when the place has
   * more than one access point.</p>
   */
  inline bool GetPrimary() const { return m_primary; }
  inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
  inline void SetPrimary(bool value) {
    m_primaryHasBeenSet = true;
    m_primary = value;
  }
  inline AccessPoint& WithPrimary(bool value) {
    SetPrimary(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short textual description of the access point, such as <code>"North
   * Entrance"</code>.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  AccessPoint& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<double> m_position;

  AccessPointType m_type{AccessPointType::NOT_SET};

  bool m_primary{false};

  Aws::String m_label;
  bool m_positionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_primaryHasBeenSet = false;
  bool m_labelHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
