/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityBlock.h>
#include <aws/ec2/model/CapacityReservation.h>
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
class PurchaseCapacityBlockResponse {
 public:
  AWS_EC2_API PurchaseCapacityBlockResponse() = default;
  AWS_EC2_API PurchaseCapacityBlockResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API PurchaseCapacityBlockResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The Capacity Reservation.</p>
   */
  inline const CapacityReservation& GetCapacityReservation() const { return m_capacityReservation; }
  template <typename CapacityReservationT = CapacityReservation>
  void SetCapacityReservation(CapacityReservationT&& value) {
    m_capacityReservationHasBeenSet = true;
    m_capacityReservation = std::forward<CapacityReservationT>(value);
  }
  template <typename CapacityReservationT = CapacityReservation>
  PurchaseCapacityBlockResponse& WithCapacityReservation(CapacityReservationT&& value) {
    SetCapacityReservation(std::forward<CapacityReservationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Capacity Block.</p>
   */
  inline const Aws::Vector<CapacityBlock>& GetCapacityBlocks() const { return m_capacityBlocks; }
  template <typename CapacityBlocksT = Aws::Vector<CapacityBlock>>
  void SetCapacityBlocks(CapacityBlocksT&& value) {
    m_capacityBlocksHasBeenSet = true;
    m_capacityBlocks = std::forward<CapacityBlocksT>(value);
  }
  template <typename CapacityBlocksT = Aws::Vector<CapacityBlock>>
  PurchaseCapacityBlockResponse& WithCapacityBlocks(CapacityBlocksT&& value) {
    SetCapacityBlocks(std::forward<CapacityBlocksT>(value));
    return *this;
  }
  template <typename CapacityBlocksT = CapacityBlock>
  PurchaseCapacityBlockResponse& AddCapacityBlocks(CapacityBlocksT&& value) {
    m_capacityBlocksHasBeenSet = true;
    m_capacityBlocks.emplace_back(std::forward<CapacityBlocksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Capacity Reservations created as a result of the Capacity Block purchase.
   * When a Capacity Block offering contains multiple segments, a separate Capacity
   * Reservation is created for each segment.</p>
   */
  inline const Aws::Vector<CapacityReservation>& GetCapacityReservations() const { return m_capacityReservations; }
  template <typename CapacityReservationsT = Aws::Vector<CapacityReservation>>
  void SetCapacityReservations(CapacityReservationsT&& value) {
    m_capacityReservationsHasBeenSet = true;
    m_capacityReservations = std::forward<CapacityReservationsT>(value);
  }
  template <typename CapacityReservationsT = Aws::Vector<CapacityReservation>>
  PurchaseCapacityBlockResponse& WithCapacityReservations(CapacityReservationsT&& value) {
    SetCapacityReservations(std::forward<CapacityReservationsT>(value));
    return *this;
  }
  template <typename CapacityReservationsT = CapacityReservation>
  PurchaseCapacityBlockResponse& AddCapacityReservations(CapacityReservationsT&& value) {
    m_capacityReservationsHasBeenSet = true;
    m_capacityReservations.emplace_back(std::forward<CapacityReservationsT>(value));
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
  PurchaseCapacityBlockResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CapacityReservation m_capacityReservation;

  Aws::Vector<CapacityBlock> m_capacityBlocks;

  Aws::Vector<CapacityReservation> m_capacityReservations;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_capacityReservationHasBeenSet = false;
  bool m_capacityBlocksHasBeenSet = false;
  bool m_capacityReservationsHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
