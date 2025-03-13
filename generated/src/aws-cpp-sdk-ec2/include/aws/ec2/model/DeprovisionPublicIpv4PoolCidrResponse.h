/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DeprovisionPublicIpv4PoolCidrResponse
  {
  public:
    AWS_EC2_API DeprovisionPublicIpv4PoolCidrResponse() = default;
    AWS_EC2_API DeprovisionPublicIpv4PoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeprovisionPublicIpv4PoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    DeprovisionPublicIpv4PoolCidrResponse& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeprovisionedAddresses() const { return m_deprovisionedAddresses; }
    template<typename DeprovisionedAddressesT = Aws::Vector<Aws::String>>
    void SetDeprovisionedAddresses(DeprovisionedAddressesT&& value) { m_deprovisionedAddressesHasBeenSet = true; m_deprovisionedAddresses = std::forward<DeprovisionedAddressesT>(value); }
    template<typename DeprovisionedAddressesT = Aws::Vector<Aws::String>>
    DeprovisionPublicIpv4PoolCidrResponse& WithDeprovisionedAddresses(DeprovisionedAddressesT&& value) { SetDeprovisionedAddresses(std::forward<DeprovisionedAddressesT>(value)); return *this;}
    template<typename DeprovisionedAddressesT = Aws::String>
    DeprovisionPublicIpv4PoolCidrResponse& AddDeprovisionedAddresses(DeprovisionedAddressesT&& value) { m_deprovisionedAddressesHasBeenSet = true; m_deprovisionedAddresses.emplace_back(std::forward<DeprovisionedAddressesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeprovisionPublicIpv4PoolCidrResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_deprovisionedAddresses;
    bool m_deprovisionedAddressesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
