/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PublicIpv4PoolRange.h>
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
  class ProvisionPublicIpv4PoolCidrResponse
  {
  public:
    AWS_EC2_API ProvisionPublicIpv4PoolCidrResponse() = default;
    AWS_EC2_API ProvisionPublicIpv4PoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ProvisionPublicIpv4PoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the pool that you want to provision the CIDR to.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    ProvisionPublicIpv4PoolCidrResponse& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the address range of the public IPv4 pool.</p>
     */
    inline const PublicIpv4PoolRange& GetPoolAddressRange() const { return m_poolAddressRange; }
    template<typename PoolAddressRangeT = PublicIpv4PoolRange>
    void SetPoolAddressRange(PoolAddressRangeT&& value) { m_poolAddressRangeHasBeenSet = true; m_poolAddressRange = std::forward<PoolAddressRangeT>(value); }
    template<typename PoolAddressRangeT = PublicIpv4PoolRange>
    ProvisionPublicIpv4PoolCidrResponse& WithPoolAddressRange(PoolAddressRangeT&& value) { SetPoolAddressRange(std::forward<PoolAddressRangeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ProvisionPublicIpv4PoolCidrResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    PublicIpv4PoolRange m_poolAddressRange;
    bool m_poolAddressRangeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
