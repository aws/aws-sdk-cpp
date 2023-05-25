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
    AWS_EC2_API DeprovisionPublicIpv4PoolCidrResponse();
    AWS_EC2_API DeprovisionPublicIpv4PoolCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeprovisionPublicIpv4PoolCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolId = value; }

    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolId = std::move(value); }

    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline void SetPoolId(const char* value) { m_poolId.assign(value); }

    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pool that you deprovisioned the CIDR from.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeprovisionedAddresses() const{ return m_deprovisionedAddresses; }

    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline void SetDeprovisionedAddresses(const Aws::Vector<Aws::String>& value) { m_deprovisionedAddresses = value; }

    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline void SetDeprovisionedAddresses(Aws::Vector<Aws::String>&& value) { m_deprovisionedAddresses = std::move(value); }

    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& WithDeprovisionedAddresses(const Aws::Vector<Aws::String>& value) { SetDeprovisionedAddresses(value); return *this;}

    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& WithDeprovisionedAddresses(Aws::Vector<Aws::String>&& value) { SetDeprovisionedAddresses(std::move(value)); return *this;}

    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& AddDeprovisionedAddresses(const Aws::String& value) { m_deprovisionedAddresses.push_back(value); return *this; }

    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& AddDeprovisionedAddresses(Aws::String&& value) { m_deprovisionedAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The deprovisioned CIDRs.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrResponse& AddDeprovisionedAddresses(const char* value) { m_deprovisionedAddresses.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeprovisionPublicIpv4PoolCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeprovisionPublicIpv4PoolCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_poolId;

    Aws::Vector<Aws::String> m_deprovisionedAddresses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
