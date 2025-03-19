/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPoolAllocation.h>
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
  class AllocateIpamPoolCidrResponse
  {
  public:
    AWS_EC2_API AllocateIpamPoolCidrResponse() = default;
    AWS_EC2_API AllocateIpamPoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AllocateIpamPoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the allocation created.</p>
     */
    inline const IpamPoolAllocation& GetIpamPoolAllocation() const { return m_ipamPoolAllocation; }
    template<typename IpamPoolAllocationT = IpamPoolAllocation>
    void SetIpamPoolAllocation(IpamPoolAllocationT&& value) { m_ipamPoolAllocationHasBeenSet = true; m_ipamPoolAllocation = std::forward<IpamPoolAllocationT>(value); }
    template<typename IpamPoolAllocationT = IpamPoolAllocation>
    AllocateIpamPoolCidrResponse& WithIpamPoolAllocation(IpamPoolAllocationT&& value) { SetIpamPoolAllocation(std::forward<IpamPoolAllocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AllocateIpamPoolCidrResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IpamPoolAllocation m_ipamPoolAllocation;
    bool m_ipamPoolAllocationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
