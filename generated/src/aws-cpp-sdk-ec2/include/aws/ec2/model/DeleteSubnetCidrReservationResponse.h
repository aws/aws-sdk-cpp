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
  class DeleteSubnetCidrReservationResponse
  {
  public:
    AWS_EC2_API DeleteSubnetCidrReservationResponse() = default;
    AWS_EC2_API DeleteSubnetCidrReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteSubnetCidrReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted subnet CIDR reservation.</p>
     */
    inline const SubnetCidrReservation& GetDeletedSubnetCidrReservation() const { return m_deletedSubnetCidrReservation; }
    template<typename DeletedSubnetCidrReservationT = SubnetCidrReservation>
    void SetDeletedSubnetCidrReservation(DeletedSubnetCidrReservationT&& value) { m_deletedSubnetCidrReservationHasBeenSet = true; m_deletedSubnetCidrReservation = std::forward<DeletedSubnetCidrReservationT>(value); }
    template<typename DeletedSubnetCidrReservationT = SubnetCidrReservation>
    DeleteSubnetCidrReservationResponse& WithDeletedSubnetCidrReservation(DeletedSubnetCidrReservationT&& value) { SetDeletedSubnetCidrReservation(std::forward<DeletedSubnetCidrReservationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteSubnetCidrReservationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    SubnetCidrReservation m_deletedSubnetCidrReservation;
    bool m_deletedSubnetCidrReservationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
