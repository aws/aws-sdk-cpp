/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityReservation.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class MoveCapacityReservationInstancesResponse
  {
  public:
    AWS_EC2_API MoveCapacityReservationInstancesResponse() = default;
    AWS_EC2_API MoveCapacityReservationInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API MoveCapacityReservationInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> Information about the source Capacity Reservation. </p>
     */
    inline const CapacityReservation& GetSourceCapacityReservation() const { return m_sourceCapacityReservation; }
    template<typename SourceCapacityReservationT = CapacityReservation>
    void SetSourceCapacityReservation(SourceCapacityReservationT&& value) { m_sourceCapacityReservationHasBeenSet = true; m_sourceCapacityReservation = std::forward<SourceCapacityReservationT>(value); }
    template<typename SourceCapacityReservationT = CapacityReservation>
    MoveCapacityReservationInstancesResponse& WithSourceCapacityReservation(SourceCapacityReservationT&& value) { SetSourceCapacityReservation(std::forward<SourceCapacityReservationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the destination Capacity Reservation. </p>
     */
    inline const CapacityReservation& GetDestinationCapacityReservation() const { return m_destinationCapacityReservation; }
    template<typename DestinationCapacityReservationT = CapacityReservation>
    void SetDestinationCapacityReservation(DestinationCapacityReservationT&& value) { m_destinationCapacityReservationHasBeenSet = true; m_destinationCapacityReservation = std::forward<DestinationCapacityReservationT>(value); }
    template<typename DestinationCapacityReservationT = CapacityReservation>
    MoveCapacityReservationInstancesResponse& WithDestinationCapacityReservation(DestinationCapacityReservationT&& value) { SetDestinationCapacityReservation(std::forward<DestinationCapacityReservationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of instances that were moved from the source Capacity Reservation
     * to the destination Capacity Reservation. </p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline MoveCapacityReservationInstancesResponse& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    MoveCapacityReservationInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CapacityReservation m_sourceCapacityReservation;
    bool m_sourceCapacityReservationHasBeenSet = false;

    CapacityReservation m_destinationCapacityReservation;
    bool m_destinationCapacityReservationHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
