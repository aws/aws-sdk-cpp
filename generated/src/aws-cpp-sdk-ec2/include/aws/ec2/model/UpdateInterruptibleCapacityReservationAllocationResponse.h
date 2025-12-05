/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InterruptibleCapacityReservationAllocationStatus.h>
#include <aws/ec2/model/InterruptionType.h>
#include <aws/ec2/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class UpdateInterruptibleCapacityReservationAllocationResponse {
 public:
  AWS_EC2_API UpdateInterruptibleCapacityReservationAllocationResponse() = default;
  AWS_EC2_API UpdateInterruptibleCapacityReservationAllocationResponse(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API UpdateInterruptibleCapacityReservationAllocationResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The ID of the interruptible Capacity Reservation that was modified. </p>
   */
  inline const Aws::String& GetInterruptibleCapacityReservationId() const { return m_interruptibleCapacityReservationId; }
  template <typename InterruptibleCapacityReservationIdT = Aws::String>
  void SetInterruptibleCapacityReservationId(InterruptibleCapacityReservationIdT&& value) {
    m_interruptibleCapacityReservationIdHasBeenSet = true;
    m_interruptibleCapacityReservationId = std::forward<InterruptibleCapacityReservationIdT>(value);
  }
  template <typename InterruptibleCapacityReservationIdT = Aws::String>
  UpdateInterruptibleCapacityReservationAllocationResponse& WithInterruptibleCapacityReservationId(
      InterruptibleCapacityReservationIdT&& value) {
    SetInterruptibleCapacityReservationId(std::forward<InterruptibleCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ID of the source Capacity Reservation to which capacity was reclaimed or
   * from which capacity was allocated. </p>
   */
  inline const Aws::String& GetSourceCapacityReservationId() const { return m_sourceCapacityReservationId; }
  template <typename SourceCapacityReservationIdT = Aws::String>
  void SetSourceCapacityReservationId(SourceCapacityReservationIdT&& value) {
    m_sourceCapacityReservationIdHasBeenSet = true;
    m_sourceCapacityReservationId = std::forward<SourceCapacityReservationIdT>(value);
  }
  template <typename SourceCapacityReservationIdT = Aws::String>
  UpdateInterruptibleCapacityReservationAllocationResponse& WithSourceCapacityReservationId(SourceCapacityReservationIdT&& value) {
    SetSourceCapacityReservationId(std::forward<SourceCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current number of instances allocated to the interruptible reservation.
   * </p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline UpdateInterruptibleCapacityReservationAllocationResponse& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The requested number of instances for the interruptible Capacity
   * Reservation. </p>
   */
  inline int GetTargetInstanceCount() const { return m_targetInstanceCount; }
  inline void SetTargetInstanceCount(int value) {
    m_targetInstanceCountHasBeenSet = true;
    m_targetInstanceCount = value;
  }
  inline UpdateInterruptibleCapacityReservationAllocationResponse& WithTargetInstanceCount(int value) {
    SetTargetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the allocation (updating during reclamation, active
   * when complete). </p>
   */
  inline InterruptibleCapacityReservationAllocationStatus GetStatus() const { return m_status; }
  inline void SetStatus(InterruptibleCapacityReservationAllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateInterruptibleCapacityReservationAllocationResponse& WithStatus(InterruptibleCapacityReservationAllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The interruption type for the interruptible reservation. </p>
   */
  inline InterruptionType GetInterruptionType() const { return m_interruptionType; }
  inline void SetInterruptionType(InterruptionType value) {
    m_interruptionTypeHasBeenSet = true;
    m_interruptionType = value;
  }
  inline UpdateInterruptibleCapacityReservationAllocationResponse& WithInterruptionType(InterruptionType value) {
    SetInterruptionType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  UpdateInterruptibleCapacityReservationAllocationResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_interruptibleCapacityReservationId;

  Aws::String m_sourceCapacityReservationId;

  int m_instanceCount{0};

  int m_targetInstanceCount{0};

  InterruptibleCapacityReservationAllocationStatus m_status{InterruptibleCapacityReservationAllocationStatus::NOT_SET};

  InterruptionType m_interruptionType{InterruptionType::NOT_SET};

  ResponseMetadata m_responseMetadata;
  bool m_interruptibleCapacityReservationIdHasBeenSet = false;
  bool m_sourceCapacityReservationIdHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
  bool m_targetInstanceCountHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_interruptionTypeHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
