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
class CreateInterruptibleCapacityReservationAllocationResponse {
 public:
  AWS_EC2_API CreateInterruptibleCapacityReservationAllocationResponse() = default;
  AWS_EC2_API CreateInterruptibleCapacityReservationAllocationResponse(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API CreateInterruptibleCapacityReservationAllocationResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The ID of the source Capacity Reservation from which the interruptible
   * Capacity Reservation was created. </p>
   */
  inline const Aws::String& GetSourceCapacityReservationId() const { return m_sourceCapacityReservationId; }
  template <typename SourceCapacityReservationIdT = Aws::String>
  void SetSourceCapacityReservationId(SourceCapacityReservationIdT&& value) {
    m_sourceCapacityReservationIdHasBeenSet = true;
    m_sourceCapacityReservationId = std::forward<SourceCapacityReservationIdT>(value);
  }
  template <typename SourceCapacityReservationIdT = Aws::String>
  CreateInterruptibleCapacityReservationAllocationResponse& WithSourceCapacityReservationId(SourceCapacityReservationIdT&& value) {
    SetSourceCapacityReservationId(std::forward<SourceCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of instances allocated to the interruptible reservation. </p>
   */
  inline int GetTargetInstanceCount() const { return m_targetInstanceCount; }
  inline void SetTargetInstanceCount(int value) {
    m_targetInstanceCountHasBeenSet = true;
    m_targetInstanceCount = value;
  }
  inline CreateInterruptibleCapacityReservationAllocationResponse& WithTargetInstanceCount(int value) {
    SetTargetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the allocation request (creating, active, updating).
   * </p>
   */
  inline InterruptibleCapacityReservationAllocationStatus GetStatus() const { return m_status; }
  inline void SetStatus(InterruptibleCapacityReservationAllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateInterruptibleCapacityReservationAllocationResponse& WithStatus(InterruptibleCapacityReservationAllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of interruption applied to the interruptible reservation. </p>
   */
  inline InterruptionType GetInterruptionType() const { return m_interruptionType; }
  inline void SetInterruptionType(InterruptionType value) {
    m_interruptionTypeHasBeenSet = true;
    m_interruptionType = value;
  }
  inline CreateInterruptibleCapacityReservationAllocationResponse& WithInterruptionType(InterruptionType value) {
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
  CreateInterruptibleCapacityReservationAllocationResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceCapacityReservationId;
  bool m_sourceCapacityReservationIdHasBeenSet = false;

  int m_targetInstanceCount{0};
  bool m_targetInstanceCountHasBeenSet = false;

  InterruptibleCapacityReservationAllocationStatus m_status{InterruptibleCapacityReservationAllocationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  InterruptionType m_interruptionType{InterruptionType::NOT_SET};
  bool m_interruptionTypeHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
