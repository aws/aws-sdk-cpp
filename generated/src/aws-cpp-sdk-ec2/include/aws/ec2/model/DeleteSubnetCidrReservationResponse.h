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
    AWS_EC2_API DeleteSubnetCidrReservationResponse();
    AWS_EC2_API DeleteSubnetCidrReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteSubnetCidrReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the deleted subnet CIDR reservation.</p>
     */
    inline const SubnetCidrReservation& GetDeletedSubnetCidrReservation() const{ return m_deletedSubnetCidrReservation; }

    /**
     * <p>Information about the deleted subnet CIDR reservation.</p>
     */
    inline void SetDeletedSubnetCidrReservation(const SubnetCidrReservation& value) { m_deletedSubnetCidrReservation = value; }

    /**
     * <p>Information about the deleted subnet CIDR reservation.</p>
     */
    inline void SetDeletedSubnetCidrReservation(SubnetCidrReservation&& value) { m_deletedSubnetCidrReservation = std::move(value); }

    /**
     * <p>Information about the deleted subnet CIDR reservation.</p>
     */
    inline DeleteSubnetCidrReservationResponse& WithDeletedSubnetCidrReservation(const SubnetCidrReservation& value) { SetDeletedSubnetCidrReservation(value); return *this;}

    /**
     * <p>Information about the deleted subnet CIDR reservation.</p>
     */
    inline DeleteSubnetCidrReservationResponse& WithDeletedSubnetCidrReservation(SubnetCidrReservation&& value) { SetDeletedSubnetCidrReservation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteSubnetCidrReservationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteSubnetCidrReservationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    SubnetCidrReservation m_deletedSubnetCidrReservation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
