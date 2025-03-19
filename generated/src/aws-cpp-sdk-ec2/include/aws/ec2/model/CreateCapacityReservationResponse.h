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
    AWS_EC2_API CreateCapacityReservationResponse() = default;
    AWS_EC2_API CreateCapacityReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCapacityReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Capacity Reservation.</p>
     */
    inline const CapacityReservation& GetCapacityReservation() const { return m_capacityReservation; }
    template<typename CapacityReservationT = CapacityReservation>
    void SetCapacityReservation(CapacityReservationT&& value) { m_capacityReservationHasBeenSet = true; m_capacityReservation = std::forward<CapacityReservationT>(value); }
    template<typename CapacityReservationT = CapacityReservation>
    CreateCapacityReservationResponse& WithCapacityReservation(CapacityReservationT&& value) { SetCapacityReservation(std::forward<CapacityReservationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCapacityReservationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CapacityReservation m_capacityReservation;
    bool m_capacityReservationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
