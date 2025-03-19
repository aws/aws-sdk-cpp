/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Ipv6CidrAssociation.h>
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
  class GetAssociatedIpv6PoolCidrsResponse
  {
  public:
    AWS_EC2_API GetAssociatedIpv6PoolCidrsResponse() = default;
    AWS_EC2_API GetAssociatedIpv6PoolCidrsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetAssociatedIpv6PoolCidrsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the IPv6 CIDR block associations.</p>
     */
    inline const Aws::Vector<Ipv6CidrAssociation>& GetIpv6CidrAssociations() const { return m_ipv6CidrAssociations; }
    template<typename Ipv6CidrAssociationsT = Aws::Vector<Ipv6CidrAssociation>>
    void SetIpv6CidrAssociations(Ipv6CidrAssociationsT&& value) { m_ipv6CidrAssociationsHasBeenSet = true; m_ipv6CidrAssociations = std::forward<Ipv6CidrAssociationsT>(value); }
    template<typename Ipv6CidrAssociationsT = Aws::Vector<Ipv6CidrAssociation>>
    GetAssociatedIpv6PoolCidrsResponse& WithIpv6CidrAssociations(Ipv6CidrAssociationsT&& value) { SetIpv6CidrAssociations(std::forward<Ipv6CidrAssociationsT>(value)); return *this;}
    template<typename Ipv6CidrAssociationsT = Ipv6CidrAssociation>
    GetAssociatedIpv6PoolCidrsResponse& AddIpv6CidrAssociations(Ipv6CidrAssociationsT&& value) { m_ipv6CidrAssociationsHasBeenSet = true; m_ipv6CidrAssociations.emplace_back(std::forward<Ipv6CidrAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAssociatedIpv6PoolCidrsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAssociatedIpv6PoolCidrsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Ipv6CidrAssociation> m_ipv6CidrAssociations;
    bool m_ipv6CidrAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
