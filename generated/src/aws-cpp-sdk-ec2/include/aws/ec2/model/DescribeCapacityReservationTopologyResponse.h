/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityReservationTopology.h>
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
class DescribeCapacityReservationTopologyResponse {
 public:
  AWS_EC2_API DescribeCapacityReservationTopologyResponse() = default;
  AWS_EC2_API DescribeCapacityReservationTopologyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeCapacityReservationTopologyResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The token to include in another request to get the next page of items. This
   * value is <code>null</code> when there are no more items to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeCapacityReservationTopologyResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the topology of each Capacity Reservation.</p>
   */
  inline const Aws::Vector<CapacityReservationTopology>& GetCapacityReservations() const { return m_capacityReservations; }
  template <typename CapacityReservationsT = Aws::Vector<CapacityReservationTopology>>
  void SetCapacityReservations(CapacityReservationsT&& value) {
    m_capacityReservationsHasBeenSet = true;
    m_capacityReservations = std::forward<CapacityReservationsT>(value);
  }
  template <typename CapacityReservationsT = Aws::Vector<CapacityReservationTopology>>
  DescribeCapacityReservationTopologyResponse& WithCapacityReservations(CapacityReservationsT&& value) {
    SetCapacityReservations(std::forward<CapacityReservationsT>(value));
    return *this;
  }
  template <typename CapacityReservationsT = CapacityReservationTopology>
  DescribeCapacityReservationTopologyResponse& AddCapacityReservations(CapacityReservationsT&& value) {
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
  DescribeCapacityReservationTopologyResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<CapacityReservationTopology> m_capacityReservations;
  bool m_capacityReservationsHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
