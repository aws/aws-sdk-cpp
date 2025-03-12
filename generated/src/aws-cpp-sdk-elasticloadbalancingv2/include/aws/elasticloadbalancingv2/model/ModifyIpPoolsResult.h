/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/IpamPools.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class ModifyIpPoolsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyIpPoolsResult();
    AWS_ELASTICLOADBALANCINGV2_API ModifyIpPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API ModifyIpPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The IPAM pool ID.</p>
     */
    inline const IpamPools& GetIpamPools() const{ return m_ipamPools; }
    inline void SetIpamPools(const IpamPools& value) { m_ipamPools = value; }
    inline void SetIpamPools(IpamPools&& value) { m_ipamPools = std::move(value); }
    inline ModifyIpPoolsResult& WithIpamPools(const IpamPools& value) { SetIpamPools(value); return *this;}
    inline ModifyIpPoolsResult& WithIpamPools(IpamPools&& value) { SetIpamPools(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyIpPoolsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyIpPoolsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    IpamPools m_ipamPools;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
