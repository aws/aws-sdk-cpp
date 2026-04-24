/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkPositioning.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTWireless {
namespace Model {

/**
 * <p>Information about an import task created for an individual Sidewalk
 * device.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkSingleStartImportInfo">AWS
 * API Reference</a></p>
 */
class SidewalkSingleStartImportInfo {
 public:
  AWS_IOTWIRELESS_API SidewalkSingleStartImportInfo() = default;
  AWS_IOTWIRELESS_API SidewalkSingleStartImportInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API SidewalkSingleStartImportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
   * import task.</p>
   */
  inline const Aws::String& GetSidewalkManufacturingSn() const { return m_sidewalkManufacturingSn; }
  inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }
  template <typename SidewalkManufacturingSnT = Aws::String>
  void SetSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) {
    m_sidewalkManufacturingSnHasBeenSet = true;
    m_sidewalkManufacturingSn = std::forward<SidewalkManufacturingSnT>(value);
  }
  template <typename SidewalkManufacturingSnT = Aws::String>
  SidewalkSingleStartImportInfo& WithSidewalkManufacturingSn(SidewalkManufacturingSnT&& value) {
    SetSidewalkManufacturingSn(std::forward<SidewalkManufacturingSnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Positioning object of the Sidewalk device.</p>
   */
  inline const SidewalkPositioning& GetPositioning() const { return m_positioning; }
  inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }
  template <typename PositioningT = SidewalkPositioning>
  void SetPositioning(PositioningT&& value) {
    m_positioningHasBeenSet = true;
    m_positioning = std::forward<PositioningT>(value);
  }
  template <typename PositioningT = SidewalkPositioning>
  SidewalkSingleStartImportInfo& WithPositioning(PositioningT&& value) {
    SetPositioning(std::forward<PositioningT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sidewalkManufacturingSn;

  SidewalkPositioning m_positioning;
  bool m_sidewalkManufacturingSnHasBeenSet = false;
  bool m_positioningHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
