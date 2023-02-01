/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output for CreateLoadBalancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateAccessPointOutput">AWS
   * API Reference</a></p>
   */
  class CreateLoadBalancerResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API CreateLoadBalancerResult();
    AWS_ELASTICLOADBALANCING_API CreateLoadBalancerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API CreateLoadBalancerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSName = value; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSName = std::move(value); }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSName.assign(value); }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline CreateLoadBalancerResult& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline CreateLoadBalancerResult& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline CreateLoadBalancerResult& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateLoadBalancerResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateLoadBalancerResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dNSName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
