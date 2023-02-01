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
    AWS_EC2_API CreateSubnetCidrReservationResponse();
    AWS_EC2_API CreateSubnetCidrReservationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateSubnetCidrReservationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the created subnet CIDR reservation.</p>
     */
    inline const SubnetCidrReservation& GetSubnetCidrReservation() const{ return m_subnetCidrReservation; }

    /**
     * <p>Information about the created subnet CIDR reservation.</p>
     */
    inline void SetSubnetCidrReservation(const SubnetCidrReservation& value) { m_subnetCidrReservation = value; }

    /**
     * <p>Information about the created subnet CIDR reservation.</p>
     */
    inline void SetSubnetCidrReservation(SubnetCidrReservation&& value) { m_subnetCidrReservation = std::move(value); }

    /**
     * <p>Information about the created subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationResponse& WithSubnetCidrReservation(const SubnetCidrReservation& value) { SetSubnetCidrReservation(value); return *this;}

    /**
     * <p>Information about the created subnet CIDR reservation.</p>
     */
    inline CreateSubnetCidrReservationResponse& WithSubnetCidrReservation(SubnetCidrReservation&& value) { SetSubnetCidrReservation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateSubnetCidrReservationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSubnetCidrReservationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    SubnetCidrReservation m_subnetCidrReservation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
