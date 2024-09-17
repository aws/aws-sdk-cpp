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
    AWS_EC2_API MoveCapacityReservationInstancesResponse();
    AWS_EC2_API MoveCapacityReservationInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API MoveCapacityReservationInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> Information about the source Capacity Reservation. </p>
     */
    inline const CapacityReservation& GetSourceCapacityReservation() const{ return m_sourceCapacityReservation; }
    inline void SetSourceCapacityReservation(const CapacityReservation& value) { m_sourceCapacityReservation = value; }
    inline void SetSourceCapacityReservation(CapacityReservation&& value) { m_sourceCapacityReservation = std::move(value); }
    inline MoveCapacityReservationInstancesResponse& WithSourceCapacityReservation(const CapacityReservation& value) { SetSourceCapacityReservation(value); return *this;}
    inline MoveCapacityReservationInstancesResponse& WithSourceCapacityReservation(CapacityReservation&& value) { SetSourceCapacityReservation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the destination Capacity Reservation. </p>
     */
    inline const CapacityReservation& GetDestinationCapacityReservation() const{ return m_destinationCapacityReservation; }
    inline void SetDestinationCapacityReservation(const CapacityReservation& value) { m_destinationCapacityReservation = value; }
    inline void SetDestinationCapacityReservation(CapacityReservation&& value) { m_destinationCapacityReservation = std::move(value); }
    inline MoveCapacityReservationInstancesResponse& WithDestinationCapacityReservation(const CapacityReservation& value) { SetDestinationCapacityReservation(value); return *this;}
    inline MoveCapacityReservationInstancesResponse& WithDestinationCapacityReservation(CapacityReservation&& value) { SetDestinationCapacityReservation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of instances that were moved from the source Capacity Reservation
     * to the destination Capacity Reservation. </p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline void SetInstanceCount(int value) { m_instanceCount = value; }
    inline MoveCapacityReservationInstancesResponse& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline MoveCapacityReservationInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline MoveCapacityReservationInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    CapacityReservation m_sourceCapacityReservation;

    CapacityReservation m_destinationCapacityReservation;

    int m_instanceCount;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
