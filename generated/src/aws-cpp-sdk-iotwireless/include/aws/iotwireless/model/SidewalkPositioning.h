/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
 * <p>The Positioning object of the Sidewalk device.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkPositioning">AWS
 * API Reference</a></p>
 */
class SidewalkPositioning {
 public:
  AWS_IOTWIRELESS_API SidewalkPositioning() = default;
  AWS_IOTWIRELESS_API SidewalkPositioning(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API SidewalkPositioning& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The location destination name of the Sidewalk device.</p>
   */
  inline const Aws::String& GetDestinationName() const { return m_destinationName; }
  inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
  template <typename DestinationNameT = Aws::String>
  void SetDestinationName(DestinationNameT&& value) {
    m_destinationNameHasBeenSet = true;
    m_destinationName = std::forward<DestinationNameT>(value);
  }
  template <typename DestinationNameT = Aws::String>
  SidewalkPositioning& WithDestinationName(DestinationNameT&& value) {
    SetDestinationName(std::forward<DestinationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationName;
  bool m_destinationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
