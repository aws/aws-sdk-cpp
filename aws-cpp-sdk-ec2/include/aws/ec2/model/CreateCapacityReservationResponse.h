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
  class CreateCapacityReservationResponse
  {
  public:
    AWS_EC2_API CreateCapacityReservationResponse();
    AWS_EC2_API CreateCapacityReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCapacityReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline const CapacityReservation& GetCapacityReservation() const{ return m_capacityReservation; }

    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline void SetCapacityReservation(const CapacityReservation& value) { m_capacityReservation = value; }

    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline void SetCapacityReservation(CapacityReservation&& value) { m_capacityReservation = std::move(value); }

    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline CreateCapacityReservationResponse& WithCapacityReservation(const CapacityReservation& value) { SetCapacityReservation(value); return *this;}

    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline CreateCapacityReservationResponse& WithCapacityReservation(CapacityReservation&& value) { SetCapacityReservation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateCapacityReservationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateCapacityReservationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CapacityReservation m_capacityReservation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
