/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InterruptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p> Contains information about how and when instances in an interruptible
 * reservation can be terminated when capacity is reclaimed. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InterruptionInfo">AWS
 * API Reference</a></p>
 */
class InterruptionInfo {
 public:
  AWS_EC2_API InterruptionInfo() = default;
  AWS_EC2_API InterruptionInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API InterruptionInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The ID of the source Capacity Reservation from which the interruptible
   * reservation was created. </p>
   */
  inline const Aws::String& GetSourceCapacityReservationId() const { return m_sourceCapacityReservationId; }
  inline bool SourceCapacityReservationIdHasBeenSet() const { return m_sourceCapacityReservationIdHasBeenSet; }
  template <typename SourceCapacityReservationIdT = Aws::String>
  void SetSourceCapacityReservationId(SourceCapacityReservationIdT&& value) {
    m_sourceCapacityReservationIdHasBeenSet = true;
    m_sourceCapacityReservationId = std::forward<SourceCapacityReservationIdT>(value);
  }
  template <typename SourceCapacityReservationIdT = Aws::String>
  InterruptionInfo& WithSourceCapacityReservationId(SourceCapacityReservationIdT&& value) {
    SetSourceCapacityReservationId(std::forward<SourceCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The interruption type that determines how instances are terminated when
   * capacity is reclaimed. </p>
   */
  inline InterruptionType GetInterruptionType() const { return m_interruptionType; }
  inline bool InterruptionTypeHasBeenSet() const { return m_interruptionTypeHasBeenSet; }
  inline void SetInterruptionType(InterruptionType value) {
    m_interruptionTypeHasBeenSet = true;
    m_interruptionType = value;
  }
  inline InterruptionInfo& WithInterruptionType(InterruptionType value) {
    SetInterruptionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceCapacityReservationId;

  InterruptionType m_interruptionType{InterruptionType::NOT_SET};
  bool m_sourceCapacityReservationIdHasBeenSet = false;
  bool m_interruptionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
