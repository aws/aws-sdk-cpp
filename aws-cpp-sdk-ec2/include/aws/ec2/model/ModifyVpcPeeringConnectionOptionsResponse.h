/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/PeeringConnectionOptions.h>
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
  class AWS_EC2_API ModifyVpcPeeringConnectionOptionsResponse
  {
  public:
    ModifyVpcPeeringConnectionOptionsResponse();
    ModifyVpcPeeringConnectionOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyVpcPeeringConnectionOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the VPC peering connection options for the accepter
     * VPC.</p>
     */
    inline const PeeringConnectionOptions& GetAccepterPeeringConnectionOptions() const{ return m_accepterPeeringConnectionOptions; }

    /**
     * <p>Information about the VPC peering connection options for the accepter
     * VPC.</p>
     */
    inline void SetAccepterPeeringConnectionOptions(const PeeringConnectionOptions& value) { m_accepterPeeringConnectionOptions = value; }

    /**
     * <p>Information about the VPC peering connection options for the accepter
     * VPC.</p>
     */
    inline void SetAccepterPeeringConnectionOptions(PeeringConnectionOptions&& value) { m_accepterPeeringConnectionOptions = std::move(value); }

    /**
     * <p>Information about the VPC peering connection options for the accepter
     * VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsResponse& WithAccepterPeeringConnectionOptions(const PeeringConnectionOptions& value) { SetAccepterPeeringConnectionOptions(value); return *this;}

    /**
     * <p>Information about the VPC peering connection options for the accepter
     * VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsResponse& WithAccepterPeeringConnectionOptions(PeeringConnectionOptions&& value) { SetAccepterPeeringConnectionOptions(std::move(value)); return *this;}


    /**
     * <p>Information about the VPC peering connection options for the requester
     * VPC.</p>
     */
    inline const PeeringConnectionOptions& GetRequesterPeeringConnectionOptions() const{ return m_requesterPeeringConnectionOptions; }

    /**
     * <p>Information about the VPC peering connection options for the requester
     * VPC.</p>
     */
    inline void SetRequesterPeeringConnectionOptions(const PeeringConnectionOptions& value) { m_requesterPeeringConnectionOptions = value; }

    /**
     * <p>Information about the VPC peering connection options for the requester
     * VPC.</p>
     */
    inline void SetRequesterPeeringConnectionOptions(PeeringConnectionOptions&& value) { m_requesterPeeringConnectionOptions = std::move(value); }

    /**
     * <p>Information about the VPC peering connection options for the requester
     * VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsResponse& WithRequesterPeeringConnectionOptions(const PeeringConnectionOptions& value) { SetRequesterPeeringConnectionOptions(value); return *this;}

    /**
     * <p>Information about the VPC peering connection options for the requester
     * VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsResponse& WithRequesterPeeringConnectionOptions(PeeringConnectionOptions&& value) { SetRequesterPeeringConnectionOptions(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyVpcPeeringConnectionOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyVpcPeeringConnectionOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    PeeringConnectionOptions m_accepterPeeringConnectionOptions;

    PeeringConnectionOptions m_requesterPeeringConnectionOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
