/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SubnetCidrReservation.h>
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
  class CreateSubnetCidrReservationResponse
  {
  public:
    AWS_EC2_API CreateSubnetCidrReservationResponse() = default;
    AWS_EC2_API CreateSubnetCidrReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateSubnetCidrReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the created subnet CIDR reservation.</p>
     */
    inline const SubnetCidrReservation& GetSubnetCidrReservation() const { return m_subnetCidrReservation; }
    template<typename SubnetCidrReservationT = SubnetCidrReservation>
    void SetSubnetCidrReservation(SubnetCidrReservationT&& value) { m_subnetCidrReservationHasBeenSet = true; m_subnetCidrReservation = std::forward<SubnetCidrReservationT>(value); }
    template<typename SubnetCidrReservationT = SubnetCidrReservation>
    CreateSubnetCidrReservationResponse& WithSubnetCidrReservation(SubnetCidrReservationT&& value) { SetSubnetCidrReservation(std::forward<SubnetCidrReservationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateSubnetCidrReservationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SubnetCidrReservation m_subnetCidrReservation;
    bool m_subnetCidrReservationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
