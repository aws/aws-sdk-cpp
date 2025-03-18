/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ModifyVpcPeeringConnectionOptionsResponse
  {
  public:
    AWS_EC2_API ModifyVpcPeeringConnectionOptionsResponse() = default;
    AWS_EC2_API ModifyVpcPeeringConnectionOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVpcPeeringConnectionOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the VPC peering connection options for the accepter
     * VPC.</p>
     */
    inline const PeeringConnectionOptions& GetAccepterPeeringConnectionOptions() const { return m_accepterPeeringConnectionOptions; }
    template<typename AccepterPeeringConnectionOptionsT = PeeringConnectionOptions>
    void SetAccepterPeeringConnectionOptions(AccepterPeeringConnectionOptionsT&& value) { m_accepterPeeringConnectionOptionsHasBeenSet = true; m_accepterPeeringConnectionOptions = std::forward<AccepterPeeringConnectionOptionsT>(value); }
    template<typename AccepterPeeringConnectionOptionsT = PeeringConnectionOptions>
    ModifyVpcPeeringConnectionOptionsResponse& WithAccepterPeeringConnectionOptions(AccepterPeeringConnectionOptionsT&& value) { SetAccepterPeeringConnectionOptions(std::forward<AccepterPeeringConnectionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC peering connection options for the requester
     * VPC.</p>
     */
    inline const PeeringConnectionOptions& GetRequesterPeeringConnectionOptions() const { return m_requesterPeeringConnectionOptions; }
    template<typename RequesterPeeringConnectionOptionsT = PeeringConnectionOptions>
    void SetRequesterPeeringConnectionOptions(RequesterPeeringConnectionOptionsT&& value) { m_requesterPeeringConnectionOptionsHasBeenSet = true; m_requesterPeeringConnectionOptions = std::forward<RequesterPeeringConnectionOptionsT>(value); }
    template<typename RequesterPeeringConnectionOptionsT = PeeringConnectionOptions>
    ModifyVpcPeeringConnectionOptionsResponse& WithRequesterPeeringConnectionOptions(RequesterPeeringConnectionOptionsT&& value) { SetRequesterPeeringConnectionOptions(std::forward<RequesterPeeringConnectionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyVpcPeeringConnectionOptionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    PeeringConnectionOptions m_accepterPeeringConnectionOptions;
    bool m_accepterPeeringConnectionOptionsHasBeenSet = false;

    PeeringConnectionOptions m_requesterPeeringConnectionOptions;
    bool m_requesterPeeringConnectionOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
