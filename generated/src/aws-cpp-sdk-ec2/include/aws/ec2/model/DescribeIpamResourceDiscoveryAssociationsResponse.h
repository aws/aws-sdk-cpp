/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpamResourceDiscoveryAssociation.h>
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
  class DescribeIpamResourceDiscoveryAssociationsResponse
  {
  public:
    AWS_EC2_API DescribeIpamResourceDiscoveryAssociationsResponse() = default;
    AWS_EC2_API DescribeIpamResourceDiscoveryAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeIpamResourceDiscoveryAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The resource discovery associations.</p>
     */
    inline const Aws::Vector<IpamResourceDiscoveryAssociation>& GetIpamResourceDiscoveryAssociations() const { return m_ipamResourceDiscoveryAssociations; }
    template<typename IpamResourceDiscoveryAssociationsT = Aws::Vector<IpamResourceDiscoveryAssociation>>
    void SetIpamResourceDiscoveryAssociations(IpamResourceDiscoveryAssociationsT&& value) { m_ipamResourceDiscoveryAssociationsHasBeenSet = true; m_ipamResourceDiscoveryAssociations = std::forward<IpamResourceDiscoveryAssociationsT>(value); }
    template<typename IpamResourceDiscoveryAssociationsT = Aws::Vector<IpamResourceDiscoveryAssociation>>
    DescribeIpamResourceDiscoveryAssociationsResponse& WithIpamResourceDiscoveryAssociations(IpamResourceDiscoveryAssociationsT&& value) { SetIpamResourceDiscoveryAssociations(std::forward<IpamResourceDiscoveryAssociationsT>(value)); return *this;}
    template<typename IpamResourceDiscoveryAssociationsT = IpamResourceDiscoveryAssociation>
    DescribeIpamResourceDiscoveryAssociationsResponse& AddIpamResourceDiscoveryAssociations(IpamResourceDiscoveryAssociationsT&& value) { m_ipamResourceDiscoveryAssociationsHasBeenSet = true; m_ipamResourceDiscoveryAssociations.emplace_back(std::forward<IpamResourceDiscoveryAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeIpamResourceDiscoveryAssociationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeIpamResourceDiscoveryAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpamResourceDiscoveryAssociation> m_ipamResourceDiscoveryAssociations;
    bool m_ipamResourceDiscoveryAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
